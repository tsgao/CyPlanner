/********************************************************************************
** Form generated from reading UI file 'ApmHardwareConfig.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APMHARDWARECONFIG_H
#define UI_APMHARDWARECONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ApmHardwareConfig
{
public:
    QHBoxLayout *horizontalLayout;
    QScrollArea *scrollArea_6;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_12;
    QVBoxLayout *navBarLayout;
    QPushButton *firmwareButton;
    QPushButton *mandatoryHardware;
    QPushButton *frameTypeButton;
    QPushButton *compassButton;
    QPushButton *accelCalibrateButton;
    QPushButton *arduPlaneLevelButton;
    QPushButton *radioCalibrateButton;
    QPushButton *flightModesButton;
    QPushButton *failSafeButton;
    QPushButton *optionalHardwareButton;
    QPushButton *batteryMonitorButton;
    QPushButton *rangeFinderButton;
    QPushButton *airspeedButton;
    QPushButton *opticalFlowButton;
    QPushButton *osdButton;
    QPushButton *cameraGimbalButton;
    QPushButton *antennaTrackerButton;
    QPushButton *radio3DRLargeButton;
    QPushButton *antennaTrackerLargeButton;
    QPushButton *hiddenPushButton;
    QSpacerItem *verticalSpacer;
    QLabel *globalParamStateLabel;
    QProgressBar *globalParamProgressBar;
    QLabel *globalParamProgressLabel;
    QStackedWidget *stackedWidget;

    void setupUi(QWidget *ApmHardwareConfig)
    {
        if (ApmHardwareConfig->objectName().isEmpty())
            ApmHardwareConfig->setObjectName(QStringLiteral("ApmHardwareConfig"));
        ApmHardwareConfig->resize(409, 408);
        ApmHardwareConfig->setMinimumSize(QSize(180, 0));
        horizontalLayout = new QHBoxLayout(ApmHardwareConfig);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        scrollArea_6 = new QScrollArea(ApmHardwareConfig);
        scrollArea_6->setObjectName(QStringLiteral("scrollArea_6"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollArea_6->sizePolicy().hasHeightForWidth());
        scrollArea_6->setSizePolicy(sizePolicy);
        scrollArea_6->setMinimumSize(QSize(203, 0));
        scrollArea_6->setMaximumSize(QSize(175, 16777215));
        scrollArea_6->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QStringLiteral("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 201, 747));
        verticalLayout_12 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        navBarLayout = new QVBoxLayout();
        navBarLayout->setObjectName(QStringLiteral("navBarLayout"));
        navBarLayout->setSizeConstraint(QLayout::SetNoConstraint);
        firmwareButton = new QPushButton(scrollAreaWidgetContents_3);
        firmwareButton->setObjectName(QStringLiteral("firmwareButton"));
        firmwareButton->setMinimumSize(QSize(175, 30));
        firmwareButton->setMaximumSize(QSize(175, 30));
        firmwareButton->setCheckable(true);
        firmwareButton->setChecked(false);
        firmwareButton->setAutoExclusive(true);

        navBarLayout->addWidget(firmwareButton);

        mandatoryHardware = new QPushButton(scrollAreaWidgetContents_3);
        mandatoryHardware->setObjectName(QStringLiteral("mandatoryHardware"));
        mandatoryHardware->setMinimumSize(QSize(175, 30));
        mandatoryHardware->setMaximumSize(QSize(175, 30));
        mandatoryHardware->setStyleSheet(QStringLiteral(""));
        QIcon icon;
        QString iconThemeName = QStringLiteral("://files/images/actions/list-add.svg");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QStringLiteral(":/files/images/actions/list-add.svg"), QSize(), QIcon::Normal, QIcon::Off);
            icon.addFile(QStringLiteral(":/files/images/actions/list-remove.svg"), QSize(), QIcon::Normal, QIcon::On);
            icon.addFile(QStringLiteral(":/files/images/actions/list-remove.svg"), QSize(), QIcon::Disabled, QIcon::On);
            icon.addFile(QStringLiteral(":/files/images/actions/list-remove.svg"), QSize(), QIcon::Active, QIcon::On);
            icon.addFile(QStringLiteral(":/files/images/actions/list-remove.svg"), QSize(), QIcon::Selected, QIcon::On);
        }
        mandatoryHardware->setIcon(icon);
        mandatoryHardware->setCheckable(true);
        mandatoryHardware->setChecked(false);
        mandatoryHardware->setFlat(false);

        navBarLayout->addWidget(mandatoryHardware);

        frameTypeButton = new QPushButton(scrollAreaWidgetContents_3);
        frameTypeButton->setObjectName(QStringLiteral("frameTypeButton"));
        frameTypeButton->setMinimumSize(QSize(150, 30));
        frameTypeButton->setMaximumSize(QSize(150, 30));
        frameTypeButton->setLayoutDirection(Qt::LeftToRight);
        frameTypeButton->setCheckable(true);
        frameTypeButton->setChecked(false);
        frameTypeButton->setAutoExclusive(true);

        navBarLayout->addWidget(frameTypeButton, 0, Qt::AlignRight);

        compassButton = new QPushButton(scrollAreaWidgetContents_3);
        compassButton->setObjectName(QStringLiteral("compassButton"));
        compassButton->setMinimumSize(QSize(150, 30));
        compassButton->setMaximumSize(QSize(150, 30));
        compassButton->setCheckable(true);
        compassButton->setAutoExclusive(true);

        navBarLayout->addWidget(compassButton, 0, Qt::AlignRight);

        accelCalibrateButton = new QPushButton(scrollAreaWidgetContents_3);
        accelCalibrateButton->setObjectName(QStringLiteral("accelCalibrateButton"));
        accelCalibrateButton->setMinimumSize(QSize(150, 30));
        accelCalibrateButton->setMaximumSize(QSize(150, 30));
        accelCalibrateButton->setLayoutDirection(Qt::LeftToRight);
        accelCalibrateButton->setAutoFillBackground(false);
        accelCalibrateButton->setCheckable(true);
        accelCalibrateButton->setAutoExclusive(true);

        navBarLayout->addWidget(accelCalibrateButton, 0, Qt::AlignRight);

        arduPlaneLevelButton = new QPushButton(scrollAreaWidgetContents_3);
        arduPlaneLevelButton->setObjectName(QStringLiteral("arduPlaneLevelButton"));
        arduPlaneLevelButton->setMinimumSize(QSize(150, 30));
        arduPlaneLevelButton->setMaximumSize(QSize(150, 30));
        arduPlaneLevelButton->setLayoutDirection(Qt::LeftToRight);
        arduPlaneLevelButton->setAutoFillBackground(false);
        arduPlaneLevelButton->setCheckable(true);
        arduPlaneLevelButton->setAutoExclusive(true);

        navBarLayout->addWidget(arduPlaneLevelButton, 0, Qt::AlignRight);

        radioCalibrateButton = new QPushButton(scrollAreaWidgetContents_3);
        radioCalibrateButton->setObjectName(QStringLiteral("radioCalibrateButton"));
        radioCalibrateButton->setMinimumSize(QSize(150, 30));
        radioCalibrateButton->setMaximumSize(QSize(150, 30));
        radioCalibrateButton->setCheckable(true);
        radioCalibrateButton->setChecked(false);
        radioCalibrateButton->setAutoExclusive(true);

        navBarLayout->addWidget(radioCalibrateButton, 0, Qt::AlignRight);

        flightModesButton = new QPushButton(scrollAreaWidgetContents_3);
        flightModesButton->setObjectName(QStringLiteral("flightModesButton"));
        flightModesButton->setMinimumSize(QSize(150, 30));
        flightModesButton->setMaximumSize(QSize(150, 30));
        flightModesButton->setCheckable(true);
        flightModesButton->setAutoExclusive(true);

        navBarLayout->addWidget(flightModesButton, 0, Qt::AlignRight);

        failSafeButton = new QPushButton(scrollAreaWidgetContents_3);
        failSafeButton->setObjectName(QStringLiteral("failSafeButton"));
        failSafeButton->setMinimumSize(QSize(150, 30));
        failSafeButton->setMaximumSize(QSize(150, 30));
        failSafeButton->setCheckable(true);
        failSafeButton->setAutoExclusive(true);

        navBarLayout->addWidget(failSafeButton, 0, Qt::AlignRight);

        optionalHardwareButton = new QPushButton(scrollAreaWidgetContents_3);
        optionalHardwareButton->setObjectName(QStringLiteral("optionalHardwareButton"));
        optionalHardwareButton->setMinimumSize(QSize(175, 30));
        optionalHardwareButton->setMaximumSize(QSize(175, 30));
        optionalHardwareButton->setStyleSheet(QStringLiteral(""));
        optionalHardwareButton->setIcon(icon);
        optionalHardwareButton->setCheckable(true);
        optionalHardwareButton->setChecked(false);
        optionalHardwareButton->setAutoExclusive(false);

        navBarLayout->addWidget(optionalHardwareButton);

        batteryMonitorButton = new QPushButton(scrollAreaWidgetContents_3);
        batteryMonitorButton->setObjectName(QStringLiteral("batteryMonitorButton"));
        batteryMonitorButton->setMinimumSize(QSize(150, 30));
        batteryMonitorButton->setMaximumSize(QSize(150, 30));
        batteryMonitorButton->setCheckable(true);
        batteryMonitorButton->setAutoExclusive(true);

        navBarLayout->addWidget(batteryMonitorButton, 0, Qt::AlignRight);

        rangeFinderButton = new QPushButton(scrollAreaWidgetContents_3);
        rangeFinderButton->setObjectName(QStringLiteral("rangeFinderButton"));
        rangeFinderButton->setMinimumSize(QSize(150, 30));
        rangeFinderButton->setMaximumSize(QSize(150, 30));
        rangeFinderButton->setCheckable(true);
        rangeFinderButton->setAutoExclusive(true);

        navBarLayout->addWidget(rangeFinderButton, 0, Qt::AlignRight);

        airspeedButton = new QPushButton(scrollAreaWidgetContents_3);
        airspeedButton->setObjectName(QStringLiteral("airspeedButton"));
        airspeedButton->setMinimumSize(QSize(150, 30));
        airspeedButton->setMaximumSize(QSize(150, 30));
        airspeedButton->setCheckable(true);
        airspeedButton->setAutoExclusive(true);

        navBarLayout->addWidget(airspeedButton, 0, Qt::AlignRight);

        opticalFlowButton = new QPushButton(scrollAreaWidgetContents_3);
        opticalFlowButton->setObjectName(QStringLiteral("opticalFlowButton"));
        opticalFlowButton->setMinimumSize(QSize(150, 30));
        opticalFlowButton->setMaximumSize(QSize(150, 30));
        opticalFlowButton->setCheckable(true);
        opticalFlowButton->setAutoExclusive(true);

        navBarLayout->addWidget(opticalFlowButton, 0, Qt::AlignRight);

        osdButton = new QPushButton(scrollAreaWidgetContents_3);
        osdButton->setObjectName(QStringLiteral("osdButton"));
        osdButton->setMinimumSize(QSize(150, 30));
        osdButton->setMaximumSize(QSize(150, 30));
        osdButton->setCheckable(true);
        osdButton->setAutoExclusive(true);

        navBarLayout->addWidget(osdButton, 0, Qt::AlignRight);

        cameraGimbalButton = new QPushButton(scrollAreaWidgetContents_3);
        cameraGimbalButton->setObjectName(QStringLiteral("cameraGimbalButton"));
        cameraGimbalButton->setMinimumSize(QSize(150, 30));
        cameraGimbalButton->setMaximumSize(QSize(150, 30));
        cameraGimbalButton->setCheckable(true);
        cameraGimbalButton->setAutoExclusive(true);

        navBarLayout->addWidget(cameraGimbalButton, 0, Qt::AlignRight);

        antennaTrackerButton = new QPushButton(scrollAreaWidgetContents_3);
        antennaTrackerButton->setObjectName(QStringLiteral("antennaTrackerButton"));
        antennaTrackerButton->setMinimumSize(QSize(150, 30));
        antennaTrackerButton->setMaximumSize(QSize(150, 30));
        antennaTrackerButton->setCheckable(true);
        antennaTrackerButton->setAutoExclusive(true);

        navBarLayout->addWidget(antennaTrackerButton, 0, Qt::AlignRight);

        radio3DRLargeButton = new QPushButton(scrollAreaWidgetContents_3);
        radio3DRLargeButton->setObjectName(QStringLiteral("radio3DRLargeButton"));
        radio3DRLargeButton->setMinimumSize(QSize(0, 30));
        radio3DRLargeButton->setMaximumSize(QSize(16777215, 30));
        radio3DRLargeButton->setBaseSize(QSize(30, 0));
        radio3DRLargeButton->setCheckable(true);
        radio3DRLargeButton->setAutoExclusive(true);

        navBarLayout->addWidget(radio3DRLargeButton);

        antennaTrackerLargeButton = new QPushButton(scrollAreaWidgetContents_3);
        antennaTrackerLargeButton->setObjectName(QStringLiteral("antennaTrackerLargeButton"));
        antennaTrackerLargeButton->setMinimumSize(QSize(0, 30));
        antennaTrackerLargeButton->setMaximumSize(QSize(16777215, 30));
        antennaTrackerLargeButton->setBaseSize(QSize(30, 0));
        antennaTrackerLargeButton->setCheckable(true);
        antennaTrackerLargeButton->setAutoExclusive(true);

        navBarLayout->addWidget(antennaTrackerLargeButton);

        hiddenPushButton = new QPushButton(scrollAreaWidgetContents_3);
        hiddenPushButton->setObjectName(QStringLiteral("hiddenPushButton"));
        hiddenPushButton->setCheckable(true);
        hiddenPushButton->setChecked(true);
        hiddenPushButton->setAutoExclusive(true);

        navBarLayout->addWidget(hiddenPushButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        navBarLayout->addItem(verticalSpacer);

        globalParamStateLabel = new QLabel(scrollAreaWidgetContents_3);
        globalParamStateLabel->setObjectName(QStringLiteral("globalParamStateLabel"));
        globalParamStateLabel->setAlignment(Qt::AlignCenter);

        navBarLayout->addWidget(globalParamStateLabel);

        globalParamProgressBar = new QProgressBar(scrollAreaWidgetContents_3);
        globalParamProgressBar->setObjectName(QStringLiteral("globalParamProgressBar"));
        globalParamProgressBar->setValue(0);

        navBarLayout->addWidget(globalParamProgressBar);

        globalParamProgressLabel = new QLabel(scrollAreaWidgetContents_3);
        globalParamProgressLabel->setObjectName(QStringLiteral("globalParamProgressLabel"));
        globalParamProgressLabel->setAlignment(Qt::AlignCenter);

        navBarLayout->addWidget(globalParamProgressLabel);


        verticalLayout_12->addLayout(navBarLayout);

        scrollArea_6->setWidget(scrollAreaWidgetContents_3);

        horizontalLayout->addWidget(scrollArea_6);

        stackedWidget = new QStackedWidget(ApmHardwareConfig);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        stackedWidget->setMinimumSize(QSize(175, 0));

        horizontalLayout->addWidget(stackedWidget);


        retranslateUi(ApmHardwareConfig);

        stackedWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(ApmHardwareConfig);
    } // setupUi

    void retranslateUi(QWidget *ApmHardwareConfig)
    {
        ApmHardwareConfig->setWindowTitle(QApplication::translate("ApmHardwareConfig", "Form", Q_NULLPTR));
        firmwareButton->setText(QApplication::translate("ApmHardwareConfig", "Install Firmware", Q_NULLPTR));
        mandatoryHardware->setText(QApplication::translate("ApmHardwareConfig", "Mandatory Setup ...", Q_NULLPTR));
        frameTypeButton->setText(QApplication::translate("ApmHardwareConfig", "Frame Type", Q_NULLPTR));
        compassButton->setText(QApplication::translate("ApmHardwareConfig", "Compass", Q_NULLPTR));
        accelCalibrateButton->setText(QApplication::translate("ApmHardwareConfig", "Accel Calibration", Q_NULLPTR));
        arduPlaneLevelButton->setText(QApplication::translate("ApmHardwareConfig", "ArduPlane Level", Q_NULLPTR));
        radioCalibrateButton->setText(QApplication::translate("ApmHardwareConfig", "Radio Calibration", Q_NULLPTR));
        flightModesButton->setText(QApplication::translate("ApmHardwareConfig", "Flight Modes", Q_NULLPTR));
        failSafeButton->setText(QApplication::translate("ApmHardwareConfig", "Failsafe", Q_NULLPTR));
        optionalHardwareButton->setText(QApplication::translate("ApmHardwareConfig", "Optional Setup ...", Q_NULLPTR));
        batteryMonitorButton->setText(QApplication::translate("ApmHardwareConfig", "Battery Monitor", Q_NULLPTR));
        rangeFinderButton->setText(QApplication::translate("ApmHardwareConfig", "Range Finder", Q_NULLPTR));
        airspeedButton->setText(QApplication::translate("ApmHardwareConfig", "Airspeed", Q_NULLPTR));
        opticalFlowButton->setText(QApplication::translate("ApmHardwareConfig", "Optical Flow", Q_NULLPTR));
        osdButton->setText(QApplication::translate("ApmHardwareConfig", "OSD", Q_NULLPTR));
        cameraGimbalButton->setText(QApplication::translate("ApmHardwareConfig", "Camera Gimbal", Q_NULLPTR));
        antennaTrackerButton->setText(QApplication::translate("ApmHardwareConfig", "Antenna Tracker", Q_NULLPTR));
        radio3DRLargeButton->setText(QApplication::translate("ApmHardwareConfig", "3DR Radio", Q_NULLPTR));
        antennaTrackerLargeButton->setText(QApplication::translate("ApmHardwareConfig", "Antenna Tracker", Q_NULLPTR));
        hiddenPushButton->setText(QApplication::translate("ApmHardwareConfig", "hidden", Q_NULLPTR));
        globalParamStateLabel->setText(QApplication::translate("ApmHardwareConfig", "Parameters Downloaded", Q_NULLPTR));
        globalParamProgressLabel->setText(QApplication::translate("ApmHardwareConfig", "0/?", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ApmHardwareConfig: public Ui_ApmHardwareConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APMHARDWARECONFIG_H
