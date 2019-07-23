/*
 * Author: Xiangwei Niu
 * Show information for each system in the Label
 *
 * */

#ifndef UASVIEW2_H
#define UASVIEW2_H

#include <QtWidgets/QWidget>
#include <QString>
#include <QTimer>
#include <QMouseEvent>
#include <UASInterface.h>

namespace Ui {
class UASView2;
}

class UASView2 : public QWidget
{
    Q_OBJECT

public:
    UASView2(UASInterface* uas, QWidget *parent = 0);
    //explicit UASView2(QWidget *parent = nullptr);
    ~UASView2();

public slots:
    void setUASasActive(bool);
    void setBackgroundColor();
    void updateMode(int sysId, QString status, QString description);
    void updateState(UASInterface*, QString uasState, QString stateDescription);
    //void setSystemType(UASInterface* uas, unsigned int systemType);

protected:
    UASInterface* uas;
    bool lowPowerModeEnabled;
    bool isActive;
    QString state;
    QString stateDesc;

private:
    Ui::UASView2 *ui;
};

#endif // UASVIEW2_H
