/********************************************************************************
** Form generated from reading UI file 'QGCSettingsWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCSETTINGSWIDGET_H
#define UI_QGCSETTINGSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCSettingsWidget
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *general;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *outdoorStyle;
    QRadioButton *indoorStyle;
    QRadioButton *nativeStyle;
    QLabel *label_5;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_13;
    QLineEdit *appDataDirEdit;
    QLineEdit *logDirEdit;
    QPushButton *paramDirSetButton;
    QLineEdit *mavlinkLogDirEdit;
    QPushButton *mavlinkDirSetButton;
    QLineEdit *missionsDirEdit;
    QLabel *label_4;
    QPushButton *appDirSetButton;
    QLineEdit *paramDirEdit;
    QPushButton *logDirSetButton;
    QPushButton *missionsSetButton;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *audioMuteCheckBox;
    QCheckBox *reconnectCheckBox;
    QCheckBox *lowPowerCheckBox;
    QCheckBox *titleBarCheckBox;
    QCheckBox *heartbeatCheckBox;
    QCheckBox *mavlinkLoggingCheckBox;
    QCheckBox *enableBetaReleaseCheckBox;
    QCheckBox *autoProxyCheckBox;
    QCheckBox *hideDonateButtonCheckBox;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QWidget *advanced;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_2;
    QLineEdit *extStatusLineEdit;
    QLabel *label_10;
    QLabel *label_8;
    QLineEdit *rawSensorLineEdit;
    QLineEdit *positionLineEdit;
    QLineEdit *rcChannelDataLineEdit;
    QLabel *label_7;
    QLabel *label_9;
    QLabel *label_6;
    QLineEdit *extra1LineEdit;
    QLabel *label_11;
    QLineEdit *extra2LineEdit;
    QLabel *label_12;
    QLineEdit *extra3LineEdit;

    void setupUi(QDialog *QGCSettingsWidget)
    {
        if (QGCSettingsWidget->objectName().isEmpty())
            QGCSettingsWidget->setObjectName(QStringLiteral("QGCSettingsWidget"));
        QGCSettingsWidget->resize(1014, 701);
        verticalLayout = new QVBoxLayout(QGCSettingsWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(QGCSettingsWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        general = new QWidget();
        general->setObjectName(QStringLiteral("general"));
        gridLayout_3 = new QGridLayout(general);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 2, 1, 1);

        groupBox_2 = new QGroupBox(general);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        outdoorStyle = new QRadioButton(groupBox_2);
        outdoorStyle->setObjectName(QStringLiteral("outdoorStyle"));

        verticalLayout_3->addWidget(outdoorStyle);

        indoorStyle = new QRadioButton(groupBox_2);
        indoorStyle->setObjectName(QStringLiteral("indoorStyle"));

        verticalLayout_3->addWidget(indoorStyle);

        nativeStyle = new QRadioButton(groupBox_2);
        nativeStyle->setObjectName(QStringLiteral("nativeStyle"));
        nativeStyle->setAutoExclusive(true);

        verticalLayout_3->addWidget(nativeStyle);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_3->addWidget(label_5);


        gridLayout_3->addWidget(groupBox_2, 1, 0, 1, 1);

        groupBox = new QGroupBox(general);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout->addWidget(label_13, 4, 0, 1, 1);

        appDataDirEdit = new QLineEdit(groupBox);
        appDataDirEdit->setObjectName(QStringLiteral("appDataDirEdit"));
        appDataDirEdit->setEnabled(false);

        gridLayout->addWidget(appDataDirEdit, 0, 1, 1, 1);

        logDirEdit = new QLineEdit(groupBox);
        logDirEdit->setObjectName(QStringLiteral("logDirEdit"));
        logDirEdit->setEnabled(false);

        gridLayout->addWidget(logDirEdit, 1, 1, 1, 1);

        paramDirSetButton = new QPushButton(groupBox);
        paramDirSetButton->setObjectName(QStringLiteral("paramDirSetButton"));

        gridLayout->addWidget(paramDirSetButton, 3, 2, 1, 1);

        mavlinkLogDirEdit = new QLineEdit(groupBox);
        mavlinkLogDirEdit->setObjectName(QStringLiteral("mavlinkLogDirEdit"));
        mavlinkLogDirEdit->setEnabled(false);

        gridLayout->addWidget(mavlinkLogDirEdit, 2, 1, 1, 1);

        mavlinkDirSetButton = new QPushButton(groupBox);
        mavlinkDirSetButton->setObjectName(QStringLiteral("mavlinkDirSetButton"));

        gridLayout->addWidget(mavlinkDirSetButton, 2, 2, 1, 1);

        missionsDirEdit = new QLineEdit(groupBox);
        missionsDirEdit->setObjectName(QStringLiteral("missionsDirEdit"));
        missionsDirEdit->setEnabled(false);

        gridLayout->addWidget(missionsDirEdit, 4, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        appDirSetButton = new QPushButton(groupBox);
        appDirSetButton->setObjectName(QStringLiteral("appDirSetButton"));

        gridLayout->addWidget(appDirSetButton, 0, 2, 1, 1);

        paramDirEdit = new QLineEdit(groupBox);
        paramDirEdit->setObjectName(QStringLiteral("paramDirEdit"));
        paramDirEdit->setEnabled(false);

        gridLayout->addWidget(paramDirEdit, 3, 1, 1, 1);

        logDirSetButton = new QPushButton(groupBox);
        logDirSetButton->setObjectName(QStringLiteral("logDirSetButton"));

        gridLayout->addWidget(logDirSetButton, 1, 2, 1, 1);

        missionsSetButton = new QPushButton(groupBox);
        missionsSetButton->setObjectName(QStringLiteral("missionsSetButton"));

        gridLayout->addWidget(missionsSetButton, 4, 2, 1, 1);


        gridLayout_3->addWidget(groupBox, 2, 0, 2, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 2, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        audioMuteCheckBox = new QCheckBox(general);
        audioMuteCheckBox->setObjectName(QStringLiteral("audioMuteCheckBox"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/files/images/status/audio-volume-muted.svg"), QSize(), QIcon::Normal, QIcon::Off);
        audioMuteCheckBox->setIcon(icon);

        verticalLayout_2->addWidget(audioMuteCheckBox);

        reconnectCheckBox = new QCheckBox(general);
        reconnectCheckBox->setObjectName(QStringLiteral("reconnectCheckBox"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/files/images/devices/network-wireless.svg"), QSize(), QIcon::Normal, QIcon::Off);
        reconnectCheckBox->setIcon(icon1);

        verticalLayout_2->addWidget(reconnectCheckBox);

        lowPowerCheckBox = new QCheckBox(general);
        lowPowerCheckBox->setObjectName(QStringLiteral("lowPowerCheckBox"));

        verticalLayout_2->addWidget(lowPowerCheckBox);

        titleBarCheckBox = new QCheckBox(general);
        titleBarCheckBox->setObjectName(QStringLiteral("titleBarCheckBox"));
        titleBarCheckBox->setChecked(false);

        verticalLayout_2->addWidget(titleBarCheckBox);

        heartbeatCheckBox = new QCheckBox(general);
        heartbeatCheckBox->setObjectName(QStringLiteral("heartbeatCheckBox"));

        verticalLayout_2->addWidget(heartbeatCheckBox);

        mavlinkLoggingCheckBox = new QCheckBox(general);
        mavlinkLoggingCheckBox->setObjectName(QStringLiteral("mavlinkLoggingCheckBox"));

        verticalLayout_2->addWidget(mavlinkLoggingCheckBox);

        enableBetaReleaseCheckBox = new QCheckBox(general);
        enableBetaReleaseCheckBox->setObjectName(QStringLiteral("enableBetaReleaseCheckBox"));

        verticalLayout_2->addWidget(enableBetaReleaseCheckBox);

        autoProxyCheckBox = new QCheckBox(general);
        autoProxyCheckBox->setObjectName(QStringLiteral("autoProxyCheckBox"));
        autoProxyCheckBox->setIcon(icon1);

        verticalLayout_2->addWidget(autoProxyCheckBox);

        hideDonateButtonCheckBox = new QCheckBox(general);
        hideDonateButtonCheckBox->setObjectName(QStringLiteral("hideDonateButtonCheckBox"));

        verticalLayout_2->addWidget(hideDonateButtonCheckBox);


        gridLayout_3->addLayout(verticalLayout_2, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 4, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 4, 2, 1, 1);

        tabWidget->addTab(general, QString());
        groupBox->raise();
        groupBox_2->raise();
        advanced = new QWidget();
        advanced->setObjectName(QStringLiteral("advanced"));
        groupBox_3 = new QGroupBox(advanced);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 0, 501, 161));
        horizontalLayout = new QHBoxLayout(groupBox_3);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        extStatusLineEdit = new QLineEdit(groupBox_3);
        extStatusLineEdit->setObjectName(QStringLiteral("extStatusLineEdit"));

        gridLayout_2->addWidget(extStatusLineEdit, 2, 1, 1, 1);

        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_2->addWidget(label_10, 1, 2, 1, 1);

        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 2, 0, 1, 1);

        rawSensorLineEdit = new QLineEdit(groupBox_3);
        rawSensorLineEdit->setObjectName(QStringLiteral("rawSensorLineEdit"));

        gridLayout_2->addWidget(rawSensorLineEdit, 1, 3, 1, 1);

        positionLineEdit = new QLineEdit(groupBox_3);
        positionLineEdit->setObjectName(QStringLiteral("positionLineEdit"));

        gridLayout_2->addWidget(positionLineEdit, 1, 1, 1, 1);

        rcChannelDataLineEdit = new QLineEdit(groupBox_3);
        rcChannelDataLineEdit->setObjectName(QStringLiteral("rcChannelDataLineEdit"));

        gridLayout_2->addWidget(rcChannelDataLineEdit, 0, 3, 1, 1);

        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 1, 0, 1, 1);

        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_2->addWidget(label_9, 0, 2, 1, 1);

        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        extra1LineEdit = new QLineEdit(groupBox_3);
        extra1LineEdit->setObjectName(QStringLiteral("extra1LineEdit"));

        gridLayout_2->addWidget(extra1LineEdit, 0, 1, 1, 1);

        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_2->addWidget(label_11, 3, 0, 1, 1);

        extra2LineEdit = new QLineEdit(groupBox_3);
        extra2LineEdit->setObjectName(QStringLiteral("extra2LineEdit"));

        gridLayout_2->addWidget(extra2LineEdit, 3, 1, 1, 1);

        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_2->addWidget(label_12, 2, 2, 1, 1);

        extra3LineEdit = new QLineEdit(groupBox_3);
        extra3LineEdit->setObjectName(QStringLiteral("extra3LineEdit"));

        gridLayout_2->addWidget(extra3LineEdit, 2, 3, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);

        tabWidget->addTab(advanced, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(QGCSettingsWidget);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QGCSettingsWidget);
    } // setupUi

    void retranslateUi(QDialog *QGCSettingsWidget)
    {
        QGCSettingsWidget->setWindowTitle(QApplication::translate("QGCSettingsWidget", "Dialog", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("QGCSettingsWidget", "Themes", Q_NULLPTR));
        outdoorStyle->setText(QApplication::translate("QGCSettingsWidget", "Use outdoor mission style (light background)", Q_NULLPTR));
        indoorStyle->setText(QApplication::translate("QGCSettingsWidget", "Use indoor mission style (black background)", Q_NULLPTR));
        nativeStyle->setText(QApplication::translate("QGCSettingsWidget", "Use native platform look and feel", Q_NULLPTR));
        label_5->setText(QApplication::translate("QGCSettingsWidget", "(Windows/Linux/Mac OS) (Experimental)", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QGCSettingsWidget", "File Locations", Q_NULLPTR));
        label->setText(QApplication::translate("QGCSettingsWidget", "Log output:", Q_NULLPTR));
        label_2->setText(QApplication::translate("QGCSettingsWidget", "tlog output:", Q_NULLPTR));
        label_3->setText(QApplication::translate("QGCSettingsWidget", "App Data", Q_NULLPTR));
        label_13->setText(QApplication::translate("QGCSettingsWidget", "Missions", Q_NULLPTR));
        paramDirSetButton->setText(QApplication::translate("QGCSettingsWidget", "Set...", Q_NULLPTR));
        mavlinkDirSetButton->setText(QApplication::translate("QGCSettingsWidget", "Set...", Q_NULLPTR));
        label_4->setText(QApplication::translate("QGCSettingsWidget", "Parameters", Q_NULLPTR));
        appDirSetButton->setText(QApplication::translate("QGCSettingsWidget", "Set...", Q_NULLPTR));
        logDirSetButton->setText(QApplication::translate("QGCSettingsWidget", "Set...", Q_NULLPTR));
        missionsSetButton->setText(QApplication::translate("QGCSettingsWidget", "Set...", Q_NULLPTR));
        audioMuteCheckBox->setText(QApplication::translate("QGCSettingsWidget", "Mute all audio output", Q_NULLPTR));
        reconnectCheckBox->setText(QApplication::translate("QGCSettingsWidget", "Automatically reconnect last link on application startup", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        lowPowerCheckBox->setToolTip(QApplication::translate("QGCSettingsWidget", "Lowers all update rates to save battery power", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        lowPowerCheckBox->setText(QApplication::translate("QGCSettingsWidget", "Enable low power mode", Q_NULLPTR));
        titleBarCheckBox->setText(QApplication::translate("QGCSettingsWidget", "Show Docked Widget title bars when NOT in advanced Mode.", Q_NULLPTR));
        heartbeatCheckBox->setText(QApplication::translate("QGCSettingsWidget", "Enable GCS Heartbeat transmit (For GCS_Failsafe)", Q_NULLPTR));
        mavlinkLoggingCheckBox->setText(QApplication::translate("QGCSettingsWidget", "Enable Mavlink Logging (tlog)", Q_NULLPTR));
        enableBetaReleaseCheckBox->setText(QApplication::translate("QGCSettingsWidget", "Enable Beta Release Updates", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        autoProxyCheckBox->setToolTip(QApplication::translate("QGCSettingsWidget", "Use the system defined network proxies to download data from the Internet through a firewall.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        autoProxyCheckBox->setText(QApplication::translate("QGCSettingsWidget", "Automatically Use System Network Proxies", Q_NULLPTR));
        hideDonateButtonCheckBox->setText(QApplication::translate("QGCSettingsWidget", "Hide Donate Button", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(general), QApplication::translate("QGCSettingsWidget", "General", Q_NULLPTR));
        tabWidget->setTabToolTip(tabWidget->indexOf(general), QApplication::translate("QGCSettingsWidget", "General Settings", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("QGCSettingsWidget", "Telemetry Rates (Hz)", Q_NULLPTR));
        label_10->setText(QApplication::translate("QGCSettingsWidget", "Sensor", Q_NULLPTR));
        label_8->setText(QApplication::translate("QGCSettingsWidget", "Status/Mode", Q_NULLPTR));
        label_7->setText(QApplication::translate("QGCSettingsWidget", "Position", Q_NULLPTR));
        label_9->setText(QApplication::translate("QGCSettingsWidget", "RC", Q_NULLPTR));
        label_6->setText(QApplication::translate("QGCSettingsWidget", "Attitude (Extra1)", Q_NULLPTR));
        label_11->setText(QApplication::translate("QGCSettingsWidget", "Extra 2", Q_NULLPTR));
        label_12->setText(QApplication::translate("QGCSettingsWidget", "Extra 3", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(advanced), QApplication::translate("QGCSettingsWidget", "Advanced", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QGCSettingsWidget: public Ui_QGCSettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCSETTINGSWIDGET_H
