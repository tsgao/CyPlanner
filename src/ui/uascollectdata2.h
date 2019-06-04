#ifndef UASCOLLECTDATA2_H
#define UASCOLLECTDATA2_H

#include <QWidget>
#include "UASInterface.h"

//extern QMap<int,QMap<QString,QString>> infoMap;

namespace Ui {
class UASCollectData2;
}

class UASCollectData2 : public QWidget
{
    Q_OBJECT

public:
    explicit UASCollectData2(QWidget *parent = nullptr);
    static UASCollectData2* instance();
    QMap<int,QMap<QString,QString>> infoMap;
    ~UASCollectData2();

public slots:
    void refreshView();

private:
    Ui::UASCollectData2 *ui;

protected:
    QMap<int,QMap<QString,double>> valueMap;
    QMap<int,QMap<QString,QString>> fieldMap;
    QVector<int> sysidList;

    QHash<quint32, mavlink_message_info_t> messageInfo; ///< Meta information about all messages
    QMap<int, mavlink_message_t* > uasMessageStorage;
    QMap<int, QMap<int, quint64>* > uasLastMessageUpdate;
    QMap<int, QMap<int, float>* > uasMessageHz; ///< Stores the frequency of each message of each UAS
    QMap<int, QMap<int, unsigned int>* > uasMessageCount; ///< Stores the message count of each message of each UAS
    QMap<int, float> onboardMessageInterval;
    QTimer updateTimer; ///< Only update at 1 Hz to not overload the GUI
    void updateField(int sysid, int msgid, int fieldid);
    void addToFieldMap(int msgid, QString fieldName, QString value);
    static const unsigned int updateInterval; ///< The update interval of the refresh function
    static const float updateHzLowpass; ///< The low-pass filter value for the frequency of each message

public slots:
    void receiveMessage(LinkInterface* link,mavlink_message_t message);
signals:
    void sendInfoMap(QMap<int,QMap<QString,QString>> infoMap);

private:
    UASInterface *m_uas;

};

#endif // UASCOLLECTDATA2_H
