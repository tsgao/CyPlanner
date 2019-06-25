#ifndef IMAGEITEM_H
#define IMAGEITEM_H

#include "graphicsitem.h"
#include "graphicsusertypes.h"
namespace mapcontrol{


class ImageItem : public GraphicsItem
{
    Q_OBJECT
    Q_INTERFACES(QGraphicsItem)
public:
    ImageItem(internals::PointLatLng const& img_coord,MapGraphicItem* map, OPMapWidget* parent);

    virtual ~ImageItem();

    internals::PointLatLng getCoord() const {return coord;}

    void setCoord(internals::PointLatLng const& value);

    virtual QRectF boundingRect() const;

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    void RefreshPos();

protected:
    QTransform transf;


};

}
#endif // IMAGEITEM_H
