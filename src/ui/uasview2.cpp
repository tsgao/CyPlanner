/*
 * Author: Xiangwei Niu
 * Show information for each system in the Label
 *
 * */

#include "uasview2.h"
#include "ui_uasview2.h"

#include "logging.h"
#include "QGC.h"
#include "UASManager.h"
#include "UASWaypointManager.h"
#include "MainWindow.h"

#include <QGCHilFlightGearConfiguration.h>

#include <cmath>
#include <QDateTime>

#include <QMenu>
#include <QInputDialog>

#include <QtWidgets/QWidget>
#include <QString>
#include <QTimer>
#include <QMouseEvent>
#include <UASInterface.h>

//UASView2::UASView2(QWidget *parent) :
UASView2::UASView2(UASInterface* uas, QWidget *parent) :
    QWidget(parent),
    uas(uas),
    isActive(false),
    ui(new Ui::UASView2)
{
    lowPowerModeEnabled = MainWindow::instance()->lowPowerModeEnabled();
    //hilAction->setCheckable(true);
    ui->setupUi(this);
    connect(ui->uasViewFrame, SIGNAL(clicked(bool)), this, SLOT(setUASasActive(bool)));

    if (uas->getUASName() == "")
    {
        ui->nameLabel->setText(tr("UAS") + QString::number(uas->getUASID()));
    }
    else
    {
        ui->nameLabel->setText(uas->getUASName());
    }

    setBackgroundColor();
    //updateMode(uas->getUASID(), uas->getShortMode(), "");
    updateState(uas, uas->getShortState(), "");
    //setSystemType(uas, uas->getSystemType());
}

UASView2::~UASView2()
{
    delete ui;
}

void UASView2::setUASasActive(bool active)
{
    if (active)
    {
        UASManager::instance()->setActiveUAS(this->uas);
    }
}

void UASView2::setBackgroundColor()
{
    // UAS color
    QColor uasColor = uas->getColor();
    QString colorstyle;
    QString borderColor = "#4A4A4F";
    if (isActive)
    {
        borderColor = "#FA4A4F";
        uasColor = uasColor.darker(475);
    }
    else
    {
        uasColor = uasColor.darker(675);
    }
    colorstyle = colorstyle.sprintf("QGroupBox { border-radius: 12px; padding: 0px; margin: 0px; background-color: #%02X%02X%02X; border: 2px solid %s; }",
                                    uasColor.red(), uasColor.green(), uasColor.blue(), borderColor.toStdString().c_str());
    ui->uasViewFrame->setStyleSheet(colorstyle);
}

void UASView2::updateMode(int sysId, QString status, QString description)
{
    Q_UNUSED(description);

    //int aa=this->uas->getUASID();
    if (sysId == this->uas->getUASID()) ui->nameLabel->setText(status);

    ui->nameLabel->setText(status);
}

void UASView2::updateState(UASInterface* uas, QString uasState, QString stateDescription)
{
    if (this->uas == uas)
    {
        state = uasState;
        stateDesc = stateDescription;
    }
}
