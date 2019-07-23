/********************************************************************************
** Form generated from reading UI file 'UASActionsWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UASACTIONSWIDGET_H
#define UI_UASACTIONSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
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

class Ui_UASActionsWidget
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *missionGroupBox;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QPushButton *restartMissionButton;
    QComboBox *altitudeTypeComboBox;
    QDoubleSpinBox *altitudeDoubleSpinBox;
    QPushButton *changeAltitudeButton;
    QDoubleSpinBox *speedDoubleSpinBox;
    QPushButton *changeSpeedButton;
    QComboBox *waypointListComboBox;
    QPushButton *goToWaypointButton;
    QLabel *currentWaypointLabel;
    QGroupBox *actionsGroupBox;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout_2;
    QComboBox *actionComboBox;
    QPushButton *armDisarmButton;
    QPushButton *setModeButton;
    QPushButton *exeActionButton;
    QComboBox *modeComboBox;
    QLabel *armedStatuslabel;
    QGroupBox *shortcutGroupBox;
    QGridLayout *gridLayout_3;
    QPushButton *autoModeButton;
    QPushButton *stabilizeModeButton;
    QPushButton *loiterModeButton;
    QPushButton *rtlModeButton;
    QPushButton *opt1ModeButton;
    QPushButton *opt2ModeButton;
    QPushButton *opt3ModeButton;
    QPushButton *opt4ModeButton;
    QButtonGroup *shortcutButtonGroup;

    void setupUi(QWidget *UASActionsWidget)
    {
        if (UASActionsWidget->objectName().isEmpty())
            UASActionsWidget->setObjectName(QStringLiteral("UASActionsWidget"));
        UASActionsWidget->resize(417, 315);
        verticalLayout = new QVBoxLayout(UASActionsWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(6, 6, 6, 6);
        missionGroupBox = new QGroupBox(UASActionsWidget);
        missionGroupBox->setObjectName(QStringLiteral("missionGroupBox"));
        missionGroupBox->setEnabled(true);
        missionGroupBox->setMinimumSize(QSize(0, 115));
        missionGroupBox->setMaximumSize(QSize(16777215, 125));
        horizontalLayout = new QHBoxLayout(missionGroupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(2, 2, 2, 2);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMaximumSize);
        restartMissionButton = new QPushButton(missionGroupBox);
        restartMissionButton->setObjectName(QStringLiteral("restartMissionButton"));
        restartMissionButton->setMinimumSize(QSize(0, 17));

        gridLayout->addWidget(restartMissionButton, 0, 2, 1, 1);

        altitudeTypeComboBox = new QComboBox(missionGroupBox);
        altitudeTypeComboBox->setObjectName(QStringLiteral("altitudeTypeComboBox"));
        altitudeTypeComboBox->setMinimumSize(QSize(0, 14));

        gridLayout->addWidget(altitudeTypeComboBox, 2, 0, 1, 1);

        altitudeDoubleSpinBox = new QDoubleSpinBox(missionGroupBox);
        altitudeDoubleSpinBox->setObjectName(QStringLiteral("altitudeDoubleSpinBox"));
        altitudeDoubleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        altitudeDoubleSpinBox->setDecimals(1);
        altitudeDoubleSpinBox->setMaximum(1000);

        gridLayout->addWidget(altitudeDoubleSpinBox, 2, 1, 1, 1);

        changeAltitudeButton = new QPushButton(missionGroupBox);
        changeAltitudeButton->setObjectName(QStringLiteral("changeAltitudeButton"));
        changeAltitudeButton->setMinimumSize(QSize(0, 17));

        gridLayout->addWidget(changeAltitudeButton, 2, 2, 1, 1);

        speedDoubleSpinBox = new QDoubleSpinBox(missionGroupBox);
        speedDoubleSpinBox->setObjectName(QStringLiteral("speedDoubleSpinBox"));
        speedDoubleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        speedDoubleSpinBox->setDecimals(1);

        gridLayout->addWidget(speedDoubleSpinBox, 3, 1, 1, 1);

        changeSpeedButton = new QPushButton(missionGroupBox);
        changeSpeedButton->setObjectName(QStringLiteral("changeSpeedButton"));
        changeSpeedButton->setMinimumSize(QSize(0, 17));

        gridLayout->addWidget(changeSpeedButton, 3, 2, 1, 1);

        waypointListComboBox = new QComboBox(missionGroupBox);
        waypointListComboBox->setObjectName(QStringLiteral("waypointListComboBox"));
        waypointListComboBox->setMinimumSize(QSize(0, 14));

        gridLayout->addWidget(waypointListComboBox, 1, 1, 1, 1);

        goToWaypointButton = new QPushButton(missionGroupBox);
        goToWaypointButton->setObjectName(QStringLiteral("goToWaypointButton"));
        goToWaypointButton->setMinimumSize(QSize(0, 17));

        gridLayout->addWidget(goToWaypointButton, 1, 2, 1, 1);

        currentWaypointLabel = new QLabel(missionGroupBox);
        currentWaypointLabel->setObjectName(QStringLiteral("currentWaypointLabel"));
        currentWaypointLabel->setMinimumSize(QSize(0, 17));
        currentWaypointLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(currentWaypointLabel, 1, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout);


        verticalLayout->addWidget(missionGroupBox);

        actionsGroupBox = new QGroupBox(UASActionsWidget);
        actionsGroupBox->setObjectName(QStringLiteral("actionsGroupBox"));
        actionsGroupBox->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(actionsGroupBox->sizePolicy().hasHeightForWidth());
        actionsGroupBox->setSizePolicy(sizePolicy);
        actionsGroupBox->setMinimumSize(QSize(0, 105));
        actionsGroupBox->setMaximumSize(QSize(16777215, 100));
        horizontalLayout_2 = new QHBoxLayout(actionsGroupBox);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(2, 2, 2, 2);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        actionComboBox = new QComboBox(actionsGroupBox);
        actionComboBox->setObjectName(QStringLiteral("actionComboBox"));

        gridLayout_2->addWidget(actionComboBox, 0, 0, 1, 1);

        armDisarmButton = new QPushButton(actionsGroupBox);
        armDisarmButton->setObjectName(QStringLiteral("armDisarmButton"));
        armDisarmButton->setMinimumSize(QSize(0, 17));
        armDisarmButton->setMaximumSize(QSize(16777215, 30));

        gridLayout_2->addWidget(armDisarmButton, 2, 1, 1, 1);

        setModeButton = new QPushButton(actionsGroupBox);
        setModeButton->setObjectName(QStringLiteral("setModeButton"));
        setModeButton->setMinimumSize(QSize(0, 17));
        setModeButton->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_2->addWidget(setModeButton, 1, 1, 1, 1);

        exeActionButton = new QPushButton(actionsGroupBox);
        exeActionButton->setObjectName(QStringLiteral("exeActionButton"));
        exeActionButton->setMinimumSize(QSize(0, 17));
        exeActionButton->setMaximumSize(QSize(16777215, 30));

        gridLayout_2->addWidget(exeActionButton, 0, 1, 1, 1);

        modeComboBox = new QComboBox(actionsGroupBox);
        modeComboBox->setObjectName(QStringLiteral("modeComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(modeComboBox->sizePolicy().hasHeightForWidth());
        modeComboBox->setSizePolicy(sizePolicy1);
        modeComboBox->setMinimumSize(QSize(0, 0));

        gridLayout_2->addWidget(modeComboBox, 1, 0, 1, 1);

        armedStatuslabel = new QLabel(actionsGroupBox);
        armedStatuslabel->setObjectName(QStringLiteral("armedStatuslabel"));
        sizePolicy.setHeightForWidth(armedStatuslabel->sizePolicy().hasHeightForWidth());
        armedStatuslabel->setSizePolicy(sizePolicy);
        armedStatuslabel->setMinimumSize(QSize(0, 17));
        armedStatuslabel->setStyleSheet(QLatin1String("QLabel {\n"
"	font: 75 14pt \"Lucida Grande\";\n"
"}"));
        armedStatuslabel->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout_2->addWidget(armedStatuslabel, 2, 0, 1, 1);


        horizontalLayout_2->addLayout(gridLayout_2);


        verticalLayout->addWidget(actionsGroupBox);

        shortcutGroupBox = new QGroupBox(UASActionsWidget);
        shortcutGroupBox->setObjectName(QStringLiteral("shortcutGroupBox"));
        shortcutGroupBox->setEnabled(true);
        shortcutGroupBox->setMinimumSize(QSize(0, 82));
        shortcutGroupBox->setMaximumSize(QSize(65000, 96));
        gridLayout_3 = new QGridLayout(shortcutGroupBox);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        autoModeButton = new QPushButton(shortcutGroupBox);
        shortcutButtonGroup = new QButtonGroup(UASActionsWidget);
        shortcutButtonGroup->setObjectName(QStringLiteral("shortcutButtonGroup"));
        shortcutButtonGroup->addButton(autoModeButton);
        autoModeButton->setObjectName(QStringLiteral("autoModeButton"));
        autoModeButton->setMinimumSize(QSize(75, 22));
        autoModeButton->setMaximumSize(QSize(75, 30));
        autoModeButton->setStyleSheet(QLatin1String("QPushButton:pressed {\n"
"	background-color: rgb(100, 216, 100);\n"
"}\n"
""));
        autoModeButton->setCheckable(true);

        gridLayout_3->addWidget(autoModeButton, 0, 0, 1, 1);

        stabilizeModeButton = new QPushButton(shortcutGroupBox);
        shortcutButtonGroup->addButton(stabilizeModeButton);
        stabilizeModeButton->setObjectName(QStringLiteral("stabilizeModeButton"));
        stabilizeModeButton->setMinimumSize(QSize(75, 22));
        stabilizeModeButton->setMaximumSize(QSize(75, 30));
        stabilizeModeButton->setStyleSheet(QLatin1String("QPushButton:pressed {\n"
"	background-color: rgb(100, 216, 100);\n"
"}\n"
""));
        stabilizeModeButton->setCheckable(true);

        gridLayout_3->addWidget(stabilizeModeButton, 0, 1, 1, 1);

        loiterModeButton = new QPushButton(shortcutGroupBox);
        shortcutButtonGroup->addButton(loiterModeButton);
        loiterModeButton->setObjectName(QStringLiteral("loiterModeButton"));
        loiterModeButton->setMinimumSize(QSize(75, 22));
        loiterModeButton->setMaximumSize(QSize(75, 30));
        loiterModeButton->setStyleSheet(QLatin1String("QPushButton:pressed {\n"
"	background-color: rgb(100, 216, 100);\n"
"}\n"
"\n"
"\n"
""));
        loiterModeButton->setCheckable(true);

        gridLayout_3->addWidget(loiterModeButton, 0, 2, 1, 1);

        rtlModeButton = new QPushButton(shortcutGroupBox);
        shortcutButtonGroup->addButton(rtlModeButton);
        rtlModeButton->setObjectName(QStringLiteral("rtlModeButton"));
        rtlModeButton->setMinimumSize(QSize(75, 22));
        rtlModeButton->setMaximumSize(QSize(75, 30));
        rtlModeButton->setStyleSheet(QLatin1String("QPushButton:pressed {\n"
"	background-color: rgb(100, 216, 100);\n"
"}\n"
"\n"
""));
        rtlModeButton->setCheckable(true);

        gridLayout_3->addWidget(rtlModeButton, 0, 3, 1, 1);

        opt1ModeButton = new QPushButton(shortcutGroupBox);
        shortcutButtonGroup->addButton(opt1ModeButton);
        opt1ModeButton->setObjectName(QStringLiteral("opt1ModeButton"));
        opt1ModeButton->setMinimumSize(QSize(75, 22));
        opt1ModeButton->setMaximumSize(QSize(75, 30));
        opt1ModeButton->setStyleSheet(QLatin1String("QPushButton:pressed {\n"
"	background-color: rgb(100, 216, 100);\n"
"}\n"
""));
        opt1ModeButton->setCheckable(true);

        gridLayout_3->addWidget(opt1ModeButton, 1, 0, 1, 1);

        opt2ModeButton = new QPushButton(shortcutGroupBox);
        shortcutButtonGroup->addButton(opt2ModeButton);
        opt2ModeButton->setObjectName(QStringLiteral("opt2ModeButton"));
        opt2ModeButton->setMinimumSize(QSize(75, 22));
        opt2ModeButton->setMaximumSize(QSize(75, 30));
        opt2ModeButton->setStyleSheet(QLatin1String("QPushButton:pressed {\n"
"	background-color: rgb(100, 216, 100);\n"
"}"));
        opt2ModeButton->setCheckable(true);

        gridLayout_3->addWidget(opt2ModeButton, 1, 1, 1, 1);

        opt3ModeButton = new QPushButton(shortcutGroupBox);
        shortcutButtonGroup->addButton(opt3ModeButton);
        opt3ModeButton->setObjectName(QStringLiteral("opt3ModeButton"));
        opt3ModeButton->setMinimumSize(QSize(75, 22));
        opt3ModeButton->setMaximumSize(QSize(75, 30));
        opt3ModeButton->setStyleSheet(QLatin1String("QPushButton:pressed {\n"
"	background-color: rgb(100, 216, 100);\n"
"}\n"
""));
        opt3ModeButton->setCheckable(true);

        gridLayout_3->addWidget(opt3ModeButton, 1, 2, 1, 1);

        opt4ModeButton = new QPushButton(shortcutGroupBox);
        shortcutButtonGroup->addButton(opt4ModeButton);
        opt4ModeButton->setObjectName(QStringLiteral("opt4ModeButton"));
        opt4ModeButton->setMinimumSize(QSize(75, 22));
        opt4ModeButton->setMaximumSize(QSize(75, 30));
        opt4ModeButton->setStyleSheet(QLatin1String("QPushButton:pressed {\n"
"	background-color: rgb(100, 216, 100);\n"
"}\n"
""));
        opt4ModeButton->setCheckable(true);

        gridLayout_3->addWidget(opt4ModeButton, 1, 3, 1, 1);


        verticalLayout->addWidget(shortcutGroupBox);


        retranslateUi(UASActionsWidget);

        QMetaObject::connectSlotsByName(UASActionsWidget);
    } // setupUi

    void retranslateUi(QWidget *UASActionsWidget)
    {
        UASActionsWidget->setWindowTitle(QApplication::translate("UASActionsWidget", "Form", Q_NULLPTR));
        missionGroupBox->setTitle(QApplication::translate("UASActionsWidget", "Mission Controls", Q_NULLPTR));
        restartMissionButton->setText(QApplication::translate("UASActionsWidget", "Restart Mission", Q_NULLPTR));
        changeAltitudeButton->setText(QApplication::translate("UASActionsWidget", "Change Altitude", Q_NULLPTR));
        changeSpeedButton->setText(QApplication::translate("UASActionsWidget", "Change Speed", Q_NULLPTR));
        goToWaypointButton->setText(QApplication::translate("UASActionsWidget", "Go To Waypoint", Q_NULLPTR));
        currentWaypointLabel->setText(QApplication::translate("UASActionsWidget", "Current WP:", Q_NULLPTR));
        actionsGroupBox->setTitle(QApplication::translate("UASActionsWidget", "Actions", Q_NULLPTR));
        armDisarmButton->setText(QApplication::translate("UASActionsWidget", "ARM", Q_NULLPTR));
        setModeButton->setText(QApplication::translate("UASActionsWidget", "Set Mode", Q_NULLPTR));
        exeActionButton->setText(QApplication::translate("UASActionsWidget", "Execute Action", Q_NULLPTR));
        armedStatuslabel->setText(QApplication::translate("UASActionsWidget", "<html><head/><body><p><span style=\" color:#ff0000;\">disconnected</span></p></body></html>", Q_NULLPTR));
        shortcutGroupBox->setTitle(QApplication::translate("UASActionsWidget", "Shortcut Modes", Q_NULLPTR));
        autoModeButton->setText(QApplication::translate("UASActionsWidget", "Auto", Q_NULLPTR));
        stabilizeModeButton->setText(QApplication::translate("UASActionsWidget", "Stabilize", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        stabilizeModeButton->setShortcut(QApplication::translate("UASActionsWidget", "Meta+Shift+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        loiterModeButton->setText(QApplication::translate("UASActionsWidget", "Loiter", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        loiterModeButton->setShortcut(QApplication::translate("UASActionsWidget", "Meta+Shift+L", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        rtlModeButton->setText(QApplication::translate("UASActionsWidget", "RTL", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        rtlModeButton->setShortcut(QApplication::translate("UASActionsWidget", "Meta+Shift+R", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        opt1ModeButton->setText(QApplication::translate("UASActionsWidget", "...", Q_NULLPTR));
        opt2ModeButton->setText(QApplication::translate("UASActionsWidget", "...", Q_NULLPTR));
        opt3ModeButton->setText(QApplication::translate("UASActionsWidget", "...", Q_NULLPTR));
        opt4ModeButton->setText(QApplication::translate("UASActionsWidget", "...", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UASActionsWidget: public Ui_UASActionsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UASACTIONSWIDGET_H
