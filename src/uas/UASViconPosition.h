#ifndef UASVICONPOSITION_H
#define UASVICONPOSITION_H

#include "QGCMAVLink.h"
#include "UASGPSInject.h"
#include "UASManager.h"
#include "UAS.h"
#include <QObject>

class UASViconPosition : public QObject
{
    Q_OBJECT
public:
    UASViconPosition(int port);
    virtual ~UASViconPosition() = default;

private:
    QUdpSocket* udpSocket;
public slots:
    void readyRead();
    static void receivePos(int port);
    static void send(const mavlink_gps_input_t& h);


};

#endif // UASVICONPOSITION_H
