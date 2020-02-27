#include "UASViconPosition.h"
#include <iostream>
#include <stdio.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>
#include <iomanip>      // std::setprecision
#include <math.h>
#include <chrono>
#include <thread>         // std::thread
#include <unistd.h>
#include <QUdpSocket>
#include <QTextCodec>

//#define PORT 27000
#define BUFSIZE     2048
using namespace std::chrono;

UASViconPosition::UASViconPosition(int port)
{
//    std::thread first (receivePos, port);
//    first.detach();
    udpSocket = new QUdpSocket(this);
    //udpSocket->bind(QHostAddress::LocalHost, 27000);
    udpSocket->bind(QHostAddress::Any, 27000);

    connect(udpSocket, &QUdpSocket::readyRead,this, &UASViconPosition::readyRead);

}

void UASViconPosition::readyRead()
{
    qInfo() << "Data from: " << sender() << " bytes: " << udpSocket->bytesAvailable();
    QHostAddress sender;
    u_int16_t port;
    while (udpSocket->hasPendingDatagrams())
    {
         QByteArray datagram;
         datagram.resize(udpSocket->pendingDatagramSize());
         udpSocket->readDatagram(datagram.data(),datagram.size(),&sender,&port);
         QString sender_str = sender.toString();
         QString buf = QTextCodec::codecForMib(106)->toUnicode(datagram);
//         qDebug() <<"Message From :: " << buf;
//         qDebug() <<"Port From :: "<< port;
//         qDebug() <<"Message :: " << buf;

         //convert it to lat and lon
         QString x_s = "";
         QString y_s = "";
         QString z_s = "";
         int id = 0;
         for (int i = 0; i < buf.size(); ++i){
             if (buf[i] == ','){
                 ++id;
             }
             else{
                 if (id == 0){
                     x_s += buf[i];
                 } else if(id == 1){
                     y_s += buf[i];
                 }
                 else{
                     z_s += buf[i];
                 }
             }
         }
         double x = x_s.toDouble();
         double y = y_s.toDouble();
         double z = z_s.toDouble();

         double latitude = 42.025756;
         double longitude = -93.651521;
         double r_earth = 6378137.0*1000;

         double new_latitude  = latitude  - (y / r_earth) * (180 / M_PI);
         double new_longitude = longitude - (x / r_earth) * (180 / M_PI) / cos(latitude * M_PI/180);


         mavlink_gps_input_t h;
         memset(&h, 0, sizeof(mavlink_gps_input_t));
         h.hdop = 0.1; h.vdop = 0.1;
         h.satellites_visible = 10;
         h.vn = 0.0; h.ve = 0.0; h.vd = 0.0;
         h.fix_type = 3; h.gps_id = 1; h.speed_accuracy = 0.01; h.vert_accuracy = 0.01; h.horiz_accuracy = 0.01;
         h.ignore_flags = 1;
         h.lat = (int32_t) (new_latitude * 1E7); h.lon = (int32_t) (new_longitude * 1E7); h.alt = 0.0;

         std::cout << std::setprecision(15);
         std::cout << "x: " << x << ", y: " << y << ", z: "<<z << std::endl;
         std::cout << "lat: " << h.lat << ", lon: " << h.lon << std::endl;

         send(h);
    }
}

void UASViconPosition::receivePos(int port){
    struct sockaddr_in myaddr;      /* our address */
    struct sockaddr_in remaddr;     /* remote address */
    socklen_t addrlen = sizeof(remaddr);            /* length of addresses */
    int recvlen;                    /* # bytes received */
    int fd;                         /* our socket */
    unsigned char buf[BUFSIZE];     /* receive buffer */

    /* create a UDP socket */

    if ((fd = socket(AF_INET, SOCK_DGRAM, 0)) < 0) {
        perror("cannot create socket\n");
        return;
    }

    /* bind the socket to any valid IP address and a specific port */

    memset((char *)&myaddr, 0, sizeof(myaddr));
    myaddr.sin_family = AF_INET;
    myaddr.sin_addr.s_addr = htonl(INADDR_ANY);
    myaddr.sin_port = htons(port);

    if (bind(fd, (struct sockaddr *)&myaddr, sizeof(myaddr)) < 0) {
        perror("bind failed");
        return;
    }


    /* now loop, receiving data and printing what we received */
    for (;;) {
        //printf("waiting on port %d\n", port);
        recvlen = recvfrom(fd, buf, BUFSIZE, 0, (struct sockaddr *)&remaddr, &addrlen);
        //printf("received %d bytes\n", recvlen);
        if (recvlen > 0) {
            buf[recvlen] = 0;
            //printf("received message: \"%s\"\n", buf);
            std::string x_s = "";
            std::string y_s = "";
            std::string z_s = "";
            int id = 0;
            for (int i = 0; i < recvlen; ++i){
                if (buf[i] == ','){
                    ++id;
                }
                else{
                    if (id == 0){
                        x_s += buf[i];
                    } else if(id == 1){
                        y_s += buf[i];
                    }
                    else{
                        z_s += buf[i];
                    }
                }
            }
            double x = std::stod(x_s);
            double y = std::stod(y_s);
            double z = std::stod(z_s);

            double latitude = 42.025756;
            double longitude = -93.651521;
            double r_earth = 6378137.0;

            double new_latitude  = latitude  + (y / r_earth) * (180 / M_PI);
            double new_longitude = longitude + (x / r_earth) * (180 / M_PI) / cos(latitude * M_PI/180);

//            mavlink_hil_gps_t h;
//            memset(&h, 0, sizeof(mavlink_hil_gps_t));

//            h.vd = 0; h.ve = 0; h.vn = 0;
//            h.alt = 0; h.lat = (int32_t) (new_latitude * 1E7); h.lon = (int32_t) (new_longitude * 1E7);
//            h.cog = 65535; h.eph = 65535; h.epv = 65535;
//            h.fix_type = 0; h.satellites_visible = 255;
//            milliseconds ms = duration_cast< milliseconds >(
//                system_clock::now().time_since_epoch()
//            );
//            h.time_usec = ms.count();

            mavlink_gps_input_t h;
            memset(&h, 0, sizeof(mavlink_gps_input_t));
            h.hdop = 0.1; h.vdop = 0.1;
            h.satellites_visible = 10;
            h.vn = 0.0; h.ve = 0.0; h.vd = 0.0;
            h.fix_type = 2; h.gps_id = 1; h.speed_accuracy = 0.01; h.vert_accuracy = 0.01; h.horiz_accuracy = 0.01;
            h.ignore_flags = 1;
            h.lat = (int32_t) (new_latitude * 1E7); h.lon = (int32_t) (new_longitude * 1E7); h.alt = 0.0;

            milliseconds ms = duration_cast< milliseconds >(
                system_clock::now().time_since_epoch()
            );
            h.time_usec = ms.count();
            h.time_week = 2094;
            h.time_week_ms = 162628;
//            std::cout << std::setprecision(15);
//            //std::cout << "x: " << x << ", y: " << y << ", z: "<<z << std::endl;
//            std::cout << "lat: " << h.lat << ", lon: " << h.lon << std::endl;

            send(h);
            usleep(1000000);
        }
    }

}

void UASViconPosition::send(const mavlink_gps_input_t& h){

    QList<UASInterface*> uasList = UASManager::instance()->getUASList();
    for (UASInterface * uas1 : uasList) {
        UAS *c = static_cast<UAS*>(uas1);
        std::cout << "send msg: " << h.lat << std::endl;
        mavlink_message_t message;

        mavlink_msg_gps_input_encode(c->getSystemIdPublic(),
                                         c->getComponentIdPublic(),
                                         &message,
                                         &h);
        c->sendMessage(message);
        std::cout << "send sucessfully, msgid: " << message.msgid<< std::endl;
    }
}
