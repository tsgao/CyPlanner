#include "ImageIcon.h"
#include "logging.h"
#include "opmapcontrol.h"
#include "QGC.h"
#include <QPainter>
#include <QLabel>

imageIcon::imageIcon(mapcontrol::MapGraphicItem* map, mapcontrol::OPMapWidget* parent, qreal latitude, qreal longitude, int radius)
    : mapcontrol::ImageItem(internals::PointLatLng(latitude,longitude), map,parent),
      parent(parent),
      radius(radius),
      color(Qt::red)
{
    this->setFlag(QGraphicsItem::ItemIgnoresTransformations,true);
    this->setFlag(QGraphicsItem::ItemIsSelectable,true);\
    setAcceptedMouseButtons(Qt::LeftButton);
    picture = QPixmap(100,100);
    x = latitude;
    y = longitude;
    drawIcon();
}

imageIcon::imageIcon(mapcontrol::MapGraphicItem* map, mapcontrol::OPMapWidget* parent, imageObj* obj, const QColor& color, int index, int radius )
    : mapcontrol::ImageItem (internals::PointLatLng(obj->getX(),obj->getY()),map,parent),
      parent(parent),
      radius(radius),
      color(color)
{
    this->setFlag(QGraphicsItem::ItemIgnoresTransformations,true);
    this->setFlag(QGraphicsItem::ItemIsSelectable,true);
    setAcceptedMouseButtons(Qt::LeftButton);
    picture = QPixmap(100,100);
    x = obj->getX();
    y = obj->getY();
    drawIcon();
}

imageIcon::~imageIcon(){}

QRectF imageIcon::boundingRect() const
{
    internals::PointLatLng coord = (internals::PointLatLng)getCoord();

//    int width = picture.width()/35;
//    int height = picture.height()/35;

       int width = 100;
       int height =100;
    return QRectF(-width,-height,2*width,2*height);
}

void imageIcon::drawIcon()
{
    picture.fill(Qt::transparent);
    QPainter painter(&picture);
    painter.setRenderHint(QPainter::Antialiasing,true);
    painter.setRenderHint(QPainter::HighQualityAntialiasing,true);

    QPen pen1(Qt::red);
    pen1.setWidth(2);
    QBrush brush(Qt::cyan,Qt::CrossPattern);
    painter.setPen(pen1);
    QRectF f(this->x,this->y,20,20);
    painter.drawRect(f);
    painter.fillRect(f,brush);

//    QPixmap p("/home/rmasl/Desktop/workspace/CyPlanner/libs/opmapcontrol/src/mapwidget/images");
//    painter.drawPixmap(this->x,this->y,p);
//    painter.setBrush(Qt::NoBrush);

//    int penWidth = pen1.width();

//    // DRAW WAYPOINT
//    QPointF p(picture.width()/2, picture.height()/2);

//    /** @brief Guang Yi Lim this is where you change the size of the diamond**/
//    QPolygonF poly(4);
//    // Top point
//    poly.replace(0, QPointF(p.x(), p.y()-picture.height()/3.0f+penWidth/3));
//    // Right point
//    poly.replace(1, QPointF(p.x()+picture.width()/3.0f-penWidth/3, p.y()));
//    // Bottom point
//    poly.replace(2, QPointF(p.x(), p.y() + picture.height()/3.0f-penWidth/3));
//    poly.replace(3, QPointF(p.x() - picture.width()/3.0f+penWidth/3, p.y()));

//    int waypointSize = qMin(picture.width(), picture.height());
//    float rad = (waypointSize/2.0f) * 0.1f * (1/sqrt(2.0f));

//    painter.setPen(pen1);
//    painter.drawPolygon(poly);
//    painter.setPen(pen2);
//    painter.drawPolygon(poly);

}

void imageIcon::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){
    Q_UNUSED(option);
    Q_UNUSED(widget);
    QPen pen = painter->pen();
    pen.setWidth(2);
    painter->drawPixmap(-picture.width()/2,-picture.height()/2,picture);
    if (this->isSelected())
    {
        pen.setColor(Qt::yellow);
        painter->drawRect(QRectF(-picture.width()/2,-picture.height()/2,picture.width()-1,picture.height()-1));
    }

    QPen penBlack(Qt::black);
    penBlack.setWidth(4);
    pen.setColor(color);
}

void imageIcon::mousePressEvent(QGraphicsSceneMouseEvent *event){
    QDialog* q = new QDialog(parent);

    QLabel* a = new QLabel(q);
    QPixmap image("/home/rmasl/Desktop/workspace/build-apm_planner-Desktop_Qt_5_12_3_GCC_64bit-Debug/debug/capture2.png");
    q->setFixedSize(image.width()+50,image.height()+50);
    a->setPixmap(image);
    //a->setText("WOW!!!");
    q->show();
//    coord = map->FromLocalToLatLng(this->pos().x(),this->pos().y());
//    QString coord_str = " " + QString::number(coord.Lat(), 'f', 6) + "   " + QString::number(coord.Lng(), 'f', 6);
//    QGraphicsItem::mouseMoveEvent(event);
}
