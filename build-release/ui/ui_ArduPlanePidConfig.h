/********************************************************************************
** Form generated from reading UI file 'ArduPlanePidConfig.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARDUPLANEPIDCONFIG_H
#define UI_ARDUPLANEPIDCONFIG_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ArduPlanePidConfig
{
public:
    QVBoxLayout *verticalLayout_9;
    QGridLayout *gridLayout;
    QGroupBox *TECSGoupBox;
    QVBoxLayout *verticalLayout_13;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_32;
    QLabel *label_15;
    QLabel *label_16;
    QVBoxLayout *verticalLayout_8;
    QDoubleSpinBox *climbMaxSpinBox;
    QDoubleSpinBox *sinkMinSpinBox;
    QDoubleSpinBox *sinkMaxSpinBox;
    QDoubleSpinBox *pitchDampSpinBox;
    QDoubleSpinBox *timeConstSpinBox;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_16;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QVBoxLayout *verticalLayout_6;
    QDoubleSpinBox *servoYawPSpinBox;
    QDoubleSpinBox *servoYawISpinBox;
    QDoubleSpinBox *servoYawDSpinBox;
    QDoubleSpinBox *servoYawIMAXSpinBox;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_14;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_2;
    QDoubleSpinBox *servoRollPSpinBox;
    QDoubleSpinBox *servoRollISpinBox;
    QDoubleSpinBox *servoRollDSpinBox;
    QDoubleSpinBox *servoRollIMAXSpinBox;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_15;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QVBoxLayout *verticalLayout_4;
    QDoubleSpinBox *servoPitchPSpinBox;
    QDoubleSpinBox *servoPitchISpinBox;
    QDoubleSpinBox *servoPitchDSpinBox;
    QDoubleSpinBox *servoPitchIMAXSpinBox;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_29;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout_27;
    QLabel *label_41;
    QLabel *label_42;
    QVBoxLayout *verticalLayout_28;
    QDoubleSpinBox *l1PeriodSpinBox;
    QDoubleSpinBox *l1DampingSpinBox;
    QGroupBox *groupBox_10;
    QVBoxLayout *verticalLayout_33;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_23;
    QLabel *label_33;
    QLabel *label_34;
    QLabel *label_35;
    QVBoxLayout *verticalLayout_24;
    QDoubleSpinBox *navBankMaxSpinBox;
    QDoubleSpinBox *navPitchMaxSpinBox;
    QDoubleSpinBox *navPitchMinSpinBox;
    QGroupBox *groupBox_7;
    QVBoxLayout *verticalLayout_31;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_19;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QVBoxLayout *verticalLayout_20;
    QDoubleSpinBox *throttleTrimSpinBox;
    QDoubleSpinBox *throttleMinSpinBox;
    QDoubleSpinBox *throttleMaxSpinBox;
    QDoubleSpinBox *throttleSlewRateSpinBox;
    QGroupBox *groupBox_9;
    QVBoxLayout *verticalLayout_30;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_21;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QVBoxLayout *verticalLayout_22;
    QDoubleSpinBox *otherPtTSpinBox;
    QDoubleSpinBox *otherPitchCompSpinBox;
    QDoubleSpinBox *otherRudderMixSpinBox;
    QGroupBox *groupBox_8;
    QVBoxLayout *verticalLayout_32;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_25;
    QLabel *label_37;
    QLabel *label_38;
    QLabel *label_39;
    QLabel *label_40;
    QVBoxLayout *verticalLayout_26;
    QDoubleSpinBox *airspeedCruiseSpinBox;
    QDoubleSpinBox *airspeedFBWMinSpinBox;
    QDoubleSpinBox *airspeedFBWMaxSpinBox;
    QDoubleSpinBox *airspeedRatioSpinBox;
    QVBoxLayout *verticalLayout_34;
    QPushButton *writePushButton;
    QPushButton *refreshPushButton;

    void setupUi(QWidget *ArduPlanePidConfig)
    {
        if (ArduPlanePidConfig->objectName().isEmpty())
            ArduPlanePidConfig->setObjectName(QStringLiteral("ArduPlanePidConfig"));
        ArduPlanePidConfig->resize(705, 700);
        ArduPlanePidConfig->setMaximumSize(QSize(705, 700));
        verticalLayout_9 = new QVBoxLayout(ArduPlanePidConfig);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetFixedSize);
        TECSGoupBox = new QGroupBox(ArduPlanePidConfig);
        TECSGoupBox->setObjectName(QStringLiteral("TECSGoupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TECSGoupBox->sizePolicy().hasHeightForWidth());
        TECSGoupBox->setSizePolicy(sizePolicy);
        verticalLayout_13 = new QVBoxLayout(TECSGoupBox);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_13 = new QLabel(TECSGoupBox);
        label_13->setObjectName(QStringLiteral("label_13"));

        verticalLayout_7->addWidget(label_13);

        label_14 = new QLabel(TECSGoupBox);
        label_14->setObjectName(QStringLiteral("label_14"));

        verticalLayout_7->addWidget(label_14);

        label_32 = new QLabel(TECSGoupBox);
        label_32->setObjectName(QStringLiteral("label_32"));

        verticalLayout_7->addWidget(label_32);

        label_15 = new QLabel(TECSGoupBox);
        label_15->setObjectName(QStringLiteral("label_15"));

        verticalLayout_7->addWidget(label_15);

        label_16 = new QLabel(TECSGoupBox);
        label_16->setObjectName(QStringLiteral("label_16"));

        verticalLayout_7->addWidget(label_16);


        horizontalLayout_4->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        climbMaxSpinBox = new QDoubleSpinBox(TECSGoupBox);
        climbMaxSpinBox->setObjectName(QStringLiteral("climbMaxSpinBox"));
        climbMaxSpinBox->setDecimals(2);
        climbMaxSpinBox->setMaximum(100);
        climbMaxSpinBox->setSingleStep(0.001);

        verticalLayout_8->addWidget(climbMaxSpinBox);

        sinkMinSpinBox = new QDoubleSpinBox(TECSGoupBox);
        sinkMinSpinBox->setObjectName(QStringLiteral("sinkMinSpinBox"));
        sinkMinSpinBox->setDecimals(2);
        sinkMinSpinBox->setMaximum(100);
        sinkMinSpinBox->setSingleStep(0.001);

        verticalLayout_8->addWidget(sinkMinSpinBox);

        sinkMaxSpinBox = new QDoubleSpinBox(TECSGoupBox);
        sinkMaxSpinBox->setObjectName(QStringLiteral("sinkMaxSpinBox"));

        verticalLayout_8->addWidget(sinkMaxSpinBox);

        pitchDampSpinBox = new QDoubleSpinBox(TECSGoupBox);
        pitchDampSpinBox->setObjectName(QStringLiteral("pitchDampSpinBox"));
        pitchDampSpinBox->setDecimals(3);
        pitchDampSpinBox->setMaximum(100);
        pitchDampSpinBox->setSingleStep(0.001);

        verticalLayout_8->addWidget(pitchDampSpinBox);

        timeConstSpinBox = new QDoubleSpinBox(TECSGoupBox);
        timeConstSpinBox->setObjectName(QStringLiteral("timeConstSpinBox"));
        timeConstSpinBox->setMaximum(100);

        verticalLayout_8->addWidget(timeConstSpinBox);


        horizontalLayout_4->addLayout(verticalLayout_8);


        verticalLayout_13->addLayout(horizontalLayout_4);


        gridLayout->addWidget(TECSGoupBox, 2, 0, 1, 1);

        groupBox_5 = new QGroupBox(ArduPlanePidConfig);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        sizePolicy.setHeightForWidth(groupBox_5->sizePolicy().hasHeightForWidth());
        groupBox_5->setSizePolicy(sizePolicy);
        verticalLayout_16 = new QVBoxLayout(groupBox_5);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_9 = new QLabel(groupBox_5);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_5->addWidget(label_9);

        label_10 = new QLabel(groupBox_5);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout_5->addWidget(label_10);

        label_11 = new QLabel(groupBox_5);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout_5->addWidget(label_11);

        label_12 = new QLabel(groupBox_5);
        label_12->setObjectName(QStringLiteral("label_12"));

        verticalLayout_5->addWidget(label_12);


        horizontalLayout_3->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        servoYawPSpinBox = new QDoubleSpinBox(groupBox_5);
        servoYawPSpinBox->setObjectName(QStringLiteral("servoYawPSpinBox"));
        servoYawPSpinBox->setDecimals(3);
        servoYawPSpinBox->setMaximum(100);
        servoYawPSpinBox->setSingleStep(0.001);

        verticalLayout_6->addWidget(servoYawPSpinBox);

        servoYawISpinBox = new QDoubleSpinBox(groupBox_5);
        servoYawISpinBox->setObjectName(QStringLiteral("servoYawISpinBox"));
        servoYawISpinBox->setDecimals(3);
        servoYawISpinBox->setMaximum(100);
        servoYawISpinBox->setSingleStep(0.001);

        verticalLayout_6->addWidget(servoYawISpinBox);

        servoYawDSpinBox = new QDoubleSpinBox(groupBox_5);
        servoYawDSpinBox->setObjectName(QStringLiteral("servoYawDSpinBox"));
        servoYawDSpinBox->setDecimals(3);
        servoYawDSpinBox->setMaximum(100);
        servoYawDSpinBox->setSingleStep(0.001);

        verticalLayout_6->addWidget(servoYawDSpinBox);

        servoYawIMAXSpinBox = new QDoubleSpinBox(groupBox_5);
        servoYawIMAXSpinBox->setObjectName(QStringLiteral("servoYawIMAXSpinBox"));
        servoYawIMAXSpinBox->setDecimals(1);
        servoYawIMAXSpinBox->setMaximum(10000);

        verticalLayout_6->addWidget(servoYawIMAXSpinBox);


        horizontalLayout_3->addLayout(verticalLayout_6);


        verticalLayout_16->addLayout(horizontalLayout_3);


        gridLayout->addWidget(groupBox_5, 0, 2, 1, 1);

        groupBox = new QGroupBox(ArduPlanePidConfig);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        verticalLayout_14 = new QVBoxLayout(groupBox);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        servoRollPSpinBox = new QDoubleSpinBox(groupBox);
        servoRollPSpinBox->setObjectName(QStringLiteral("servoRollPSpinBox"));
        servoRollPSpinBox->setDecimals(3);
        servoRollPSpinBox->setMaximum(100);
        servoRollPSpinBox->setSingleStep(0.001);

        verticalLayout_2->addWidget(servoRollPSpinBox);

        servoRollISpinBox = new QDoubleSpinBox(groupBox);
        servoRollISpinBox->setObjectName(QStringLiteral("servoRollISpinBox"));
        servoRollISpinBox->setDecimals(3);
        servoRollISpinBox->setMaximum(100);
        servoRollISpinBox->setSingleStep(0.001);

        verticalLayout_2->addWidget(servoRollISpinBox);

        servoRollDSpinBox = new QDoubleSpinBox(groupBox);
        servoRollDSpinBox->setObjectName(QStringLiteral("servoRollDSpinBox"));
        servoRollDSpinBox->setDecimals(3);
        servoRollDSpinBox->setMaximum(100);
        servoRollDSpinBox->setSingleStep(0.001);

        verticalLayout_2->addWidget(servoRollDSpinBox);

        servoRollIMAXSpinBox = new QDoubleSpinBox(groupBox);
        servoRollIMAXSpinBox->setObjectName(QStringLiteral("servoRollIMAXSpinBox"));
        servoRollIMAXSpinBox->setDecimals(1);
        servoRollIMAXSpinBox->setMaximum(10000);

        verticalLayout_2->addWidget(servoRollIMAXSpinBox);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_14->addLayout(horizontalLayout);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(ArduPlanePidConfig);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        verticalLayout_15 = new QVBoxLayout(groupBox_2);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_3->addWidget(label_5);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_3->addWidget(label_6);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_3->addWidget(label_7);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_3->addWidget(label_8);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        servoPitchPSpinBox = new QDoubleSpinBox(groupBox_2);
        servoPitchPSpinBox->setObjectName(QStringLiteral("servoPitchPSpinBox"));
        servoPitchPSpinBox->setDecimals(3);
        servoPitchPSpinBox->setMaximum(100);
        servoPitchPSpinBox->setSingleStep(0.001);

        verticalLayout_4->addWidget(servoPitchPSpinBox);

        servoPitchISpinBox = new QDoubleSpinBox(groupBox_2);
        servoPitchISpinBox->setObjectName(QStringLiteral("servoPitchISpinBox"));
        servoPitchISpinBox->setDecimals(3);
        servoPitchISpinBox->setMaximum(100);
        servoPitchISpinBox->setSingleStep(0.001);

        verticalLayout_4->addWidget(servoPitchISpinBox);

        servoPitchDSpinBox = new QDoubleSpinBox(groupBox_2);
        servoPitchDSpinBox->setObjectName(QStringLiteral("servoPitchDSpinBox"));
        servoPitchDSpinBox->setDecimals(3);
        servoPitchDSpinBox->setMaximum(100);
        servoPitchDSpinBox->setSingleStep(0.001);

        verticalLayout_4->addWidget(servoPitchDSpinBox);

        servoPitchIMAXSpinBox = new QDoubleSpinBox(groupBox_2);
        servoPitchIMAXSpinBox->setObjectName(QStringLiteral("servoPitchIMAXSpinBox"));
        servoPitchIMAXSpinBox->setDecimals(1);
        servoPitchIMAXSpinBox->setMaximum(10000);

        verticalLayout_4->addWidget(servoPitchIMAXSpinBox);


        horizontalLayout_2->addLayout(verticalLayout_4);


        verticalLayout_15->addLayout(horizontalLayout_2);


        gridLayout->addWidget(groupBox_2, 0, 1, 1, 1);

        groupBox_3 = new QGroupBox(ArduPlanePidConfig);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        sizePolicy.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy);
        verticalLayout_29 = new QVBoxLayout(groupBox_3);
        verticalLayout_29->setObjectName(QStringLiteral("verticalLayout_29"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        verticalLayout_27 = new QVBoxLayout();
        verticalLayout_27->setObjectName(QStringLiteral("verticalLayout_27"));
        label_41 = new QLabel(groupBox_3);
        label_41->setObjectName(QStringLiteral("label_41"));

        verticalLayout_27->addWidget(label_41);

        label_42 = new QLabel(groupBox_3);
        label_42->setObjectName(QStringLiteral("label_42"));

        verticalLayout_27->addWidget(label_42);


        horizontalLayout_11->addLayout(verticalLayout_27);

        verticalLayout_28 = new QVBoxLayout();
        verticalLayout_28->setObjectName(QStringLiteral("verticalLayout_28"));
        l1PeriodSpinBox = new QDoubleSpinBox(groupBox_3);
        l1PeriodSpinBox->setObjectName(QStringLiteral("l1PeriodSpinBox"));
        l1PeriodSpinBox->setDecimals(1);
        l1PeriodSpinBox->setMaximum(100);
        l1PeriodSpinBox->setSingleStep(0.001);

        verticalLayout_28->addWidget(l1PeriodSpinBox);

        l1DampingSpinBox = new QDoubleSpinBox(groupBox_3);
        l1DampingSpinBox->setObjectName(QStringLiteral("l1DampingSpinBox"));
        l1DampingSpinBox->setDecimals(3);
        l1DampingSpinBox->setMaximum(100);
        l1DampingSpinBox->setSingleStep(0.001);

        verticalLayout_28->addWidget(l1DampingSpinBox);


        horizontalLayout_11->addLayout(verticalLayout_28);


        verticalLayout_29->addLayout(horizontalLayout_11);


        gridLayout->addWidget(groupBox_3, 1, 0, 1, 1);

        groupBox_10 = new QGroupBox(ArduPlanePidConfig);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        verticalLayout_33 = new QVBoxLayout(groupBox_10);
        verticalLayout_33->setObjectName(QStringLiteral("verticalLayout_33"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        verticalLayout_23 = new QVBoxLayout();
        verticalLayout_23->setObjectName(QStringLiteral("verticalLayout_23"));
        label_33 = new QLabel(groupBox_10);
        label_33->setObjectName(QStringLiteral("label_33"));

        verticalLayout_23->addWidget(label_33);

        label_34 = new QLabel(groupBox_10);
        label_34->setObjectName(QStringLiteral("label_34"));

        verticalLayout_23->addWidget(label_34);

        label_35 = new QLabel(groupBox_10);
        label_35->setObjectName(QStringLiteral("label_35"));

        verticalLayout_23->addWidget(label_35);


        horizontalLayout_9->addLayout(verticalLayout_23);

        verticalLayout_24 = new QVBoxLayout();
        verticalLayout_24->setObjectName(QStringLiteral("verticalLayout_24"));
        navBankMaxSpinBox = new QDoubleSpinBox(groupBox_10);
        navBankMaxSpinBox->setObjectName(QStringLiteral("navBankMaxSpinBox"));
        navBankMaxSpinBox->setDecimals(2);
        navBankMaxSpinBox->setMaximum(90);

        verticalLayout_24->addWidget(navBankMaxSpinBox);

        navPitchMaxSpinBox = new QDoubleSpinBox(groupBox_10);
        navPitchMaxSpinBox->setObjectName(QStringLiteral("navPitchMaxSpinBox"));
        navPitchMaxSpinBox->setDecimals(2);
        navPitchMaxSpinBox->setMinimum(0);
        navPitchMaxSpinBox->setMaximum(90);
        navPitchMaxSpinBox->setSingleStep(1);

        verticalLayout_24->addWidget(navPitchMaxSpinBox);

        navPitchMinSpinBox = new QDoubleSpinBox(groupBox_10);
        navPitchMinSpinBox->setObjectName(QStringLiteral("navPitchMinSpinBox"));
        navPitchMinSpinBox->setDecimals(2);
        navPitchMinSpinBox->setMinimum(-90);
        navPitchMinSpinBox->setMaximum(0);
        navPitchMinSpinBox->setSingleStep(1);
        navPitchMinSpinBox->setValue(0);

        verticalLayout_24->addWidget(navPitchMinSpinBox);


        horizontalLayout_9->addLayout(verticalLayout_24);


        verticalLayout_33->addLayout(horizontalLayout_9);


        gridLayout->addWidget(groupBox_10, 4, 1, 1, 1);

        groupBox_7 = new QGroupBox(ArduPlanePidConfig);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        sizePolicy.setHeightForWidth(groupBox_7->sizePolicy().hasHeightForWidth());
        groupBox_7->setSizePolicy(sizePolicy);
        verticalLayout_31 = new QVBoxLayout(groupBox_7);
        verticalLayout_31->setObjectName(QStringLiteral("verticalLayout_31"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setObjectName(QStringLiteral("verticalLayout_19"));
        label_25 = new QLabel(groupBox_7);
        label_25->setObjectName(QStringLiteral("label_25"));

        verticalLayout_19->addWidget(label_25);

        label_26 = new QLabel(groupBox_7);
        label_26->setObjectName(QStringLiteral("label_26"));

        verticalLayout_19->addWidget(label_26);

        label_27 = new QLabel(groupBox_7);
        label_27->setObjectName(QStringLiteral("label_27"));

        verticalLayout_19->addWidget(label_27);

        label_28 = new QLabel(groupBox_7);
        label_28->setObjectName(QStringLiteral("label_28"));

        verticalLayout_19->addWidget(label_28);


        horizontalLayout_7->addLayout(verticalLayout_19);

        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setObjectName(QStringLiteral("verticalLayout_20"));
        throttleTrimSpinBox = new QDoubleSpinBox(groupBox_7);
        throttleTrimSpinBox->setObjectName(QStringLiteral("throttleTrimSpinBox"));
        throttleTrimSpinBox->setDecimals(0);
        throttleTrimSpinBox->setMaximum(100);

        verticalLayout_20->addWidget(throttleTrimSpinBox);

        throttleMinSpinBox = new QDoubleSpinBox(groupBox_7);
        throttleMinSpinBox->setObjectName(QStringLiteral("throttleMinSpinBox"));
        throttleMinSpinBox->setDecimals(0);
        throttleMinSpinBox->setMaximum(100);
        throttleMinSpinBox->setSingleStep(0.1);

        verticalLayout_20->addWidget(throttleMinSpinBox);

        throttleMaxSpinBox = new QDoubleSpinBox(groupBox_7);
        throttleMaxSpinBox->setObjectName(QStringLiteral("throttleMaxSpinBox"));
        throttleMaxSpinBox->setDecimals(0);
        throttleMaxSpinBox->setMaximum(100);
        throttleMaxSpinBox->setSingleStep(0.1);

        verticalLayout_20->addWidget(throttleMaxSpinBox);

        throttleSlewRateSpinBox = new QDoubleSpinBox(groupBox_7);
        throttleSlewRateSpinBox->setObjectName(QStringLiteral("throttleSlewRateSpinBox"));
        throttleSlewRateSpinBox->setDecimals(0);
        throttleSlewRateSpinBox->setMaximum(1000);
        throttleSlewRateSpinBox->setSingleStep(1);

        verticalLayout_20->addWidget(throttleSlewRateSpinBox);


        horizontalLayout_7->addLayout(verticalLayout_20);


        verticalLayout_31->addLayout(horizontalLayout_7);


        gridLayout->addWidget(groupBox_7, 2, 2, 1, 1);

        groupBox_9 = new QGroupBox(ArduPlanePidConfig);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        verticalLayout_30 = new QVBoxLayout(groupBox_9);
        verticalLayout_30->setObjectName(QStringLiteral("verticalLayout_30"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        verticalLayout_21 = new QVBoxLayout();
        verticalLayout_21->setObjectName(QStringLiteral("verticalLayout_21"));
        label_29 = new QLabel(groupBox_9);
        label_29->setObjectName(QStringLiteral("label_29"));

        verticalLayout_21->addWidget(label_29);

        label_30 = new QLabel(groupBox_9);
        label_30->setObjectName(QStringLiteral("label_30"));

        verticalLayout_21->addWidget(label_30);

        label_31 = new QLabel(groupBox_9);
        label_31->setObjectName(QStringLiteral("label_31"));

        verticalLayout_21->addWidget(label_31);


        horizontalLayout_8->addLayout(verticalLayout_21);

        verticalLayout_22 = new QVBoxLayout();
        verticalLayout_22->setObjectName(QStringLiteral("verticalLayout_22"));
        otherPtTSpinBox = new QDoubleSpinBox(groupBox_9);
        otherPtTSpinBox->setObjectName(QStringLiteral("otherPtTSpinBox"));
        otherPtTSpinBox->setDecimals(3);
        otherPtTSpinBox->setMaximum(100);
        otherPtTSpinBox->setSingleStep(0.01);

        verticalLayout_22->addWidget(otherPtTSpinBox);

        otherPitchCompSpinBox = new QDoubleSpinBox(groupBox_9);
        otherPitchCompSpinBox->setObjectName(QStringLiteral("otherPitchCompSpinBox"));
        otherPitchCompSpinBox->setDecimals(3);
        otherPitchCompSpinBox->setMaximum(100);
        otherPitchCompSpinBox->setSingleStep(0.01);

        verticalLayout_22->addWidget(otherPitchCompSpinBox);

        otherRudderMixSpinBox = new QDoubleSpinBox(groupBox_9);
        otherRudderMixSpinBox->setObjectName(QStringLiteral("otherRudderMixSpinBox"));
        otherRudderMixSpinBox->setDecimals(3);
        otherRudderMixSpinBox->setMaximum(100);
        otherRudderMixSpinBox->setSingleStep(0.01);

        verticalLayout_22->addWidget(otherRudderMixSpinBox);


        horizontalLayout_8->addLayout(verticalLayout_22);


        verticalLayout_30->addLayout(horizontalLayout_8);


        gridLayout->addWidget(groupBox_9, 2, 1, 1, 1);

        groupBox_8 = new QGroupBox(ArduPlanePidConfig);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        sizePolicy.setHeightForWidth(groupBox_8->sizePolicy().hasHeightForWidth());
        groupBox_8->setSizePolicy(sizePolicy);
        verticalLayout_32 = new QVBoxLayout(groupBox_8);
        verticalLayout_32->setObjectName(QStringLiteral("verticalLayout_32"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        verticalLayout_25 = new QVBoxLayout();
        verticalLayout_25->setObjectName(QStringLiteral("verticalLayout_25"));
        label_37 = new QLabel(groupBox_8);
        label_37->setObjectName(QStringLiteral("label_37"));

        verticalLayout_25->addWidget(label_37);

        label_38 = new QLabel(groupBox_8);
        label_38->setObjectName(QStringLiteral("label_38"));

        verticalLayout_25->addWidget(label_38);

        label_39 = new QLabel(groupBox_8);
        label_39->setObjectName(QStringLiteral("label_39"));

        verticalLayout_25->addWidget(label_39);

        label_40 = new QLabel(groupBox_8);
        label_40->setObjectName(QStringLiteral("label_40"));

        verticalLayout_25->addWidget(label_40);


        horizontalLayout_10->addLayout(verticalLayout_25);

        verticalLayout_26 = new QVBoxLayout();
        verticalLayout_26->setObjectName(QStringLiteral("verticalLayout_26"));
        airspeedCruiseSpinBox = new QDoubleSpinBox(groupBox_8);
        airspeedCruiseSpinBox->setObjectName(QStringLiteral("airspeedCruiseSpinBox"));
        airspeedCruiseSpinBox->setDecimals(1);
        airspeedCruiseSpinBox->setMaximum(100);
        airspeedCruiseSpinBox->setSingleStep(0.1);

        verticalLayout_26->addWidget(airspeedCruiseSpinBox);

        airspeedFBWMinSpinBox = new QDoubleSpinBox(groupBox_8);
        airspeedFBWMinSpinBox->setObjectName(QStringLiteral("airspeedFBWMinSpinBox"));
        airspeedFBWMinSpinBox->setDecimals(1);
        airspeedFBWMinSpinBox->setMaximum(100);
        airspeedFBWMinSpinBox->setSingleStep(0.1);

        verticalLayout_26->addWidget(airspeedFBWMinSpinBox);

        airspeedFBWMaxSpinBox = new QDoubleSpinBox(groupBox_8);
        airspeedFBWMaxSpinBox->setObjectName(QStringLiteral("airspeedFBWMaxSpinBox"));
        airspeedFBWMaxSpinBox->setDecimals(1);
        airspeedFBWMaxSpinBox->setMaximum(100);
        airspeedFBWMaxSpinBox->setSingleStep(0.1);

        verticalLayout_26->addWidget(airspeedFBWMaxSpinBox);

        airspeedRatioSpinBox = new QDoubleSpinBox(groupBox_8);
        airspeedRatioSpinBox->setObjectName(QStringLiteral("airspeedRatioSpinBox"));
        airspeedRatioSpinBox->setMaximum(100);
        airspeedRatioSpinBox->setSingleStep(0.1);

        verticalLayout_26->addWidget(airspeedRatioSpinBox);


        horizontalLayout_10->addLayout(verticalLayout_26);


        verticalLayout_32->addLayout(horizontalLayout_10);


        gridLayout->addWidget(groupBox_8, 4, 2, 1, 1);

        verticalLayout_34 = new QVBoxLayout();
        verticalLayout_34->setObjectName(QStringLiteral("verticalLayout_34"));
        writePushButton = new QPushButton(ArduPlanePidConfig);
        writePushButton->setObjectName(QStringLiteral("writePushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(writePushButton->sizePolicy().hasHeightForWidth());
        writePushButton->setSizePolicy(sizePolicy1);
        writePushButton->setMinimumSize(QSize(120, 0));
        writePushButton->setMaximumSize(QSize(120, 16777215));
        writePushButton->setBaseSize(QSize(0, 120));

        verticalLayout_34->addWidget(writePushButton, 0, Qt::AlignHCenter);

        refreshPushButton = new QPushButton(ArduPlanePidConfig);
        refreshPushButton->setObjectName(QStringLiteral("refreshPushButton"));
        sizePolicy1.setHeightForWidth(refreshPushButton->sizePolicy().hasHeightForWidth());
        refreshPushButton->setSizePolicy(sizePolicy1);
        refreshPushButton->setMinimumSize(QSize(120, 0));
        refreshPushButton->setMaximumSize(QSize(120, 16777215));
        refreshPushButton->setBaseSize(QSize(120, 0));

        verticalLayout_34->addWidget(refreshPushButton, 0, Qt::AlignHCenter);


        gridLayout->addLayout(verticalLayout_34, 4, 0, 1, 1);


        verticalLayout_9->addLayout(gridLayout);


        retranslateUi(ArduPlanePidConfig);

        QMetaObject::connectSlotsByName(ArduPlanePidConfig);
    } // setupUi

    void retranslateUi(QWidget *ArduPlanePidConfig)
    {
        ArduPlanePidConfig->setWindowTitle(QApplication::translate("ArduPlanePidConfig", "Form", Q_NULLPTR));
        TECSGoupBox->setTitle(QApplication::translate("ArduPlanePidConfig", "TECS", Q_NULLPTR));
        label_13->setText(QApplication::translate("ArduPlanePidConfig", "Climb Max (m/s)", Q_NULLPTR));
        label_14->setText(QApplication::translate("ArduPlanePidConfig", "Sink Min (m/s)", Q_NULLPTR));
        label_32->setText(QApplication::translate("ArduPlanePidConfig", "Sink Max (m/s)", Q_NULLPTR));
        label_15->setText(QApplication::translate("ArduPlanePidConfig", "Pitch Dampening", Q_NULLPTR));
        label_16->setText(QApplication::translate("ArduPlanePidConfig", "Time const", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("ArduPlanePidConfig", "Servo Yaw Pid", Q_NULLPTR));
        label_9->setText(QApplication::translate("ArduPlanePidConfig", "Yaw 2 Roll", Q_NULLPTR));
        label_10->setText(QApplication::translate("ArduPlanePidConfig", "Integral", Q_NULLPTR));
        label_11->setText(QApplication::translate("ArduPlanePidConfig", "Dampening", Q_NULLPTR));
        label_12->setText(QApplication::translate("ArduPlanePidConfig", "Integrator Max", Q_NULLPTR));
        servoYawIMAXSpinBox->setSuffix(QApplication::translate("ArduPlanePidConfig", "\302\260", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("ArduPlanePidConfig", "Servo Roll Pid", Q_NULLPTR));
        label_2->setText(QApplication::translate("ArduPlanePidConfig", "P", Q_NULLPTR));
        label_3->setText(QApplication::translate("ArduPlanePidConfig", "I", Q_NULLPTR));
        label->setText(QApplication::translate("ArduPlanePidConfig", "D", Q_NULLPTR));
        label_4->setText(QApplication::translate("ArduPlanePidConfig", "INT_MAX", Q_NULLPTR));
        servoRollIMAXSpinBox->setSuffix(QApplication::translate("ArduPlanePidConfig", "\302\260", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("ArduPlanePidConfig", "Servo Pitch Pid", Q_NULLPTR));
        label_5->setText(QApplication::translate("ArduPlanePidConfig", "P", Q_NULLPTR));
        label_6->setText(QApplication::translate("ArduPlanePidConfig", "I", Q_NULLPTR));
        label_7->setText(QApplication::translate("ArduPlanePidConfig", "D", Q_NULLPTR));
        label_8->setText(QApplication::translate("ArduPlanePidConfig", "INT_MAX", Q_NULLPTR));
        servoPitchIMAXSpinBox->setSuffix(QApplication::translate("ArduPlanePidConfig", "\302\260", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("ArduPlanePidConfig", "L1 Control - Turn Control", Q_NULLPTR));
        label_41->setText(QApplication::translate("ArduPlanePidConfig", "Period", Q_NULLPTR));
        label_42->setText(QApplication::translate("ArduPlanePidConfig", "Damping", Q_NULLPTR));
        groupBox_10->setTitle(QApplication::translate("ArduPlanePidConfig", "Navigation Angles", Q_NULLPTR));
        label_33->setText(QApplication::translate("ArduPlanePidConfig", "Bank Max", Q_NULLPTR));
        label_34->setText(QApplication::translate("ArduPlanePidConfig", "Pitch Max", Q_NULLPTR));
        label_35->setText(QApplication::translate("ArduPlanePidConfig", "Pitch Min", Q_NULLPTR));
        navBankMaxSpinBox->setSuffix(QApplication::translate("ArduPlanePidConfig", "\302\260", Q_NULLPTR));
        navPitchMaxSpinBox->setSuffix(QApplication::translate("ArduPlanePidConfig", "\302\260", Q_NULLPTR));
        navPitchMinSpinBox->setSuffix(QApplication::translate("ArduPlanePidConfig", "\302\260", Q_NULLPTR));
        groupBox_7->setTitle(QApplication::translate("ArduPlanePidConfig", "Throttle (0-100%)", Q_NULLPTR));
        label_25->setText(QApplication::translate("ArduPlanePidConfig", "Cruise", Q_NULLPTR));
        label_26->setText(QApplication::translate("ArduPlanePidConfig", "Min", Q_NULLPTR));
        label_27->setText(QApplication::translate("ArduPlanePidConfig", "Max", Q_NULLPTR));
        label_28->setText(QApplication::translate("ArduPlanePidConfig", "Slew Rate", Q_NULLPTR));
        throttleTrimSpinBox->setSuffix(QString());
        throttleMinSpinBox->setSuffix(QString());
        throttleMaxSpinBox->setSuffix(QString());
        groupBox_9->setTitle(QApplication::translate("ArduPlanePidConfig", "Other Mix's", Q_NULLPTR));
        label_29->setText(QApplication::translate("ArduPlanePidConfig", "P to T", Q_NULLPTR));
        label_30->setText(QApplication::translate("ArduPlanePidConfig", "Pitch Comp", Q_NULLPTR));
        label_31->setText(QApplication::translate("ArduPlanePidConfig", "Rudder Mix", Q_NULLPTR));
        groupBox_8->setTitle(QApplication::translate("ArduPlanePidConfig", "Airspeed m/s", Q_NULLPTR));
        label_37->setText(QApplication::translate("ArduPlanePidConfig", "Cruise", Q_NULLPTR));
        label_38->setText(QApplication::translate("ArduPlanePidConfig", "FBW min", Q_NULLPTR));
        label_39->setText(QApplication::translate("ArduPlanePidConfig", "FBW max", Q_NULLPTR));
        label_40->setText(QApplication::translate("ArduPlanePidConfig", "Ratio", Q_NULLPTR));
        writePushButton->setText(QApplication::translate("ArduPlanePidConfig", "Write Params", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        writePushButton->setShortcut(QApplication::translate("ArduPlanePidConfig", "Ctrl+W", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        refreshPushButton->setText(QApplication::translate("ArduPlanePidConfig", "Refresh Params", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        refreshPushButton->setShortcut(QApplication::translate("ArduPlanePidConfig", "Ctrl+R", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
    } // retranslateUi

};

namespace Ui {
    class ArduPlanePidConfig: public Ui_ArduPlanePidConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARDUPLANEPIDCONFIG_H
