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

};

}
#endif // IMAGEITEM_H
