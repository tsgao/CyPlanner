#ifndef UASGPSINJECT_H
#define UASGPSINJECT_H

#include <QObject>
#include <QList>
#include <QTimer>
#include "QGCMAVLink.h"
#include "UAS.h"

class UASGPSInject
{
public:
    UASGPSInject(UAS* _uas);
    void InjectGpsData();
    void InjectGpsData1(uint8_t data[], uint16_t length, bool rtcm);

private:
    UAS* uas;
    quint16 uasid;
    int inject_seq_no;
};

#endif // UASGPSINJECT_H
