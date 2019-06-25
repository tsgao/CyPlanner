#ifndef IMAGEMANAGER_H
#define IMAGEMANAGER_H

#include "ImageObj.h"
#include <QObject>

class ImageManager : public QObject
{
    Q_OBJECT
public:
    static ImageManager* instance();
    imageObj* createImageObject(imageObj* i);
//    int getCurrentId(){return curr_id;}
//    QList<imageObj *> getImageList(){return imgList;}

private:
    int curr_id;
    QList<imageObj *> imgList;

signals:
    void newImageAdded(imageObj*);
};

#endif // IMAGEMANAGER_H
