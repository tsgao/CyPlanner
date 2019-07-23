/********************************************************************************
** Form generated from reading UI file 'ApmSoftwareConfig.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APMSOFTWARECONFIG_H
#define UI_APMSOFTWARECONFIG_H

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

class Ui_ApmSoftwareConfig
{
public:
    QHBoxLayout *horizontalLayout;
    QScrollArea *scrollArea_6;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_12;
    QVBoxLayout *navBarLayout;
    QPushButton *flightModesButton;
    QPushButton *geoFenceButton;
    QPushButton *basicPidButton;
    QPushButton *arduCopterPidButton;
    QPushButton *arduPlanePidButton;
    QPushButton *arduRoverPidButton;
    QPushButton *standardParamButton;
    QPushButton *advancedParamButton;
    QPushButton *advParamListButton;
    QPushButton *plannerConfigButton;
    QSpacerItem *verticalSpacer;
    QLabel *globalParamStateLabel;
    QProgressBar *globalParamProgressBar;
    QLabel *globalParamProgressLabel;
    QStackedWidget *stackedWidget;

    void setupUi(QWidget *ApmSoftwareConfig)
    {
        if (ApmSoftwareConfig->objectName().isEmpty())
            ApmSoftwareConfig->setObjectName(QStringLiteral("ApmSoftwareConfig"));
        ApmSoftwareConfig->resize(957, 618);
        horizontalLayout = new QHBoxLayout(ApmSoftwareConfig);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        scrollArea_6 = new QScrollArea(ApmSoftwareConfig);
        scrollArea_6->setObjectName(QStringLiteral("scrollArea_6"));
        scrollArea_6->setMinimumSize(QSize(203, 0));
        scrollArea_6->setMaximumSize(QSize(175, 16777215));
        scrollArea_6->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QStringLiteral("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 201, 598));
        verticalLayout_12 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        navBarLayout = new QVBoxLayout();
        navBarLayout->setObjectName(QStringLiteral("navBarLayout"));
        navBarLayout->setSizeConstraint(QLayout::SetMinAndMaxSize);
        flightModesButton = new QPushButton(scrollAreaWidgetContents_3);
        flightModesButton->setObjectName(QStringLiteral("flightModesButton"));
        flightModesButton->setMinimumSize(QSize(175, 30));
        flightModesButton->setMaximumSize(QSize(175, 30));
        flightModesButton->setCheckable(true);
        flightModesButton->setAutoExclusive(true);

        navBarLayout->addWidget(flightModesButton);

        geoFenceButton = new QPushButton(scrollAreaWidgetContents_3);
        geoFenceButton->setObjectName(QStringLiteral("geoFenceButton"));
        geoFenceButton->setMinimumSize(QSize(175, 30));
        geoFenceButton->setMaximumSize(QSize(175, 30));
        geoFenceButton->setCheckable(true);
        geoFenceButton->setAutoExclusive(true);

        navBarLayout->addWidget(geoFenceButton);

        basicPidButton = new QPushButton(scrollAreaWidgetContents_3);
        basicPidButton->setObjectName(QStringLiteral("basicPidButton"));
        basicPidButton->setMinimumSize(QSize(175, 30));
        basicPidButton->setMaximumSize(QSize(175, 30));
        basicPidButton->setCheckable(true);
        basicPidButton->setAutoExclusive(true);

        navBarLayout->addWidget(basicPidButton);

        arduCopterPidButton = new QPushButton(scrollAreaWidgetContents_3);
        arduCopterPidButton->setObjectName(QStringLiteral("arduCopterPidButton"));
        arduCopterPidButton->setMinimumSize(QSize(175, 30));
        arduCopterPidButton->setMaximumSize(QSize(175, 30));
        arduCopterPidButton->setCheckable(true);
        arduCopterPidButton->setAutoExclusive(true);

        navBarLayout->addWidget(arduCopterPidButton);

        arduPlanePidButton = new QPushButton(scrollAreaWidgetContents_3);
        arduPlanePidButton->setObjectName(QStringLiteral("arduPlanePidButton"));
        arduPlanePidButton->setMinimumSize(QSize(175, 30));
        arduPlanePidButton->setMaximumSize(QSize(175, 30));
        arduPlanePidButton->setCheckable(true);
        arduPlanePidButton->setAutoExclusive(true);

        navBarLayout->addWidget(arduPlanePidButton);

        arduRoverPidButton = new QPushButton(scrollAreaWidgetContents_3);
        arduRoverPidButton->setObjectName(QStringLiteral("arduRoverPidButton"));
        arduRoverPidButton->setMinimumSize(QSize(175, 30));
        arduRoverPidButton->setMaximumSize(QSize(175, 30));
        arduRoverPidButton->setCheckable(true);
        arduRoverPidButton->setAutoExclusive(true);

        navBarLayout->addWidget(arduRoverPidButton);

        standardParamButton = new QPushButton(scrollAreaWidgetContents_3);
        standardParamButton->setObjectName(QStringLiteral("standardParamButton"));
        standardParamButton->setMinimumSize(QSize(175, 30));
        standardParamButton->setMaximumSize(QSize(175, 30));
        standardParamButton->setCheckable(true);
        standardParamButton->setAutoExclusive(true);

        navBarLayout->addWidget(standardParamButton);

        advancedParamButton = new QPushButton(scrollAreaWidgetContents_3);
        advancedParamButton->setObjectName(QStringLiteral("advancedParamButton"));
        advancedParamButton->setMinimumSize(QSize(175, 30));
        advancedParamButton->setMaximumSize(QSize(175, 30));
        advancedParamButton->setCheckable(true);
        advancedParamButton->setAutoExclusive(true);

        navBarLayout->addWidget(advancedParamButton);

        advParamListButton = new QPushButton(scrollAreaWidgetContents_3);
        advParamListButton->setObjectName(QStringLiteral("advParamListButton"));
        advParamListButton->setMinimumSize(QSize(175, 30));
        advParamListButton->setMaximumSize(QSize(175, 30));
        advParamListButton->setCheckable(true);
        advParamListButton->setAutoExclusive(true);

        navBarLayout->addWidget(advParamListButton);

        plannerConfigButton = new QPushButton(scrollAreaWidgetContents_3);
        plannerConfigButton->setObjectName(QStringLiteral("plannerConfigButton"));
        plannerConfigButton->setMinimumSize(QSize(175, 30));
        plannerConfigButton->setMaximumSize(QSize(175, 30));
        plannerConfigButton->setCheckable(true);
        plannerConfigButton->setChecked(true);
        plannerConfigButton->setAutoExclusive(true);

        navBarLayout->addWidget(plannerConfigButton);

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

        stackedWidget = new QStackedWidget(ApmSoftwareConfig);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));

        horizontalLayout->addWidget(stackedWidget);


        retranslateUi(ApmSoftwareConfig);

        QMetaObject::connectSlotsByName(ApmSoftwareConfig);
    } // setupUi

    void retranslateUi(QWidget *ApmSoftwareConfig)
    {
        ApmSoftwareConfig->setWindowTitle(QApplication::translate("ApmSoftwareConfig", "Form", Q_NULLPTR));
        flightModesButton->setText(QApplication::translate("ApmSoftwareConfig", "Flight Modes", Q_NULLPTR));
        geoFenceButton->setText(QApplication::translate("ApmSoftwareConfig", "Geo Fence", Q_NULLPTR));
        basicPidButton->setText(QApplication::translate("ApmSoftwareConfig", "Basic Tuning", Q_NULLPTR));
        arduCopterPidButton->setText(QApplication::translate("ApmSoftwareConfig", "APM:Copter PIDs", Q_NULLPTR));
        arduPlanePidButton->setText(QApplication::translate("ApmSoftwareConfig", "APM:Plane PIDs", Q_NULLPTR));
        arduRoverPidButton->setText(QApplication::translate("ApmSoftwareConfig", "APM:Rover PIDs", Q_NULLPTR));
        standardParamButton->setText(QApplication::translate("ApmSoftwareConfig", "Standard Params", Q_NULLPTR));
        advancedParamButton->setText(QApplication::translate("ApmSoftwareConfig", "Advanced Params", Q_NULLPTR));
        advParamListButton->setText(QApplication::translate("ApmSoftwareConfig", "Full Parameter List", Q_NULLPTR));
        plannerConfigButton->setText(QApplication::translate("ApmSoftwareConfig", "APM Planner 2.0 Config", Q_NULLPTR));
        globalParamStateLabel->setText(QApplication::translate("ApmSoftwareConfig", "Parameters", Q_NULLPTR));
        globalParamProgressLabel->setText(QApplication::translate("ApmSoftwareConfig", "0/?", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ApmSoftwareConfig: public Ui_ApmSoftwareConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APMSOFTWARECONFIG_H
