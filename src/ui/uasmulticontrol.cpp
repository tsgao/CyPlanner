#include "uasmulticontrol.h"
#include "ui_uasmulticontrol.h"
#include "UASManager.h"
#include "ArduPilotMegaMAV.h"
#include <QMessageBox>
#include "ApmUiHelpers.h"
#include <unistd.h>
#include "UAS.h"

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
            this, SLOT(multiSetStabilizeMode()));
    connect(m_ui->rtlModeButton, SIGNAL(clicked()),
            this, SLOT(multiSetRTLMode()));
    connect(m_ui->loiterModeButton, SIGNAL(clicked()),
            this, SLOT(multiSetLoiterMode()));

    // only for copter
    connect(m_ui->posHoldModeButton, SIGNAL(clicked()),
            this, SLOT(multiSetposHoldMode()));
    connect(m_ui->acroModeButton, SIGNAL(clicked()),
            this, SLOT(multiSetAcroMode()));
    connect(m_ui->altHoldModeButton, SIGNAL(clicked()),
            this, SLOT(multiSetAltHoldMode()));
    connect(m_ui->landModeButton, SIGNAL(clicked()),
            this, SLOT(multiSetLandMode()));

    // only for rover
    connect(m_ui->learnModeButton, SIGNAL(clicked()),
            this, SLOT(multiSetLearnMode()));
    connect(m_ui->steerModeButton, SIGNAL(clicked()),
            this, SLOT(multiSetSteerMode()));
    connect(m_ui->holdModeButton, SIGNAL(clicked()),
            this, SLOT(multiSetHoldMode()));

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
        m_uas->armMode = 1;
        m_uas->armSystem();
    }
}


void UASMultiControl::multiDisarm(){
    foreach (UASInterface* uas, UASManager::instance()->getUASList()) {
        UAS* m_uas = static_cast<UAS*>(uas);
        m_uas->armMode = 0;
        m_uas->disarmSystem();
    }
}

/*
 * modeType:
 * 0    Auto
 * 1    Stabilize
 * 2    RTL
 * 3    Loiter
 * 4    Pos Hold
 * 5    Acro
 * 6    Alt Hold
 * 7    Land
 * 8    Learn
 * 9    Steer
 * 10   Hold
 *
 */


void UASMultiControl::multiSetAutoMode(){
    foreach (UASInterface* uas, UASManager::instance()->getUASList()) {
        UAS* m_uas = static_cast<UAS*>(uas);
        m_uas->ModeType = 0;
        setShortcutMode(m_uas,"Auto");
    }
}

void UASMultiControl::multiSetStabilizeMode(){
    foreach (UASInterface* uas, UASManager::instance()->getUASList()) {
        UAS* m_uas = static_cast<UAS*>(uas);
        m_uas->ModeType = 1;
        setShortcutMode(m_uas,"Stabilize");
    }
}

void UASMultiControl::multiSetRTLMode(){
    foreach (UASInterface* uas, UASManager::instance()->getUASList()) {
        UAS* m_uas = static_cast<UAS*>(uas);
        m_uas->ModeType = 2;
        setShortcutMode(m_uas,"RTL");
    }
}

void UASMultiControl::multiSetLoiterMode(){
    foreach (UASInterface* uas, UASManager::instance()->getUASList()) {
        UAS* m_uas = static_cast<UAS*>(uas);
        m_uas->ModeType = 3;
        setShortcutMode(m_uas,"Loiter");
    }
}


//only for copter
void UASMultiControl::multiSetposHoldMode(){
    foreach (UASInterface* uas, UASManager::instance()->getUASList()) {
        UAS* m_uas = static_cast<UAS*>(uas);
        if (m_uas->isMultirotor()){
            m_uas->ModeType = 4;
            setShortcutMode(m_uas,"Pos Hold");
        }
    }
}

void UASMultiControl::multiSetAcroMode(){
    foreach (UASInterface* uas, UASManager::instance()->getUASList()) {
        UAS* m_uas = static_cast<UAS*>(uas);
        if (m_uas->isMultirotor()){
            m_uas->ModeType = 5;
            setShortcutMode(m_uas,"Acro");
        }
    }
}

void UASMultiControl::multiSetAltHoldMode(){
    foreach (UASInterface* uas, UASManager::instance()->getUASList()) {
        UAS* m_uas = static_cast<UAS*>(uas);
        if (m_uas->isMultirotor()){
            m_uas->ModeType = 6;
            setShortcutMode(m_uas,"Alt Hold");
        }
    }
}

void UASMultiControl::multiSetLandMode(){
    foreach (UASInterface* uas, UASManager::instance()->getUASList()) {
        UAS* m_uas = static_cast<UAS*>(uas);
        if (m_uas->isMultirotor()){
            m_uas->ModeType = 7;
            setShortcutMode(m_uas,"Land");
        }
    }
}

//only for rover
void UASMultiControl::multiSetLearnMode(){
    foreach (UASInterface* uas, UASManager::instance()->getUASList()) {
        UAS* m_uas = static_cast<UAS*>(uas);
        if (m_uas->isGroundRover()){
            m_uas->ModeType = 8;
            setShortcutMode(m_uas,"Learn");
        }
    }
}

void UASMultiControl::multiSetSteerMode(){
    foreach (UASInterface* uas, UASManager::instance()->getUASList()) {
        UAS* m_uas = static_cast<UAS*>(uas);
        if (m_uas->isGroundRover()){
            m_uas->ModeType = 9;
            setShortcutMode(m_uas,"Steer");
        }
    }
}

void UASMultiControl::multiSetHoldMode(){
    foreach (UASInterface* uas, UASManager::instance()->getUASList()) {
        UAS* m_uas = static_cast<UAS*>(uas);
        if (m_uas->isGroundRover()){
            m_uas->ModeType = 10;
            setShortcutMode(m_uas,"Hold");
        }
    }
}

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
