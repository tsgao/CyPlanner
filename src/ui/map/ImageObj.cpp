#include "ImageObj.h"

imageObj::imageObj(uint16_t id, double x, double y, QString path, QString desc)
    : id(id),
      x(x),
      y(y),
      path(path),
      description(desc)
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
void imageObj::setDescription(QString desc){
    this->description = desc;
}
