#include "UASGPSInject.h"
#include "UASManager.h"
#include "MainWindow.h"
#include <algorithm>

//#include "mavlink_msg_gps_rtcm_data.h"

UASGPSInject::UASGPSInject(QObject *parent) : QObject(parent)
{
    uasid = 0;
    inject_seq_no = 0;
    _bandwidthTimer.start();
    connect(&socket,&QTcpSocket::connected,this,&UASGPSInject::connected);
    connect(&socket,&QTcpSocket::disconnected,this,&UASGPSInject::disconnected);

    connect(&socket,&QTcpSocket::stateChanged,this,&UASGPSInject::stateChanged);
    connect(&socket,&QTcpSocket::readyRead,this,&UASGPSInject::readyRead);
    connect(&socket,QOverload<QAbstractSocket::SocketError>::of(&QAbstractSocket::error),this,&UASGPSInject::error); //Explain
}

void UASGPSInject::connectToHost(QString host, quint16 port)
{
    if(socket.isOpen()) disconnect();
    qInfo() << "Connecting to: " << host << " on port " << port;

    socket.connectToHost(host,port);
}

void UASGPSInject::disconnect()
{
    socket.close();
}

void UASGPSInject::connected()
{
    qInfo() << "Connected!";

    qInfo() << "Sending";
    socket.write("HELLO\r\n");


}

void UASGPSInject::disconnected()
{
    qInfo() << "Disconnected";
}

void UASGPSInject::error(QAbstractSocket::SocketError socketError)
{
    qInfo() << "Error:" << socketError << " " << socket.errorString();
}

void UASGPSInject::stateChanged(QAbstractSocket::SocketState socketState)
{
    QMetaEnum metaEnum = QMetaEnum::fromType<QAbstractSocket::SocketState>();
    qInfo() << "State: " << metaEnum.valueToKey(socketState);
}

void UASGPSInject::readyRead()
{
    qInfo() << "Data from: " << sender() << " bytes: " << socket.bytesAvailable() ;
    QByteArray message = socket.readAll();
    qInfo() << "Data: " << message;
    RTCMDataUpdate(message);
}

void UASGPSInject::InjectGpsData()
{
            //current_partner_systemid = uasid;
    //"GPS_INJECT_DATA", 123

}

void UASGPSInject::RTCMDataUpdate(QByteArray message)
{
    /* statistics */
    _bandwidthByteCounter += message.size();
    qint64 elapsed = _bandwidthTimer.elapsed();
    if (elapsed > 1000) {
        printf("RTCM bandwidth: %.2f kB/s\n", (float) _bandwidthByteCounter / elapsed * 1000.f / 1024.f);
        _bandwidthTimer.restart();
        _bandwidthByteCounter = 0;
    }

    const int maxMessageLength = MAVLINK_MSG_GPS_RTCM_DATA_FIELD_DATA_LEN;
    mavlink_gps_rtcm_data_t mavlinkRtcmData;
    memset(&mavlinkRtcmData, 0, sizeof(mavlink_gps_rtcm_data_t));

    if (message.size() < maxMessageLength) {
        mavlinkRtcmData.len = message.size();
        mavlinkRtcmData.flags = (_sequenceId & 0x1F) << 3;
        memcpy(&mavlinkRtcmData.data, message.data(), message.size());
        sendMessageToVehicle(mavlinkRtcmData);
    } else {
        // We need to fragment

        uint8_t fragmentId = 0;         // Fragment id indicates the fragment within a set
        int start = 0;
        while (start < message.size()) {
            int length = std::min(message.size() - start, maxMessageLength);
            mavlinkRtcmData.flags = 1;                      // LSB set indicates message is fragmented
            mavlinkRtcmData.flags |= fragmentId++ << 1;     // Next 2 bits are fragment id
            mavlinkRtcmData.flags |= (_sequenceId & 0x1F) << 3;     // Next 5 bits are sequence id
            mavlinkRtcmData.len = length;
            memcpy(&mavlinkRtcmData.data, message.data() + start, length);
            sendMessageToVehicle(mavlinkRtcmData);
            start += length;
        }
    }
    ++_sequenceId;
}

void UASGPSInject::sendMessageToVehicle(const mavlink_gps_rtcm_data_t& msg)
{
    //if (!uas) return;
    QList<UASInterface*> uasList = UASManager::instance()->getUASList();
    for (UASInterface * uas1 : uasList) {
        UAS *c = static_cast<UAS*>(uas1);
        mavlink_message_t message;
        mavlink_msg_gps_rtcm_data_encode(c->getSystemIdPublic(),
                                         c->getComponentIdPublic(),
                                         &message,
                                         &msg);

        c->sendMessage(message);
    }
}


void UASGPSInject::InjectGpsData1(uint8_t data[], uint16_t length, bool rtcm)
{
    if (!uas) return;
    mavlink_message_t message;
    //mavlink_mission_count_t wpc;

    if (rtcm){
        mavlink_gps_rtcm_data_t gps_inject_data;
        uint8_t msglen = 180;
        if (length > msglen * 4)
        {
            //error
            return;
        }

        // number of packets we need, including a termination packet if needed
        int nopackets = (length % msglen) == 0 ? length / msglen + 1 : (length / msglen) + 1;

        if (nopackets >= 4)
            nopackets = 4;

        // flags = isfrag(1)/frag(2)/seq(5)

        for (int a = 0; a < nopackets; a++)
        {
            // check if its a fragment
            if (nopackets > 1)
                gps_inject_data.flags = 1;
            else
                gps_inject_data.flags = 0;

            // add fragment number
            gps_inject_data.flags += (uint8_t)((a & 0x3) << 1);

            // add seq number
            gps_inject_data.flags += (uint8_t)((inject_seq_no & 0x1f) << 3);

            // create the empty buffer

            // calc how much data we are copying
            uint8_t copy = (length - a * msglen < msglen) ? (length - a * msglen) : msglen;

            // copy the data
            uint8_t dataF[copy];
            for (int i = a * msglen; i < a * msglen + copy; i++){
                dataF[i - a * msglen] = data[i];
            }
            memcpy(gps_inject_data.data, data, copy);

            // set the length
            gps_inject_data.len = copy;

            mavlink_msg_gps_rtcm_data_encode(uas->getSystemIdPublic(), uas->getComponentIdPublic(), &message, &gps_inject_data);
            //generatePacket((byte) MAVLINK_MSG_ID.GPS_RTCM_DATA, gps, sysid, compid);
        }

        inject_seq_no++;
    }
    else{
        mavlink_gps_inject_data_t gps_inject_data;
        int msglen = 110;

        int len = (length%msglen) == 0 ? length/msglen : (length/msglen) + 1;

        for (int a = 0; a < len; a++)
        {
            uint8_t copy = (length - a * msglen < msglen) ? (length - a * msglen) : msglen;

            uint8_t dataF[copy];
            for (int i = a * msglen; i < a * msglen + copy; i++){
                dataF[i - a * msglen] = data[i];
            }
            memcpy(gps_inject_data.data, data, copy);

            gps_inject_data.len = copy;
            gps_inject_data.target_system = uasid;
            gps_inject_data.target_component = MAV_COMP_ID_IMU;

            mavlink_msg_gps_inject_data_encode(uas->getSystemIdPublic(), uas->getComponentIdPublic(), &message, &gps_inject_data);
            //generatePacket((byte) MAVLINK_MSG_ID.GPS_INJECT_DATA, gps, sysid, compid);
        }
    }
        //mavlink_msg_mission_count_encode(uas->getSystemId(), uas->getComponentId(), &message, &wpc);
    uas->sendMessage(message);
}
