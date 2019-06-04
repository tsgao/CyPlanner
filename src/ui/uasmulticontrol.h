#ifndef UASMULTICONTROL_H
#define UASMULTICONTROL_H

#include <QWidget>
#include "UASInterface.h"

namespace Ui {
class UASMultiControl;
}

class UASMultiControl : public QWidget
{
    Q_OBJECT

public:
    explicit UASMultiControl( QWidget *parent = nullptr);
    ~UASMultiControl();

public slots:
    void multiGo();
    void multiLaunch();
    void multiHalt();
    void multiLand();
    void multiEmergencySTOP();
    void multiEmergencyKILL();
    void multiShutdown();
    void multiArm();
    void multiDisarm();

private:
    Ui::UASMultiControl *m_ui;
};

#endif // UASMULTICONTROL_H
