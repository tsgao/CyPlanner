#include "uasview3.h"
#include "ui_uasview3.h"
#include "logging.h"
#include "QGC.h"
#include "UASManager.h"
#include "UASWaypointManager.h"
#include "MainWindow.h"
#include "MAVLinkDecoder.h"
#include "UASInterface.h"
#include "UAS.h"
#include <QTimer>
#include <QScrollBar>

#include <QGCHilFlightGearConfiguration.h>


#include <cmath>
#include <QDateTime>

#include <QMenu>
#include <QInputDialog>

UASView3::UASView3(UASInterface* uas, QWidget *parent) :
        QWidget(parent),
        startTime(0),
        timeout(false),
        iconIsRed(true),
        timeRemaining(0),
        chargeLevel(0),
        uas(uas),
        load(0),
        state("UNKNOWN"),
        stateDesc(tr("Unknown state")),
        mode("MAV_MODE_UNKNOWN"),
        thrust(0),
        isActive(false),
        x(0),
        y(0),
        z(0),
        totalSpeed(0),
        lat(0),
        lon(0),
        alt(0),
        groundDistance(0),
        localFrame(false),
        globalFrameKnown(false),
        removeAction(new QAction("Delete this system", this)),
        renameAction(new QAction("Rename..", this)),
        selectAction(new QAction("Control this system", this )),
        hilAction(new QAction("HIL - Hardware in the Loop", this )),
        selectAirframeAction(new QAction("Choose Airframe", this)),
        setBatterySpecsAction(new QAction("Set Battery Options", this)),
        lowPowerModeEnabled(true),
        generalUpdateCount(0),
        filterTime(0),
        m_ui(new Ui::UASView3)
{
    // FIXME XXX
    lowPowerModeEnabled = MainWindow::instance()->lowPowerModeEnabled();

    hilAction->setCheckable(true);
    m_uas = 0;
    m_ui->setupUi(this);

    // Name changes
    connect(uas, SIGNAL(nameChanged(QString)), this, SLOT(updateName(QString)));

    // Name
    if (uas->getUASName() == "")
    {
        m_ui->nameLabel->setText(tr("UAS") + QString::number(uas->getUASID()));
    }
    else
    {
        m_ui->nameLabel->setText(uas->getUASName());
    }

    setBackgroundColor();

    // Heartbeat fade
    refreshTimer = new QTimer(this);
    connect(refreshTimer, SIGNAL(timeout()), this, SLOT(refresh()));
    if (lowPowerModeEnabled)
    {
        refreshTimer->start(updateInterval*3);
    }
    else
    {
        refreshTimer->start(updateInterval);
    }

    connect(UASManager::instance(),SIGNAL(activeUASSet(UASInterface*)),this,SLOT(activeUASSet(UASInterface*)));
    activeUASSet(UASManager::instance()->getActiveUAS());

    // Set state and mode
//    updateMode(uas->getUASID(), uas->getShortMode(), "");
//    updateState(uas, uas->getShortState(), "");
//    setSystemType(uas, uas->getSystemType());

    //added by:Xiangwei Niu
//    m_tableRefreshTimer = new QTimer(this);
//    connect(m_tableRefreshTimer,SIGNAL(timeout()),this,SLOT(updateTableTimerTick()));

//    m_updateTimer = new QTimer(this);
//    connect(m_updateTimer,SIGNAL(timeout()),this,SLOT(updateTimerTick()));


//    for (QMap<QString,double>::const_iterator i=valueMap.constBegin();i!=valueMap.constEnd();i++)
//    {
//        QString ikey = i.key();
//        if (ikey.contains("GPS Fix")){
//            m_ui->GPSFixNum->setText(QString::number(i.value(),'f',4));
//        }
//        else if (ikey.contains("GPS Fix")){
//            m_ui->GPSFixNum->setText(QString::number(i.value(),'f',4));
//        }
//        else if (ikey.contains("GPS Fix")){
//            m_ui->GPSFixNum->setText(QString::number(i.value(),'f',4));
//        }
//        else if (ikey.contains("GPS Fix")){
//            m_ui->GPSFixNum->setText(QString::number(i.value(),'f',4));
//        }
//        else if (ikey.contains("GPS Fix")){
//            m_ui->GPSFixNum->setText(QString::number(i.value(),'f',4));
//        }
//        else if (ikey.contains("GPS Fix")){
//            m_ui->GPSFixNum->setText(QString::number(i.value(),'f',4));
//        }
//        else if (ikey.contains("GPS Fix")){
//            m_ui->GPSFixNum->setText(QString::number(i.value(),'f',4));
//        }
//        else if (ikey.contains("GPS Fix")){
//            m_ui->GPSFixNum->setText(QString::number(i.value(),'f',4));
//        }
//        else if (ikey.contains("GPS Fix")){
//            m_ui->GPSFixNum->setText(QString::number(i.value(),'f',4));
//        }
//        else if (ikey.contains("GPS Fix")){
//            m_ui->GPSFixNum->setText(QString::number(i.value(),'f',4));
//        }
//    }
}

void UASView3::activeUASSet(UASInterface* uas)
{
    if (!uas)
    {
        return;
    }
    if (m_uas)
    {
        disconnect(m_uas,SIGNAL(valueChanged(int,QString,QString,QVariant,quint64)),this,SLOT(valueChanged(int,QString,QString,QVariant,quint64)));
    }
    m_uas = uas;
    connect(m_uas,SIGNAL(valueChanged(int,QString,QString,QVariant,quint64)),this,SLOT(valueChanged(int,QString,QString,QVariant,quint64)));

}

void UASView3::valueChanged(const int uasId, const QString& name, const QString& unit, const QVariant value, const quint64 msec)
{
    if (value.type() == QVariant::Double)
    {
        valueChanged(uasId,name,unit,value.toDouble(),msec);
    }
    else
    {
        valueChanged(uasId,name,unit,static_cast<double>(value.toInt()),msec);
    }
}

void UASView3::valueChanged(const int uasId, const QString& name, const QString& unit, const double value, const quint64 msec)
{
    Q_UNUSED(uasId)
    Q_UNUSED(unit)
    Q_UNUSED(msec)
    valueMap[name] = value;
}

void UASView3::updateTableTimerTick()
{
    //m_ui->GPSFixNum->setText(QString::number(valueMap["M252:GCS GPS.GPS Fix"],'f',4));
    //m_ui->GPSHDOPNum->setText(QString::number(valueMap["M252:GCS GPS.GPS HDOP"],'f',4));


}

void UASView3::updateTimerTick()
{
    for (QMap<QString,double>::const_iterator i=valueMap.constBegin();i!=valueMap.constEnd();i++)
    {
        if (nameToUpdateWidgetMap.contains(i.key()))
        {
            nameToUpdateWidgetMap[i.key()] = (QString::number(i.value(),'f',4));
        }
        else
        {
            m_tableDirty = true;
        }
    }
    return;
}

UASView3::~UASView3()
{
    delete m_ui;
    delete removeAction;
    delete renameAction;
    delete selectAction;
}

void UASView3::heartbeatTimeout(bool timeout, unsigned int ms)
{
    Q_UNUSED(ms);
    this->timeout = timeout;
}

void UASView3::updateNavMode(int uasid, int mode, const QString& text)
{
    Q_UNUSED(uasid);
    Q_UNUSED(mode);
    //m_ui->navLabel->setText(text);
}

void UASView3::showStatusText(int uasid, int componentid, int severity, QString text)
{
    Q_UNUSED(uasid);
    Q_UNUSED(componentid);
    Q_UNUSED(severity);
    //m_ui->statusTextLabel->setText(text);
    stateDesc = text;
}

/**
 * Set the background color based on the MAV color. If the MAV is selected as the
 * currently actively controlled system, the frame color is highlighted
 */
void UASView3::setBackgroundColor()
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
    m_ui->uasViewFrame->setStyleSheet(colorstyle);
}

void UASView3::setUASasActive(bool active)
{
    if (active)
    {
        UASManager::instance()->setActiveUAS(this->uas);
    }
}

void UASView3::updateActiveUAS(UASInterface* uas, bool active)
{
    if (uas == this->uas)
    {
        this->isActive = active;
        setBackgroundColor();
    }
}

void UASView3::updateMode(int sysId, QString status, QString description)
{
    Q_UNUSED(description);

    //int aa=this->uas->getUASID();
    //if (sysId == this->uas->getUASID()) m_ui->modeLabel->setText(status);

    //m_ui->modeLabel->setText(status);
}

void UASView3::mouseDoubleClickEvent (QMouseEvent * event)
{
    Q_UNUSED(event);
    UASManager::instance()->setActiveUAS(uas);
     QLOG_TRACE() << __FILE__ << __LINE__ << "DOUBLECLICKED";
}

void UASView3::enterEvent(QEvent* event)
{
    if (event->type() == QEvent::MouseMove)
    {
        emit uasInFocus(uas);
        if (uas != UASManager::instance()->getActiveUAS())
        {
            grabMouse(QCursor(Qt::PointingHandCursor));
        }
    }

    if (event->type() == QEvent::MouseButtonDblClick)
    {
         QLOG_TRACE() << __FILE__ << __LINE__ << "UAS CLICKED!";
    }
}

void UASView3::leaveEvent(QEvent* event)
{
    if (event->type() == QEvent::MouseMove)
    {
        emit uasOutFocus(uas);
        releaseMouse();
    }
}

void UASView3::showEvent(QShowEvent* event)
{
    // React only to internal (pre-display)
    // events
    Q_UNUSED(event);
    refreshTimer->start(updateInterval*10);
}

void UASView3::hideEvent(QHideEvent* event)
{
    // React only to internal (pre-display)
    // events
    Q_UNUSED(event);
   // refreshTimer->stop();
}

void UASView3::receiveHeartbeat(UASInterface* uas)
{
    Q_UNUSED(uas);
    heartbeatColor = QColor(20, 200, 20);
    QString colorstyle("QGroupBox { border-radius: 5px; padding: 2px; margin: 0px; border: 0px; background-color: %1; }");
    //m_ui->heartbeatIcon->setStyleSheet(colorstyle.arg(heartbeatColor.name()));
    if (timeout) setBackgroundColor();
    timeout = false;
}

void UASView3::updateName(const QString& name)
{
    if (uas) m_ui->nameLabel->setText(name);
}

/**
 * The current system type is represented through the system icon.
 *
 * @param uas Source system, has to be the same as this->uas
 * @param systemType type ID, following the MAVLink system type conventions
 * @see http://pixhawk.ethz.ch/software/mavlink
 */
void UASView3::setSystemType(UASInterface* uas, unsigned int systemType)
{

}

void UASView3::updateLocalPosition(UASInterface* uas, double x, double y, double z, quint64 usec)
{
    Q_UNUSED(usec);
    Q_UNUSED(uas);
    this->x = x;
    this->y = y;
    this->z = z;
    localFrame = true;
}

void UASView3::updateGlobalPosition(UASInterface* uas, double lon, double lat, double alt, quint64 usec)
{
    Q_UNUSED(uas);
    Q_UNUSED(usec);
    this->lon = lon;
    this->lat = lat;
    this->alt = alt;
    globalFrameKnown = true;
}

void UASView3::updateSpeed(UASInterface*, double x, double y, double z, quint64 usec)
{
    Q_UNUSED(usec);
    totalSpeed = sqrt(x*x + y*y + z*z);
}

void UASView3::currentWaypointUpdated(quint16 waypoint)
{
    //m_ui->waypointLabel->setText(tr("WP") + QString::number(waypoint));
}

void UASView3::setWaypoint(int uasId, int id, double x, double y, double z, double yaw, bool autocontinue, bool current)
{
    Q_UNUSED(x);
    Q_UNUSED(y);
    Q_UNUSED(z);
    Q_UNUSED(yaw);
    Q_UNUSED(autocontinue);
    if (uasId == this->uas->getUASID())
    {
        if (current)
        {
            //m_ui->waypointLabel->setText(tr("WP") + QString::number(id));
        }
    }
}

void UASView3::selectWaypoint(int uasId, int id)
{
    if (uasId == this->uas->getUASID())
    {
        //m_ui->waypointLabel->setText(tr("WP") + QString::number(id));
    }
}

void UASView3::updateThrust(UASInterface* uas, double thrust)
{
    if (this->uas == uas)
    {
        this->thrust = thrust;
    }
}

void UASView3::updateBattery(UASInterface* uas, double voltage, double current, double percent, int seconds)
{
    Q_UNUSED(voltage);
    Q_UNUSED(current);
    if (this->uas == uas)
    {
        timeRemaining = seconds;
        chargeLevel = percent;
    }
}

void UASView3::updateState(UASInterface* uas, QString uasState, QString stateDescription)
{
    if (this->uas == uas)
    {
        state = uasState;
        stateDesc = stateDescription;
    }
}

void UASView3::updateLoad(UASInterface* uas, double load)
{
    if (this->uas == uas)
    {
        this->load = load;
    }
}

void UASView3::contextMenuEvent (QContextMenuEvent* event)
{
    QMenu menu(this);
    menu.addAction(selectAction);
    menu.addSeparator();
    menu.addAction(renameAction);
    if (timeout)
    {
        menu.addAction(removeAction);
    }
    menu.addAction(hilAction);
    menu.addAction(selectAirframeAction);
    menu.addAction(setBatterySpecsAction);
    menu.exec(event->globalPos());
}

void UASView3::setBatterySpecs()
{
    if (uas)
    {
        bool ok;
        QString newName = QInputDialog::getText(this, tr("Set Battery Specifications for %1").arg(uas->getUASName()),
                                                tr("Specs: (empty,warn,full), e.g. (9V,9.5V,12.6V) or just warn level in percent (e.g. 15%) to use estimate from MAV"), QLineEdit::Normal,
                                                uas->getBatterySpecs(), &ok);

        if (ok && !newName.isEmpty()) uas->setBatterySpecs(newName);
    }
}

void UASView3::rename()
{
    if (uas)
    {
        bool ok;
        QString newName = QInputDialog::getText(this, tr("Rename System %1").arg(uas->getUASName()),
                                                tr("System Name:"), QLineEdit::Normal,
                                                uas->getUASName(), &ok);

        if (ok && !newName.isEmpty()) uas->setUASName(newName);
    }
}

void UASView3::selectAirframe()
{
    if (uas)
    {
        // Get list of airframes from UAS
        QStringList airframes;
        airframes << "Generic"
                << "Multiplex Easystar"
                << "Multiplex Twinstar"
                << "Multiplex Merlin"
                << "Pixhawk Cheetah"
                << "Mikrokopter"
                << "Reaper"
                << "Predator"
                << "Coaxial"
                << "Pteryx"
                << "Tricopter"
                << "Asctec Firefly"
                << "X8 Flying Wing"
                << "Viper 2.0 Flying Wing"
                << "Cam Flyer Q Flying Wing";

        bool ok;
        QString item = QInputDialog::getItem(this, tr("Select Airframe for %1").arg(uas->getUASName()),
                                             tr("Airframe"), airframes, uas->getAirframe(), false, &ok);
        if (ok && !item.isEmpty())
        {
            // Set this airframe as UAS airframe
            uas->setAirframe(airframes.indexOf(item));
        }
    }
}

void UASView3::showHILUi()
{
     MainWindow::instance()->showHILConfigurationWidget(uas);
}

void UASView3::refresh()
{
    //setUpdatesEnabled(false);
    //setUpdatesEnabled(true);
    //repaint();
    QLOG_TRACE() << "UPDATING UAS WIDGET!" << uas->getUASName();


    if (generalUpdateCount == 4)
    {
#if (QGC_EVENTLOOP_DEBUG)
         QLOG_TRACE() << "EVENTLOOP:" << __FILE__ << __LINE__;
#endif
        generalUpdateCount = 0;
        QLOG_TRACE() << "UPDATING EVERYTHING";
        // State
        //m_ui->stateLabel->setText(state);
        //m_ui->statusTextLabel->setText(stateDesc);
        m_ui->GPSFixNum->setText(QString::number(valueMap["M252:GCS GPS.GPS Fix"],'f',2));
        m_ui->GPSHDOPNum->setText(QString::number(valueMap["M252:GCS GPS.GPS HDOP"],'f',2));
        m_ui->GPSSatsNum->setText(QString::number(valueMap["M252:GCS GPS.GPS Sats"],'f',2));
        m_ui->AHRELNum->setText(QString::number(valueMap["M252:GCS Metric.Alt REL"],'f',2));

        m_ui->C1->setText(QString::number(valueMap["M2:RC_CHANNELS.chan1_raw"],'f',2));
        m_ui->C2->setText(QString::number(valueMap["M2:RC_CHANNELS.chan2_raw"],'f',2));
        m_ui->C3->setText(QString::number(valueMap["M2:RC_CHANNELS.chan3_raw"],'f',2));
        m_ui->C4->setText(QString::number(valueMap["M2:RC_CHANNELS.chan4_raw"],'f',2));
        m_ui->C5->setText(QString::number(valueMap["M2:RC_CHANNELS.chan5_raw"],'f',2));
        m_ui->C6->setText(QString::number(valueMap["M2:RC_CHANNELS.chan6_raw"],'f',2));
        m_ui->C7->setText(QString::number(valueMap["M2:RC_CHANNELS.chan7_raw"],'f',2));
        m_ui->C8->setText(QString::number(valueMap["M2:RC_CHANNELS.chan8_raw"],'f',2));

    }
    generalUpdateCount++;

    QString colorstyle("QGroupBox { border-radius: 5px; padding: 2px; margin: 0px; border: 0px; background-color: %1; }");

    if (timeout)
    {
        // CRITICAL CONDITION, NO HEARTBEAT

        QString borderColor = "#FFFF00";
        if (isActive)
        {
            borderColor = "#FA4A4F";
        }

        if (iconIsRed)
        {
            QColor warnColor(Qt::red);
            //m_ui->heartbeatIcon->setStyleSheet(colorstyle.arg(warnColor.name()));
            QString style = QString("QGroupBox { border-radius: 12px; padding: 0px; margin: 0px; border: 2px solid %1; background-color: %2; }").arg(borderColor, warnColor.name());
            m_ui->uasViewFrame->setStyleSheet(style);
        }
        else
        {
            QColor warnColor(Qt::black);
            //m_ui->heartbeatIcon->setStyleSheet(colorstyle.arg(warnColor.name()));
            QString style = QString("QGroupBox { border-radius: 12px; padding: 0px; margin: 0px; border: 2px solid %1; background-color: %2; }").arg(borderColor, warnColor.name());
            m_ui->uasViewFrame->setStyleSheet(style);

            refreshTimer->setInterval(errorUpdateInterval);
            refreshTimer->start();
        }
        iconIsRed = !iconIsRed;
    }
    else
    {
        if (!lowPowerModeEnabled)
        {
            // Fade heartbeat icon
            // Make color darker
            heartbeatColor = heartbeatColor.darker(210);

            //m_ui->heartbeatIcon->setAutoFillBackground(true);
            //m_ui->heartbeatIcon->setStyleSheet(colorstyle.arg(heartbeatColor.name()));
            refreshTimer->setInterval(updateInterval);
            refreshTimer->start();
        }
    }
    //setUpdatesEnabled(true);

    //setUpdatesEnabled(false);
}

void UASView3::changeEvent(QEvent *e)
{
    QWidget::changeEvent(e);
    switch (e->type())
    {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
