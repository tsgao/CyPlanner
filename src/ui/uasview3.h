#ifndef UASVIEW3_H
#define UASVIEW3_H

#include <QtWidgets/QWidget>
#include <QString>
#include <QTimer>
#include <QMouseEvent>
#include <UASInterface.h>
#include "PrimaryFlightDisplayQML.h"
namespace Ui {
class UASView3;
}

class UASView3 : public QWidget
{
    Q_OBJECT

public:
    UASView3(UASInterface* uas, QWidget *parent = 0);
    ~UASView3();
public slots:
    /** @brief Update the name of the system */
    void updateName(const QString& name);

    void refresh();
    /** @brief Receive new waypoint information */
    void setUASasActive(bool);
    /** @brief Update the view if an UAS has been set to active */
    void updateActiveUAS(UASInterface* uas, bool active);
    /** @brief Set the background color for the widget */
    void setBackgroundColor();
    /** @brief Bring up the dialog to rename the system */
    void rename();
    /** @brief Select airframe for this vehicle */
    void refreshView();
    void receiveMessage(LinkInterface* link,mavlink_message_t message);
    void navModeChanged(int uasid, int mode, const QString& text);
    void setShortcutMode(UAS *m_uas,QString modeString);
    void receiveImageBytes(LinkInterface* link, const QByteArray &dataBytes);

private slots:
    void armingChanged(bool armed);

protected:
    void changeEvent(QEvent *e);
    QTimer* refreshTimer;
    quint64 startTime;
    bool timeout;
    int timeRemaining;
    UASInterface* uas;
    bool isActive; ///< Is this MAV selected by the user?

    QString modeText;
    //static const int updateInterval = 800;
    static const int errorUpdateInterval = 200;
    bool lowPowerModeEnabled; ///< Low power mode reduces update rates
    unsigned int generalUpdateCount; ///< Skip counter for updates
    double filterTime; ///< Filter time estimate of battery
    QMap<int,QMap<QString,double>> valueMap;
    QMap<int,QMap<QString,QString>> fieldMap;
    QVector<int> sysidList;
    void updateField(int sysid, int msgid, int fieldid);
    void addToFieldMap(int msgid, QString fieldName, QString value);

    QHash<quint32, mavlink_message_info_t> messageInfo; ///< Meta information about all messages
    QMap<int, mavlink_message_t* > uasMessageStorage;
    QMap<int, QMap<int, quint64>* > uasLastMessageUpdate;
    QMap<int, QMap<int, float>* > uasMessageHz; ///< Stores the frequency of each message of each UAS
    QMap<int, QMap<int, unsigned int>* > uasMessageCount; ///< Stores the message count of each message of each UAS
    QMap<int, float> onboardMessageInterval;

    static const unsigned int updateInterval; ///< The update interval of the refresh function
    static const float updateHzLowpass; ///< The low-pass filter value for the frequency of each message

private:
    Ui::UASView3 *m_ui;
    UASInterface *m_uas;
    //QMap<QString,double> valueMap;
    QMap<QString,QString> nameToUpdateWidgetMap;
    QTimer *m_updateTimer;
    QTimer *m_tableRefreshTimer; //This time triggers a reorganization of the cells, for when new cells are added
    bool m_tableDirty;
    bool iconIsGreen;
    PrimaryFlightDisplayQML *q;
    void sendCameraCommand();
    int sendCameraSocket();
    int receiveImage(int socket);
    FILE *f;

private slots:

    void on_cameraButton_clicked();

signals:
    void uasInFocus(UASInterface* uas);
    void uasOutFocus(UASInterface* uas);
};

#endif // UASVIEW3_H
