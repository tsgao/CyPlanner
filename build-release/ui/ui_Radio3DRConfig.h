/********************************************************************************
** Form generated from reading UI file 'Radio3DRConfig.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RADIO3DRCONFIG_H
#define UI_RADIO3DRCONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Radio3DRConfig
{
public:
    QVBoxLayout *verticalLayout_6;
    QLabel *label;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *loadSettingsButton;
    QPushButton *saveSettingsButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *resetDefaultsButton;
    QPushButton *flashPushButton;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_31;
    QComboBox *linkPortComboBox;
    QComboBox *baudPortComboBox;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *settingsButton;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout;
    QGroupBox *localGroupBox;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_1;
    QLabel *versionLabel;
    QLabel *label_2;
    QTextEdit *rssiTextEdit;
    QLabel *label_3;
    QLineEdit *formatLineEdit;
    QLabel *label_6;
    QComboBox *minFreqComboBox;
    QLabel *label_4;
    QComboBox *baudComboBox;
    QLabel *label_8;
    QComboBox *maxFreqComboBox;
    QLabel *label_5;
    QComboBox *airBaudComboBox;
    QLabel *label_9;
    QSpinBox *numChannelsSpinBox;
    QLabel *label_14;
    QSpinBox *netIdSpinBox;
    QLabel *label_7;
    QSpinBox *dutyCycleSpinBox;
    QLabel *label_17;
    QComboBox *txPowerComboBox;
    QLabel *label_10;
    QSpinBox *lbtRssiSpinBox;
    QCheckBox *eccCheckBox;
    QComboBox *nodeIdComboBox;
    QLabel *label_32;
    QComboBox *mavLinkComboBox;
    QLabel *label_12;
    QComboBox *nodeDestComboBox;
    QCheckBox *opResendCheckBox;
    QLabel *label_13;
    QComboBox *nodeCountComboBox;
    QLabel *label_34;
    QSpinBox *maxWindowSpinBox;
    QLabel *label_38;
    QComboBox *rtsCtsComboBox;
    QLabel *label_11;
    QLabel *localStatus;
    QPushButton *copyToRemoteButton;
    QGroupBox *remoteGroupBox;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *label_27;
    QLabel *versionLabel_remote;
    QLabel *label_29;
    QTextEdit *rssiTextEdit_remote;
    QLabel *label_30;
    QLineEdit *formatLineEdit_remote;
    QComboBox *minFreqComboBox_remote;
    QLabel *label_26;
    QComboBox *baudComboBox_remote;
    QComboBox *maxFreqComboBox_remote;
    QLabel *label_21;
    QComboBox *airBaudComboBox_remote;
    QLabel *label_24;
    QSpinBox *numChannelsSpinBox_remote;
    QLabel *label_18;
    QSpinBox *netIdSpinBox_remote;
    QLabel *label_28;
    QSpinBox *dutyCycleSpinBox_remote;
    QLabel *label_23;
    QComboBox *txPowerComboBox_remote;
    QLabel *label_15;
    QSpinBox *lbtRssiSpinBox_remote;
    QCheckBox *eccCheckBox_remote;
    QLabel *label_20;
    QComboBox *nodeIdComboBox_remote;
    QLabel *label_33;
    QComboBox *mavLinkComboBox_remote;
    QLabel *label_19;
    QComboBox *nodeDestComboBox_remote;
    QCheckBox *opResendCheckBox_remote;
    QLabel *label_25;
    QComboBox *nodeCountComboBox_remote;
    QLabel *label_35;
    QSpinBox *maxWindowSpinBox_remote;
    QLabel *label_37;
    QComboBox *rtsCtsComboBox_remote;
    QLabel *label_22;
    QLabel *label_16;
    QLabel *remoteStatus;
    QSpacerItem *remoteVerticalButtonSpacer;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_39;
    QHBoxLayout *horizontalLayout_3;
    QProgressBar *progressBar;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *Radio3DRConfig)
    {
        if (Radio3DRConfig->objectName().isEmpty())
            Radio3DRConfig->setObjectName(QStringLiteral("Radio3DRConfig"));
        Radio3DRConfig->resize(1067, 668);
        verticalLayout_6 = new QVBoxLayout(Radio3DRConfig);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label = new QLabel(Radio3DRConfig);
        label->setObjectName(QStringLiteral("label"));
        label->setScaledContents(false);

        verticalLayout_6->addWidget(label);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        loadSettingsButton = new QPushButton(Radio3DRConfig);
        loadSettingsButton->setObjectName(QStringLiteral("loadSettingsButton"));

        horizontalLayout_2->addWidget(loadSettingsButton);

        saveSettingsButton = new QPushButton(Radio3DRConfig);
        saveSettingsButton->setObjectName(QStringLiteral("saveSettingsButton"));

        horizontalLayout_2->addWidget(saveSettingsButton);

        horizontalSpacer = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        resetDefaultsButton = new QPushButton(Radio3DRConfig);
        resetDefaultsButton->setObjectName(QStringLiteral("resetDefaultsButton"));

        horizontalLayout_2->addWidget(resetDefaultsButton);

        flashPushButton = new QPushButton(Radio3DRConfig);
        flashPushButton->setObjectName(QStringLiteral("flashPushButton"));

        horizontalLayout_2->addWidget(flashPushButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        label_31 = new QLabel(Radio3DRConfig);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_31);

        linkPortComboBox = new QComboBox(Radio3DRConfig);
        linkPortComboBox->setObjectName(QStringLiteral("linkPortComboBox"));

        horizontalLayout_2->addWidget(linkPortComboBox);

        baudPortComboBox = new QComboBox(Radio3DRConfig);
        baudPortComboBox->setObjectName(QStringLiteral("baudPortComboBox"));

        horizontalLayout_2->addWidget(baudPortComboBox);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        settingsButton = new QPushButton(Radio3DRConfig);
        settingsButton->setObjectName(QStringLiteral("settingsButton"));

        horizontalLayout_2->addWidget(settingsButton);


        verticalLayout_5->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        localGroupBox = new QGroupBox(Radio3DRConfig);
        localGroupBox->setObjectName(QStringLiteral("localGroupBox"));
        verticalLayout_2 = new QVBoxLayout(localGroupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_1 = new QLabel(localGroupBox);
        label_1->setObjectName(QStringLiteral("label_1"));
        label_1->setMinimumSize(QSize(0, 23));
        label_1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_1, 0, 0, 1, 1);

        versionLabel = new QLabel(localGroupBox);
        versionLabel->setObjectName(QStringLiteral("versionLabel"));
        versionLabel->setMinimumSize(QSize(210, 23));

        gridLayout->addWidget(versionLabel, 0, 1, 1, 3);

        label_2 = new QLabel(localGroupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        rssiTextEdit = new QTextEdit(localGroupBox);
        rssiTextEdit->setObjectName(QStringLiteral("rssiTextEdit"));

        gridLayout->addWidget(rssiTextEdit, 1, 1, 1, 3);

        label_3 = new QLabel(localGroupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        formatLineEdit = new QLineEdit(localGroupBox);
        formatLineEdit->setObjectName(QStringLiteral("formatLineEdit"));
        formatLineEdit->setEnabled(false);

        gridLayout->addWidget(formatLineEdit, 2, 1, 1, 1);

        label_6 = new QLabel(localGroupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_6, 2, 2, 1, 1);

        minFreqComboBox = new QComboBox(localGroupBox);
        minFreqComboBox->setObjectName(QStringLiteral("minFreqComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(minFreqComboBox->sizePolicy().hasHeightForWidth());
        minFreqComboBox->setSizePolicy(sizePolicy);
        minFreqComboBox->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(minFreqComboBox, 2, 3, 1, 1);

        label_4 = new QLabel(localGroupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        baudComboBox = new QComboBox(localGroupBox);
        baudComboBox->setObjectName(QStringLiteral("baudComboBox"));
        sizePolicy.setHeightForWidth(baudComboBox->sizePolicy().hasHeightForWidth());
        baudComboBox->setSizePolicy(sizePolicy);
        baudComboBox->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(baudComboBox, 3, 1, 1, 1);

        label_8 = new QLabel(localGroupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_8, 3, 2, 1, 1);

        maxFreqComboBox = new QComboBox(localGroupBox);
        maxFreqComboBox->setObjectName(QStringLiteral("maxFreqComboBox"));
        sizePolicy.setHeightForWidth(maxFreqComboBox->sizePolicy().hasHeightForWidth());
        maxFreqComboBox->setSizePolicy(sizePolicy);
        maxFreqComboBox->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(maxFreqComboBox, 3, 3, 1, 1);

        label_5 = new QLabel(localGroupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        airBaudComboBox = new QComboBox(localGroupBox);
        airBaudComboBox->setObjectName(QStringLiteral("airBaudComboBox"));
        sizePolicy.setHeightForWidth(airBaudComboBox->sizePolicy().hasHeightForWidth());
        airBaudComboBox->setSizePolicy(sizePolicy);
        airBaudComboBox->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(airBaudComboBox, 4, 1, 1, 1);

        label_9 = new QLabel(localGroupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_9, 4, 2, 1, 1);

        numChannelsSpinBox = new QSpinBox(localGroupBox);
        numChannelsSpinBox->setObjectName(QStringLiteral("numChannelsSpinBox"));
        numChannelsSpinBox->setMaximum(50);

        gridLayout->addWidget(numChannelsSpinBox, 4, 3, 1, 1);

        label_14 = new QLabel(localGroupBox);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_14, 5, 0, 1, 1);

        netIdSpinBox = new QSpinBox(localGroupBox);
        netIdSpinBox->setObjectName(QStringLiteral("netIdSpinBox"));
        netIdSpinBox->setMaximum(499);

        gridLayout->addWidget(netIdSpinBox, 5, 1, 1, 1);

        label_7 = new QLabel(localGroupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_7, 5, 2, 1, 1);

        dutyCycleSpinBox = new QSpinBox(localGroupBox);
        dutyCycleSpinBox->setObjectName(QStringLiteral("dutyCycleSpinBox"));
        dutyCycleSpinBox->setMaximum(100);

        gridLayout->addWidget(dutyCycleSpinBox, 5, 3, 1, 1);

        label_17 = new QLabel(localGroupBox);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_17, 6, 0, 1, 1);

        txPowerComboBox = new QComboBox(localGroupBox);
        txPowerComboBox->setObjectName(QStringLiteral("txPowerComboBox"));
        sizePolicy.setHeightForWidth(txPowerComboBox->sizePolicy().hasHeightForWidth());
        txPowerComboBox->setSizePolicy(sizePolicy);
        txPowerComboBox->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(txPowerComboBox, 6, 1, 1, 1);

        label_10 = new QLabel(localGroupBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_10, 6, 2, 1, 1);

        lbtRssiSpinBox = new QSpinBox(localGroupBox);
        lbtRssiSpinBox->setObjectName(QStringLiteral("lbtRssiSpinBox"));
        lbtRssiSpinBox->setMinimum(0);
        lbtRssiSpinBox->setValue(0);

        gridLayout->addWidget(lbtRssiSpinBox, 6, 3, 1, 1);

        eccCheckBox = new QCheckBox(localGroupBox);
        eccCheckBox->setObjectName(QStringLiteral("eccCheckBox"));

        gridLayout->addWidget(eccCheckBox, 7, 1, 1, 1);

        nodeIdComboBox = new QComboBox(localGroupBox);
        nodeIdComboBox->setObjectName(QStringLiteral("nodeIdComboBox"));
        nodeIdComboBox->setEnabled(false);

        gridLayout->addWidget(nodeIdComboBox, 7, 3, 1, 1);

        label_32 = new QLabel(localGroupBox);
        label_32->setObjectName(QStringLiteral("label_32"));

        gridLayout->addWidget(label_32, 8, 0, 1, 1);

        mavLinkComboBox = new QComboBox(localGroupBox);
        mavLinkComboBox->setObjectName(QStringLiteral("mavLinkComboBox"));
        sizePolicy.setHeightForWidth(mavLinkComboBox->sizePolicy().hasHeightForWidth());
        mavLinkComboBox->setSizePolicy(sizePolicy);
        mavLinkComboBox->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(mavLinkComboBox, 8, 1, 1, 1);

        label_12 = new QLabel(localGroupBox);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setEnabled(false);
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_12, 8, 2, 1, 1);

        nodeDestComboBox = new QComboBox(localGroupBox);
        nodeDestComboBox->setObjectName(QStringLiteral("nodeDestComboBox"));
        nodeDestComboBox->setEnabled(false);

        gridLayout->addWidget(nodeDestComboBox, 8, 3, 1, 1);

        opResendCheckBox = new QCheckBox(localGroupBox);
        opResendCheckBox->setObjectName(QStringLiteral("opResendCheckBox"));

        gridLayout->addWidget(opResendCheckBox, 9, 1, 1, 1);

        label_13 = new QLabel(localGroupBox);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setEnabled(false);
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_13, 9, 2, 1, 1);

        nodeCountComboBox = new QComboBox(localGroupBox);
        nodeCountComboBox->setObjectName(QStringLiteral("nodeCountComboBox"));
        nodeCountComboBox->setEnabled(false);

        gridLayout->addWidget(nodeCountComboBox, 9, 3, 1, 1);

        label_34 = new QLabel(localGroupBox);
        label_34->setObjectName(QStringLiteral("label_34"));

        gridLayout->addWidget(label_34, 10, 0, 1, 1);

        maxWindowSpinBox = new QSpinBox(localGroupBox);
        maxWindowSpinBox->setObjectName(QStringLiteral("maxWindowSpinBox"));
        maxWindowSpinBox->setMaximum(999);

        gridLayout->addWidget(maxWindowSpinBox, 10, 1, 1, 1);

        label_38 = new QLabel(localGroupBox);
        label_38->setObjectName(QStringLiteral("label_38"));

        gridLayout->addWidget(label_38, 10, 2, 1, 1);

        rtsCtsComboBox = new QComboBox(localGroupBox);
        rtsCtsComboBox->setObjectName(QStringLiteral("rtsCtsComboBox"));
        sizePolicy.setHeightForWidth(rtsCtsComboBox->sizePolicy().hasHeightForWidth());
        rtsCtsComboBox->setSizePolicy(sizePolicy);
        rtsCtsComboBox->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(rtsCtsComboBox, 10, 3, 1, 1);

        label_11 = new QLabel(localGroupBox);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setEnabled(false);
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_11, 7, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        localStatus = new QLabel(localGroupBox);
        localStatus->setObjectName(QStringLiteral("localStatus"));

        verticalLayout_2->addWidget(localStatus);

        copyToRemoteButton = new QPushButton(localGroupBox);
        copyToRemoteButton->setObjectName(QStringLiteral("copyToRemoteButton"));

        verticalLayout_2->addWidget(copyToRemoteButton);


        horizontalLayout->addWidget(localGroupBox);

        remoteGroupBox = new QGroupBox(Radio3DRConfig);
        remoteGroupBox->setObjectName(QStringLiteral("remoteGroupBox"));
        verticalLayout_3 = new QVBoxLayout(remoteGroupBox);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_27 = new QLabel(remoteGroupBox);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setMinimumSize(QSize(0, 23));
        label_27->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_27, 0, 0, 1, 1);

        versionLabel_remote = new QLabel(remoteGroupBox);
        versionLabel_remote->setObjectName(QStringLiteral("versionLabel_remote"));
        versionLabel_remote->setMinimumSize(QSize(210, 23));

        gridLayout_2->addWidget(versionLabel_remote, 0, 1, 1, 3);

        label_29 = new QLabel(remoteGroupBox);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_29, 1, 0, 1, 1);

        rssiTextEdit_remote = new QTextEdit(remoteGroupBox);
        rssiTextEdit_remote->setObjectName(QStringLiteral("rssiTextEdit_remote"));
        rssiTextEdit_remote->setEnabled(true);

        gridLayout_2->addWidget(rssiTextEdit_remote, 1, 1, 1, 3);

        label_30 = new QLabel(remoteGroupBox);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_30, 2, 0, 1, 1);

        formatLineEdit_remote = new QLineEdit(remoteGroupBox);
        formatLineEdit_remote->setObjectName(QStringLiteral("formatLineEdit_remote"));
        formatLineEdit_remote->setEnabled(false);

        gridLayout_2->addWidget(formatLineEdit_remote, 2, 1, 1, 1);

        minFreqComboBox_remote = new QComboBox(remoteGroupBox);
        minFreqComboBox_remote->setObjectName(QStringLiteral("minFreqComboBox_remote"));
        sizePolicy.setHeightForWidth(minFreqComboBox_remote->sizePolicy().hasHeightForWidth());
        minFreqComboBox_remote->setSizePolicy(sizePolicy);
        minFreqComboBox_remote->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_2->addWidget(minFreqComboBox_remote, 2, 3, 1, 1);

        label_26 = new QLabel(remoteGroupBox);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_26, 3, 0, 1, 1);

        baudComboBox_remote = new QComboBox(remoteGroupBox);
        baudComboBox_remote->setObjectName(QStringLiteral("baudComboBox_remote"));
        sizePolicy.setHeightForWidth(baudComboBox_remote->sizePolicy().hasHeightForWidth());
        baudComboBox_remote->setSizePolicy(sizePolicy);
        baudComboBox_remote->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_2->addWidget(baudComboBox_remote, 3, 1, 1, 1);

        maxFreqComboBox_remote = new QComboBox(remoteGroupBox);
        maxFreqComboBox_remote->setObjectName(QStringLiteral("maxFreqComboBox_remote"));
        sizePolicy.setHeightForWidth(maxFreqComboBox_remote->sizePolicy().hasHeightForWidth());
        maxFreqComboBox_remote->setSizePolicy(sizePolicy);
        maxFreqComboBox_remote->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_2->addWidget(maxFreqComboBox_remote, 3, 3, 1, 1);

        label_21 = new QLabel(remoteGroupBox);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_21, 4, 0, 1, 1);

        airBaudComboBox_remote = new QComboBox(remoteGroupBox);
        airBaudComboBox_remote->setObjectName(QStringLiteral("airBaudComboBox_remote"));
        sizePolicy.setHeightForWidth(airBaudComboBox_remote->sizePolicy().hasHeightForWidth());
        airBaudComboBox_remote->setSizePolicy(sizePolicy);
        airBaudComboBox_remote->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_2->addWidget(airBaudComboBox_remote, 4, 1, 1, 1);

        label_24 = new QLabel(remoteGroupBox);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_24, 4, 2, 1, 1);

        numChannelsSpinBox_remote = new QSpinBox(remoteGroupBox);
        numChannelsSpinBox_remote->setObjectName(QStringLiteral("numChannelsSpinBox_remote"));
        numChannelsSpinBox_remote->setMaximum(50);

        gridLayout_2->addWidget(numChannelsSpinBox_remote, 4, 3, 1, 1);

        label_18 = new QLabel(remoteGroupBox);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_18, 5, 0, 1, 1);

        netIdSpinBox_remote = new QSpinBox(remoteGroupBox);
        netIdSpinBox_remote->setObjectName(QStringLiteral("netIdSpinBox_remote"));
        netIdSpinBox_remote->setMaximum(499);

        gridLayout_2->addWidget(netIdSpinBox_remote, 5, 1, 1, 1);

        label_28 = new QLabel(remoteGroupBox);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_28, 5, 2, 1, 1);

        dutyCycleSpinBox_remote = new QSpinBox(remoteGroupBox);
        dutyCycleSpinBox_remote->setObjectName(QStringLiteral("dutyCycleSpinBox_remote"));
        dutyCycleSpinBox_remote->setMaximum(100);

        gridLayout_2->addWidget(dutyCycleSpinBox_remote, 5, 3, 1, 1);

        label_23 = new QLabel(remoteGroupBox);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_23, 6, 0, 1, 1);

        txPowerComboBox_remote = new QComboBox(remoteGroupBox);
        txPowerComboBox_remote->setObjectName(QStringLiteral("txPowerComboBox_remote"));
        sizePolicy.setHeightForWidth(txPowerComboBox_remote->sizePolicy().hasHeightForWidth());
        txPowerComboBox_remote->setSizePolicy(sizePolicy);
        txPowerComboBox_remote->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_2->addWidget(txPowerComboBox_remote, 6, 1, 1, 1);

        label_15 = new QLabel(remoteGroupBox);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_15, 6, 2, 1, 1);

        lbtRssiSpinBox_remote = new QSpinBox(remoteGroupBox);
        lbtRssiSpinBox_remote->setObjectName(QStringLiteral("lbtRssiSpinBox_remote"));

        gridLayout_2->addWidget(lbtRssiSpinBox_remote, 6, 3, 1, 1);

        eccCheckBox_remote = new QCheckBox(remoteGroupBox);
        eccCheckBox_remote->setObjectName(QStringLiteral("eccCheckBox_remote"));

        gridLayout_2->addWidget(eccCheckBox_remote, 7, 1, 1, 1);

        label_20 = new QLabel(remoteGroupBox);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setEnabled(false);
        label_20->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_20, 7, 2, 1, 1);

        nodeIdComboBox_remote = new QComboBox(remoteGroupBox);
        nodeIdComboBox_remote->setObjectName(QStringLiteral("nodeIdComboBox_remote"));
        nodeIdComboBox_remote->setEnabled(false);

        gridLayout_2->addWidget(nodeIdComboBox_remote, 7, 3, 1, 1);

        label_33 = new QLabel(remoteGroupBox);
        label_33->setObjectName(QStringLiteral("label_33"));

        gridLayout_2->addWidget(label_33, 8, 0, 1, 1);

        mavLinkComboBox_remote = new QComboBox(remoteGroupBox);
        mavLinkComboBox_remote->setObjectName(QStringLiteral("mavLinkComboBox_remote"));
        sizePolicy.setHeightForWidth(mavLinkComboBox_remote->sizePolicy().hasHeightForWidth());
        mavLinkComboBox_remote->setSizePolicy(sizePolicy);
        mavLinkComboBox_remote->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_2->addWidget(mavLinkComboBox_remote, 8, 1, 1, 1);

        label_19 = new QLabel(remoteGroupBox);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setEnabled(false);
        label_19->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_19, 8, 2, 1, 1);

        nodeDestComboBox_remote = new QComboBox(remoteGroupBox);
        nodeDestComboBox_remote->setObjectName(QStringLiteral("nodeDestComboBox_remote"));
        nodeDestComboBox_remote->setEnabled(false);

        gridLayout_2->addWidget(nodeDestComboBox_remote, 8, 3, 1, 1);

        opResendCheckBox_remote = new QCheckBox(remoteGroupBox);
        opResendCheckBox_remote->setObjectName(QStringLiteral("opResendCheckBox_remote"));

        gridLayout_2->addWidget(opResendCheckBox_remote, 9, 1, 1, 1);

        label_25 = new QLabel(remoteGroupBox);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setEnabled(false);
        label_25->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_25, 9, 2, 1, 1);

        nodeCountComboBox_remote = new QComboBox(remoteGroupBox);
        nodeCountComboBox_remote->setObjectName(QStringLiteral("nodeCountComboBox_remote"));
        nodeCountComboBox_remote->setEnabled(false);

        gridLayout_2->addWidget(nodeCountComboBox_remote, 9, 3, 1, 1);

        label_35 = new QLabel(remoteGroupBox);
        label_35->setObjectName(QStringLiteral("label_35"));

        gridLayout_2->addWidget(label_35, 10, 0, 1, 1);

        maxWindowSpinBox_remote = new QSpinBox(remoteGroupBox);
        maxWindowSpinBox_remote->setObjectName(QStringLiteral("maxWindowSpinBox_remote"));
        maxWindowSpinBox_remote->setMaximum(999);

        gridLayout_2->addWidget(maxWindowSpinBox_remote, 10, 1, 1, 1);

        label_37 = new QLabel(remoteGroupBox);
        label_37->setObjectName(QStringLiteral("label_37"));

        gridLayout_2->addWidget(label_37, 10, 2, 1, 1);

        rtsCtsComboBox_remote = new QComboBox(remoteGroupBox);
        rtsCtsComboBox_remote->setObjectName(QStringLiteral("rtsCtsComboBox_remote"));
        sizePolicy.setHeightForWidth(rtsCtsComboBox_remote->sizePolicy().hasHeightForWidth());
        rtsCtsComboBox_remote->setSizePolicy(sizePolicy);
        rtsCtsComboBox_remote->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_2->addWidget(rtsCtsComboBox_remote, 10, 3, 1, 1);

        label_22 = new QLabel(remoteGroupBox);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_22, 2, 2, 1, 1);

        label_16 = new QLabel(remoteGroupBox);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_16, 3, 2, 1, 1);


        verticalLayout_3->addLayout(gridLayout_2);

        remoteStatus = new QLabel(remoteGroupBox);
        remoteStatus->setObjectName(QStringLiteral("remoteStatus"));

        verticalLayout_3->addWidget(remoteStatus);

        remoteVerticalButtonSpacer = new QSpacerItem(20, 23, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(remoteVerticalButtonSpacer);


        horizontalLayout->addWidget(remoteGroupBox);


        horizontalLayout_4->addLayout(horizontalLayout);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);


        verticalLayout_5->addLayout(horizontalLayout_4);

        label_39 = new QLabel(Radio3DRConfig);
        label_39->setObjectName(QStringLiteral("label_39"));

        verticalLayout_5->addWidget(label_39);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        progressBar = new QProgressBar(Radio3DRConfig);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(0);

        horizontalLayout_3->addWidget(progressBar);

        horizontalSpacer_2 = new QSpacerItem(545, 17, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_5->addLayout(horizontalLayout_3);


        verticalLayout_6->addLayout(verticalLayout_5);

        label->raise();

        retranslateUi(Radio3DRConfig);

        QMetaObject::connectSlotsByName(Radio3DRConfig);
    } // setupUi

    void retranslateUi(QWidget *Radio3DRConfig)
    {
        Radio3DRConfig->setWindowTitle(QApplication::translate("Radio3DRConfig", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("Radio3DRConfig", "<h2>3DR Radio</h2>", Q_NULLPTR));
        loadSettingsButton->setText(QApplication::translate("Radio3DRConfig", "Load Settings", Q_NULLPTR));
        saveSettingsButton->setText(QApplication::translate("Radio3DRConfig", "Save Settings", Q_NULLPTR));
        resetDefaultsButton->setText(QApplication::translate("Radio3DRConfig", "Restore Defaults", Q_NULLPTR));
        flashPushButton->setText(QApplication::translate("Radio3DRConfig", "Flash FW", Q_NULLPTR));
        label_31->setText(QApplication::translate("Radio3DRConfig", "Link Settings", Q_NULLPTR));
        settingsButton->setText(QApplication::translate("Radio3DRConfig", "Adv. Settings", Q_NULLPTR));
        localGroupBox->setTitle(QApplication::translate("Radio3DRConfig", "Local", Q_NULLPTR));
        label_1->setText(QApplication::translate("Radio3DRConfig", "Version", Q_NULLPTR));
        versionLabel->setText(QString());
        label_2->setText(QApplication::translate("Radio3DRConfig", "RSSI", Q_NULLPTR));
        rssiTextEdit->setHtml(QApplication::translate("Radio3DRConfig", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.Helvetica Neue DeskInterface'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Lucida Grande';\"><br /></p></body></html>", Q_NULLPTR));
        label_3->setText(QApplication::translate("Radio3DRConfig", "Format", Q_NULLPTR));
        label_6->setText(QApplication::translate("Radio3DRConfig", "Min Freq.", Q_NULLPTR));
        label_4->setText(QApplication::translate("Radio3DRConfig", "Baud", Q_NULLPTR));
        label_8->setText(QApplication::translate("Radio3DRConfig", "Max Freq.", Q_NULLPTR));
        label_5->setText(QApplication::translate("Radio3DRConfig", "Air Baud", Q_NULLPTR));
        label_9->setText(QApplication::translate("Radio3DRConfig", "# Channels", Q_NULLPTR));
        label_14->setText(QApplication::translate("Radio3DRConfig", "Net ID", Q_NULLPTR));
        label_7->setText(QApplication::translate("Radio3DRConfig", "Duty Cycle", Q_NULLPTR));
        label_17->setText(QApplication::translate("Radio3DRConfig", "Tx Power", Q_NULLPTR));
        label_10->setText(QApplication::translate("Radio3DRConfig", "LBT RSSI", Q_NULLPTR));
        eccCheckBox->setText(QApplication::translate("Radio3DRConfig", "ECC", Q_NULLPTR));
        label_32->setText(QApplication::translate("Radio3DRConfig", "MAVLink", Q_NULLPTR));
        label_12->setText(QApplication::translate("Radio3DRConfig", "Node Dest.", Q_NULLPTR));
        opResendCheckBox->setText(QApplication::translate("Radio3DRConfig", "Op Resend", Q_NULLPTR));
        label_13->setText(QApplication::translate("Radio3DRConfig", "Node Count", Q_NULLPTR));
        label_34->setText(QApplication::translate("Radio3DRConfig", "Max Win", Q_NULLPTR));
        label_38->setText(QApplication::translate("Radio3DRConfig", "HW Flow", Q_NULLPTR));
        label_11->setText(QApplication::translate("Radio3DRConfig", "Node ID", Q_NULLPTR));
        localStatus->setText(QApplication::translate("Radio3DRConfig", "STATUS:", Q_NULLPTR));
        copyToRemoteButton->setText(QApplication::translate("Radio3DRConfig", "Copy Required Items to Remote", Q_NULLPTR));
        remoteGroupBox->setTitle(QApplication::translate("Radio3DRConfig", "Remote", Q_NULLPTR));
        label_27->setText(QApplication::translate("Radio3DRConfig", "Version", Q_NULLPTR));
        versionLabel_remote->setText(QString());
        label_29->setText(QApplication::translate("Radio3DRConfig", "RSSI", Q_NULLPTR));
        label_30->setText(QApplication::translate("Radio3DRConfig", "Format", Q_NULLPTR));
        label_26->setText(QApplication::translate("Radio3DRConfig", "Baud", Q_NULLPTR));
        label_21->setText(QApplication::translate("Radio3DRConfig", "Air Baud", Q_NULLPTR));
        label_24->setText(QApplication::translate("Radio3DRConfig", "# Channels", Q_NULLPTR));
        label_18->setText(QApplication::translate("Radio3DRConfig", "Net ID", Q_NULLPTR));
        label_28->setText(QApplication::translate("Radio3DRConfig", "Duty Cycle", Q_NULLPTR));
        label_23->setText(QApplication::translate("Radio3DRConfig", "Tx Power", Q_NULLPTR));
        label_15->setText(QApplication::translate("Radio3DRConfig", "LBT RSSI", Q_NULLPTR));
        eccCheckBox_remote->setText(QApplication::translate("Radio3DRConfig", "ECC", Q_NULLPTR));
        label_20->setText(QApplication::translate("Radio3DRConfig", "Node ID", Q_NULLPTR));
        label_33->setText(QApplication::translate("Radio3DRConfig", "MAVLink", Q_NULLPTR));
        label_19->setText(QApplication::translate("Radio3DRConfig", "Node Dest.", Q_NULLPTR));
        opResendCheckBox_remote->setText(QApplication::translate("Radio3DRConfig", "Op Resend", Q_NULLPTR));
        label_25->setText(QApplication::translate("Radio3DRConfig", "Node Count", Q_NULLPTR));
        label_35->setText(QApplication::translate("Radio3DRConfig", "Max Win", Q_NULLPTR));
        label_37->setText(QApplication::translate("Radio3DRConfig", "HW Flow", Q_NULLPTR));
        label_22->setText(QApplication::translate("Radio3DRConfig", "Min Freq.", Q_NULLPTR));
        label_16->setText(QApplication::translate("Radio3DRConfig", "Max Freq.", Q_NULLPTR));
        remoteStatus->setText(QApplication::translate("Radio3DRConfig", "STATUS:", Q_NULLPTR));
        label_39->setText(QApplication::translate("Radio3DRConfig", "Update Progress", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Radio3DRConfig: public Ui_Radio3DRConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RADIO3DRCONFIG_H
