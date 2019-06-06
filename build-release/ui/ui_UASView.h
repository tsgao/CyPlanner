/********************************************************************************
** Form generated from reading UI file 'UASView.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UASVIEW_H
#define UI_UASVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UASView
{
public:
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *uasViewFrame;
    QGridLayout *gridLayout;
    QToolButton *typeButton;
    QLabel *nameLabel;
    QLabel *modeLabel;
    QLabel *timeRemainingLabel;
    QLabel *timeElapsedLabel;
    QProgressBar *thrustBar;
    QLabel *groundDistanceLabel;
    QLabel *speedLabel;
    QGroupBox *heartbeatIcon;
    QProgressBar *batteryBar;
    QLabel *waypointLabel;
    QLabel *positionLabel;
    QHBoxLayout *horizontalLayout;
    QPushButton *liftoffButton;
    QPushButton *haltButton;
    QPushButton *continueButton;
    QPushButton *landButton;
    QPushButton *shutdownButton;
    QPushButton *abortButton;
    QPushButton *killButton;
    QLabel *statusTextLabel;
    QLabel *stateLabel;
    QLabel *navLabel;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *UASView)
    {
        if (UASView->objectName().isEmpty())
            UASView->setObjectName(QStringLiteral("UASView"));
        UASView->resize(360, 124);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(UASView->sizePolicy().hasHeightForWidth());
        UASView->setSizePolicy(sizePolicy);
        UASView->setMinimumSize(QSize(260, 0));
        UASView->setMaximumSize(QSize(360, 16777215));
        UASView->setStyleSheet(QLatin1String("QWidget#colorIcon {}\n"
"\n"
"QWidget {\n"
"background-color: #050508;\n"
"color: #DDDDDF;\n"
"background-clip: border;\n"
"font-size: 11px;\n"
"}\n"
"\n"
"QLabel {\n"
"background-color: transparent;\n"
"}\n"
"\n"
"QLabel#nameLabel {\n"
"	font: bold 16px;\n"
"	color: #3C7B9E;\n"
"}\n"
"\n"
"QLabel#modeLabel {\n"
"	font: 12px;\n"
"}\n"
"\n"
"QLabel#stateLabel {\n"
"	font: 12px;\n"
"	color: #3C7B9E;\n"
"}\n"
"\n"
"QLabel#navLabel {\n"
"	font: 12px;\n"
"}\n"
"\n"
"QLabel#positionLabel {\n"
"	font: 8px;\n"
"}\n"
"\n"
"QLabel#timeElapsedLabel {\n"
"	font: 8px;\n"
"}\n"
"\n"
"QLabel#groundDistanceLabel {\n"
"	font: 8px;\n"
"}\n"
"\n"
"QLabel#speedLabel {\n"
"	font: 8px;\n"
"}\n"
"\n"
"QLabel#timeRemainingLabel {\n"
"	font: 8px;\n"
"}\n"
"\n"
"QLabel#waypointLabel {\n"
"	font: 22px;\n"
"}\n"
"\n"
"QGroupBox {\n"
"	border: 1px solid #4A4A4F;\n"
"	border-radius: 10px;\n"
"	padding: 0px 0px 0px 0px;\n"
"	margin: 0px;\n"
"}\n"
"\n"
" QGroupBox::title {\n"
"     subcontrol-origin: margin;\n"
"     subcontrol-position: top"
                        " center; /* position at the top center */\n"
"     margin: 0 3px 0px 3px;\n"
"     padding: 0 3px 0px 0px;\n"
"     font: bold 8px;\n"
" }\n"
"\n"
"QGroupBox#heartbeatIcon {\n"
"	background-color: red;\n"
"}\n"
"\n"
"QToolButton#typeButton {\n"
"	font-weight: bold;\n"
"	font-size: 12px;\n"
"	border: 0px solid #999999;\n"
"	border-radius: 5px;\n"
"	min-width:42px;\n"
"	max-width: 42px;\n"
"	min-height: 42px;\n"
"	max-height: 42px;\n"
"	padding: 0px;\n"
"	margin: 0px;\n"
"	background-color: none;\n"
"}\n"
"\n"
"QPushButton {\n"
"	font-weight: bold;\n"
"	font-size: 12px;\n"
"	border: 1px solid #999999;\n"
"	border-radius: 8px;\n"
"	min-width: 20px;\n"
"	max-width: 32px;\n"
"	min-height: 16px;\n"
"	max-height: 16px;\n"
"	padding: 2px;\n"
"	spacing: 10px;\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #777777, stop: 1 #555555);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #444444, stop: 1 #555555);\n"
"}\n"
"\n"
"QPushBut"
                        "ton#abortButton {\n"
"	background: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                             stop:0 #ffee01, stop:1 #ae8f00);\n"
"}\n"
"\n"
"QPushButton:pressed#abortButton {\n"
"	background: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                             stop:0 #bbaa00, stop:1 #a05b00);\n"
"}\n"
"\n"
"QPushButton#killButton {\n"
"	background: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                             stop:0 #ffb917, stop:1 #b37300);\n"
"}\n"
"\n"
"QPushButton:pressed#killButton {\n"
"	background: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                             stop:0 #bb8500, stop:1 #903000);\n"
"}\n"
"\n"
"\n"
"QProgressBar:horizontal {\n"
"	border: 1px solid #4A4A4F;\n"
"	border-radius: 4px;\n"
"	text-align: center;\n"
"	padding: 2px;\n"
"	color: #111111;\n"
"	background-color: #111118;\n"
"}\n"
"\n"
"QProgressBar:vertical {\n"
"	border: 1px solid #4A4A4F;\n"
"	border-radius: 4px;\n"
"	text-align: center;\n"
"	font-size: 7px;\n"
"	padding: 2px;\n"
"	color: #DDDD"
                        "DF;\n"
"    min-width: 16px;\n"
"	background-color: #111118;\n"
"}\n"
"\n"
"QProgressBar:horizontal {\n"
"	height: 10px;\n"
"}\n"
"\n"
"QProgressBar:horizontal QLabel {\n"
"	font-size: 9px;\n"
"	color: #111111;\n"
"}\n"
"\n"
"QProgressBar:vertical QLabel {\n"
"	font-size: 7px;\n"
"}\n"
"\n"
"QProgressBar:vertical {\n"
"	width: 14px;\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"	background-color: #656565;\n"
"}\n"
"\n"
"QProgressBar::chunk#batteryBar {\n"
"	background-color: green;\n"
"}\n"
"\n"
"QProgressBar::chunk#speedBar {\n"
"	background-color: yellow;\n"
"}\n"
"\n"
"QProgressBar::chunk#thrustBar {\n"
"	background-color: orange;\n"
"}\n"
"\n"
"QToolTip {\n"
"        background-color: #090909;\n"
"        border: 1px solid #379AC3;\n"
"	border-radius: 3px;\n"
"    color: #DDDDDF;\n"
"}\n"
"\n"
"QMenu {\n"
"    border: 1px solid #379AC3;\n"
"background-color: #050508;\n"
"color: #DDDDDF;\n"
"background-clip: border;\n"
"font-size: 11px;\n"
"}\n"
"\n"
"QMenu::separator {\n"
"     height: 1px;\n"
"     background:"
                        " #379AC3;\n"
"     margin-top: 8px;\n"
"     margin-bottom: 4px;\n"
"     margin-left: 5px;\n"
"     margin-right: 5px;\n"
" }"));
        horizontalLayout_2 = new QHBoxLayout(UASView);
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(2, 2, 2, 0);
        uasViewFrame = new QGroupBox(UASView);
        uasViewFrame->setObjectName(QStringLiteral("uasViewFrame"));
        sizePolicy.setHeightForWidth(uasViewFrame->sizePolicy().hasHeightForWidth());
        uasViewFrame->setSizePolicy(sizePolicy);
        uasViewFrame->setMinimumSize(QSize(0, 0));
        uasViewFrame->setMaximumSize(QSize(16777215, 130));
        gridLayout = new QGridLayout(uasViewFrame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(5);
        gridLayout->setVerticalSpacing(2);
        gridLayout->setContentsMargins(4, 4, 4, 4);
        typeButton = new QToolButton(uasViewFrame);
        typeButton->setObjectName(QStringLiteral("typeButton"));
        typeButton->setMinimumSize(QSize(42, 42));
        typeButton->setMaximumSize(QSize(42, 42));
        typeButton->setBaseSize(QSize(30, 30));
        QIcon icon;
        icon.addFile(QStringLiteral(":/files/images/mavs/unknown.svg"), QSize(), QIcon::Normal, QIcon::Off);
        typeButton->setIcon(icon);
        typeButton->setIconSize(QSize(42, 42));

        gridLayout->addWidget(typeButton, 0, 0, 5, 2);

        nameLabel = new QLabel(uasViewFrame);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setMaximumSize(QSize(16777215, 16));
        QFont font;
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        nameLabel->setFont(font);

        gridLayout->addWidget(nameLabel, 0, 2, 1, 3);

        modeLabel = new QLabel(uasViewFrame);
        modeLabel->setObjectName(QStringLiteral("modeLabel"));
        modeLabel->setMaximumSize(QSize(16777215, 16));
        QFont font1;
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        modeLabel->setFont(font1);
        modeLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(modeLabel, 0, 6, 1, 2);

        timeRemainingLabel = new QLabel(uasViewFrame);
        timeRemainingLabel->setObjectName(QStringLiteral("timeRemainingLabel"));
        timeRemainingLabel->setFont(font1);
        timeRemainingLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(timeRemainingLabel, 1, 2, 3, 1);

        timeElapsedLabel = new QLabel(uasViewFrame);
        timeElapsedLabel->setObjectName(QStringLiteral("timeElapsedLabel"));
        timeElapsedLabel->setFont(font1);
        timeElapsedLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(timeElapsedLabel, 1, 3, 3, 2);

        thrustBar = new QProgressBar(uasViewFrame);
        thrustBar->setObjectName(QStringLiteral("thrustBar"));
        QFont font2;
        thrustBar->setFont(font2);
        thrustBar->setValue(0);

        gridLayout->addWidget(thrustBar, 3, 6, 2, 2);

        groundDistanceLabel = new QLabel(uasViewFrame);
        groundDistanceLabel->setObjectName(QStringLiteral("groundDistanceLabel"));
        groundDistanceLabel->setFont(font1);
        groundDistanceLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(groundDistanceLabel, 4, 2, 1, 1);

        speedLabel = new QLabel(uasViewFrame);
        speedLabel->setObjectName(QStringLiteral("speedLabel"));
        speedLabel->setFont(font1);
        speedLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(speedLabel, 4, 3, 1, 2);

        heartbeatIcon = new QGroupBox(uasViewFrame);
        heartbeatIcon->setObjectName(QStringLiteral("heartbeatIcon"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(heartbeatIcon->sizePolicy().hasHeightForWidth());
        heartbeatIcon->setSizePolicy(sizePolicy1);
        heartbeatIcon->setMinimumSize(QSize(18, 0));
        heartbeatIcon->setMaximumSize(QSize(18, 40));

        gridLayout->addWidget(heartbeatIcon, 5, 0, 3, 1);

        batteryBar = new QProgressBar(uasViewFrame);
        batteryBar->setObjectName(QStringLiteral("batteryBar"));
        batteryBar->setMinimumSize(QSize(18, 0));
        batteryBar->setMaximumSize(QSize(18, 40));
        batteryBar->setFont(font2);
        batteryBar->setValue(0);
        batteryBar->setOrientation(Qt::Vertical);

        gridLayout->addWidget(batteryBar, 5, 1, 3, 1);

        waypointLabel = new QLabel(uasViewFrame);
        waypointLabel->setObjectName(QStringLiteral("waypointLabel"));
        waypointLabel->setFont(font1);
        waypointLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(waypointLabel, 7, 2, 1, 1);

        positionLabel = new QLabel(uasViewFrame);
        positionLabel->setObjectName(QStringLiteral("positionLabel"));
        positionLabel->setMinimumSize(QSize(0, 12));
        positionLabel->setMaximumSize(QSize(16777215, 12));
        positionLabel->setFont(font1);

        gridLayout->addWidget(positionLabel, 2, 6, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(4);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        liftoffButton = new QPushButton(uasViewFrame);
        liftoffButton->setObjectName(QStringLiteral("liftoffButton"));
        liftoffButton->setMinimumSize(QSize(26, 22));
        liftoffButton->setMaximumSize(QSize(38, 22));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/files/images/control/launch.svg"), QSize(), QIcon::Normal, QIcon::Off);
        liftoffButton->setIcon(icon1);

        horizontalLayout->addWidget(liftoffButton);

        haltButton = new QPushButton(uasViewFrame);
        haltButton->setObjectName(QStringLiteral("haltButton"));
        haltButton->setMinimumSize(QSize(26, 22));
        haltButton->setMaximumSize(QSize(38, 22));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/files/images/actions/media-playback-pause.svg"), QSize(), QIcon::Normal, QIcon::Off);
        haltButton->setIcon(icon2);

        horizontalLayout->addWidget(haltButton);

        continueButton = new QPushButton(uasViewFrame);
        continueButton->setObjectName(QStringLiteral("continueButton"));
        continueButton->setMinimumSize(QSize(26, 22));
        continueButton->setMaximumSize(QSize(38, 22));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/files/images/actions/media-playback-start.svg"), QSize(), QIcon::Normal, QIcon::Off);
        continueButton->setIcon(icon3);

        horizontalLayout->addWidget(continueButton);

        landButton = new QPushButton(uasViewFrame);
        landButton->setObjectName(QStringLiteral("landButton"));
        landButton->setMinimumSize(QSize(26, 22));
        landButton->setMaximumSize(QSize(38, 22));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/files/images/control/land.svg"), QSize(), QIcon::Normal, QIcon::Off);
        landButton->setIcon(icon4);

        horizontalLayout->addWidget(landButton);

        shutdownButton = new QPushButton(uasViewFrame);
        shutdownButton->setObjectName(QStringLiteral("shutdownButton"));
        shutdownButton->setMaximumSize(QSize(38, 22));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/files/images/actions/system-log-out.svg"), QSize(), QIcon::Normal, QIcon::Off);
        shutdownButton->setIcon(icon5);

        horizontalLayout->addWidget(shutdownButton);

        abortButton = new QPushButton(uasViewFrame);
        abortButton->setObjectName(QStringLiteral("abortButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(abortButton->sizePolicy().hasHeightForWidth());
        abortButton->setSizePolicy(sizePolicy2);
        abortButton->setMinimumSize(QSize(26, 22));
        abortButton->setMaximumSize(QSize(38, 22));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/files/images/actions/media-playback-stop.svg"), QSize(), QIcon::Normal, QIcon::Off);
        abortButton->setIcon(icon6);

        horizontalLayout->addWidget(abortButton);

        killButton = new QPushButton(uasViewFrame);
        killButton->setObjectName(QStringLiteral("killButton"));
        killButton->setMinimumSize(QSize(26, 22));
        killButton->setMaximumSize(QSize(38, 22));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/files/images/actions/process-stop.svg"), QSize(), QIcon::Normal, QIcon::Off);
        killButton->setIcon(icon7);

        horizontalLayout->addWidget(killButton);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 1);
        horizontalLayout->setStretch(3, 1);
        horizontalLayout->setStretch(4, 1);
        horizontalLayout->setStretch(5, 1);
        horizontalLayout->setStretch(6, 1);

        gridLayout->addLayout(horizontalLayout, 7, 3, 1, 5);

        statusTextLabel = new QLabel(uasViewFrame);
        statusTextLabel->setObjectName(QStringLiteral("statusTextLabel"));

        gridLayout->addWidget(statusTextLabel, 8, 0, 1, 8);

        stateLabel = new QLabel(uasViewFrame);
        stateLabel->setObjectName(QStringLiteral("stateLabel"));
        stateLabel->setMaximumSize(QSize(16777215, 12));
        stateLabel->setFont(font1);

        gridLayout->addWidget(stateLabel, 6, 6, 1, 1);

        navLabel = new QLabel(uasViewFrame);
        navLabel->setObjectName(QStringLiteral("navLabel"));
        navLabel->setFont(font1);

        gridLayout->addWidget(navLabel, 6, 2, 1, 3);

        horizontalSpacer = new QSpacerItem(8, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 5, 7, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 1);
        gridLayout->setColumnStretch(2, 10);
        gridLayout->setColumnStretch(3, 10);
        gridLayout->setColumnStretch(4, 10);
        gridLayout->setColumnStretch(6, 90);
        gridLayout->setColumnStretch(7, 90);

        horizontalLayout_2->addWidget(uasViewFrame);


        retranslateUi(UASView);

        QMetaObject::connectSlotsByName(UASView);
    } // setupUi

    void retranslateUi(QWidget *UASView)
    {
        UASView->setWindowTitle(QApplication::translate("UASView", "Form", Q_NULLPTR));
        uasViewFrame->setTitle(QString());
#ifndef QT_NO_TOOLTIP
        typeButton->setToolTip(QApplication::translate("UASView", "System Type", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        typeButton->setStatusTip(QApplication::translate("UASView", "System Type", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        typeButton->setText(QApplication::translate("UASView", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        nameLabel->setToolTip(QApplication::translate("UASView", "System Name", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        nameLabel->setStatusTip(QApplication::translate("UASView", "System Name", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        nameLabel->setText(QApplication::translate("UASView", "UAS001", Q_NULLPTR));
        modeLabel->setText(QApplication::translate("UASView", "MODE", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        timeRemainingLabel->setToolTip(QApplication::translate("UASView", "Remaining flight time", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        timeRemainingLabel->setStatusTip(QApplication::translate("UASView", "Remaining flight time", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        timeRemainingLabel->setText(QApplication::translate("UASView", "00:00:00", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        timeElapsedLabel->setToolTip(QApplication::translate("UASView", "Uptime", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        timeElapsedLabel->setStatusTip(QApplication::translate("UASView", "Uptime", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        timeElapsedLabel->setText(QApplication::translate("UASView", "00:00:00", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        thrustBar->setToolTip(QApplication::translate("UASView", "Current throttle", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        thrustBar->setStatusTip(QApplication::translate("UASView", "Current throttle", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        thrustBar->setFormat(QApplication::translate("UASView", "throttle %p%", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        groundDistanceLabel->setToolTip(QApplication::translate("UASView", "Altitude", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        groundDistanceLabel->setStatusTip(QApplication::translate("UASView", "Altitude", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        groundDistanceLabel->setText(QApplication::translate("UASView", "00.00 m", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        speedLabel->setToolTip(QApplication::translate("UASView", "Ground Speed", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        speedLabel->setStatusTip(QApplication::translate("UASView", "Ground Speed", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        speedLabel->setText(QApplication::translate("UASView", "00.0 m/s", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        heartbeatIcon->setToolTip(QApplication::translate("UASView", "Heartbeat", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        heartbeatIcon->setStatusTip(QApplication::translate("UASView", "Heartbeat", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        heartbeatIcon->setTitle(QString());
#ifndef QT_NO_TOOLTIP
        batteryBar->setToolTip(QApplication::translate("UASView", "Battery Fuel", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        batteryBar->setStatusTip(QApplication::translate("UASView", "Battery Fuel", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_TOOLTIP
        waypointLabel->setToolTip(QApplication::translate("UASView", "Current Waypoint", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        waypointLabel->setStatusTip(QApplication::translate("UASView", "Current Waypoint", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        waypointLabel->setText(QApplication::translate("UASView", "---", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        positionLabel->setToolTip(QApplication::translate("UASView", "Current Position", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        positionLabel->setStatusTip(QApplication::translate("UASView", "Current Position", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        positionLabel->setText(QApplication::translate("UASView", "00.0  00.0  00.0 m", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        liftoffButton->setToolTip(QApplication::translate("UASView", "Liftoff / Launch", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        liftoffButton->setStatusTip(QApplication::translate("UASView", "Liftoff / Launch", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        liftoffButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        haltButton->setToolTip(QApplication::translate("UASView", "Loiter / Wait at current position", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        haltButton->setStatusTip(QApplication::translate("UASView", "Loiter / Wait at current position", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        haltButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        continueButton->setToolTip(QApplication::translate("UASView", "Continue flightplan", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        continueButton->setStatusTip(QApplication::translate("UASView", "Continue flightplan", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        continueButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        landButton->setToolTip(QApplication::translate("UASView", "Fly straight to landing location", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        landButton->setStatusTip(QApplication::translate("UASView", "Fly straight to landing location", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        landButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        shutdownButton->setToolTip(QApplication::translate("UASView", "Only in standby mode: Power off system", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        shutdownButton->setStatusTip(QApplication::translate("UASView", "Only in standby mode: Power off system", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        shutdownButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        abortButton->setToolTip(QApplication::translate("UASView", "Emergency land system at closest possible site", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        abortButton->setStatusTip(QApplication::translate("UASView", "Emergency land system at closest possible site", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        abortButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        killButton->setToolTip(QApplication::translate("UASView", "Kill immediately all onboard power", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        killButton->setStatusTip(QApplication::translate("UASView", "Kill immediately all onboard power", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        killButton->setText(QString());
        statusTextLabel->setText(QApplication::translate("UASView", "Waiting for first status update..", Q_NULLPTR));
        stateLabel->setText(QApplication::translate("UASView", "STATE", Q_NULLPTR));
        navLabel->setText(QApplication::translate("UASView", "NAV", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UASView: public Ui_UASView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UASVIEW_H
