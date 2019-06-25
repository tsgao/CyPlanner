#include "imageitem.h"
#include <QGraphicsSceneContextMenuEvent>
#include <QPainter>
#include "mapgraphicitem.h"
#include "../internals/pointlatlng.h"

namespace mapcontrol{
    ImageItem::ImageItem(internals::PointLatLng const& img_coord,MapGraphicItem *map, OPMapWidget* parent)
        : GraphicsItem (map, parent)
    {
        coord = img_coord;
        picture.load(QString::fromUtf8(":/markers/images/marker.png"));
        setFlag(QGraphicsItem::ItemIsMovable,false);
        setFlag(QGraphicsItem::ItemIgnoresTransformations,true);
        setFlag(QGraphicsItem::ItemIsSelectable,true);
        RefreshPos();
        setAcceptedMouseButtons(Qt::LeftButton);
    }

    ImageItem::~ImageItem(){
        //delete this;
    }

    QRectF ImageItem::boundingRect() const
    {
        return QRectF(-picture.width()/2,-picture.height(),picture.width(),picture.height());
    }

    void ImageItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
    {
        Q_UNUSED(option);
        Q_UNUSED(widget);
        painter->drawPixmap(-picture.width()/2,-picture.height(),picture);
        if(this->isSelected()){
            painter->drawRect(QRectF(-picture.width()/2,-picture.height(),picture.width()-1,picture.height()-1));
        }
    }

    void ImageItem::setCoord(const internals::PointLatLng &value){
        coord = value;
        RefreshPos();
        this->update();
    }

    void ImageItem::RefreshPos(){
        core::Point point = map->FromLatLngToLocal(coord);
        this->setPos(point.X(),point.Y());
    }

}
