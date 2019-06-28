#include "ImageObj.h"

imageObj::imageObj(uint16_t id, double x, double y, QString path)
    : id(id),
      x(x),
      y(y),
      path(path)
{

}

imageObj::~imageObj(){
    delete this;
}

void imageObj::setId(uint16_t id){
    this->id = id;
}

void imageObj::setX(double x){
    this->x = x;
}

void imageObj::setY(double y){
    this->y = y;
}

void imageObj::setPath(QString path){
    this->path = path;
}
