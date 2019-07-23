/********************************************************************************
** Form generated from reading UI file 'CameraGimbalConfig.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERAGIMBALCONFIG_H
#define UI_CAMERAGIMBALCONFIG_H

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
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CameraGimbalConfig
{
public:
    QVBoxLayout *verticalLayout_16;
    QVBoxLayout *verticalLayout_15;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_13;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout_12;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QComboBox *tiltChannelComboBox;
    QLabel *label_2;
    QGroupBox *tiltGroupBox;
    QHBoxLayout *horizontalLayout_8;
    QGridLayout *tiltGridLayout;
    QLabel *label_11;
    QComboBox *tiltInputChannelComboBox;
    QSpinBox *tiltAngleMinSpinBox;
    QSpinBox *tiltServoMinSpinBox;
    QSpinBox *tiltServoMaxSpinBox;
    QLabel *label_8;
    QCheckBox *tiltReverseCheckBox;
    QLabel *label_13;
    QLabel *label_10;
    QCheckBox *tiltStabilizeCheckBox;
    QLabel *label_12;
    QLabel *label_7;
    QLabel *label_9;
    QSpinBox *tiltAngleMaxSpinBox;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_21;
    QComboBox *rollChannelComboBox;
    QLabel *label_3;
    QGroupBox *rollGroupBox;
    QHBoxLayout *horizontalLayout_9;
    QGridLayout *rollGridLayout;
    QCheckBox *rollStabilizeCheckBox;
    QLabel *label_18;
    QLabel *label_17;
    QLabel *label_16;
    QLabel *label_20;
    QSpinBox *rollServoMinSpinBox;
    QLabel *label_14;
    QSpinBox *rollAngleMinSpinBox;
    QComboBox *rollInputChannelComboBox;
    QLabel *label_19;
    QSpinBox *rollServoMaxSpinBox;
    QLabel *label_15;
    QSpinBox *rollAngleMaxSpinBox;
    QCheckBox *rollReverseCheckBox;
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_29;
    QComboBox *panChannelComboBox;
    QLabel *label_4;
    QGroupBox *panGroupBox;
    QHBoxLayout *horizontalLayout_10;
    QGridLayout *panGridLayout;
    QLabel *label_27;
    QSpinBox *panServoMaxSpinBox;
    QComboBox *panInputChannelComboBox;
    QLabel *label_23;
    QCheckBox *panReverseCheckBox;
    QLabel *label_26;
    QLabel *label_28;
    QSpinBox *panServoMinSpinBox;
    QLabel *label_25;
    QCheckBox *panStabilizeCheckBox;
    QLabel *label_22;
    QSpinBox *panAngleMinSpinBox;
    QLabel *label_24;
    QSpinBox *panAngleMaxSpinBox;
    QVBoxLayout *verticalLayout_13;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_38;
    QComboBox *camTriggerOutChannelComboBox;
    QLabel *label_5;
    QGroupBox *camTriggerGroupBox;
    QHBoxLayout *horizontalLayout_11;
    QGridLayout *camTriggerGridLayout;
    QLabel *label_48;
    QComboBox *camTriggerTypeComboBox;
    QLabel *label_35;
    QLabel *label_34;
    QLabel *label_37;
    QSpinBox *camTriggerServoMinSpinBox;
    QLabel *label_31;
    QSpinBox *camTriggerOnPwmSpinBox;
    QLabel *label_36;
    QSpinBox *camTriggerServoMaxSpinBox;
    QLabel *label_32;
    QSpinBox *camTriggerOffPwmSpinBox;
    QLabel *label_39;
    QSpinBox *camTriggerDurationSpinBox;
    QVBoxLayout *verticalLayout_14;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_33;
    QLabel *label_41;
    QLabel *label_30;
    QVBoxLayout *verticalLayout_2;
    QSpinBox *retractXSpinBox;
    QSpinBox *retractYSpinBox;
    QSpinBox *retractZSpinBox;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_42;
    QLabel *label_43;
    QLabel *label_44;
    QVBoxLayout *verticalLayout_6;
    QSpinBox *neutralXSpinBox;
    QSpinBox *neutralYSpinBox;
    QSpinBox *neutralZSpinBox;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_45;
    QLabel *label_46;
    QLabel *label_47;
    QVBoxLayout *verticalLayout_9;
    QSpinBox *controlXSpinBox;
    QSpinBox *controlYSpinBox;
    QSpinBox *controlZSpinBox;
    QLabel *label_49;
    QComboBox *mountModeComboBox;
    QSpacerItem *verticalSpacer;
    QLabel *label_40;

    void setupUi(QWidget *CameraGimbalConfig)
    {
        if (CameraGimbalConfig->objectName().isEmpty())
            CameraGimbalConfig->setObjectName(QStringLiteral("CameraGimbalConfig"));
        CameraGimbalConfig->resize(869, 867);
        CameraGimbalConfig->setMaximumSize(QSize(869, 900));
        verticalLayout_16 = new QVBoxLayout(CameraGimbalConfig);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label = new QLabel(CameraGimbalConfig);
        label->setObjectName(QStringLiteral("label"));
        label->setScaledContents(false);

        horizontalLayout_14->addWidget(label);

        horizontalSpacer = new QSpacerItem(608, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer);


        verticalLayout_15->addLayout(horizontalLayout_14);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        scrollArea = new QScrollArea(CameraGimbalConfig);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 708, 770));
        horizontalLayout_12 = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_6 = new QLabel(scrollAreaWidgetContents);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_6);

        tiltChannelComboBox = new QComboBox(scrollAreaWidgetContents);
        tiltChannelComboBox->setObjectName(QStringLiteral("tiltChannelComboBox"));

        horizontalLayout_4->addWidget(tiltChannelComboBox);


        verticalLayout_10->addLayout(horizontalLayout_4);

        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(250, 120));
        label_2->setMaximumSize(QSize(250, 120));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/files/images/devices/cameraGimalPitch1.png")));
        label_2->setScaledContents(true);

        verticalLayout_10->addWidget(label_2);


        gridLayout->addLayout(verticalLayout_10, 0, 0, 1, 1);

        tiltGroupBox = new QGroupBox(scrollAreaWidgetContents);
        tiltGroupBox->setObjectName(QStringLiteral("tiltGroupBox"));
        tiltGroupBox->setEnabled(true);
        tiltGroupBox->setMaximumSize(QSize(368, 16777215));
        horizontalLayout_8 = new QHBoxLayout(tiltGroupBox);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        tiltGridLayout = new QGridLayout();
        tiltGridLayout->setObjectName(QStringLiteral("tiltGridLayout"));
        label_11 = new QLabel(tiltGroupBox);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        tiltGridLayout->addWidget(label_11, 3, 0, 1, 1);

        tiltInputChannelComboBox = new QComboBox(tiltGroupBox);
        tiltInputChannelComboBox->setObjectName(QStringLiteral("tiltInputChannelComboBox"));

        tiltGridLayout->addWidget(tiltInputChannelComboBox, 2, 4, 1, 1);

        tiltAngleMinSpinBox = new QSpinBox(tiltGroupBox);
        tiltAngleMinSpinBox->setObjectName(QStringLiteral("tiltAngleMinSpinBox"));
        tiltAngleMinSpinBox->setMinimum(-90);
        tiltAngleMinSpinBox->setMaximum(90);
        tiltAngleMinSpinBox->setValue(-45);

        tiltGridLayout->addWidget(tiltAngleMinSpinBox, 2, 3, 1, 1);

        tiltServoMinSpinBox = new QSpinBox(tiltGroupBox);
        tiltServoMinSpinBox->setObjectName(QStringLiteral("tiltServoMinSpinBox"));
        tiltServoMinSpinBox->setMinimum(900);
        tiltServoMinSpinBox->setMaximum(2100);
        tiltServoMinSpinBox->setValue(1100);

        tiltGridLayout->addWidget(tiltServoMinSpinBox, 2, 1, 1, 1);

        tiltServoMaxSpinBox = new QSpinBox(tiltGroupBox);
        tiltServoMaxSpinBox->setObjectName(QStringLiteral("tiltServoMaxSpinBox"));
        tiltServoMaxSpinBox->setMinimum(900);
        tiltServoMaxSpinBox->setMaximum(2100);
        tiltServoMaxSpinBox->setSingleStep(1);
        tiltServoMaxSpinBox->setValue(1900);

        tiltGridLayout->addWidget(tiltServoMaxSpinBox, 3, 1, 1, 1);

        label_8 = new QLabel(tiltGroupBox);
        label_8->setObjectName(QStringLiteral("label_8"));

        tiltGridLayout->addWidget(label_8, 1, 2, 1, 2);

        tiltReverseCheckBox = new QCheckBox(tiltGroupBox);
        tiltReverseCheckBox->setObjectName(QStringLiteral("tiltReverseCheckBox"));

        tiltGridLayout->addWidget(tiltReverseCheckBox, 4, 1, 1, 1);

        label_13 = new QLabel(tiltGroupBox);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        tiltGridLayout->addWidget(label_13, 3, 2, 1, 1);

        label_10 = new QLabel(tiltGroupBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        tiltGridLayout->addWidget(label_10, 2, 0, 1, 1);

        tiltStabilizeCheckBox = new QCheckBox(tiltGroupBox);
        tiltStabilizeCheckBox->setObjectName(QStringLiteral("tiltStabilizeCheckBox"));

        tiltGridLayout->addWidget(tiltStabilizeCheckBox, 0, 0, 1, 2);

        label_12 = new QLabel(tiltGroupBox);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        tiltGridLayout->addWidget(label_12, 2, 2, 1, 1);

        label_7 = new QLabel(tiltGroupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        tiltGridLayout->addWidget(label_7, 1, 0, 1, 2);

        label_9 = new QLabel(tiltGroupBox);
        label_9->setObjectName(QStringLiteral("label_9"));

        tiltGridLayout->addWidget(label_9, 1, 4, 1, 1);

        tiltAngleMaxSpinBox = new QSpinBox(tiltGroupBox);
        tiltAngleMaxSpinBox->setObjectName(QStringLiteral("tiltAngleMaxSpinBox"));
        tiltAngleMaxSpinBox->setMinimum(-90);
        tiltAngleMaxSpinBox->setMaximum(90);
        tiltAngleMaxSpinBox->setSingleStep(1);
        tiltAngleMaxSpinBox->setValue(45);

        tiltGridLayout->addWidget(tiltAngleMaxSpinBox, 3, 3, 1, 1);


        horizontalLayout_8->addLayout(tiltGridLayout);


        gridLayout->addWidget(tiltGroupBox, 0, 1, 1, 1);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_21 = new QLabel(scrollAreaWidgetContents);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_21);

        rollChannelComboBox = new QComboBox(scrollAreaWidgetContents);
        rollChannelComboBox->setObjectName(QStringLiteral("rollChannelComboBox"));

        horizontalLayout_5->addWidget(rollChannelComboBox);


        verticalLayout_11->addLayout(horizontalLayout_5);

        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(250, 120));
        label_3->setMaximumSize(QSize(250, 120));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/files/images/devices/cameraGimalRoll1.png")));
        label_3->setScaledContents(true);

        verticalLayout_11->addWidget(label_3);


        gridLayout->addLayout(verticalLayout_11, 1, 0, 1, 1);

        rollGroupBox = new QGroupBox(scrollAreaWidgetContents);
        rollGroupBox->setObjectName(QStringLiteral("rollGroupBox"));
        rollGroupBox->setMaximumSize(QSize(368, 16777215));
        horizontalLayout_9 = new QHBoxLayout(rollGroupBox);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        rollGridLayout = new QGridLayout();
        rollGridLayout->setObjectName(QStringLiteral("rollGridLayout"));
        rollStabilizeCheckBox = new QCheckBox(rollGroupBox);
        rollStabilizeCheckBox->setObjectName(QStringLiteral("rollStabilizeCheckBox"));

        rollGridLayout->addWidget(rollStabilizeCheckBox, 0, 0, 1, 2);

        label_18 = new QLabel(rollGroupBox);
        label_18->setObjectName(QStringLiteral("label_18"));

        rollGridLayout->addWidget(label_18, 1, 0, 1, 2);

        label_17 = new QLabel(rollGroupBox);
        label_17->setObjectName(QStringLiteral("label_17"));

        rollGridLayout->addWidget(label_17, 1, 2, 1, 2);

        label_16 = new QLabel(rollGroupBox);
        label_16->setObjectName(QStringLiteral("label_16"));

        rollGridLayout->addWidget(label_16, 1, 4, 1, 1);

        label_20 = new QLabel(rollGroupBox);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        rollGridLayout->addWidget(label_20, 2, 0, 1, 1);

        rollServoMinSpinBox = new QSpinBox(rollGroupBox);
        rollServoMinSpinBox->setObjectName(QStringLiteral("rollServoMinSpinBox"));
        rollServoMinSpinBox->setMinimum(900);
        rollServoMinSpinBox->setMaximum(2100);
        rollServoMinSpinBox->setValue(1100);

        rollGridLayout->addWidget(rollServoMinSpinBox, 2, 1, 1, 1);

        label_14 = new QLabel(rollGroupBox);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        rollGridLayout->addWidget(label_14, 2, 2, 1, 1);

        rollAngleMinSpinBox = new QSpinBox(rollGroupBox);
        rollAngleMinSpinBox->setObjectName(QStringLiteral("rollAngleMinSpinBox"));
        rollAngleMinSpinBox->setMinimum(-90);
        rollAngleMinSpinBox->setMaximum(90);
        rollAngleMinSpinBox->setValue(-45);

        rollGridLayout->addWidget(rollAngleMinSpinBox, 2, 3, 1, 1);

        rollInputChannelComboBox = new QComboBox(rollGroupBox);
        rollInputChannelComboBox->setObjectName(QStringLiteral("rollInputChannelComboBox"));

        rollGridLayout->addWidget(rollInputChannelComboBox, 2, 4, 1, 1);

        label_19 = new QLabel(rollGroupBox);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        rollGridLayout->addWidget(label_19, 3, 0, 1, 1);

        rollServoMaxSpinBox = new QSpinBox(rollGroupBox);
        rollServoMaxSpinBox->setObjectName(QStringLiteral("rollServoMaxSpinBox"));
        rollServoMaxSpinBox->setMinimum(900);
        rollServoMaxSpinBox->setMaximum(2100);
        rollServoMaxSpinBox->setSingleStep(1);
        rollServoMaxSpinBox->setValue(1900);

        rollGridLayout->addWidget(rollServoMaxSpinBox, 3, 1, 1, 1);

        label_15 = new QLabel(rollGroupBox);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        rollGridLayout->addWidget(label_15, 3, 2, 1, 1);

        rollAngleMaxSpinBox = new QSpinBox(rollGroupBox);
        rollAngleMaxSpinBox->setObjectName(QStringLiteral("rollAngleMaxSpinBox"));
        rollAngleMaxSpinBox->setMinimum(-90);
        rollAngleMaxSpinBox->setMaximum(90);
        rollAngleMaxSpinBox->setSingleStep(1);
        rollAngleMaxSpinBox->setValue(45);

        rollGridLayout->addWidget(rollAngleMaxSpinBox, 3, 3, 1, 1);

        rollReverseCheckBox = new QCheckBox(rollGroupBox);
        rollReverseCheckBox->setObjectName(QStringLiteral("rollReverseCheckBox"));

        rollGridLayout->addWidget(rollReverseCheckBox, 4, 1, 1, 1);


        horizontalLayout_9->addLayout(rollGridLayout);


        gridLayout->addWidget(rollGroupBox, 1, 1, 1, 1);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_29 = new QLabel(scrollAreaWidgetContents);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_29);

        panChannelComboBox = new QComboBox(scrollAreaWidgetContents);
        panChannelComboBox->setObjectName(QStringLiteral("panChannelComboBox"));

        horizontalLayout_6->addWidget(panChannelComboBox);


        verticalLayout_12->addLayout(horizontalLayout_6);

        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(250, 120));
        label_4->setMaximumSize(QSize(250, 120));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/files/images/devices/cameraGimalYaw.png")));
        label_4->setScaledContents(true);

        verticalLayout_12->addWidget(label_4);


        gridLayout->addLayout(verticalLayout_12, 2, 0, 1, 1);

        panGroupBox = new QGroupBox(scrollAreaWidgetContents);
        panGroupBox->setObjectName(QStringLiteral("panGroupBox"));
        panGroupBox->setMaximumSize(QSize(368, 16777215));
        horizontalLayout_10 = new QHBoxLayout(panGroupBox);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        panGridLayout = new QGridLayout();
        panGridLayout->setObjectName(QStringLiteral("panGridLayout"));
        label_27 = new QLabel(panGroupBox);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        panGridLayout->addWidget(label_27, 3, 0, 1, 1);

        panServoMaxSpinBox = new QSpinBox(panGroupBox);
        panServoMaxSpinBox->setObjectName(QStringLiteral("panServoMaxSpinBox"));
        panServoMaxSpinBox->setMinimum(900);
        panServoMaxSpinBox->setMaximum(2100);
        panServoMaxSpinBox->setSingleStep(1);
        panServoMaxSpinBox->setValue(1900);

        panGridLayout->addWidget(panServoMaxSpinBox, 3, 1, 1, 1);

        panInputChannelComboBox = new QComboBox(panGroupBox);
        panInputChannelComboBox->setObjectName(QStringLiteral("panInputChannelComboBox"));

        panGridLayout->addWidget(panInputChannelComboBox, 2, 4, 1, 1);

        label_23 = new QLabel(panGroupBox);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        panGridLayout->addWidget(label_23, 3, 2, 1, 1);

        panReverseCheckBox = new QCheckBox(panGroupBox);
        panReverseCheckBox->setObjectName(QStringLiteral("panReverseCheckBox"));

        panGridLayout->addWidget(panReverseCheckBox, 4, 1, 1, 1);

        label_26 = new QLabel(panGroupBox);
        label_26->setObjectName(QStringLiteral("label_26"));

        panGridLayout->addWidget(label_26, 1, 0, 1, 2);

        label_28 = new QLabel(panGroupBox);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        panGridLayout->addWidget(label_28, 2, 0, 1, 1);

        panServoMinSpinBox = new QSpinBox(panGroupBox);
        panServoMinSpinBox->setObjectName(QStringLiteral("panServoMinSpinBox"));
        panServoMinSpinBox->setMinimum(900);
        panServoMinSpinBox->setMaximum(2100);
        panServoMinSpinBox->setValue(1100);

        panGridLayout->addWidget(panServoMinSpinBox, 2, 1, 1, 1);

        label_25 = new QLabel(panGroupBox);
        label_25->setObjectName(QStringLiteral("label_25"));

        panGridLayout->addWidget(label_25, 1, 2, 1, 2);

        panStabilizeCheckBox = new QCheckBox(panGroupBox);
        panStabilizeCheckBox->setObjectName(QStringLiteral("panStabilizeCheckBox"));

        panGridLayout->addWidget(panStabilizeCheckBox, 0, 0, 1, 2);

        label_22 = new QLabel(panGroupBox);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        panGridLayout->addWidget(label_22, 2, 2, 1, 1);

        panAngleMinSpinBox = new QSpinBox(panGroupBox);
        panAngleMinSpinBox->setObjectName(QStringLiteral("panAngleMinSpinBox"));
        panAngleMinSpinBox->setMinimum(-90);
        panAngleMinSpinBox->setMaximum(90);
        panAngleMinSpinBox->setValue(-45);

        panGridLayout->addWidget(panAngleMinSpinBox, 2, 3, 1, 1);

        label_24 = new QLabel(panGroupBox);
        label_24->setObjectName(QStringLiteral("label_24"));

        panGridLayout->addWidget(label_24, 1, 4, 1, 1);

        panAngleMaxSpinBox = new QSpinBox(panGroupBox);
        panAngleMaxSpinBox->setObjectName(QStringLiteral("panAngleMaxSpinBox"));
        panAngleMaxSpinBox->setMinimum(-90);
        panAngleMaxSpinBox->setMaximum(90);
        panAngleMaxSpinBox->setSingleStep(1);
        panAngleMaxSpinBox->setValue(45);

        panGridLayout->addWidget(panAngleMaxSpinBox, 3, 3, 1, 1);


        horizontalLayout_10->addLayout(panGridLayout);


        gridLayout->addWidget(panGroupBox, 2, 1, 1, 1);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_38 = new QLabel(scrollAreaWidgetContents);
        label_38->setObjectName(QStringLiteral("label_38"));
        label_38->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_38);

        camTriggerOutChannelComboBox = new QComboBox(scrollAreaWidgetContents);
        camTriggerOutChannelComboBox->setObjectName(QStringLiteral("camTriggerOutChannelComboBox"));

        horizontalLayout_7->addWidget(camTriggerOutChannelComboBox);


        verticalLayout_13->addLayout(horizontalLayout_7);

        label_5 = new QLabel(scrollAreaWidgetContents);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(250, 120));
        label_5->setMaximumSize(QSize(250, 120));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/files/images/devices/Shutter.png")));
        label_5->setScaledContents(true);

        verticalLayout_13->addWidget(label_5);


        gridLayout->addLayout(verticalLayout_13, 3, 0, 1, 1);

        camTriggerGroupBox = new QGroupBox(scrollAreaWidgetContents);
        camTriggerGroupBox->setObjectName(QStringLiteral("camTriggerGroupBox"));
        horizontalLayout_11 = new QHBoxLayout(camTriggerGroupBox);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        camTriggerGridLayout = new QGridLayout();
        camTriggerGridLayout->setObjectName(QStringLiteral("camTriggerGridLayout"));
        label_48 = new QLabel(camTriggerGroupBox);
        label_48->setObjectName(QStringLiteral("label_48"));
        label_48->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        camTriggerGridLayout->addWidget(label_48, 0, 0, 1, 1);

        camTriggerTypeComboBox = new QComboBox(camTriggerGroupBox);
        camTriggerTypeComboBox->setObjectName(QStringLiteral("camTriggerTypeComboBox"));
        camTriggerTypeComboBox->setEnabled(false);

        camTriggerGridLayout->addWidget(camTriggerTypeComboBox, 0, 1, 1, 1);

        label_35 = new QLabel(camTriggerGroupBox);
        label_35->setObjectName(QStringLiteral("label_35"));

        camTriggerGridLayout->addWidget(label_35, 1, 0, 1, 2);

        label_34 = new QLabel(camTriggerGroupBox);
        label_34->setObjectName(QStringLiteral("label_34"));

        camTriggerGridLayout->addWidget(label_34, 1, 2, 1, 1);

        label_37 = new QLabel(camTriggerGroupBox);
        label_37->setObjectName(QStringLiteral("label_37"));
        label_37->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        camTriggerGridLayout->addWidget(label_37, 2, 0, 1, 1);

        camTriggerServoMinSpinBox = new QSpinBox(camTriggerGroupBox);
        camTriggerServoMinSpinBox->setObjectName(QStringLiteral("camTriggerServoMinSpinBox"));
        camTriggerServoMinSpinBox->setMinimum(900);
        camTriggerServoMinSpinBox->setMaximum(2100);
        camTriggerServoMinSpinBox->setValue(1100);

        camTriggerGridLayout->addWidget(camTriggerServoMinSpinBox, 2, 1, 1, 1);

        label_31 = new QLabel(camTriggerGroupBox);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        camTriggerGridLayout->addWidget(label_31, 2, 2, 1, 1);

        camTriggerOnPwmSpinBox = new QSpinBox(camTriggerGroupBox);
        camTriggerOnPwmSpinBox->setObjectName(QStringLiteral("camTriggerOnPwmSpinBox"));
        camTriggerOnPwmSpinBox->setMinimum(900);
        camTriggerOnPwmSpinBox->setMaximum(2100);
        camTriggerOnPwmSpinBox->setValue(1100);

        camTriggerGridLayout->addWidget(camTriggerOnPwmSpinBox, 2, 3, 1, 1);

        label_36 = new QLabel(camTriggerGroupBox);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        camTriggerGridLayout->addWidget(label_36, 3, 0, 1, 1);

        camTriggerServoMaxSpinBox = new QSpinBox(camTriggerGroupBox);
        camTriggerServoMaxSpinBox->setObjectName(QStringLiteral("camTriggerServoMaxSpinBox"));
        camTriggerServoMaxSpinBox->setMinimum(900);
        camTriggerServoMaxSpinBox->setMaximum(2100);
        camTriggerServoMaxSpinBox->setSingleStep(1);
        camTriggerServoMaxSpinBox->setValue(1900);

        camTriggerGridLayout->addWidget(camTriggerServoMaxSpinBox, 3, 1, 1, 1);

        label_32 = new QLabel(camTriggerGroupBox);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        camTriggerGridLayout->addWidget(label_32, 3, 2, 1, 1);

        camTriggerOffPwmSpinBox = new QSpinBox(camTriggerGroupBox);
        camTriggerOffPwmSpinBox->setObjectName(QStringLiteral("camTriggerOffPwmSpinBox"));
        camTriggerOffPwmSpinBox->setMinimum(900);
        camTriggerOffPwmSpinBox->setMaximum(2100);
        camTriggerOffPwmSpinBox->setValue(1900);

        camTriggerGridLayout->addWidget(camTriggerOffPwmSpinBox, 3, 3, 1, 1);

        label_39 = new QLabel(camTriggerGroupBox);
        label_39->setObjectName(QStringLiteral("label_39"));
        label_39->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        camTriggerGridLayout->addWidget(label_39, 4, 2, 1, 1);

        camTriggerDurationSpinBox = new QSpinBox(camTriggerGroupBox);
        camTriggerDurationSpinBox->setObjectName(QStringLiteral("camTriggerDurationSpinBox"));
        camTriggerDurationSpinBox->setMaximum(100);
        camTriggerDurationSpinBox->setValue(20);

        camTriggerGridLayout->addWidget(camTriggerDurationSpinBox, 4, 3, 1, 1);


        horizontalLayout_11->addLayout(camTriggerGridLayout);


        gridLayout->addWidget(camTriggerGroupBox, 3, 1, 1, 1);


        horizontalLayout_12->addLayout(gridLayout);

        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout_13->addWidget(scrollArea);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        groupBox = new QGroupBox(CameraGimbalConfig);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_33 = new QLabel(groupBox);
        label_33->setObjectName(QStringLiteral("label_33"));

        verticalLayout->addWidget(label_33);

        label_41 = new QLabel(groupBox);
        label_41->setObjectName(QStringLiteral("label_41"));

        verticalLayout->addWidget(label_41);

        label_30 = new QLabel(groupBox);
        label_30->setObjectName(QStringLiteral("label_30"));

        verticalLayout->addWidget(label_30);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        retractXSpinBox = new QSpinBox(groupBox);
        retractXSpinBox->setObjectName(QStringLiteral("retractXSpinBox"));
        retractXSpinBox->setMinimum(-180);
        retractXSpinBox->setMaximum(180);

        verticalLayout_2->addWidget(retractXSpinBox);

        retractYSpinBox = new QSpinBox(groupBox);
        retractYSpinBox->setObjectName(QStringLiteral("retractYSpinBox"));
        retractYSpinBox->setMinimum(-180);
        retractYSpinBox->setMaximum(180);

        verticalLayout_2->addWidget(retractYSpinBox);

        retractZSpinBox = new QSpinBox(groupBox);
        retractZSpinBox->setObjectName(QStringLiteral("retractZSpinBox"));
        retractZSpinBox->setMinimum(-180);
        retractZSpinBox->setMaximum(180);

        verticalLayout_2->addWidget(retractZSpinBox);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout_14->addWidget(groupBox);

        groupBox_2 = new QGroupBox(CameraGimbalConfig);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_42 = new QLabel(groupBox_2);
        label_42->setObjectName(QStringLiteral("label_42"));

        verticalLayout_5->addWidget(label_42);

        label_43 = new QLabel(groupBox_2);
        label_43->setObjectName(QStringLiteral("label_43"));

        verticalLayout_5->addWidget(label_43);

        label_44 = new QLabel(groupBox_2);
        label_44->setObjectName(QStringLiteral("label_44"));

        verticalLayout_5->addWidget(label_44);


        horizontalLayout_2->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        neutralXSpinBox = new QSpinBox(groupBox_2);
        neutralXSpinBox->setObjectName(QStringLiteral("neutralXSpinBox"));
        neutralXSpinBox->setMinimum(-180);
        neutralXSpinBox->setMaximum(180);

        verticalLayout_6->addWidget(neutralXSpinBox);

        neutralYSpinBox = new QSpinBox(groupBox_2);
        neutralYSpinBox->setObjectName(QStringLiteral("neutralYSpinBox"));
        neutralYSpinBox->setMinimum(-180);
        neutralYSpinBox->setMaximum(180);

        verticalLayout_6->addWidget(neutralYSpinBox);

        neutralZSpinBox = new QSpinBox(groupBox_2);
        neutralZSpinBox->setObjectName(QStringLiteral("neutralZSpinBox"));
        neutralZSpinBox->setMinimum(-180);
        neutralZSpinBox->setMaximum(180);

        verticalLayout_6->addWidget(neutralZSpinBox);


        horizontalLayout_2->addLayout(verticalLayout_6);


        verticalLayout_4->addLayout(horizontalLayout_2);


        verticalLayout_14->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(CameraGimbalConfig);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        verticalLayout_7 = new QVBoxLayout(groupBox_3);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label_45 = new QLabel(groupBox_3);
        label_45->setObjectName(QStringLiteral("label_45"));

        verticalLayout_8->addWidget(label_45);

        label_46 = new QLabel(groupBox_3);
        label_46->setObjectName(QStringLiteral("label_46"));

        verticalLayout_8->addWidget(label_46);

        label_47 = new QLabel(groupBox_3);
        label_47->setObjectName(QStringLiteral("label_47"));

        verticalLayout_8->addWidget(label_47);


        horizontalLayout_3->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        controlXSpinBox = new QSpinBox(groupBox_3);
        controlXSpinBox->setObjectName(QStringLiteral("controlXSpinBox"));
        controlXSpinBox->setMinimum(-180);
        controlXSpinBox->setMaximum(180);

        verticalLayout_9->addWidget(controlXSpinBox);

        controlYSpinBox = new QSpinBox(groupBox_3);
        controlYSpinBox->setObjectName(QStringLiteral("controlYSpinBox"));
        controlYSpinBox->setMinimum(-180);
        controlYSpinBox->setMaximum(180);

        verticalLayout_9->addWidget(controlYSpinBox);

        controlZSpinBox = new QSpinBox(groupBox_3);
        controlZSpinBox->setObjectName(QStringLiteral("controlZSpinBox"));
        controlZSpinBox->setMinimum(-180);
        controlZSpinBox->setMaximum(180);

        verticalLayout_9->addWidget(controlZSpinBox);


        horizontalLayout_3->addLayout(verticalLayout_9);


        verticalLayout_7->addLayout(horizontalLayout_3);


        verticalLayout_14->addWidget(groupBox_3);

        label_49 = new QLabel(CameraGimbalConfig);
        label_49->setObjectName(QStringLiteral("label_49"));
        label_49->setAlignment(Qt::AlignCenter);

        verticalLayout_14->addWidget(label_49);

        mountModeComboBox = new QComboBox(CameraGimbalConfig);
        mountModeComboBox->setObjectName(QStringLiteral("mountModeComboBox"));

        verticalLayout_14->addWidget(mountModeComboBox);

        verticalSpacer = new QSpacerItem(20, 108, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_14->addItem(verticalSpacer);


        horizontalLayout_13->addLayout(verticalLayout_14);


        verticalLayout_15->addLayout(horizontalLayout_13);

        label_40 = new QLabel(CameraGimbalConfig);
        label_40->setObjectName(QStringLiteral("label_40"));
        label_40->setMinimumSize(QSize(839, 0));
        label_40->setAlignment(Qt::AlignCenter);

        verticalLayout_15->addWidget(label_40);


        verticalLayout_16->addLayout(verticalLayout_15);

        QWidget::setTabOrder(scrollArea, tiltChannelComboBox);
        QWidget::setTabOrder(tiltChannelComboBox, tiltStabilizeCheckBox);
        QWidget::setTabOrder(tiltStabilizeCheckBox, tiltServoMinSpinBox);
        QWidget::setTabOrder(tiltServoMinSpinBox, tiltServoMaxSpinBox);
        QWidget::setTabOrder(tiltServoMaxSpinBox, tiltReverseCheckBox);
        QWidget::setTabOrder(tiltReverseCheckBox, tiltAngleMinSpinBox);
        QWidget::setTabOrder(tiltAngleMinSpinBox, tiltAngleMaxSpinBox);
        QWidget::setTabOrder(tiltAngleMaxSpinBox, tiltInputChannelComboBox);
        QWidget::setTabOrder(tiltInputChannelComboBox, rollChannelComboBox);
        QWidget::setTabOrder(rollChannelComboBox, rollStabilizeCheckBox);
        QWidget::setTabOrder(rollStabilizeCheckBox, rollServoMinSpinBox);
        QWidget::setTabOrder(rollServoMinSpinBox, rollServoMaxSpinBox);
        QWidget::setTabOrder(rollServoMaxSpinBox, rollReverseCheckBox);
        QWidget::setTabOrder(rollReverseCheckBox, rollAngleMinSpinBox);
        QWidget::setTabOrder(rollAngleMinSpinBox, rollAngleMaxSpinBox);
        QWidget::setTabOrder(rollAngleMaxSpinBox, rollInputChannelComboBox);
        QWidget::setTabOrder(rollInputChannelComboBox, panChannelComboBox);
        QWidget::setTabOrder(panChannelComboBox, panStabilizeCheckBox);
        QWidget::setTabOrder(panStabilizeCheckBox, panServoMinSpinBox);
        QWidget::setTabOrder(panServoMinSpinBox, panServoMaxSpinBox);
        QWidget::setTabOrder(panServoMaxSpinBox, panReverseCheckBox);
        QWidget::setTabOrder(panReverseCheckBox, panAngleMinSpinBox);
        QWidget::setTabOrder(panAngleMinSpinBox, panAngleMaxSpinBox);
        QWidget::setTabOrder(panAngleMaxSpinBox, panInputChannelComboBox);
        QWidget::setTabOrder(panInputChannelComboBox, camTriggerOutChannelComboBox);
        QWidget::setTabOrder(camTriggerOutChannelComboBox, camTriggerServoMinSpinBox);
        QWidget::setTabOrder(camTriggerServoMinSpinBox, camTriggerServoMaxSpinBox);
        QWidget::setTabOrder(camTriggerServoMaxSpinBox, camTriggerOnPwmSpinBox);
        QWidget::setTabOrder(camTriggerOnPwmSpinBox, camTriggerOffPwmSpinBox);
        QWidget::setTabOrder(camTriggerOffPwmSpinBox, camTriggerDurationSpinBox);
        QWidget::setTabOrder(camTriggerDurationSpinBox, retractXSpinBox);
        QWidget::setTabOrder(retractXSpinBox, retractYSpinBox);
        QWidget::setTabOrder(retractYSpinBox, retractZSpinBox);
        QWidget::setTabOrder(retractZSpinBox, neutralXSpinBox);
        QWidget::setTabOrder(neutralXSpinBox, neutralYSpinBox);
        QWidget::setTabOrder(neutralYSpinBox, neutralZSpinBox);
        QWidget::setTabOrder(neutralZSpinBox, controlXSpinBox);
        QWidget::setTabOrder(controlXSpinBox, controlYSpinBox);
        QWidget::setTabOrder(controlYSpinBox, controlZSpinBox);
        QWidget::setTabOrder(controlZSpinBox, camTriggerTypeComboBox);

        retranslateUi(CameraGimbalConfig);

        QMetaObject::connectSlotsByName(CameraGimbalConfig);
    } // setupUi

    void retranslateUi(QWidget *CameraGimbalConfig)
    {
        CameraGimbalConfig->setWindowTitle(QApplication::translate("CameraGimbalConfig", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("CameraGimbalConfig", "<h2>Camera Gimbal</h2>", Q_NULLPTR));
        label_6->setText(QApplication::translate("CameraGimbalConfig", "<h2>Tilt</h2>", Q_NULLPTR));
        label_2->setText(QString());
        tiltGroupBox->setTitle(QString());
        label_11->setText(QApplication::translate("CameraGimbalConfig", "Max", Q_NULLPTR));
        label_8->setText(QApplication::translate("CameraGimbalConfig", "<h3>Angle Limits</h3>", Q_NULLPTR));
        tiltReverseCheckBox->setText(QApplication::translate("CameraGimbalConfig", "Reverse", Q_NULLPTR));
        label_13->setText(QApplication::translate("CameraGimbalConfig", "Max", Q_NULLPTR));
        label_10->setText(QApplication::translate("CameraGimbalConfig", "Min", Q_NULLPTR));
        tiltStabilizeCheckBox->setText(QApplication::translate("CameraGimbalConfig", "Stabilize Tilt", Q_NULLPTR));
        label_12->setText(QApplication::translate("CameraGimbalConfig", "Min", Q_NULLPTR));
        label_7->setText(QApplication::translate("CameraGimbalConfig", "<h3>Servo Limits</h3>", Q_NULLPTR));
        label_9->setText(QApplication::translate("CameraGimbalConfig", "<h3>Input Ch</h3>", Q_NULLPTR));
        label_21->setText(QApplication::translate("CameraGimbalConfig", "<h2>Roll</h2>", Q_NULLPTR));
        label_3->setText(QString());
        rollGroupBox->setTitle(QString());
        rollStabilizeCheckBox->setText(QApplication::translate("CameraGimbalConfig", "Stabilize Roll", Q_NULLPTR));
        label_18->setText(QApplication::translate("CameraGimbalConfig", "<h3>Servo Limits</h3>", Q_NULLPTR));
        label_17->setText(QApplication::translate("CameraGimbalConfig", "<h3>Angle Limits</h3>", Q_NULLPTR));
        label_16->setText(QApplication::translate("CameraGimbalConfig", "<h3>Input Ch</h3>", Q_NULLPTR));
        label_20->setText(QApplication::translate("CameraGimbalConfig", "Min", Q_NULLPTR));
        label_14->setText(QApplication::translate("CameraGimbalConfig", "Min", Q_NULLPTR));
        label_19->setText(QApplication::translate("CameraGimbalConfig", "Max", Q_NULLPTR));
        label_15->setText(QApplication::translate("CameraGimbalConfig", "Max", Q_NULLPTR));
        rollReverseCheckBox->setText(QApplication::translate("CameraGimbalConfig", "Reverse", Q_NULLPTR));
        label_29->setText(QApplication::translate("CameraGimbalConfig", "<h2>Pan</h2>", Q_NULLPTR));
        label_4->setText(QString());
        panGroupBox->setTitle(QString());
        label_27->setText(QApplication::translate("CameraGimbalConfig", "Max", Q_NULLPTR));
        label_23->setText(QApplication::translate("CameraGimbalConfig", "Max", Q_NULLPTR));
        panReverseCheckBox->setText(QApplication::translate("CameraGimbalConfig", "Reverse", Q_NULLPTR));
        label_26->setText(QApplication::translate("CameraGimbalConfig", "<h3>Servo Limits</h3>", Q_NULLPTR));
        label_28->setText(QApplication::translate("CameraGimbalConfig", "Min", Q_NULLPTR));
        label_25->setText(QApplication::translate("CameraGimbalConfig", "<h3>Angle Limits</h3>", Q_NULLPTR));
        panStabilizeCheckBox->setText(QApplication::translate("CameraGimbalConfig", "Stabilize Pan", Q_NULLPTR));
        label_22->setText(QApplication::translate("CameraGimbalConfig", "Min", Q_NULLPTR));
        label_24->setText(QApplication::translate("CameraGimbalConfig", "<h3>Input Ch</h3>", Q_NULLPTR));
        label_38->setText(QApplication::translate("CameraGimbalConfig", "<html><head/><body><p><span style=\" font-size:x-large; font-weight:600;\">Camera Trigger</span></p></body></html>", Q_NULLPTR));
        label_5->setText(QString());
        camTriggerGroupBox->setTitle(QString());
        label_48->setText(QApplication::translate("CameraGimbalConfig", "Type", Q_NULLPTR));
        label_35->setText(QApplication::translate("CameraGimbalConfig", "<h3>Servo Limits</h3>", Q_NULLPTR));
        label_34->setText(QApplication::translate("CameraGimbalConfig", "<h3>Shutter</h3>", Q_NULLPTR));
        label_37->setText(QApplication::translate("CameraGimbalConfig", "Min", Q_NULLPTR));
        label_31->setText(QApplication::translate("CameraGimbalConfig", "Pushed", Q_NULLPTR));
        label_36->setText(QApplication::translate("CameraGimbalConfig", "Max", Q_NULLPTR));
        label_32->setText(QApplication::translate("CameraGimbalConfig", "Not Pushed", Q_NULLPTR));
        label_39->setText(QApplication::translate("CameraGimbalConfig", "Duration\n"
"(1/10th sec)", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("CameraGimbalConfig", "Retract Angles", Q_NULLPTR));
        label_33->setText(QApplication::translate("CameraGimbalConfig", "X", Q_NULLPTR));
        label_41->setText(QApplication::translate("CameraGimbalConfig", "Y", Q_NULLPTR));
        label_30->setText(QApplication::translate("CameraGimbalConfig", "Z", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("CameraGimbalConfig", "Neutral Angles", Q_NULLPTR));
        label_42->setText(QApplication::translate("CameraGimbalConfig", "X", Q_NULLPTR));
        label_43->setText(QApplication::translate("CameraGimbalConfig", "Y", Q_NULLPTR));
        label_44->setText(QApplication::translate("CameraGimbalConfig", "Z", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("CameraGimbalConfig", "Control Angles", Q_NULLPTR));
        label_45->setText(QApplication::translate("CameraGimbalConfig", "X", Q_NULLPTR));
        label_46->setText(QApplication::translate("CameraGimbalConfig", "Y", Q_NULLPTR));
        label_47->setText(QApplication::translate("CameraGimbalConfig", "Z", Q_NULLPTR));
        label_49->setText(QApplication::translate("CameraGimbalConfig", "Mount Mode", Q_NULLPTR));
        label_40->setText(QApplication::translate("CameraGimbalConfig", "<h2>Please set the Ch7 Option to Camera Trigger</h2>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CameraGimbalConfig: public Ui_CameraGimbalConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERAGIMBALCONFIG_H
