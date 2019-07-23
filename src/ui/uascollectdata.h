#ifndef UASCOLLECTDATA_H
#define UASCOLLECTDATA_H

#include <QWidget>
#include <QMap>
#include "UASInterface.h"

//extern QMap<QString,double> valueMap;
extern QMap<int,QMap<QString,double>> valueMap;

class UASCollectData
{
public:
    UASCollectData();
};

#endif // UASCOLLECTDATA_H
