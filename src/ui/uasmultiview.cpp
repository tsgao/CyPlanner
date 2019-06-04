/*
 * Author: Xiangwei Niu
 * Show multiple Systems in Multi Flight Panel
 *
 * */
#include <QString>
#include <QTimer>
#include <QLabel>
#include <QFileDialog>

#include <QApplication>

#include "uasmultiview.h"
#include "ui_uasmultiview.h"
#include "MG.h"
#include "UASManager.h"
#include "UAS.h"
#include "UASView.h"
#include "uasview2.h"
#include "UASView3.h"
#include "uasmulticontrol.h"
#include "QGCUnconnectedInfoWidget.h"
#include "MainWindow.h"
#include "MAVLinkSimulationLink.h"
#include "LinkManager.h"

const float UASMultiView::updateHzLowpass = 0.2f;
const unsigned int UASMultiView::updateInterval = 1000U;
//float heartbeatHz;

UASMultiView* UASMultiView::instance()
{
    static UASMultiView _instance;
    return &_instance;
}

UASMultiView::UASMultiView(QWidget *parent) :
    QWidget(parent),
    uWidget(NULL),
    ui(new Ui::UASMultiView)
{
    ui->setupUi(this);
    m_uas = 0;
    // Setup container for scrollbar
    mainLayout = new QHBoxLayout(this);
    mainLayout->setMargin(0);
    scrollArea = new QScrollArea(this);
    scrollArea->setWidgetResizable(true);
    scrollAreaWidgetContents = new QWidget(scrollArea);

    listLayout = new QVBoxLayout(scrollAreaWidgetContents);
    listLayout->setMargin(0);
    listLayout->setSpacing(3);
    listLayout->setAlignment(Qt::AlignTop);

    scrollAreaWidgetContents->setLayout(listLayout);
    scrollArea->setWidget(scrollAreaWidgetContents);

    mainLayout->addWidget(scrollArea);
    this->setLayout(mainLayout);
    setObjectName("MULTI_SYSTEM_LIST");

    listLayout->addWidget(new UASMultiControl(this));

//    uasViews2.insert(uas, new UASView3(uas, this));
//    listLayout->addWidget(uasViews2.value(uas));

    QVector<mavlink_message_info_t> mavlinkMsg = MAVLINK_MESSAGE_INFO;
    for(const auto &typeInfo : mavlinkMsg)
    {
        if(!messageInfo.contains(typeInfo.msgid))
        {
            messageInfo.insert(typeInfo.msgid, typeInfo);
        }
    }

    //UASCollectData2* aaa= new UASCollectData2(this);

    // Construct initial widget
    //uWidget = new QGCUnconnectedInfoWidget(this);
    //listLayout->addWidget(uWidget);

    this->setMinimumWidth(262 + QApplication::style()->pixelMetric(QStyle::PM_ScrollBarExtent));

    //uasViews = QMap<UASInterface*, UASView*>();
    uasViews2 = QMap<UASInterface*, UASView3*>();

    this->setVisible(false);

    QMap<int,QMap<QString,double>> bb = valueMap;

    //    foreach (UASInterface* uas, UASManager::instance()->getUASList()) {
    //        //activeUASSet(UASManager::instance()->getActiveUAS());
    //        activeUASSet(uas);
    //        QMap<int,QMap<QString,double>> aa = valueMap;
    //        int a = 0;
    //    }
    //activeUASSet(uas);

//    connect(LinkManager::instance(), SIGNAL(messageReceived(LinkInterface*,mavlink_message_t)), this, SLOT(receiveMessage(LinkInterface*,mavlink_message_t)));
//    connect(&updateTimer, SIGNAL(timeout()), this, SLOT(refreshView()));
//    updateTimer.start(updateInterval);

    connect(UASManager::instance(),SIGNAL(UASCreated(UASInterface*)),this,SLOT(addUAS(UASInterface*)));
    connect(UASManager::instance(),SIGNAL(UASDeleted(UASInterface*)),this,SLOT(removeUAS(UASInterface*)));


    // Get a list of all existing UAS
    foreach (UASInterface* uas, UASManager::instance()->getUASList()) {
        addUAS(uas);
    }

}


UASMultiView::~UASMultiView()
{
    delete ui;
}

void UASMultiView::receiveMessage(LinkInterface* link,mavlink_message_t message)
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

void UASMultiView::refreshView()
{
    //    QMap<int, mavlink_message_t* > uasMessageStorage1 = uasMessageStorage;
    //    QMap<int, QMap<int, float>* > uasMessageHz1 = uasMessageHz;
    //    QMap<int, QMap<int, unsigned int>* > uasMessageCount1 = uasMessageCount;

    valueMap.clear();
    fieldMap.clear();
    sysidList.clear();

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
        //        if (msg->msgid == 0){
        //            heartbeatHz = msgHz;
        //        }

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

        //addUAStoTree(msg->sysid);

        // Look for the tree for the UAS sysid
        /*
        QMap<int, QMap<int, QTreeWidgetItem*>* > uasMsgTreeItems1 = uasMsgTreeItems;
        QHash<quint32, mavlink_message_info_t> messageInfo1 = messageInfo;

        QMap<int, QTreeWidgetItem*>* msgTreeItems = uasMsgTreeItems.value(msg->sysid);
        if (!msgTreeItems)
        {
            // The UAS tree has not been created yet, no update
            return;
        }

        // Add the message with msgid to the tree if not done yet
        if(!msgTreeItems->contains(msg->msgid))
        {
            QStringList fields;
            fields << messageName;
            QTreeWidgetItem* widget = new QTreeWidgetItem();
            for (unsigned int i = 0; i < messageInfo[msg->msgid].num_fields; ++i)
            {
                QTreeWidgetItem* field = new QTreeWidgetItem();
                widget->addChild(field);
            }
            msgTreeItems->insert(msg->msgid,widget);
            QList<int> groupKeys = msgTreeItems->uniqueKeys();
            int insertIndex = groupKeys.indexOf(msg->msgid);
            uasTreeWidgetItems.value(msg->sysid)->insertChild(insertIndex,widget);
        }

        // Update the message
        QTreeWidgetItem* message = msgTreeItems->value(msg->msgid);

        if(message)
        {
            message->setFirstColumnSpanned(true);
            message->setData(0, Qt::DisplayRole, QVariant(messageName));
            for (unsigned int i = 0; i < messageInfo[msg->msgid].num_fields; ++i)
            {
                updateField(msg->sysid,msg->msgid, i, message->child(i));
            }
        }*/

        for (unsigned int i = 0; i < messageInfo[msg->msgid].num_fields; ++i)
        {
            updateField(msg->sysid,msg->msgid, i);
        }
    }
    //QMap<int,QMap<QString,double>> valueMapbb = valueMap;
    //QMap<int,QMap<QString,QString>> fieldMap1 = fieldMap;

    QMap<int,QMap<QString,QString>> infoMap;
    for (int sysid1 : sysidList){
        QMap<QString,QString> infoMap1;
        infoMap1.insert("Heartbeat",QString::number(valueMap[sysid1]["HEARTBEAT"],'f',2));

        QList<QMap<QString,QString>> temp = fieldMap.values(sysid1);
        for (QMap<QString,QString> tempMap : temp){
            if(!QString::compare(tempMap.firstKey(), "fix_type", Qt::CaseInsensitive))
            {
                infoMap1.insert("fix",tempMap["fix_type"]);
            }
            else if (!QString::compare(tempMap.firstKey(), "eph", Qt::CaseInsensitive)){
                infoMap1.insert("hdop",QString::number(tempMap["eph"].QString::toDouble() / 100.0 ,'f',2));
            }
            else if (!QString::compare(tempMap.firstKey(), "satellites_visible", Qt::CaseInsensitive)){
                infoMap1.insert("sats",tempMap["satellites_visible"]);
            }
            else if (!QString::compare(tempMap.firstKey(), "relative_alt", Qt::CaseInsensitive)){
                infoMap1.insert("alt",QString::number(tempMap["relative_alt"].QString::toDouble() / 1000.0 ,'f',2));
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
    emit sendInfoMap(infoMap);
}

void UASMultiView::updateField(int sysid, int msgid, int fieldid)
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
//            item->setData(2, Qt::DisplayRole, "char");
//            item->setData(1, Qt::DisplayRole, string);
            addToFieldMap(sysid, fieldName, string);
        }
        else
        {
            // Single char
            char b = *((char*)(p_payload + p_messageInfo->fields[fieldid].wire_offset));
//            item->setData(2, Qt::DisplayRole, QString("char[%1]").arg(p_messageInfo->fields[fieldid].array_length));
//            item->setData(1, Qt::DisplayRole, b);
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
//            item->setData(2, Qt::DisplayRole, QString("uint8_t[%1]").arg(p_messageInfo->fields[fieldid].array_length));
//            item->setData(1, Qt::DisplayRole, string);
            addToFieldMap(sysid, fieldName, string);
        }
        else
        {
            // Single value
            uint8_t u = *(p_payload + p_messageInfo->fields[fieldid].wire_offset);
//            item->setData(2, Qt::DisplayRole, "uint8_t");
//            item->setData(1, Qt::DisplayRole, u);
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
//            item->setData(2, Qt::DisplayRole, QString("int8_t[%1]").arg(p_messageInfo->fields[fieldid].array_length));
//            item->setData(1, Qt::DisplayRole, string);
            addToFieldMap(sysid, fieldName, string);

        }
        else
        {
            // Single value
            int8_t n = *((int8_t*)(p_payload + p_messageInfo->fields[fieldid].wire_offset));
//            item->setData(2, Qt::DisplayRole, "int8_t");
//            item->setData(1, Qt::DisplayRole, n);
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
//            item->setData(2, Qt::DisplayRole, QString("uint16_t[%1]").arg(p_messageInfo->fields[fieldid].array_length));
//            item->setData(1, Qt::DisplayRole, string);
            addToFieldMap(sysid, fieldName, string);
        }
        else
        {
            // Single value
            uint16_t n = *((uint16_t*)(p_payload + p_messageInfo->fields[fieldid].wire_offset));
//            item->setData(2, Qt::DisplayRole, "uint16_t");
//            item->setData(1, Qt::DisplayRole, n);
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
//            item->setData(2, Qt::DisplayRole, QString("int16_t[%1]").arg(p_messageInfo->fields[fieldid].array_length));
//            item->setData(1, Qt::DisplayRole, string);
            addToFieldMap(sysid, fieldName, string);
        }
        else
        {
            // Single value
            int16_t n = *((int16_t*)(p_payload + p_messageInfo->fields[fieldid].wire_offset));
//            item->setData(2, Qt::DisplayRole, "int16_t");
//            item->setData(1, Qt::DisplayRole, n);
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
//            item->setData(2, Qt::DisplayRole, QString("uint32_t[%1]").arg(p_messageInfo->fields[fieldid].array_length));
//            item->setData(1, Qt::DisplayRole, string);
            addToFieldMap(sysid, fieldName, string);
        }
        else
        {
            // Single value
            float n = *((uint32_t*)(p_payload + p_messageInfo->fields[fieldid].wire_offset));
//            item->setData(2, Qt::DisplayRole, "uint32_t");
//            item->setData(1, Qt::DisplayRole, n);
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
//            item->setData(2, Qt::DisplayRole, QString("int32_t[%1]").arg(p_messageInfo->fields[fieldid].array_length));
//            item->setData(1, Qt::DisplayRole, string);
            addToFieldMap(sysid, fieldName, string);

        }
        else
        {
            // Single value
            int32_t n = *((int32_t*)(p_payload + p_messageInfo->fields[fieldid].wire_offset));
//            item->setData(2, Qt::DisplayRole, "int32_t");
//            item->setData(1, Qt::DisplayRole, n);
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
//            item->setData(2, Qt::DisplayRole, QString("float[%1]").arg(p_messageInfo->fields[fieldid].array_length));
//            item->setData(1, Qt::DisplayRole, string);
            addToFieldMap(sysid, fieldName, string);
        }
        else
        {
            // Single value
            float f = *((float*)(p_payload + p_messageInfo->fields[fieldid].wire_offset));
//            item->setData(2, Qt::DisplayRole, "float");
//            item->setData(1, Qt::DisplayRole, f);
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
//            item->setData(2, Qt::DisplayRole, QString("double[%1]").arg(p_messageInfo->fields[fieldid].array_length));
//            item->setData(1, Qt::DisplayRole, string);
            addToFieldMap(sysid, fieldName, string);
        }
        else
        {
            // Single value
            double f = *((double*)(p_payload + p_messageInfo->fields[fieldid].wire_offset));
//            item->setData(2, Qt::DisplayRole, "double");
//            item->setData(1, Qt::DisplayRole, f);
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
//            item->setData(2, Qt::DisplayRole, QString("uint64_t[%1]").arg(p_messageInfo->fields[fieldid].array_length));
//            item->setData(1, Qt::DisplayRole, string);
            addToFieldMap(sysid, fieldName, string);
        }
        else
        {
            // Single value
            uint64_t n = *((uint64_t*)(p_payload + p_messageInfo->fields[fieldid].wire_offset));
//            item->setData(2, Qt::DisplayRole, "uint64_t");
//            item->setData(1, Qt::DisplayRole, (quint64) n);
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
//            item->setData(2, Qt::DisplayRole, QString("int64_t[%1]").arg(p_messageInfo->fields[fieldid].array_length));
//            item->setData(1, Qt::DisplayRole, string);
            addToFieldMap(sysid, fieldName, string);
        }
        else
        {
            // Single value
            int64_t n = *((int64_t*)(p_payload + p_messageInfo->fields[fieldid].wire_offset));
//            item->setData(2, Qt::DisplayRole, "int64_t");
//            item->setData(1, Qt::DisplayRole, (qint64) n);
            addToFieldMap(sysid, fieldName, QString::number(n));
        }
        break;
    }
}

void UASMultiView::addToFieldMap(int msgid, QString fieldName, QString value){
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
void UASMultiView::changeEvent(QEvent *e)
{
    QWidget::changeEvent(e);
    switch (e->type())
    {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void UASMultiView::addUAS(UASInterface* uas)
{
    if (uasViews2.isEmpty())
    {
        if (uWidget)
        {
            listLayout->removeWidget(uWidget);
            delete uWidget;
            uWidget = NULL;
        }
    }

    if (!uasViews2.contains(uas))
    {
        uasViews2.insert(uas, new UASView3(uas, this));
        listLayout->addWidget(uasViews2.value(uas));
        //connect(uas, SIGNAL(destroyed(QObject*)), this, SLOT(removeUAS(QObject*)));
    }
}

void UASMultiView::activeUAS(UASInterface* uas)
{
    UASView3* view = uasViews2.value(uas, NULL);
    if (view) {
        view->setUASasActive(true);
    }
}

void UASMultiView::removeUAS(UASInterface* uas)
{
    if (uasViews2.contains(uas))
    {
        listLayout->removeWidget(uasViews2.value(uas));
        delete uasViews2.value(uas);
        uasViews2.remove(uas);


    }
}

void UASMultiView::resizeEvent(QResizeEvent *e)
{
    Q_UNUSED(e)

    if (scrollArea->verticalScrollBar()->isVisible())
    {
        int width = this->width() - QApplication::style()->pixelMetric(QStyle::PM_ScrollBarExtent);
        scrollAreaWidgetContents->setMaximumWidth(width);
    }
    else
    {
        scrollAreaWidgetContents->setMaximumWidth(this->width());
    }
    update();
}
