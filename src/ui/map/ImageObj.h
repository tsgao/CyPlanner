#ifndef IMAGEOBJ_H
#define IMAGEOBJ_H

#include <QString>
#include <QObject>

class imageObj
{
public:
    imageObj(uint16_t id =0,double x = 0.0,double y = 0.0, QString path ="");
    ~imageObj();
    uint16_t getId()  const {
        return id;
    }
    double getX() const{
        return x;
    }
    double getY()const{
        return y;
    }
    QString getPath()const{
        return path;
    }

protected:
    uint16_t id;
    double x;
    double y;
    QString path;

public slots:
    void setId(uint16_t id);
    void setX(double x);
    void setY(double y);
    void setPath(QString path);
};

#endif // IMAGEOBJ_H
