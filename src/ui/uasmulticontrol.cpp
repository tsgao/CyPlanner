#include "uasmulticontrol.h"
#include "ui_uasmulticontrol.h"
#include "UASManager.h"
#include "ArduPilotMegaMAV.h"

UASMultiControl::UASMultiControl(QWidget *parent) :
    QWidget(parent),
    m_ui(new Ui::UASMultiControl)
{
    m_ui->setupUi(this);

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
    foreach (UASInterface* uas, UASManager::instance()->getUASList()) {
        UAS* m_uas = static_cast<UAS*>(uas);
        m_uas->armSystem();
    }
}

void UASMultiControl::multiDisarm(){
    foreach (UASInterface* uas, UASManager::instance()->getUASList()) {
        UAS* m_uas = static_cast<UAS*>(uas);
        m_uas->disarmSystem();
    }
}
