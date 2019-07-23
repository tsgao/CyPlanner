#include "ImageIcon.h"
#include "logging.h"
#include "opmapcontrol.h"
#include "QGC.h"
#include <QPainter>
#include <QLabel>
#include <QPalette>
#include <QLayout>


imageIcon::imageIcon(mapcontrol::MapGraphicItem* map, mapcontrol::OPMapWidget* parent, qreal latitude, qreal longitude, int radius)
    : mapcontrol::ImageItem(internals::PointLatLng(latitude,longitude), map,parent),
      parent(parent),
      radius(radius),
      color(Qt::red)
{
    this->setFlag(QGraphicsItem::ItemIgnoresTransformations,true);
    this->setFlag(QGraphicsItem::ItemIsSelectable,true);\
    setAcceptedMouseButtons(Qt::LeftButton);
    picture = QPixmap(picture.width(),picture.height());
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
    //picture = QPixmap(picture.width(),picture.height());
    QPixmap p("/home/rmasl/Desktop/workspace/CyPlanner/libs/opmapcontrol/src/mapwidget/images/camera.png");

    picture = p.scaled(30,30);

    img = obj;
}

imageIcon::~imageIcon(){}

QRectF imageIcon::boundingRect() const
{
    internals::PointLatLng coord = (internals::PointLatLng)getCoord();


    int width = picture.width();
    int height = picture.height();
    return QRectF(-width,-height,2*width,2*height);
}


void imageIcon::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){
    Q_UNUSED(option);
    Q_UNUSED(widget);
    QPen pen = painter->pen();
    pen.setWidth(2);
    //draw image location
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
/**
 * @brief imageIcon::mousePressEvent opens a dialog showing the image which was taken at the location
 * TODO:: seems to work fine if doing manual testing, will try with Rover tomorrow
 * @param event
 */
void imageIcon::mousePressEvent(QGraphicsSceneMouseEvent *event){
    QDialog* q = new QDialog(parent);
    QLabel* a = new QLabel(q);
    QVBoxLayout* layout = new QVBoxLayout(q);
    QString path = "/home/rmasl/Desktop/workspace/build-apm_planner-Desktop_Qt_5_12_3_GCC_64bit-Debug/debug/";
    path += img->getPath();

    //TODO: SET THIS AS A PATH TO STORE IMG
    QPixmap image(path);
    q->setFixedSize(image.width()+50,image.height()+50);
    q->setStyleSheet("background-color:black");
    q->setWindowTitle(img->getPath());

    a->setPixmap(image);
    a->setAlignment(Qt::AlignCenter);
    layout->addWidget(a);
    q->setLayout(layout);
    q->show();
}
