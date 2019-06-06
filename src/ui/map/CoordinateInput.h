#ifndef COORDINATEINPUT_H
#define COORDINATEINPUT_H

#include <QDialog>
#include "UASManager.h"
/***
 * @author Guang Yi Lim
 * Class for coordinate input
 * takes in longitude, latitude and altitude and add them to a table
 * TODO: Take content of table and add them as table for vechicle
 ***/
namespace Ui {
class CoordinateInput;
}

class CoordinateInput : public QDialog
{
    Q_OBJECT

public:
    explicit CoordinateInput(const UASInterface*u,QWidget *parent = nullptr);
    ~CoordinateInput();
    void setUAS(int m);
    int n = 0;
    const UASInterface * uas = nullptr;

private slots:
    void on_pushButton_clicked();



    void on_AddButton_clicked();

    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::CoordinateInput *ui;
    enum Columns{
        LONGITUDE,LATITUDE,ALTITUDE
    };
};

#endif // COORDINATEINPUT_H
