/********************************************************************************
** Form generated from reading UI file 'ArduRoverPidConfig.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARDUROVERPIDCONFIG_H
#define UI_ARDUROVERPIDCONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ArduRoverPidConfig
{
public:
    QLabel *label;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox_10;
    QVBoxLayout *verticalLayout_24;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_25;
    QLabel *label_38;
    QLabel *label_39;
    QLabel *label_40;
    QLabel *label_41;
    QVBoxLayout *verticalLayout_26;
    QDoubleSpinBox *throttleCruiseSpinBox;
    QDoubleSpinBox *throttleMinSpinBox;
    QDoubleSpinBox *throttleMaxSpinBox;
    QDoubleSpinBox *throttleFSSpinBox;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_18;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QVBoxLayout *verticalLayout_10;
    QDoubleSpinBox *steer2ServoPSpinBox;
    QDoubleSpinBox *steer2ServoISpinBox;
    QDoubleSpinBox *steer2ServoDSpinBox;
    QDoubleSpinBox *steer2ServoIMAXSpinBox;
    QGroupBox *groupBox_9;
    QVBoxLayout *verticalLayout_22;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_17;
    QLabel *label_34;
    QLabel *label_35;
    QVBoxLayout *verticalLayout_23;
    QDoubleSpinBox *L1PeriodSpinBox;
    QDoubleSpinBox *L1DampeningSpinBox;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_7;
    QVBoxLayout *verticalLayout_20;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QVBoxLayout *verticalLayout_14;
    QDoubleSpinBox *speed2ThrottlePSpinBox;
    QDoubleSpinBox *speed2ThrottleISpinBox;
    QDoubleSpinBox *speed2ThrottleDSpinBox;
    QDoubleSpinBox *speed2ThrottleIMAXSpinBox;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_19;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QVBoxLayout *verticalLayout_12;
    QDoubleSpinBox *roverCruiseSpinBox;
    QDoubleSpinBox *roverTurnSpeedSpinBox;
    QDoubleSpinBox *roverTurnDistSpinBox;
    QDoubleSpinBox *roverWPRadiusSpinBox;
    QGroupBox *groupBox_8;
    QVBoxLayout *verticalLayout_21;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_15;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_33;
    QVBoxLayout *verticalLayout_16;
    QDoubleSpinBox *sonarTriggerSpinBox;
    QDoubleSpinBox *sonarTurnAngleSpinBox;
    QDoubleSpinBox *sonarTurnTimeSpinBox;
    QDoubleSpinBox *sonaeDebounceSpinBox;
    QPushButton *refreshPushButton;
    QPushButton *writePushButton;

    void setupUi(QWidget *ArduRoverPidConfig)
    {
        if (ArduRoverPidConfig->objectName().isEmpty())
            ArduRoverPidConfig->setObjectName(QStringLiteral("ArduRoverPidConfig"));
        ArduRoverPidConfig->resize(739, 480);
        label = new QLabel(ArduRoverPidConfig);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 73, 24));
        gridLayoutWidget = new QWidget(ArduRoverPidConfig);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(30, 40, 637, 381));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        groupBox_10 = new QGroupBox(gridLayoutWidget);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_10->sizePolicy().hasHeightForWidth());
        groupBox_10->setSizePolicy(sizePolicy);
        groupBox_10->setMinimumSize(QSize(200, 150));
        groupBox_10->setMaximumSize(QSize(200, 150));
        verticalLayout_24 = new QVBoxLayout(groupBox_10);
        verticalLayout_24->setObjectName(QStringLiteral("verticalLayout_24"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        verticalLayout_25 = new QVBoxLayout();
        verticalLayout_25->setObjectName(QStringLiteral("verticalLayout_25"));
        label_38 = new QLabel(groupBox_10);
        label_38->setObjectName(QStringLiteral("label_38"));

        verticalLayout_25->addWidget(label_38);

        label_39 = new QLabel(groupBox_10);
        label_39->setObjectName(QStringLiteral("label_39"));

        verticalLayout_25->addWidget(label_39);

        label_40 = new QLabel(groupBox_10);
        label_40->setObjectName(QStringLiteral("label_40"));

        verticalLayout_25->addWidget(label_40);

        label_41 = new QLabel(groupBox_10);
        label_41->setObjectName(QStringLiteral("label_41"));

        verticalLayout_25->addWidget(label_41);


        horizontalLayout_10->addLayout(verticalLayout_25);

        verticalLayout_26 = new QVBoxLayout();
        verticalLayout_26->setObjectName(QStringLiteral("verticalLayout_26"));
        throttleCruiseSpinBox = new QDoubleSpinBox(groupBox_10);
        throttleCruiseSpinBox->setObjectName(QStringLiteral("throttleCruiseSpinBox"));
        throttleCruiseSpinBox->setDecimals(3);
        throttleCruiseSpinBox->setMinimum(-10000);
        throttleCruiseSpinBox->setMaximum(10000);

        verticalLayout_26->addWidget(throttleCruiseSpinBox);

        throttleMinSpinBox = new QDoubleSpinBox(groupBox_10);
        throttleMinSpinBox->setObjectName(QStringLiteral("throttleMinSpinBox"));
        throttleMinSpinBox->setDecimals(3);
        throttleMinSpinBox->setMinimum(-10000);
        throttleMinSpinBox->setMaximum(10000);

        verticalLayout_26->addWidget(throttleMinSpinBox);

        throttleMaxSpinBox = new QDoubleSpinBox(groupBox_10);
        throttleMaxSpinBox->setObjectName(QStringLiteral("throttleMaxSpinBox"));
        throttleMaxSpinBox->setDecimals(3);
        throttleMaxSpinBox->setMinimum(-10000);
        throttleMaxSpinBox->setMaximum(10000);

        verticalLayout_26->addWidget(throttleMaxSpinBox);

        throttleFSSpinBox = new QDoubleSpinBox(groupBox_10);
        throttleFSSpinBox->setObjectName(QStringLiteral("throttleFSSpinBox"));
        throttleFSSpinBox->setMinimum(-10000);
        throttleFSSpinBox->setMaximum(10000);

        verticalLayout_26->addWidget(throttleFSSpinBox);


        horizontalLayout_10->addLayout(verticalLayout_26);


        verticalLayout_24->addLayout(horizontalLayout_10);


        gridLayout->addWidget(groupBox_10, 0, 2, 1, 1);

        groupBox_5 = new QGroupBox(gridLayoutWidget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        sizePolicy.setHeightForWidth(groupBox_5->sizePolicy().hasHeightForWidth());
        groupBox_5->setSizePolicy(sizePolicy);
        groupBox_5->setMinimumSize(QSize(200, 150));
        groupBox_5->setMaximumSize(QSize(200, 150));
        verticalLayout_18 = new QVBoxLayout(groupBox_5);
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label_18 = new QLabel(groupBox_5);
        label_18->setObjectName(QStringLiteral("label_18"));

        verticalLayout_9->addWidget(label_18);

        label_19 = new QLabel(groupBox_5);
        label_19->setObjectName(QStringLiteral("label_19"));

        verticalLayout_9->addWidget(label_19);

        label_20 = new QLabel(groupBox_5);
        label_20->setObjectName(QStringLiteral("label_20"));

        verticalLayout_9->addWidget(label_20);

        label_21 = new QLabel(groupBox_5);
        label_21->setObjectName(QStringLiteral("label_21"));

        verticalLayout_9->addWidget(label_21);


        horizontalLayout_5->addLayout(verticalLayout_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        steer2ServoPSpinBox = new QDoubleSpinBox(groupBox_5);
        steer2ServoPSpinBox->setObjectName(QStringLiteral("steer2ServoPSpinBox"));
        steer2ServoPSpinBox->setDecimals(3);
        steer2ServoPSpinBox->setMinimum(-10000);
        steer2ServoPSpinBox->setMaximum(10000);

        verticalLayout_10->addWidget(steer2ServoPSpinBox);

        steer2ServoISpinBox = new QDoubleSpinBox(groupBox_5);
        steer2ServoISpinBox->setObjectName(QStringLiteral("steer2ServoISpinBox"));
        steer2ServoISpinBox->setDecimals(3);
        steer2ServoISpinBox->setMinimum(-10000);
        steer2ServoISpinBox->setMaximum(10000);

        verticalLayout_10->addWidget(steer2ServoISpinBox);

        steer2ServoDSpinBox = new QDoubleSpinBox(groupBox_5);
        steer2ServoDSpinBox->setObjectName(QStringLiteral("steer2ServoDSpinBox"));
        steer2ServoDSpinBox->setDecimals(3);
        steer2ServoDSpinBox->setMinimum(-10000);
        steer2ServoDSpinBox->setMaximum(10000);

        verticalLayout_10->addWidget(steer2ServoDSpinBox);

        steer2ServoIMAXSpinBox = new QDoubleSpinBox(groupBox_5);
        steer2ServoIMAXSpinBox->setObjectName(QStringLiteral("steer2ServoIMAXSpinBox"));
        steer2ServoIMAXSpinBox->setMinimum(-10000);
        steer2ServoIMAXSpinBox->setMaximum(10000);

        verticalLayout_10->addWidget(steer2ServoIMAXSpinBox);


        horizontalLayout_5->addLayout(verticalLayout_10);


        verticalLayout_18->addLayout(horizontalLayout_5);


        gridLayout->addWidget(groupBox_5, 0, 0, 1, 1);

        groupBox_9 = new QGroupBox(gridLayoutWidget);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        sizePolicy.setHeightForWidth(groupBox_9->sizePolicy().hasHeightForWidth());
        groupBox_9->setSizePolicy(sizePolicy);
        groupBox_9->setMinimumSize(QSize(200, 150));
        groupBox_9->setMaximumSize(QSize(200, 150));
        verticalLayout_22 = new QVBoxLayout(groupBox_9);
        verticalLayout_22->setObjectName(QStringLiteral("verticalLayout_22"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        label_34 = new QLabel(groupBox_9);
        label_34->setObjectName(QStringLiteral("label_34"));

        verticalLayout_17->addWidget(label_34);

        label_35 = new QLabel(groupBox_9);
        label_35->setObjectName(QStringLiteral("label_35"));

        verticalLayout_17->addWidget(label_35);


        horizontalLayout_9->addLayout(verticalLayout_17);

        verticalLayout_23 = new QVBoxLayout();
        verticalLayout_23->setObjectName(QStringLiteral("verticalLayout_23"));
        L1PeriodSpinBox = new QDoubleSpinBox(groupBox_9);
        L1PeriodSpinBox->setObjectName(QStringLiteral("L1PeriodSpinBox"));
        L1PeriodSpinBox->setDecimals(3);
        L1PeriodSpinBox->setMinimum(-10000);
        L1PeriodSpinBox->setMaximum(10000);
        L1PeriodSpinBox->setSingleStep(0.05);

        verticalLayout_23->addWidget(L1PeriodSpinBox);

        L1DampeningSpinBox = new QDoubleSpinBox(groupBox_9);
        L1DampeningSpinBox->setObjectName(QStringLiteral("L1DampeningSpinBox"));
        L1DampeningSpinBox->setDecimals(3);
        L1DampeningSpinBox->setMinimum(-10000);
        L1DampeningSpinBox->setMaximum(10000);
        L1DampeningSpinBox->setSingleStep(0.5);

        verticalLayout_23->addWidget(L1DampeningSpinBox);


        horizontalLayout_9->addLayout(verticalLayout_23);


        verticalLayout_22->addLayout(horizontalLayout_9);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_22->addItem(verticalSpacer);


        gridLayout->addWidget(groupBox_9, 1, 0, 1, 1);

        groupBox_7 = new QGroupBox(gridLayoutWidget);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        sizePolicy.setHeightForWidth(groupBox_7->sizePolicy().hasHeightForWidth());
        groupBox_7->setSizePolicy(sizePolicy);
        groupBox_7->setMinimumSize(QSize(200, 150));
        groupBox_7->setMaximumSize(QSize(200, 150));
        verticalLayout_20 = new QVBoxLayout(groupBox_7);
        verticalLayout_20->setObjectName(QStringLiteral("verticalLayout_20"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        label_26 = new QLabel(groupBox_7);
        label_26->setObjectName(QStringLiteral("label_26"));

        verticalLayout_13->addWidget(label_26);

        label_27 = new QLabel(groupBox_7);
        label_27->setObjectName(QStringLiteral("label_27"));

        verticalLayout_13->addWidget(label_27);

        label_28 = new QLabel(groupBox_7);
        label_28->setObjectName(QStringLiteral("label_28"));

        verticalLayout_13->addWidget(label_28);

        label_29 = new QLabel(groupBox_7);
        label_29->setObjectName(QStringLiteral("label_29"));

        verticalLayout_13->addWidget(label_29);


        horizontalLayout_7->addLayout(verticalLayout_13);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        speed2ThrottlePSpinBox = new QDoubleSpinBox(groupBox_7);
        speed2ThrottlePSpinBox->setObjectName(QStringLiteral("speed2ThrottlePSpinBox"));
        speed2ThrottlePSpinBox->setDecimals(3);
        speed2ThrottlePSpinBox->setMinimum(-10000);
        speed2ThrottlePSpinBox->setMaximum(10000);

        verticalLayout_14->addWidget(speed2ThrottlePSpinBox);

        speed2ThrottleISpinBox = new QDoubleSpinBox(groupBox_7);
        speed2ThrottleISpinBox->setObjectName(QStringLiteral("speed2ThrottleISpinBox"));
        speed2ThrottleISpinBox->setDecimals(3);
        speed2ThrottleISpinBox->setMinimum(-10000);
        speed2ThrottleISpinBox->setMaximum(10000);

        verticalLayout_14->addWidget(speed2ThrottleISpinBox);

        speed2ThrottleDSpinBox = new QDoubleSpinBox(groupBox_7);
        speed2ThrottleDSpinBox->setObjectName(QStringLiteral("speed2ThrottleDSpinBox"));
        speed2ThrottleDSpinBox->setDecimals(3);
        speed2ThrottleDSpinBox->setMinimum(-10000);
        speed2ThrottleDSpinBox->setMaximum(10000);

        verticalLayout_14->addWidget(speed2ThrottleDSpinBox);

        speed2ThrottleIMAXSpinBox = new QDoubleSpinBox(groupBox_7);
        speed2ThrottleIMAXSpinBox->setObjectName(QStringLiteral("speed2ThrottleIMAXSpinBox"));
        speed2ThrottleIMAXSpinBox->setMinimum(-10000);
        speed2ThrottleIMAXSpinBox->setMaximum(10000);

        verticalLayout_14->addWidget(speed2ThrottleIMAXSpinBox);


        horizontalLayout_7->addLayout(verticalLayout_14);


        verticalLayout_20->addLayout(horizontalLayout_7);


        gridLayout->addWidget(groupBox_7, 0, 1, 1, 1);

        groupBox_6 = new QGroupBox(gridLayoutWidget);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        sizePolicy.setHeightForWidth(groupBox_6->sizePolicy().hasHeightForWidth());
        groupBox_6->setSizePolicy(sizePolicy);
        groupBox_6->setMinimumSize(QSize(200, 150));
        groupBox_6->setMaximumSize(QSize(200, 150));
        verticalLayout_19 = new QVBoxLayout(groupBox_6);
        verticalLayout_19->setObjectName(QStringLiteral("verticalLayout_19"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        label_22 = new QLabel(groupBox_6);
        label_22->setObjectName(QStringLiteral("label_22"));

        verticalLayout_11->addWidget(label_22);

        label_23 = new QLabel(groupBox_6);
        label_23->setObjectName(QStringLiteral("label_23"));

        verticalLayout_11->addWidget(label_23);

        label_24 = new QLabel(groupBox_6);
        label_24->setObjectName(QStringLiteral("label_24"));

        verticalLayout_11->addWidget(label_24);

        label_25 = new QLabel(groupBox_6);
        label_25->setObjectName(QStringLiteral("label_25"));

        verticalLayout_11->addWidget(label_25);


        horizontalLayout_6->addLayout(verticalLayout_11);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        roverCruiseSpinBox = new QDoubleSpinBox(groupBox_6);
        roverCruiseSpinBox->setObjectName(QStringLiteral("roverCruiseSpinBox"));
        roverCruiseSpinBox->setDecimals(3);
        roverCruiseSpinBox->setMinimum(-10000);
        roverCruiseSpinBox->setMaximum(10000);

        verticalLayout_12->addWidget(roverCruiseSpinBox);

        roverTurnSpeedSpinBox = new QDoubleSpinBox(groupBox_6);
        roverTurnSpeedSpinBox->setObjectName(QStringLiteral("roverTurnSpeedSpinBox"));
        roverTurnSpeedSpinBox->setDecimals(3);
        roverTurnSpeedSpinBox->setMinimum(-10000);
        roverTurnSpeedSpinBox->setMaximum(10000);

        verticalLayout_12->addWidget(roverTurnSpeedSpinBox);

        roverTurnDistSpinBox = new QDoubleSpinBox(groupBox_6);
        roverTurnDistSpinBox->setObjectName(QStringLiteral("roverTurnDistSpinBox"));
        roverTurnDistSpinBox->setDecimals(3);
        roverTurnDistSpinBox->setMinimum(-10000);
        roverTurnDistSpinBox->setMaximum(10000);

        verticalLayout_12->addWidget(roverTurnDistSpinBox);

        roverWPRadiusSpinBox = new QDoubleSpinBox(groupBox_6);
        roverWPRadiusSpinBox->setObjectName(QStringLiteral("roverWPRadiusSpinBox"));
        roverWPRadiusSpinBox->setMinimum(-10000);
        roverWPRadiusSpinBox->setMaximum(10000);

        verticalLayout_12->addWidget(roverWPRadiusSpinBox);


        horizontalLayout_6->addLayout(verticalLayout_12);


        verticalLayout_19->addLayout(horizontalLayout_6);


        gridLayout->addWidget(groupBox_6, 1, 1, 1, 1);

        groupBox_8 = new QGroupBox(gridLayoutWidget);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setMinimumSize(QSize(200, 150));
        groupBox_8->setMaximumSize(QSize(200, 150));
        verticalLayout_21 = new QVBoxLayout(groupBox_8);
        verticalLayout_21->setObjectName(QStringLiteral("verticalLayout_21"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        label_30 = new QLabel(groupBox_8);
        label_30->setObjectName(QStringLiteral("label_30"));

        verticalLayout_15->addWidget(label_30);

        label_31 = new QLabel(groupBox_8);
        label_31->setObjectName(QStringLiteral("label_31"));

        verticalLayout_15->addWidget(label_31);

        label_32 = new QLabel(groupBox_8);
        label_32->setObjectName(QStringLiteral("label_32"));

        verticalLayout_15->addWidget(label_32);

        label_33 = new QLabel(groupBox_8);
        label_33->setObjectName(QStringLiteral("label_33"));

        verticalLayout_15->addWidget(label_33);


        horizontalLayout_8->addLayout(verticalLayout_15);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        sonarTriggerSpinBox = new QDoubleSpinBox(groupBox_8);
        sonarTriggerSpinBox->setObjectName(QStringLiteral("sonarTriggerSpinBox"));
        sonarTriggerSpinBox->setDecimals(3);
        sonarTriggerSpinBox->setMinimum(-10000);
        sonarTriggerSpinBox->setMaximum(10000);

        verticalLayout_16->addWidget(sonarTriggerSpinBox);

        sonarTurnAngleSpinBox = new QDoubleSpinBox(groupBox_8);
        sonarTurnAngleSpinBox->setObjectName(QStringLiteral("sonarTurnAngleSpinBox"));
        sonarTurnAngleSpinBox->setDecimals(3);
        sonarTurnAngleSpinBox->setMinimum(-10000);
        sonarTurnAngleSpinBox->setMaximum(10000);

        verticalLayout_16->addWidget(sonarTurnAngleSpinBox);

        sonarTurnTimeSpinBox = new QDoubleSpinBox(groupBox_8);
        sonarTurnTimeSpinBox->setObjectName(QStringLiteral("sonarTurnTimeSpinBox"));
        sonarTurnTimeSpinBox->setDecimals(3);
        sonarTurnTimeSpinBox->setMinimum(-10000);
        sonarTurnTimeSpinBox->setMaximum(10000);

        verticalLayout_16->addWidget(sonarTurnTimeSpinBox);

        sonaeDebounceSpinBox = new QDoubleSpinBox(groupBox_8);
        sonaeDebounceSpinBox->setObjectName(QStringLiteral("sonaeDebounceSpinBox"));
        sonaeDebounceSpinBox->setMinimum(-10000);
        sonaeDebounceSpinBox->setMaximum(10000);

        verticalLayout_16->addWidget(sonaeDebounceSpinBox);


        horizontalLayout_8->addLayout(verticalLayout_16);


        verticalLayout_21->addLayout(horizontalLayout_8);


        gridLayout->addWidget(groupBox_8, 1, 2, 1, 1);

        refreshPushButton = new QPushButton(gridLayoutWidget);
        refreshPushButton->setObjectName(QStringLiteral("refreshPushButton"));

        gridLayout->addWidget(refreshPushButton, 2, 2, 1, 1);

        writePushButton = new QPushButton(gridLayoutWidget);
        writePushButton->setObjectName(QStringLiteral("writePushButton"));

        gridLayout->addWidget(writePushButton, 2, 1, 1, 1);


        retranslateUi(ArduRoverPidConfig);

        QMetaObject::connectSlotsByName(ArduRoverPidConfig);
    } // setupUi

    void retranslateUi(QWidget *ArduRoverPidConfig)
    {
        ArduRoverPidConfig->setWindowTitle(QApplication::translate("ArduRoverPidConfig", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("ArduRoverPidConfig", "<html><head/><body><p><span style=\" font-size:x-large; font-weight:600;\">Tuning</span></p></body></html>", Q_NULLPTR));
        groupBox_10->setTitle(QApplication::translate("ArduRoverPidConfig", "Throttle 0-100%", Q_NULLPTR));
        label_38->setText(QApplication::translate("ArduRoverPidConfig", "Cruise", Q_NULLPTR));
        label_39->setText(QApplication::translate("ArduRoverPidConfig", "Min", Q_NULLPTR));
        label_40->setText(QApplication::translate("ArduRoverPidConfig", "Max", Q_NULLPTR));
        label_41->setText(QApplication::translate("ArduRoverPidConfig", "FS Value", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("ArduRoverPidConfig", "Steer 2 Servo", Q_NULLPTR));
        label_18->setText(QApplication::translate("ArduRoverPidConfig", "P", Q_NULLPTR));
        label_19->setText(QApplication::translate("ArduRoverPidConfig", "I", Q_NULLPTR));
        label_20->setText(QApplication::translate("ArduRoverPidConfig", "D", Q_NULLPTR));
        label_21->setText(QApplication::translate("ArduRoverPidConfig", "INT_MAX", Q_NULLPTR));
        groupBox_9->setTitle(QApplication::translate("ArduRoverPidConfig", "L1 Control - Turn Control", Q_NULLPTR));
        label_34->setText(QApplication::translate("ArduRoverPidConfig", "Period", Q_NULLPTR));
        label_35->setText(QApplication::translate("ArduRoverPidConfig", "Damping", Q_NULLPTR));
        groupBox_7->setTitle(QApplication::translate("ArduRoverPidConfig", "Speed 2 Throttle", Q_NULLPTR));
        label_26->setText(QApplication::translate("ArduRoverPidConfig", "P", Q_NULLPTR));
        label_27->setText(QApplication::translate("ArduRoverPidConfig", "I", Q_NULLPTR));
        label_28->setText(QApplication::translate("ArduRoverPidConfig", "D", Q_NULLPTR));
        label_29->setText(QApplication::translate("ArduRoverPidConfig", "INT_MAX", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("ArduRoverPidConfig", "Rover", Q_NULLPTR));
        label_22->setText(QApplication::translate("ArduRoverPidConfig", "Cruise Speed", Q_NULLPTR));
        label_23->setText(QApplication::translate("ArduRoverPidConfig", "Turn Speed", Q_NULLPTR));
        label_24->setText(QApplication::translate("ArduRoverPidConfig", "Turn Dist", Q_NULLPTR));
        label_25->setText(QApplication::translate("ArduRoverPidConfig", "WP Radius", Q_NULLPTR));
        groupBox_8->setTitle(QApplication::translate("ArduRoverPidConfig", "Sonar", Q_NULLPTR));
        label_30->setText(QApplication::translate("ArduRoverPidConfig", "Trigger cm", Q_NULLPTR));
        label_31->setText(QApplication::translate("ArduRoverPidConfig", "Turn Angle", Q_NULLPTR));
        label_32->setText(QApplication::translate("ArduRoverPidConfig", "Turn Time", Q_NULLPTR));
        label_33->setText(QApplication::translate("ArduRoverPidConfig", "Debounce", Q_NULLPTR));
        refreshPushButton->setText(QApplication::translate("ArduRoverPidConfig", "Refresh Params", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        refreshPushButton->setShortcut(QApplication::translate("ArduRoverPidConfig", "Ctrl+R", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        writePushButton->setText(QApplication::translate("ArduRoverPidConfig", "Write Params", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        writePushButton->setShortcut(QApplication::translate("ArduRoverPidConfig", "Ctrl+W", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
    } // retranslateUi

};

namespace Ui {
    class ArduRoverPidConfig: public Ui_ArduRoverPidConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARDUROVERPIDCONFIG_H
