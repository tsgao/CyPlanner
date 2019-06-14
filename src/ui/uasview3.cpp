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
#include "ApmUiHelpers.h"

#include <QGCHilFlightGearConfiguration.h>


#include <cmath>
#include <QDateTime>

#include <QMenu>
#include <QDockWidget>
#include <QInputDialog>

#include <stdio.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>
#define PORT 8080

const float UASView3::updateHzLowpass = 0.2f;
const unsigned int UASView3::updateInterval = 1000U;

UASView3::UASView3(UASInterface* uas, QWidget *parent) :
    QWidget(parent),
    startTime(0),
    timeout(false),
    timeRemaining(0),
    uas(uas),
    isActive(false),
    lowPowerModeEnabled(true),
    filterTime(0),
    m_ui(new Ui::UASView3)
{
    // FIXME XXX
    lowPowerModeEnabled = MainWindow::instance()->lowPowerModeEnabled();

    m_uas = 0;
    m_ui->setupUi(this);
    m_ui->modeComboBox->setVisible(false);

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
    m_ui->statusLabel->setStyleSheet("QLabel { background-color : red; color : white; }");
    iconIsGreen = false;

    QVector<mavlink_message_info_t> mavlinkMsg = MAVLINK_MESSAGE_INFO;
    for(const auto &typeInfo : mavlinkMsg)
    {
        if(!messageInfo.contains(typeInfo.msgid))
        {
            messageInfo.insert(typeInfo.msgid, typeInfo);
        }
    }
    connect(LinkManager::instance(), SIGNAL(messageReceived(LinkInterface*,mavlink_message_t)),
            this, SLOT(receiveMessage(LinkInterface*,mavlink_message_t)));

    connect(uas,SIGNAL(armingChanged(bool)),this,SLOT(armingChanged(bool)));
    connect(uas,SIGNAL(navModeChanged(int,int,QString)),this,SLOT(navModeChanged(int,int,QString)));

    //connect(m_uas,SIGNAL(navModeChanged(int,int,QString)),this,SLOT(navModeChanged(int,int,QString)));

    void sendMode(int sysid, QString text);

    // Heartbeat fade
    refreshTimer = new QTimer(this);
    connect(refreshTimer, SIGNAL(timeout()), this, SLOT(refreshView()));
    if (lowPowerModeEnabled)
    {
        refreshTimer->start(updateInterval*3);
    }
    else
    {
        refreshTimer->start(updateInterval);
    }
//    m_ui->dockWidget = new QDockWidget("smthg",new PrimaryFlightDisplayQML(this));

    //a->setMinimumSize(200,200);
}

UASView3::~UASView3()
{
    delete m_ui;
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
        //        m_ui->GPSFixNum->setText(QString::number(valueMap["M252:GCS GPS.GPS Fix"],'f',2));
        //        m_ui->GPSHDOPNum->setText(QString::number(valueMap["M252:GCS GPS.GPS HDOP"],'f',2));
        //        m_ui->GPSSatsNum->setText(QString::number(valueMap["M252:GCS GPS.GPS Sats"],'f',2));
        //        m_ui->AHRELNum->setText(QString::number(valueMap["M252:GCS Metric.Alt REL"],'f',2));

        //        m_ui->C1->setText(QString::number(valueMap["M2:RC_CHANNELS.chan1_raw"],'f',2));
        //        m_ui->C2->setText(QString::number(valueMap["M2:RC_CHANNELS.chan2_raw"],'f',2));
        //        m_ui->C3->setText(QString::number(valueMap["M2:RC_CHANNELS.chan3_raw"],'f',2));
        //        m_ui->C4->setText(QString::number(valueMap["M2:RC_CHANNELS.chan4_raw"],'f',2));
        //        m_ui->C5->setText(QString::number(valueMap["M2:RC_CHANNELS.chan5_raw"],'f',2));
        //        m_ui->C6->setText(QString::number(valueMap["M2:RC_CHANNELS.chan6_raw"],'f',2));
        //        m_ui->C7->setText(QString::number(valueMap["M2:RC_CHANNELS.chan7_raw"],'f',2));
        //        m_ui->C8->setText(QString::number(valueMap["M2:RC_CHANNELS.chan8_raw"],'f',2));

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
    }
    else
    {
        if (!lowPowerModeEnabled)
        {
            refreshTimer->setInterval(updateInterval);
            refreshTimer->start();
        }
    }
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

//from FailSafeConfig.cc
void UASView3::armingChanged(bool armed)
{
    if (armed)
    {
        m_ui->armedLabel->setText("ARMED");
    }
    else
    {
        m_ui->armedLabel->setText("DISARMED");
    }
}

// from FailSafeConfig.cc
void UASView3::navModeChanged(int uasid, int mode, const QString& text)
{
    Q_UNUSED(uasid)
    Q_UNUSED(mode)
    modeText = text;
    m_ui->modeLabel->setText(text);
}

// get the data from MAVLink
// those codes are from MAVLinkInspector.cc
// Modified by: Xiangwei Niu
void UASView3::receiveMessage(LinkInterface* link,mavlink_message_t message)
{
    Q_UNUSED(link);

    quint64 receiveTime;

    // Create dynamically an array to store the messages for each UAS
    if (!uasMessageStorage.contains(message.sysid))
    {
        mavlink_message_t* msg = new mavlink_message_t;
        *msg = message;
        uasMessageStorage.insertMulti(message.sysid,msg);
    }

    //QMap<int, mavlink_message_t* > uasMessageStorage1 = uasMessageStorage;

    bool msgFound = false;
    QMap<int, mavlink_message_t* >::const_iterator iteMsg = uasMessageStorage.find(message.sysid);
    mavlink_message_t* uasMessage = iteMsg.value();
    while((iteMsg != uasMessageStorage.end()) && (iteMsg.key() == message.sysid))
    {
        if (iteMsg.value()->msgid == message.msgid)
        {
            msgFound = true;
            uasMessage = iteMsg.value();
            break;
        }
        ++iteMsg;
    }
    if (!msgFound)
    {
        mavlink_message_t* msgIdMessage = new mavlink_message_t;
        *msgIdMessage = message;
        uasMessageStorage.insertMulti(message.sysid,msgIdMessage);
    }
    else
    {
        *uasMessage = message;
    }

    // Looking if this message has already been received once
    msgFound = false;
    QMap<int, QMap<int, quint64>* >::const_iterator ite = uasLastMessageUpdate.find(message.sysid);
    QMap<int, quint64>* lastMsgUpdate = ite.value();
    while((ite != uasLastMessageUpdate.end()) && (ite.key() == message.sysid))
    {
        if(ite.value()->contains(message.msgid))
        {
            msgFound = true;

            // Point to the found message
            lastMsgUpdate = ite.value();
            break;
        }
        ++ite;
    }

    receiveTime = QGC::groundTimeMilliseconds();

    // If the message doesn't exist, create a map for the frequency, message count and time of reception
    if(!msgFound)
    {
        // Create a map for the message frequency
        QMap<int, float>* messageHz = new QMap<int,float>;
        messageHz->insert(message.msgid,0.0f);
        uasMessageHz.insertMulti(message.sysid,messageHz);

        // Create a map for the message count
        QMap<int, unsigned int>* messagesCount = new QMap<int, unsigned int>;
        messagesCount->insert(message.msgid,0);
        uasMessageCount.insertMulti(message.sysid,messagesCount);

        // Create a map for the time of reception of the message
        QMap<int, quint64>* lastMessage = new QMap<int, quint64>;
        lastMessage->insert(message.msgid,receiveTime);
        uasLastMessageUpdate.insertMulti(message.sysid,lastMessage);

        // Point to the created message
        lastMsgUpdate = lastMessage;
    }
    else
    {
        // The message has been found/created
        if ((lastMsgUpdate->contains(message.msgid))&&(uasMessageCount.contains(message.sysid)))
        {
            // Looking for and updating the message count
            unsigned int count = 0;
            QMap<int, QMap<int, unsigned int>* >::const_iterator iter = uasMessageCount.find(message.sysid);
            QMap<int, unsigned int> * uasMsgCount = iter.value();
            while((iter != uasMessageCount.end()) && (iter.key() == message.sysid))
            {
                if(iter.value()->contains(message.msgid))
                {
                    uasMsgCount = iter.value();
                    count = uasMsgCount->value(message.msgid,0);
                    uasMsgCount->insert(message.msgid,count+1);
                    break;
                }
                ++iter;
            }
        }
        lastMsgUpdate->insert(message.msgid,receiveTime);
    }

    switch (message.msgid)
    {
    case MAVLINK_MSG_ID_DATA_STREAM:
    {
        mavlink_data_stream_t stream;
        mavlink_msg_data_stream_decode(&message, &stream);
        onboardMessageInterval.insert(stream.stream_id, stream.message_rate);
    }
        break;
    }
}

void UASView3::refreshView()
{
    //    QMap<int, mavlink_message_t* > uasMessageStorage1 = uasMessageStorage;
    //    QMap<int, QMap<int, float>* > uasMessageHz1 = uasMessageHz;
    //    QMap<int, QMap<int, unsigned int>* > uasMessageCount1 = uasMessageCount;

    valueMap.clear();
    fieldMap.clear();
    sysidList.clear();

//    UAS* m_uas = static_cast<UAS*>(uas);
//    QString currentArmStatus = m_ui->armedLabel->text();
//    if (m_uas->armMode == 1 && currentArmStatus != "ARMED"){
//        m_uas->armSystem();
//    }

//    if (m_uas->armMode == 0 && currentArmStatus == "ARMED"){
//        m_uas->disarmSystem();
//    }

//    if (m_uas->ModeType <=3){
//        QString currentMode = m_ui->modeLabel->text();
//        int commandModeID = m_uas->ModeType;
//        QString commandMode;
//        if (commandModeID == 0) commandMode = "Auto";
//        if (commandModeID == 1) commandMode = "Stabilize";
//        if (commandModeID == 2) commandMode = "RTL";
//        if (commandModeID == 3) commandMode = "Loiter";

//        if (commandMode != currentMode){
//            setShortcutMode(m_uas, commandMode);
//        }
//    }

//    if (m_uas->isMultirotor()){
//        QString currentMode = m_ui->modeLabel->text();
//        int commandModeID = m_uas->ModeType;
//        QString commandMode;
//        if (commandModeID == 4) commandMode = "Pos Hold";
//        if (commandModeID == 5) commandMode = "Acro";
//        if (commandModeID == 6) commandMode = "Alt Hold";
//        if (commandModeID == 7) commandMode = "Land";

//        if (commandMode != currentMode){
//            setShortcutMode(m_uas, commandMode);
//        }
//    }

//    if (m_uas->isGroundRover()){
//        QString currentMode = m_ui->modeLabel->text();
//        int commandModeID = m_uas->ModeType;
//        QString commandMode;
//        if (commandModeID == 8) commandMode = "Learn";
//        if (commandModeID == 9) commandMode = "Steer";
//        if (commandModeID == 10) commandMode = "Hold";

//        if (commandMode != currentMode){
//            setShortcutMode(m_uas, commandMode);
//        }
//    }

    QMap<int, mavlink_message_t* >::const_iterator ite;

    for(ite=uasMessageStorage.constBegin(); ite!=uasMessageStorage.constEnd();++ite)
    {

        mavlink_message_t* msg = ite.value();
        // Ignore NULL values
        int a = msg->msgid;
        //int b = msg->sysid;

        if (msg->msgid == 0xFF) continue;


        int b = msg->sysid;
        if (!sysidList.contains(b)){
            sysidList.append(b);
        }
        // Update the message frenquency

        // Get the previous frequency for low-pass filtering
        //QMap<int, QMap<int, float>* > uasMessageHz1 = uasMessageHz;
        float msgHz = 0.0f;
        QMap<int, QMap<int, float>* >::const_iterator iteHz = uasMessageHz.find(msg->sysid);
        QMap<int, float>* uasMsgHz = iteHz.value();

        while((iteHz != uasMessageHz.end()) && (iteHz.key() == msg->sysid))
        {
            if(iteHz.value()->contains(msg->msgid))
            {
                uasMsgHz = iteHz.value();
                msgHz = iteHz.value()->value(msg->msgid);
                break;
            }
            ++iteHz;
        }

        // Get the number of message received
        float msgCount = 0;
        QMap<int, QMap<int, unsigned int> * >::const_iterator iter = uasMessageCount.find(msg->sysid);
        QMap<int, unsigned int>* uasMsgCount = iter.value();

        while((iter != uasMessageCount.end()) && (iter.key()==msg->sysid))
        {
            if(iter.value()->contains(msg->msgid))
            {
                msgCount = (float) iter.value()->value(msg->msgid);
                uasMsgCount = iter.value();
                break;
            }
            ++iter;
        }

        // Compute the new low-pass filtered frequency and update the message count
        msgHz = (1.0f-updateHzLowpass)* msgHz + updateHzLowpass*msgCount/((float)updateInterval/1000.0f);
        uasMsgHz->insert(msg->msgid,msgHz);
        uasMsgCount->insert(msg->msgid,(unsigned int) 0);

        // Update the tree view
        //QHash<quint32, mavlink_message_info_t> messageInfo1 = messageInfo;
        QString messageName("%1 (%2 Hz, #%3)");
        messageName = messageName.arg(messageInfo[msg->msgid].name).arg(msgHz, 3, 'f', 1).arg(msg->msgid);

        QMap<int,QMap<QString,double>> valueMapaa = valueMap;

        //added by: Xiangwei Niu
        // add messagename and its value (Hz) to valueMap
        QString messageName1 = messageInfo[msg->msgid].name;
        if (valueMap.contains(msg->sysid)){
            if (!valueMap[msg->sysid].contains(messageName1)){
                QMap<QString,double> valueMap1;
                valueMap1.insert(messageName1,msgHz);
                valueMap.insertMulti(msg->sysid,valueMap1);
            }
            else{
                QMap<QString,double> valueMap1 = valueMap[msg->sysid];
                valueMap1[messageName1] = msgHz;
                //valueMap.insert(msg->msgid,valueMap1);
            }
        }
        else{
            QMap<QString,double> valueMap1;
            valueMap1.insert(messageName1,msgHz);
            valueMap.insert(msg->sysid,valueMap1);
        }

        for (unsigned int i = 0; i < messageInfo[msg->msgid].num_fields; ++i)
        {
            updateField(msg->sysid,msg->msgid, i);
        }
    }
    //    QMap<int,QMap<QString,double>> valueMapbb = valueMap;
    //    QMap<int,QMap<QString,QString>> fieldMap1 = fieldMap;

    QMap<int,QMap<QString,QString>> infoMap;
    for (int sysid1 : sysidList){
        QMap<QString,QString> infoMap1;
        infoMap1.insert("Heartbeat",QString::number(valueMap[sysid1]["HEARTBEAT"],'f',2));
        m_ui->HeartbeatNum->setText(QString::number(valueMap[sysid1]["HEARTBEAT"],'f',2));

        QList<QMap<QString,QString>> temp = fieldMap.values(sysid1);
        for (QMap<QString,QString> tempMap : temp){
            if(!QString::compare(tempMap.firstKey(), "fix_type", Qt::CaseInsensitive))
            {
                infoMap1.insert("fix",tempMap["fix_type"]);
                //m_ui->GPSFixNum->setText(tempMap["fix_type"]);
            }
            else if (!QString::compare(tempMap.firstKey(), "eph", Qt::CaseInsensitive)){
                infoMap1.insert("hdop",QString::number(tempMap["eph"].QString::toDouble() / 100.0 ,'f',2));
            }
            else if (!QString::compare(tempMap.firstKey(), "satellites_visible", Qt::CaseInsensitive)){
                infoMap1.insert("sats",tempMap["satellites_visible"]);
            }
            else if (!QString::compare(tempMap.firstKey(), "relative_alt", Qt::CaseInsensitive)){
                infoMap1.insert("alt",QString::number(tempMap["relative_alt"].QString::toDouble() / 1000.0 ,'f',2));
                //m_ui->AHRELNum->setText(QString::number(tempMap["relative_alt"].QString::toDouble() / 1000.0 ,'f',2));
            }
            else if (!QString::compare(tempMap.firstKey(), "chan1_raw", Qt::CaseInsensitive)){
                infoMap1.insert("c1",tempMap["chan1_raw"]);
            }
            else if (!QString::compare(tempMap.firstKey(), "chan2_raw", Qt::CaseInsensitive)){
                infoMap1.insert("c2",tempMap["chan2_raw"]);
            }
            else if (!QString::compare(tempMap.firstKey(), "chan3_raw", Qt::CaseInsensitive)){
                infoMap1.insert("c3",tempMap["chan3_raw"]);
            }
            else if (!QString::compare(tempMap.firstKey(), "chan4_raw", Qt::CaseInsensitive)){
                infoMap1.insert("c4",tempMap["chan4_raw"]);
            }
            else if (!QString::compare(tempMap.firstKey(), "chan5_raw", Qt::CaseInsensitive)){
                infoMap1.insert("c5",tempMap["chan5_raw"]);
            }
            else if (!QString::compare(tempMap.firstKey(), "chan6_raw", Qt::CaseInsensitive)){
                infoMap1.insert("c6",tempMap["chan6_raw"]);
            }
            else if (!QString::compare(tempMap.firstKey(), "chan7_raw", Qt::CaseInsensitive)){
                infoMap1.insert("c7",tempMap["chan7_raw"]);
            }
            else if (!QString::compare(tempMap.firstKey(), "chan8_raw", Qt::CaseInsensitive)){
                infoMap1.insert("c8",tempMap["chan8_raw"]);
            }
        }
        if (infoMap.contains(sysid1)){
            infoMap.insertMulti(sysid1,infoMap1);
        }
        else {
            infoMap.insert(sysid1,infoMap1);
        }
    }

    //QMap<int,QMap<QString,QString>> infoMap2 = infoMap;

    //initialize labels:
    m_ui->GPSFixNum->setText("N/A");
    m_ui->GPSHDOPNum->setText("N/A");
    m_ui->GPSSatsNum->setText("N/A");
    m_ui->AHRELNum->setText("N/A");
    m_ui->RTKGPSNum->setText("N/A");

    m_ui->C1->setText("N/A");
    m_ui->C2->setText("N/A");
    m_ui->C3->setText("N/A");
    m_ui->C4->setText("N/A");
    m_ui->C5->setText("N/A");
    m_ui->C6->setText("N/A");
    m_ui->C7->setText("N/A");
    m_ui->C8->setText("N/A");

    int ida = uas->getUASID();
    QMap<QString,QString> tempMap = infoMap.value(ida);
    QMap<QString,QString>::iterator tempMap1;

    for (tempMap1=tempMap.begin(); tempMap1 != tempMap.end(); tempMap1++){
        //        QString aa1= tempMap1.key();
        //        QString aa2= tempMap1.value();
        //int gad = QString::compare(aa1, "Heartbeat", Qt::CaseInsensitive);

        if (!QString::compare(tempMap1.key(), "Heartbeat", Qt::CaseInsensitive)){
            m_ui->HeartbeatNum->setText(tempMap1.value());
            if (tempMap1.value().QString::toDouble() <= 0.1){
                m_ui->statusLabel->setText("Disconnected");
                m_ui->statusLabel->setStyleSheet("QLabel { background-color : red; color : white; }");
                //iconIsRed = true;
            }
            else{
                m_ui->statusLabel->setText("Connected");
                if (!iconIsGreen){
                    m_ui->statusLabel->setStyleSheet("QLabel { background-color : green; }");
                    iconIsGreen = true;
                }
                else{
                    m_ui->statusLabel->setStyleSheet("QLabel { background-color : yellow;}");
                    iconIsGreen = false;
                }
            }
        }
        else if(!QString::compare(tempMap1.key(),"fix", Qt::CaseInsensitive))
        {
            m_ui->GPSFixNum->setText(tempMap1.value());
        }
        else if (!QString::compare(tempMap1.key(), "hdop", Qt::CaseInsensitive)){
            m_ui->GPSHDOPNum->setText(tempMap1.value());
        }
        else if (!QString::compare(tempMap1.key(), "sats", Qt::CaseInsensitive)){
            m_ui->GPSSatsNum->setText(tempMap1.value());
        }
        else if (!QString::compare(tempMap1.key(), "alt", Qt::CaseInsensitive)){
            m_ui->AHRELNum->setText(tempMap1.value());
        }
        else if (!QString::compare(tempMap1.key(), "c1", Qt::CaseInsensitive)){
            m_ui->C1->setText(tempMap1.value());
        }
        else if (!QString::compare(tempMap1.key(), "c2", Qt::CaseInsensitive)){
            m_ui->C2->setText(tempMap1.value());
        }
        else if (!QString::compare(tempMap1.key(), "c3", Qt::CaseInsensitive)){
            m_ui->C3->setText(tempMap1.value());
        }
        else if (!QString::compare(tempMap1.key(), "c4", Qt::CaseInsensitive)){
            m_ui->C4->setText(tempMap1.value());
        }
        else if (!QString::compare(tempMap1.key(), "c5", Qt::CaseInsensitive)){
            m_ui->C5->setText(tempMap1.value());
        }
        else if (!QString::compare(tempMap1.key(), "c6", Qt::CaseInsensitive)){
            m_ui->C6->setText(tempMap1.value());
        }
        else if (!QString::compare(tempMap1.key(), "c7", Qt::CaseInsensitive)){
            m_ui->C7->setText(tempMap1.value());
        }
        else if (!QString::compare(tempMap1.key(), "c8", Qt::CaseInsensitive)){
            m_ui->C8->setText(tempMap1.value());
        }

    }

    //emit sendInfoMap(infoMap);
}

void UASView3::updateField(int sysid, int msgid, int fieldid)
{
    // Add field tree widget item
    const auto p_messageInfo = messageInfo.find(static_cast<quint32>(msgid));
    if(p_messageInfo == messageInfo.end())
    {
        QLOG_INFO() << "No Mavlink message info for message ID:" << msgid << "Cannot send message!";
        return;
    }

    //item->setData(0, Qt::DisplayRole, QVariant(p_messageInfo->fields[fieldid].name));

    QString fieldName = p_messageInfo->fields[fieldid].name;

    bool msgFound = false;
        QMap<int, mavlink_message_t* >::const_iterator iteMsg = uasMessageStorage.find(sysid);
    mavlink_message_t* uasMessage = iteMsg.value();
    while((iteMsg != uasMessageStorage.end()) && (iteMsg.key() == sysid))
    {
        if (iteMsg.value()->msgid == msgid)
        {
            msgFound = true;
            uasMessage = iteMsg.value();
            break;
        }
        ++iteMsg;
    }

    if (!msgFound)
    {
        return;
    }

    const char *p_payload = _MAV_PAYLOAD(uasMessage);

    switch (p_messageInfo->fields[fieldid].type)
    {
    case MAVLINK_TYPE_CHAR:
        if (p_messageInfo->fields[fieldid].array_length > 0)
        {
            char* str = (char*)(p_payload + p_messageInfo->fields[fieldid].wire_offset);
            // Enforce null termination
            str[p_messageInfo->fields[fieldid].array_length-1] = '\0';
            QString string(str);
            addToFieldMap(sysid, fieldName, string);
        }
        else
        {
            // Single char
            char b = *((char*)(p_payload + p_messageInfo->fields[fieldid].wire_offset));
            QString string1(b);
            addToFieldMap(sysid, fieldName, string1);
        }
        break;
    case MAVLINK_TYPE_UINT8_T:
        if (p_messageInfo->fields[fieldid].array_length > 0)
        {
            uint8_t* nums = (uint8_t*)(p_payload + p_messageInfo->fields[fieldid].wire_offset);
            // Enforce null termination
            QString tmp("%1, ");
            QString string;
            for (unsigned int j = 0; j < p_messageInfo->fields[fieldid].array_length; ++j)
            {
                string += tmp.arg(nums[j]);
            }
            addToFieldMap(sysid, fieldName, string);
        }
        else
        {
            // Single value
            uint8_t u = *(p_payload + p_messageInfo->fields[fieldid].wire_offset);
            addToFieldMap(sysid, fieldName, QString::number(u));
        }
        break;
    case MAVLINK_TYPE_INT8_T:
        if (p_messageInfo->fields[fieldid].array_length > 0)
        {
            int8_t* nums = (int8_t*)(p_payload + p_messageInfo->fields[fieldid].wire_offset);
            // Enforce null termination
            QString tmp("%1, ");
            QString string;
            for (unsigned int j = 0; j < p_messageInfo->fields[fieldid].array_length; ++j)
            {
                string += tmp.arg(nums[j]);
            }
            addToFieldMap(sysid, fieldName, string);

        }
        else
        {
            // Single value
            int8_t n = *((int8_t*)(p_payload + p_messageInfo->fields[fieldid].wire_offset));
            addToFieldMap(sysid, fieldName, QString::number(n));

        }
        break;
    case MAVLINK_TYPE_UINT16_T:
        if (p_messageInfo->fields[fieldid].array_length > 0)
        {
            uint16_t* nums = (uint16_t*)(p_payload + p_messageInfo->fields[fieldid].wire_offset);
            // Enforce null termination
            QString tmp("%1, ");
            QString string;
            for (unsigned int j = 0; j < p_messageInfo->fields[fieldid].array_length; ++j)
            {
                string += tmp.arg(nums[j]);
            }
            addToFieldMap(sysid, fieldName, string);
        }
        else
        {
            // Single value
            uint16_t n = *((uint16_t*)(p_payload + p_messageInfo->fields[fieldid].wire_offset));
            addToFieldMap(sysid, fieldName, QString::number(n));
        }
        break;
    case MAVLINK_TYPE_INT16_T:
        if (p_messageInfo->fields[fieldid].array_length > 0)
        {
            int16_t* nums = (int16_t*)(p_payload + p_messageInfo->fields[fieldid].wire_offset);
            // Enforce null termination
            QString tmp("%1, ");
            QString string;
            for (unsigned int j = 0; j < p_messageInfo->fields[fieldid].array_length; ++j)
            {
                string += tmp.arg(nums[j]);
            }
            addToFieldMap(sysid, fieldName, string);
        }
        else
        {
            // Single value
            int16_t n = *((int16_t*)(p_payload + p_messageInfo->fields[fieldid].wire_offset));
            addToFieldMap(sysid, fieldName, QString::number(n));
        }
        break;
    case MAVLINK_TYPE_UINT32_T:
        if (p_messageInfo->fields[fieldid].array_length > 0)
        {
            uint32_t* nums = (uint32_t*)(p_payload + p_messageInfo->fields[fieldid].wire_offset);
            // Enforce null termination
            QString tmp("%1, ");
            QString string;
            for (unsigned int j = 0; j < p_messageInfo->fields[fieldid].array_length; ++j)
            {
                string += tmp.arg(nums[j]);
            }
            addToFieldMap(sysid, fieldName, string);
        }
        else
        {
            // Single value
            float n = *((uint32_t*)(p_payload + p_messageInfo->fields[fieldid].wire_offset));
            addToFieldMap(sysid, fieldName, QString::number(n));
        }
        break;
    case MAVLINK_TYPE_INT32_T:
        if (p_messageInfo->fields[fieldid].array_length > 0)
        {
            int32_t* nums = (int32_t*)(p_payload + p_messageInfo->fields[fieldid].wire_offset);
            // Enforce null termination
            QString tmp("%1, ");
            QString string;
            for (unsigned int j = 0; j < p_messageInfo->fields[fieldid].array_length; ++j)
            {
                string += tmp.arg(nums[j]);
            }
            addToFieldMap(sysid, fieldName, string);

        }
        else
        {
            // Single value
            int32_t n = *((int32_t*)(p_payload + p_messageInfo->fields[fieldid].wire_offset));
            addToFieldMap(sysid, fieldName, QString::number(n));
        }
        break;
    case MAVLINK_TYPE_FLOAT:
        if (p_messageInfo->fields[fieldid].array_length > 0)
        {
            float* nums = (float*)(p_payload + p_messageInfo->fields[fieldid].wire_offset);
            // Enforce null termination
            QString tmp("%1, ");
            QString string;
            for (unsigned int j = 0; j < p_messageInfo->fields[fieldid].array_length; ++j)
            {
                string += tmp.arg(nums[j]);
            }
            addToFieldMap(sysid, fieldName, string);
        }
        else
        {
            // Single value
            float f = *((float*)(p_payload + p_messageInfo->fields[fieldid].wire_offset));
            addToFieldMap(sysid, fieldName, QString::number(f,'f',2));
        }
        break;
    case MAVLINK_TYPE_DOUBLE:
        if (p_messageInfo->fields[fieldid].array_length > 0)
        {
            double* nums = (double*)(p_payload + p_messageInfo->fields[fieldid].wire_offset);
            // Enforce null termination
            QString tmp("%1, ");
            QString string;
            for (unsigned int j = 0; j < p_messageInfo->fields[fieldid].array_length; ++j)
            {
                string += tmp.arg(nums[j]);
            }
            addToFieldMap(sysid, fieldName, string);
        }
        else
        {
            // Single value
            double f = *((double*)(p_payload + p_messageInfo->fields[fieldid].wire_offset));
            addToFieldMap(sysid, fieldName, QString::number(f,'f',4));
        }
        break;
    case MAVLINK_TYPE_UINT64_T:
        if (p_messageInfo->fields[fieldid].array_length > 0)
        {
            uint64_t* nums = (uint64_t*)(p_payload + p_messageInfo->fields[fieldid].wire_offset);
            // Enforce null termination
            QString tmp("%1, ");
            QString string;
            for (unsigned int j = 0; j < p_messageInfo->fields[fieldid].array_length; ++j)
            {
                string += tmp.arg(nums[j]);
            }
            addToFieldMap(sysid, fieldName, string);
        }
        else
        {
            // Single value
            uint64_t n = *((uint64_t*)(p_payload + p_messageInfo->fields[fieldid].wire_offset));
            addToFieldMap(sysid, fieldName, QString::number(n));
        }
        break;
    case MAVLINK_TYPE_INT64_T:
        if (p_messageInfo->fields[fieldid].array_length > 0)
        {
            int64_t* nums = (int64_t*)(p_payload + p_messageInfo->fields[fieldid].wire_offset);
            // Enforce null termination
            QString tmp("%1, ");
            QString string;
            for (unsigned int j = 0; j < p_messageInfo->fields[fieldid].array_length; ++j)
            {
                string += tmp.arg(nums[j]);
            }
            addToFieldMap(sysid, fieldName, string);
        }
        else
        {
            // Single value
            int64_t n = *((int64_t*)(p_payload + p_messageInfo->fields[fieldid].wire_offset));
            addToFieldMap(sysid, fieldName, QString::number(n));
        }
        break;
    }
}

void UASView3::addToFieldMap(int msgid, QString fieldName, QString value){
    if (fieldMap.contains(msgid)){
        if (!fieldMap[msgid].contains(fieldName)){
            QMap<QString,QString> fieldMap1;
            fieldMap1.insert(fieldName,value);
            fieldMap.insertMulti(msgid,fieldMap1);
        }
        else{
            QMap<QString,QString> fieldMap1 = fieldMap[msgid];
            fieldMap1[fieldName] = value;
            //valueMap.insertMulti(msg->msgid,valueMap1);
        }
    }
    else{
        QMap<QString,QString> fieldMap1;
        fieldMap1.insert(fieldName,value);
        fieldMap.insert(msgid,fieldMap1);
    }
}

void UASView3::setShortcutMode(UAS *m_uas,QString modeString)
{
    if (m_uas->isMultirotor()){
        ApmUiHelpers::addCopterModes(m_ui->modeComboBox);

    } else if (m_uas->isGroundRover()){
        ApmUiHelpers::addRoverModes(m_ui->modeComboBox);
    }

    QString aa =modeString;
    int index = m_ui->modeComboBox->findText(modeString);
    //QLOG_DEBUG() << "index: " << index;

    m_ui->modeComboBox->setCurrentIndex(index);
    m_uas->setMode(MAV_MODE_FLAG_CUSTOM_MODE_ENABLED,
                   m_ui->modeComboBox->itemData(m_ui->modeComboBox->currentIndex()).toInt());
}


void UASView3::on_cameraButton_clicked()
{
    sendCameraSocket();
}

int UASView3::sendCameraSocket(){
    int sock = 0, valread;
    struct sockaddr_in serv_addr;
    //char *hello = "potatoes";
    char buffer[1024] = {0};
    if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0)
    {
        printf("\n Socket creation error \n");
        return -1;
    }

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(PORT);

    // Convert IPv4 and IPv6 addresses from text to binary form
    if(inet_pton(AF_INET, "192.168.2.9", &serv_addr.sin_addr)<=0)
    {
    printf("\nInvalid address/ Address not supported \n");
    return -1;
    }

    if (::connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0)
    {
    printf("\nConnection Failed \n");
    return -1;
    }
    receiveImage(sock);

    ::close(sock);
    return 1;

}

int UASView3::receiveImage(int socket){
    // Start function

    int size =0,buffersize = 0, recv_size = 0,packet_index =1,stat,read_size=0,write_size=0; /*read_size, write_size*/
    char tempSize[1024] = {0};
    char imagearray[1024] ={0},verify = '1';
    FILE *image;

    //Find the size of the image
    do{
    stat = read(socket, &tempSize, 1024);
    }while(stat<0);

    printf("Packet received.\n");
    printf("Packet size: %i\n",stat);
    printf("Image size: %s\n",tempSize);
    //converts tempSize to int
    size = atoi(tempSize);

    char buffer[] = "Got it";

    //Send our verification signal
    do{
        stat = write(socket, &buffer, sizeof(int));
    }while(stat<0);

    printf("Reply sent\n");
    printf(" \n");

    image = fopen("capture2.jpg ", "w");

    if( image == NULL) {
    printf("Error has occurred. Image file could not be opened\n");
    return -1; }

    //Loop while we have not received the entire file yet


    int need_exit = 0;
    struct timeval timeout = {10,0};

    fd_set fds;
    int buffer_fd, buffer_out;

    while(recv_size < size) {
    //while(packet_index < 2){
        FD_ZERO(&fds);
        FD_SET(socket,&fds);

        buffer_fd = select(FD_SETSIZE,&fds,NULL,NULL,&timeout);

        if (buffer_fd < 0)
           printf("error: bad file descriptor set.\n");

        if (buffer_fd == 0)
           printf("error: buffer read timeout expired.\n");

        if (buffer_fd > 0)
        {
            do{
                   read_size = read(socket,imagearray, 1024);
                   printf("Loadingg...\n");

                }while(read_size <0);

            printf("Packet number received: %i\n",packet_index);
            printf("Packet size: %i\n",read_size);


            //Write the currently read data into our image file
            write_size = fwrite(imagearray,1,read_size, image);
            printf("Written image size: %i\n",write_size);

            if(read_size !=write_size) {
                printf("error in read write\n");    }
                //Increment the total number of bytes read
                recv_size +=read_size;
                packet_index++;
                printf("Total received image size: %i\n",recv_size);
                printf(" \n");
                printf(" \n");
            }
            //sleep(1);
    }
}
