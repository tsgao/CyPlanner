#include "ImageIcon.h"
#include "logging.h"
#include "opmapcontrol.h"
#include "QGC.h"
#include <QPainter>

imageIcon::imageIcon(mapcontrol::MapGraphicItem* map, mapcontrol::OPMapWidget* parent, qreal latitude, qreal longitude, int radius)
    : mapcontrol::ImageItem(internals::PointLatLng(latitude,longitude), map,parent),
      parent(parent),
      radius(radius),
      color(Qt::red)
{
    this->setFlag(QGraphicsItem::ItemIgnoresTransformations,true);
    picture = QPixmap(radius+1,radius+1);
    drawIcon();
}

imageIcon::imageIcon(mapcontrol::MapGraphicItem* map, mapcontrol::OPMapWidget* parent, imageObj* obj, const QColor& color, int index, int radius )
    : mapcontrol::ImageItem (internals::PointLatLng(obj->getX(),obj->getY()),map,parent),
      parent(parent),
      radius(radius),
      color(color)
{
    this->setFlag(QGraphicsItem::ItemIgnoresTransformations,true);
    picture = QPixmap(radius+1,radius+1);
    drawIcon();
}

imageIcon::~imageIcon(){}

QRectF imageIcon::boundingRect() const
{
    internals::PointLatLng coord = (internals::PointLatLng)getCoord();

    int width = picture.width()/35;
    int height = picture.height()/35;

    return QRectF(-width,-height,2*width,2*height);
}

void imageIcon::drawIcon()
{
    picture.fill(Qt::transparent);
    QPainter painter(&picture);
    painter.setRenderHint(QPainter::Antialiasing,true);
    painter.setRenderHint(QPainter::HighQualityAntialiasing,true);

    painter.drawImage(QRect(100,50,100,100),QImage("/home/rmasl/Desktop/workspace/CyPlanner/libs/opmapcontrol/src/mapwidget/images"));


}
