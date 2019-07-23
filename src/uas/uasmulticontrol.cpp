#include "uasmulticontrol.h"
#include "ui_uasmulticontrol.h"
#include "UASManager.h"
#include "ArduPilotMegaMAV.h"
#include <QMessageBox>
#include "ApmUiHelpers.h"
#include <unistd.h>

UASMultiControl::UASMultiControl(QWidget *parent) :
    QWidget(parent),
    m_ui(new Ui::UASMultiControl)
{
    m_ui->setupUi(this);

    m_ui->modeComboBox->setVisible(false);
    // Setup user interaction
    connect(m_ui->liftoffButton, SIGNAL(clicked()), this, SLOT(multiLaunch()));
    connect(m_ui->haltButton, SIGNAL(clicked()), this, SLOT(multiHalt()));
    connect(m_ui->continueButton, SIGNAL(clicked()), this, SLOT(multiGo()));
    connect(m_ui->landButton, SIGNAL(clicked()), this, SLOT(multiLand()));
    connect(m_ui->abortButton, SIGNAL(clicked()), this, SLOT(multiEmergencySTOP()));
    connect(m_ui->killButton, SIGNAL(clicked()), this, SLOT(multiEmergencyKILL()));
    connect(m_ui->shutdownButton, SIGNAL(clicked()), this, SLOT(multiShutdown()));
    connect(m_ui->armButton, SIGNAL(clicked()), this, SLOT(multiArm()));
    connect(m_ui->disarmButton, SIGNAL(clicked()), this, SLOT(multiDisarm()));

    connect(m_ui->autoModeButton, SIGNAL(clicked()),
            this, SLOT(multiSetAutoMode()));
    connect(m_ui->stabilizeModeButton, SIGNAL(clicked()),
            this, SLOT(setShortcutMode()));
    connect(m_ui->rtlModeButton, SIGNAL(clicked()),
            this, SLOT(setRTLMode()));
    connect(m_ui->loiterModeButton, SIGNAL(clicked()),
            this, SLOT(setShortcutMode()));

    //    connect(m_ui->opt1ModeButton, SIGNAL(clicked()),
    //            this, SLOT(setShortcutMode()));
    //    connect(m_ui->opt2ModeButton, SIGNAL(clicked()),
    //            this, SLOT(setShortcutMode()));
    //    connect(m_ui->opt3ModeButton, SIGNAL(clicked()),
    //            this, SLOT(setShortcutMode()));
    //    connect(m_ui->opt4ModeButton, SIGNAL(clicked()),
    //            this, SLOT(setShortcutMode()));
}

UASMultiControl::~UASMultiControl()
{
    delete m_ui;
}

void UASMultiControl::multiLaunch(){
    foreach (UASInterface* uas, UASManager::instance()->getUASList()) {
        uas->launch();
    }
}
void UASMultiControl::multiHalt(){
    foreach (UASInterface* uas, UASManager::instance()->getUASList()) {
        uas->halt();
    }
}
void UASMultiControl::multiGo(){
    foreach (UASInterface* uas, UASManager::instance()->getUASList()) {
        uas->go();
    }
}
void UASMultiControl::multiLand(){
    foreach (UASInterface* uas, UASManager::instance()->getUASList()) {
        uas->land();
    }
}
void UASMultiControl::multiEmergencySTOP(){
    foreach (UASInterface* uas, UASManager::instance()->getUASList()) {
        uas->emergencySTOP();
    }
}
void UASMultiControl::multiEmergencyKILL(){
    foreach (UASInterface* uas, UASManager::instance()->getUASList()) {
        uas->emergencyKILL();
    }
}
void UASMultiControl::multiShutdown(){
    foreach (UASInterface* uas, UASManager::instance()->getUASList()) {
        uas->shutdown();
    }
}

void UASMultiControl::multiArm(){
    disarmQueue.clear();
    foreach (UASInterface* uas, UASManager::instance()->getUASList()) {
        UAS* m_uas = static_cast<UAS*>(uas);
        isArmed = false;
        connect(m_uas,SIGNAL(armingChanged(bool)),this,SLOT(armingChanged(bool)));
        m_uas->armSystem();
        usleep(5000000); //5 sec,  1000000 = 1 sec
        if (!isArmed){
            disarmQueue.enqueue(m_uas);
            QString armMessage = QString("# %1 arm failed").arg(m_uas->getUASID());
            m_ui->armMessageLabel->setText(armMessage);
        }
        else {
            QString armMessage = QString("# %1 armed").arg(m_uas->getUASID());
            m_ui->armMessageLabel->setText(armMessage);
        }
    }

    while (!disarmQueue.isEmpty()) {
        UAS* m_uas = static_cast<UAS*>(disarmQueue.head());
        isArmed = false;
        connect(m_uas,SIGNAL(armingChanged(bool)),this,SLOT(armingChanged(bool)));
        m_uas->armSystem();
        usleep(5000000); //5 sec,  1000000 = 1 sec
        if (isArmed){
            disarmQueue.dequeue();
            QString armMessage = QString("# %1 armed").arg(m_uas->getUASID());
            m_ui->armMessageLabel->setText(armMessage);
        }
        else{
            QString armMessage = QString("# %1 arm failed").arg(m_uas->getUASID());
            m_ui->armMessageLabel->setText(armMessage);
        }
    }
}

void UASMultiControl::armingChanged(bool armed)
{
    isArmed = armed;
//    if (armed)
//    {
//        m_ui->armedLabel->setText("ARMED");
//    }
//    else
//    {
//        m_ui->armedLabel->setText("DISARMED");
//    }
}

void UASMultiControl::multiDisarm(){
    foreach (UASInterface* uas, UASManager::instance()->getUASList()) {
        UAS* m_uas = static_cast<UAS*>(uas);
        m_uas->disarmSystem();
    }
}

void UASMultiControl::multiSetAutoMode(){
    foreach (UASInterface* uas, UASManager::instance()->getUASList()) {
        UAS* m_uas = static_cast<UAS*>(uas);
        setShortcutMode(m_uas,"Auto");
    }
}

void UASMultiControl::multiSetStabilizeMode(){
    foreach (UASInterface* uas, UASManager::instance()->getUASList()) {
        UAS* m_uas = static_cast<UAS*>(uas);
        setShortcutMode(m_uas,"Stabilize");
    }
}
void UASMultiControl::multiSetLoiterMode(){
    foreach (UASInterface* uas, UASManager::instance()->getUASList()) {
        UAS* m_uas = static_cast<UAS*>(uas);
        setShortcutMode(m_uas,"Loiter");
    }
}

//void UASMultiControl::multiSetAutoMode(){
//    foreach (UASInterface* uas, UASManager::instance()->getUASList()) {
//        UAS* m_uas = static_cast<UAS*>(uas);
//        setShortcutMode(m_uas,"Auto");
//    }
//}

void UASMultiControl::setShortcutMode(UAS *m_uas,QString modeString)
{
    //QLOG_INFO() << "    UASActionsWidget::setShortcutMode()";

    //    QLOG_INFO() << "Set Mode to "
    //                << ui.shortcutButtonGroup->checkedButton()->text();

    if (m_uas->isMultirotor()){
        ApmUiHelpers::addCopterModes(m_ui->modeComboBox);

    } else if (m_uas->isGroundRover()){
        ApmUiHelpers::addRoverModes(m_ui->modeComboBox);
    }

    QString aa =modeString;
    int index = m_ui->modeComboBox->findText(modeString);
    //QLOG_DEBUG() << "index: " << index;

    if (modeChangeWarningBox(modeString) == QMessageBox::Abort){
        return;
    }

    m_ui->modeComboBox->setCurrentIndex(index);
    m_uas->setMode(MAV_MODE_FLAG_CUSTOM_MODE_ENABLED,
                   m_ui->modeComboBox->itemData(m_ui->modeComboBox->currentIndex()).toInt());
}

int UASMultiControl::modeChangeWarningBox(const QString& modeString)
{
    //QLOG_INFO() << "UASActionsWidget:Display Mode Change Warning Box?";

    QStringList warnList;
    warnList << "Auto";

    if (!warnList.contains(modeString)){
        return QMessageBox::Ok; // Only warn for modes in the list
    }

    return QMessageBox::critical(this,tr("Warning"),tr("Please confirm you want to enter\n %1 mode").arg(modeString),
                                 QMessageBox::Ok,QMessageBox::Abort);
}
