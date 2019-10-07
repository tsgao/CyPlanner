#ifndef UASGPSINJECT_H
#define UASGPSINJECT_H

#include <QObject>
#include <QList>
#include <QElapsedTimer>
#include <QDebug>
#include <QTcpSocket>
#include <QAbstractSocket>
#include <QMetaEnum>
#include <QNetworkProxy>

#include "QGCMAVLink.h"
#include "UAS.h"

class UASGPSInject : public QObject
{
    Q_OBJECT
public:
    UASGPSInject(QObject* parent = nullptr);
    void InjectGpsData();
    void InjectGpsData1(uint8_t data[], uint16_t length, bool rtcm);
    ~UASGPSInject() {};
private:
    UAS* uas;
    quint16 uasid;
    int inject_seq_no;

public slots:
    void connectToHost(QString host, quint16 port);
    void disconnect();
    void RTCMDataUpdate(QByteArray message);

private slots:
    void connected();
    void disconnected();
    void error(QAbstractSocket::SocketError socketError);
    void stateChanged(QAbstractSocket::SocketState socketState);
    void readyRead();

private:
    QTcpSocket socket;

    void sendMessageToVehicle(const mavlink_gps_rtcm_data_t& msg);

    QElapsedTimer _bandwidthTimer;
    int _bandwidthByteCounter = 0;
    uint8_t _sequenceId = 0;
};

#endif // UASGPSINJECT_H
