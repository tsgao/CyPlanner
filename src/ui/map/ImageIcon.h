#ifndef IMAGEICON_H
#define IMAGEICON_H

#include "ImageObj.h"
#include "opmapcontrol.h"
#include <QString>
#include <QGraphicsItem>
#include <QGraphicsSceneMouseEvent>

class imageIcon : public mapcontrol::ImageItem
{
public:
    imageIcon(mapcontrol::MapGraphicItem* map, mapcontrol::OPMapWidget* parent, qreal latitude, qreal longtiude, int radius  = 30);

    imageIcon(mapcontrol::MapGraphicItem* map, mapcontrol::OPMapWidget *parent, imageObj *img, const QColor& color, int index, int radius =31);

    virtual ~imageIcon();

    QRectF boundingRect() const;

    void paint(QPainter * painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

    void mousePressEvent(QGraphicsSceneMouseEvent *even);
protected:
    mapcontrol::OPMapWidget* parent;
    imageObj *img;
    int radius;
    QColor color;
    QString path;
};

#endif // IMAGEICON_H
