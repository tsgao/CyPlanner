/********************************************************************************
** Form generated from reading UI file 'MAVLinkSettingsWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAVLINKSETTINGSWIDGET_H
#define UI_MAVLINKSETTINGSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MAVLinkSettingsWidget
{
public:
    QGridLayout *gridLayout;
    QCheckBox *heartbeatCheckBox;
    QCheckBox *loggingCheckBox;
    QSpacerItem *logFileSpacer;
    QCheckBox *versionCheckBox;
    QSpacerItem *versionSpacer;
    QLabel *versionLabel;
    QLabel *logFileLabel;
    QPushButton *logFileButton;
    QSpinBox *systemIdSpinBox;
    QLabel *systemIdLabel;
    QSpacerItem *multiplexingFilterSpacer;
    QLineEdit *multiplexingFilterLineEdit;
    QCheckBox *multiplexingFilterCheckBox;
    QCheckBox *multiplexingCheckBox;
    QCheckBox *paramGuardCheckBox;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QLabel *paramRetransmissionLabel;
    QLabel *paramRewriteLabel;
    QSpinBox *paramRetransmissionSpinBox;
    QSpinBox *paramRewriteSpinBox;
    QCheckBox *actionGuardCheckBox;
    QSpacerItem *horizontalSpacer_3;
    QLabel *actionRetransmissionLabel;
    QSpinBox *actionRetransmissionSpinBox;
    QFrame *line;
    QCheckBox *droneOSCheckBox;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *droneOSLineEdit;
    QComboBox *droneOSComboBox;

    void setupUi(QWidget *MAVLinkSettingsWidget)
    {
        if (MAVLinkSettingsWidget->objectName().isEmpty())
            MAVLinkSettingsWidget->setObjectName(QStringLiteral("MAVLinkSettingsWidget"));
        MAVLinkSettingsWidget->resize(431, 530);
        gridLayout = new QGridLayout(MAVLinkSettingsWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        heartbeatCheckBox = new QCheckBox(MAVLinkSettingsWidget);
        heartbeatCheckBox->setObjectName(QStringLiteral("heartbeatCheckBox"));

        gridLayout->addWidget(heartbeatCheckBox, 1, 0, 1, 3);

        loggingCheckBox = new QCheckBox(MAVLinkSettingsWidget);
        loggingCheckBox->setObjectName(QStringLiteral("loggingCheckBox"));

        gridLayout->addWidget(loggingCheckBox, 6, 0, 1, 3);

        logFileSpacer = new QSpacerItem(8, 0, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gridLayout->addItem(logFileSpacer, 8, 0, 1, 1);

        versionCheckBox = new QCheckBox(MAVLinkSettingsWidget);
        versionCheckBox->setObjectName(QStringLiteral("versionCheckBox"));

        gridLayout->addWidget(versionCheckBox, 9, 0, 1, 3);

        versionSpacer = new QSpacerItem(8, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(versionSpacer, 10, 0, 1, 1);

        versionLabel = new QLabel(MAVLinkSettingsWidget);
        versionLabel->setObjectName(QStringLiteral("versionLabel"));

        gridLayout->addWidget(versionLabel, 10, 1, 1, 2);

        logFileLabel = new QLabel(MAVLinkSettingsWidget);
        logFileLabel->setObjectName(QStringLiteral("logFileLabel"));

        gridLayout->addWidget(logFileLabel, 8, 1, 1, 1);

        logFileButton = new QPushButton(MAVLinkSettingsWidget);
        logFileButton->setObjectName(QStringLiteral("logFileButton"));

        gridLayout->addWidget(logFileButton, 8, 2, 1, 1);

        systemIdSpinBox = new QSpinBox(MAVLinkSettingsWidget);
        systemIdSpinBox->setObjectName(QStringLiteral("systemIdSpinBox"));
        systemIdSpinBox->setMinimum(1);
        systemIdSpinBox->setMaximum(255);

        gridLayout->addWidget(systemIdSpinBox, 0, 2, 1, 1);

        systemIdLabel = new QLabel(MAVLinkSettingsWidget);
        systemIdLabel->setObjectName(QStringLiteral("systemIdLabel"));

        gridLayout->addWidget(systemIdLabel, 0, 0, 1, 2);

        multiplexingFilterSpacer = new QSpacerItem(8, 0, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gridLayout->addItem(multiplexingFilterSpacer, 5, 0, 1, 1);

        multiplexingFilterLineEdit = new QLineEdit(MAVLinkSettingsWidget);
        multiplexingFilterLineEdit->setObjectName(QStringLiteral("multiplexingFilterLineEdit"));

        gridLayout->addWidget(multiplexingFilterLineEdit, 5, 1, 1, 2);

        multiplexingFilterCheckBox = new QCheckBox(MAVLinkSettingsWidget);
        multiplexingFilterCheckBox->setObjectName(QStringLiteral("multiplexingFilterCheckBox"));

        gridLayout->addWidget(multiplexingFilterCheckBox, 4, 0, 1, 3);

        multiplexingCheckBox = new QCheckBox(MAVLinkSettingsWidget);
        multiplexingCheckBox->setObjectName(QStringLiteral("multiplexingCheckBox"));

        gridLayout->addWidget(multiplexingCheckBox, 3, 0, 1, 3);

        paramGuardCheckBox = new QCheckBox(MAVLinkSettingsWidget);
        paramGuardCheckBox->setObjectName(QStringLiteral("paramGuardCheckBox"));

        gridLayout->addWidget(paramGuardCheckBox, 11, 0, 1, 3);

        horizontalSpacer = new QSpacerItem(8, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 12, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(8, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 13, 0, 1, 1);

        paramRetransmissionLabel = new QLabel(MAVLinkSettingsWidget);
        paramRetransmissionLabel->setObjectName(QStringLiteral("paramRetransmissionLabel"));

        gridLayout->addWidget(paramRetransmissionLabel, 12, 1, 1, 1);

        paramRewriteLabel = new QLabel(MAVLinkSettingsWidget);
        paramRewriteLabel->setObjectName(QStringLiteral("paramRewriteLabel"));

        gridLayout->addWidget(paramRewriteLabel, 13, 1, 1, 1);

        paramRetransmissionSpinBox = new QSpinBox(MAVLinkSettingsWidget);
        paramRetransmissionSpinBox->setObjectName(QStringLiteral("paramRetransmissionSpinBox"));
        paramRetransmissionSpinBox->setMinimum(50);
        paramRetransmissionSpinBox->setMaximum(60000);
        paramRetransmissionSpinBox->setSingleStep(50);
        paramRetransmissionSpinBox->setValue(50);

        gridLayout->addWidget(paramRetransmissionSpinBox, 12, 2, 1, 1);

        paramRewriteSpinBox = new QSpinBox(MAVLinkSettingsWidget);
        paramRewriteSpinBox->setObjectName(QStringLiteral("paramRewriteSpinBox"));
        paramRewriteSpinBox->setMinimum(50);
        paramRewriteSpinBox->setMaximum(60000);
        paramRewriteSpinBox->setSingleStep(50);

        gridLayout->addWidget(paramRewriteSpinBox, 13, 2, 1, 1);

        actionGuardCheckBox = new QCheckBox(MAVLinkSettingsWidget);
        actionGuardCheckBox->setObjectName(QStringLiteral("actionGuardCheckBox"));

        gridLayout->addWidget(actionGuardCheckBox, 14, 0, 1, 3);

        horizontalSpacer_3 = new QSpacerItem(8, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 15, 0, 1, 1);

        actionRetransmissionLabel = new QLabel(MAVLinkSettingsWidget);
        actionRetransmissionLabel->setObjectName(QStringLiteral("actionRetransmissionLabel"));

        gridLayout->addWidget(actionRetransmissionLabel, 15, 1, 1, 1);

        actionRetransmissionSpinBox = new QSpinBox(MAVLinkSettingsWidget);
        actionRetransmissionSpinBox->setObjectName(QStringLiteral("actionRetransmissionSpinBox"));
        actionRetransmissionSpinBox->setMinimum(20);
        actionRetransmissionSpinBox->setMaximum(1000);
        actionRetransmissionSpinBox->setSingleStep(10);

        gridLayout->addWidget(actionRetransmissionSpinBox, 15, 2, 1, 1);

        line = new QFrame(MAVLinkSettingsWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setMinimumSize(QSize(0, 0));
        line->setMidLineWidth(0);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 16, 0, 1, 3);

        droneOSCheckBox = new QCheckBox(MAVLinkSettingsWidget);
        droneOSCheckBox->setObjectName(QStringLiteral("droneOSCheckBox"));

        gridLayout->addWidget(droneOSCheckBox, 17, 0, 1, 3);

        horizontalSpacer_4 = new QSpacerItem(8, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 18, 0, 1, 1);

        droneOSLineEdit = new QLineEdit(MAVLinkSettingsWidget);
        droneOSLineEdit->setObjectName(QStringLiteral("droneOSLineEdit"));
        droneOSLineEdit->setMaxLength(32);

        gridLayout->addWidget(droneOSLineEdit, 18, 1, 1, 2);

        droneOSComboBox = new QComboBox(MAVLinkSettingsWidget);
        droneOSComboBox->setObjectName(QStringLiteral("droneOSComboBox"));
        droneOSComboBox->setEditable(true);

        gridLayout->addWidget(droneOSComboBox, 19, 1, 1, 2);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 100);
        gridLayout->setColumnStretch(2, 1);

        retranslateUi(MAVLinkSettingsWidget);

        QMetaObject::connectSlotsByName(MAVLinkSettingsWidget);
    } // setupUi

    void retranslateUi(QWidget *MAVLinkSettingsWidget)
    {
        MAVLinkSettingsWidget->setWindowTitle(QApplication::translate("MAVLinkSettingsWidget", "Form", Q_NULLPTR));
        heartbeatCheckBox->setText(QApplication::translate("MAVLinkSettingsWidget", "Emit heartbeat", Q_NULLPTR));
        loggingCheckBox->setText(QApplication::translate("MAVLinkSettingsWidget", "Log all MAVLink packets", Q_NULLPTR));
        versionCheckBox->setText(QApplication::translate("MAVLinkSettingsWidget", "Only accept MAVs with same protocol version", Q_NULLPTR));
        versionLabel->setText(QApplication::translate("MAVLinkSettingsWidget", "MAVLINK_VERSION: ", Q_NULLPTR));
        logFileLabel->setText(QApplication::translate("MAVLinkSettingsWidget", "Logfile name", Q_NULLPTR));
        logFileButton->setText(QApplication::translate("MAVLinkSettingsWidget", "Select..", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        systemIdSpinBox->setToolTip(QApplication::translate("MAVLinkSettingsWidget", "Set the groundstation number", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        systemIdSpinBox->setStatusTip(QApplication::translate("MAVLinkSettingsWidget", "Set the groundstation number", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_TOOLTIP
        systemIdLabel->setToolTip(QApplication::translate("MAVLinkSettingsWidget", "The system ID is the number the MAV associates with this computer", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        systemIdLabel->setStatusTip(QApplication::translate("MAVLinkSettingsWidget", "The system ID is the number the MAV associates with this computer", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        systemIdLabel->setText(QApplication::translate("MAVLinkSettingsWidget", "Groundstation MAVLink System ID", Q_NULLPTR));
        multiplexingFilterLineEdit->setText(QApplication::translate("MAVLinkSettingsWidget", "Enter a comma-separated list of allowed packets", Q_NULLPTR));
        multiplexingFilterCheckBox->setText(QApplication::translate("MAVLinkSettingsWidget", "Filter multiplexed packets: Only forward selected IDs", Q_NULLPTR));
        multiplexingCheckBox->setText(QApplication::translate("MAVLinkSettingsWidget", "Enable Multiplexing: Forward packets to all other links", Q_NULLPTR));
        paramGuardCheckBox->setText(QApplication::translate("MAVLinkSettingsWidget", "Enable retransmission of parameter read/write requests", Q_NULLPTR));
        paramRetransmissionLabel->setText(QApplication::translate("MAVLinkSettingsWidget", "Read request retransmission timeout", Q_NULLPTR));
        paramRewriteLabel->setText(QApplication::translate("MAVLinkSettingsWidget", "Write request retransmission timeout", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        paramRetransmissionSpinBox->setToolTip(QApplication::translate("MAVLinkSettingsWidget", "Time in milliseconds after which a not acknowledged read request is sent again.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        paramRetransmissionSpinBox->setStatusTip(QApplication::translate("MAVLinkSettingsWidget", "Time in milliseconds after which a not acknowledged read request is sent again.", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        paramRetransmissionSpinBox->setSuffix(QApplication::translate("MAVLinkSettingsWidget", " ms", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        paramRewriteSpinBox->setToolTip(QApplication::translate("MAVLinkSettingsWidget", "Time in milliseconds after which a not acknowledged write request is sent again.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        paramRewriteSpinBox->setStatusTip(QApplication::translate("MAVLinkSettingsWidget", "Time in milliseconds after which a not acknowledged write request is sent again.", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        paramRewriteSpinBox->setSuffix(QApplication::translate("MAVLinkSettingsWidget", " ms", Q_NULLPTR));
        actionGuardCheckBox->setText(QApplication::translate("MAVLinkSettingsWidget", "Enable retransmission of actions / commands", Q_NULLPTR));
        actionRetransmissionLabel->setText(QApplication::translate("MAVLinkSettingsWidget", "Action request retransmission timeout", Q_NULLPTR));
        actionRetransmissionSpinBox->setSuffix(QApplication::translate("MAVLinkSettingsWidget", " ms", Q_NULLPTR));
        droneOSCheckBox->setText(QApplication::translate("MAVLinkSettingsWidget", "Forward MAVLink packets of all links to http://droneos.com", Q_NULLPTR));
        droneOSLineEdit->setText(QApplication::translate("MAVLinkSettingsWidget", "Enter your DroneOS API Token/Key", Q_NULLPTR));
        droneOSComboBox->clear();
        droneOSComboBox->insertItems(0, QStringList()
         << QApplication::translate("MAVLinkSettingsWidget", "mavlink.droneos.com:14555", Q_NULLPTR)
         << QApplication::translate("MAVLinkSettingsWidget", "localhost:14555", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class MAVLinkSettingsWidget: public Ui_MAVLinkSettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAVLINKSETTINGSWIDGET_H
