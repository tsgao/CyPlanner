#ifndef IMAGEITEM_H
#define IMAGEITEM_H

#include "graphicsitem.h"
#include "graphicsusertypes.h"

namespace mapcontrol{
/**
 * @brief The imageItem class representing a minimized image
 */
class imageItem : public GraphicsItem
{
    Q_OBJECT
    Q_INTERFACES(QGraphicsItem)
public:
    enum { Type = usertypes::IMAGEITEM};

    imageItem(internals::PointLatLng const & img_coordd, MapGraphicItem* map, OPMapWidget* parent, QString const& description = "");

    virtual ~imageItem();

protected:
    //void mousePressEvent(QGraphicsSceneMouseEvent * event);

    QString description;
    QGraphicsRectItem* box;



};
}

#endif // IMAGEITEM_H
