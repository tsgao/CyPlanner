/*
 * Author: Xiangwei Niu
 * Show multiple Systems in Multi Flight Panel
 *
 * */

#ifndef UASMULTIVIEW_H
#define UASMULTIVIEW_H

#include <QWidget>
#include <QMap>
#include <QScrollArea>
#include <QVBoxLayout>
#include "UASInterface.h"
#include "UASView.h"
#include "uasview2.h"
#include "uasview3.h"
#include "QGCUnconnectedInfoWidget.h"

//QMap<QString,double> valueMap;

namespace Ui {
class UASMultiView;
}

class UASMultiView : public QWidget
{
    Q_OBJECT

public slots:
    void addUAS(UASInterface* uas);
    void activeUAS(UASInterface* uas);
    void removeUAS(UASInterface* uas);
    void refreshView();

public:
    explicit UASMultiView(QWidget *parent = nullptr);
    static UASMultiView* instance();
    ~UASMultiView();

protected:
    QMap<UASInterface*, UASView*> uasViews;
    QMap<UASInterface*, UASView3*> uasViews2;
    QHBoxLayout* mainLayout;
    QScrollArea* scrollArea;
    QWidget* scrollAreaWidgetContents;
    QVBoxLayout* listLayout;
    QGCUnconnectedInfoWidget* uWidget;
    void changeEvent(QEvent *e);
    void resizeEvent(QResizeEvent *e);
    UASInterface *m_uas;

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
    Ui::UASMultiView *ui;
};

#endif // UASMULTIVIEW_H