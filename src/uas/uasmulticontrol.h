#ifndef UASMULTICONTROL_H
#define UASMULTICONTROL_H

#include <QWidget>
#include "UASInterface.h"
#include <QQueue>

namespace Ui {
class UASMultiControl;
}

class UASMultiControl : public QWidget
{
    Q_OBJECT

public:
    explicit UASMultiControl( QWidget *parent = nullptr);
    ~UASMultiControl();

protected:
    int modeChangeWarningBox(const QString& modeString);
    void setShortcutMode(UAS *m_uas, QString modeString);
    void multiSetStabilizeMode();
    void multiSetLoiterMode();
    bool isArmed;
    QQueue<UASInterface*> disarmQueue;

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
    void multiSetAutoMode();
    void armingChanged(bool armed);

private:
    Ui::UASMultiControl *m_ui;
};

#endif // UASMULTICONTROL_H
