#include "ImageManager.h"
#include <QApplication>


ImageManager* ImageManager::instance(){
    static ImageManager* _instance  =0;
    if(_instance ==0 ){
        _instance = new ImageManager();

        _instance->setParent(qApp);
    }
    return _instance;
}
imageObj* ImageManager::createImageObject(imageObj* i){
    emit newImageAdded(i);
}

