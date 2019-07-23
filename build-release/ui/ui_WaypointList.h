/********************************************************************************
** Form generated from reading UI file 'WaypointList.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WAYPOINTLIST_H
#define UI_WAYPOINTLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WaypointList
{
public:
    QAction *actionAddWaypoint;
    QAction *actionTransmit;
    QAction *actionRead;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *editTab;
    QGridLayout *gridLayout_2;
    QDoubleSpinBox *altSpinBox;
    QLabel *altLabel;
    QDoubleSpinBox *wpRadiusSpinBox;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QWidget *editableListWidget;
    QPushButton *saveButton;
    QToolButton *positionAddButton;
    QPushButton *readButton;
    QToolButton *addButton;
    QLabel *wpRadiusLabel;
    QToolButton *clearWPListButton;
    QPushButton *loadButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *transmitButton;
    QLabel *statusLabel;
    QWidget *viewTab;
    QGridLayout *gridLayout_3;
    QScrollArea *readOnlyScrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout;
    QWidget *viewOnlyListWidget;
    QPushButton *refreshButton;
    QSpacerItem *horizontalSpacer_2;
    QLabel *viewStatusLabel;

    void setupUi(QWidget *WaypointList)
    {
        if (WaypointList->objectName().isEmpty())
            WaypointList->setObjectName(QStringLiteral("WaypointList"));
        WaypointList->resize(854, 398);
        WaypointList->setMinimumSize(QSize(100, 120));
        actionAddWaypoint = new QAction(WaypointList);
        actionAddWaypoint->setObjectName(QStringLiteral("actionAddWaypoint"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/files/images/actions/list-add.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionAddWaypoint->setIcon(icon);
        actionTransmit = new QAction(WaypointList);
        actionTransmit->setObjectName(QStringLiteral("actionTransmit"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/files/images/devices/network-wireless.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionTransmit->setIcon(icon1);
        actionRead = new QAction(WaypointList);
        actionRead->setObjectName(QStringLiteral("actionRead"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/files/images/status/software-update-available.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionRead->setIcon(icon2);
        gridLayout = new QGridLayout(WaypointList);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 8, 0, 0);
        tabWidget = new QTabWidget(WaypointList);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        editTab = new QWidget();
        editTab->setObjectName(QStringLiteral("editTab"));
        gridLayout_2 = new QGridLayout(editTab);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(6, 0, 6, 6);
        altSpinBox = new QDoubleSpinBox(editTab);
        altSpinBox->setObjectName(QStringLiteral("altSpinBox"));
        altSpinBox->setMaximum(999);

        gridLayout_2->addWidget(altSpinBox, 1, 6, 1, 1);

        altLabel = new QLabel(editTab);
        altLabel->setObjectName(QStringLiteral("altLabel"));

        gridLayout_2->addWidget(altLabel, 1, 5, 1, 1);

        wpRadiusSpinBox = new QDoubleSpinBox(editTab);
        wpRadiusSpinBox->setObjectName(QStringLiteral("wpRadiusSpinBox"));

        gridLayout_2->addWidget(wpRadiusSpinBox, 1, 4, 1, 1);

        scrollArea = new QScrollArea(editTab);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 837, 321));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        editableListWidget = new QWidget(scrollAreaWidgetContents);
        editableListWidget->setObjectName(QStringLiteral("editableListWidget"));

        verticalLayout_2->addWidget(editableListWidget);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_2->addWidget(scrollArea, 0, 0, 1, 18);

        saveButton = new QPushButton(editTab);
        saveButton->setObjectName(QStringLiteral("saveButton"));
        saveButton->setMinimumSize(QSize(0, 26));

        gridLayout_2->addWidget(saveButton, 1, 16, 1, 1);

        positionAddButton = new QToolButton(editTab);
        positionAddButton->setObjectName(QStringLiteral("positionAddButton"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/files/images/actions/go-bottom.svg"), QSize(), QIcon::Normal, QIcon::Off);
        positionAddButton->setIcon(icon3);

        gridLayout_2->addWidget(positionAddButton, 1, 7, 1, 1);

        readButton = new QPushButton(editTab);
        readButton->setObjectName(QStringLiteral("readButton"));
        readButton->setMinimumSize(QSize(0, 26));
        readButton->setIcon(icon2);

        gridLayout_2->addWidget(readButton, 1, 1, 1, 1);

        addButton = new QToolButton(editTab);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setIcon(icon);

        gridLayout_2->addWidget(addButton, 1, 8, 1, 1);

        wpRadiusLabel = new QLabel(editTab);
        wpRadiusLabel->setObjectName(QStringLiteral("wpRadiusLabel"));

        gridLayout_2->addWidget(wpRadiusLabel, 1, 3, 1, 1);

        clearWPListButton = new QToolButton(editTab);
        clearWPListButton->setObjectName(QStringLiteral("clearWPListButton"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/files/images/actions/process-stop.svg"), QSize(), QIcon::Normal, QIcon::Off);
        clearWPListButton->setIcon(icon4);

        gridLayout_2->addWidget(clearWPListButton, 1, 9, 1, 1);

        loadButton = new QPushButton(editTab);
        loadButton->setObjectName(QStringLiteral("loadButton"));
        loadButton->setMinimumSize(QSize(0, 26));

        gridLayout_2->addWidget(loadButton, 1, 15, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 12, 1, 1);

        transmitButton = new QPushButton(editTab);
        transmitButton->setObjectName(QStringLiteral("transmitButton"));
        transmitButton->setMinimumSize(QSize(0, 26));
        transmitButton->setIcon(icon1);

        gridLayout_2->addWidget(transmitButton, 1, 2, 1, 1);

        statusLabel = new QLabel(editTab);
        statusLabel->setObjectName(QStringLiteral("statusLabel"));

        gridLayout_2->addWidget(statusLabel, 1, 13, 1, 2);

        tabWidget->addTab(editTab, QString());
        viewTab = new QWidget();
        viewTab->setObjectName(QStringLiteral("viewTab"));
        gridLayout_3 = new QGridLayout(viewTab);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(6, 0, 6, 6);
        readOnlyScrollArea = new QScrollArea(viewTab);
        readOnlyScrollArea->setObjectName(QStringLiteral("readOnlyScrollArea"));
        readOnlyScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 836, 323));
        scrollAreaWidgetContents_2->setAutoFillBackground(true);
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        viewOnlyListWidget = new QWidget(scrollAreaWidgetContents_2);
        viewOnlyListWidget->setObjectName(QStringLiteral("viewOnlyListWidget"));
        viewOnlyListWidget->setEnabled(true);
        viewOnlyListWidget->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout->addWidget(viewOnlyListWidget);

        readOnlyScrollArea->setWidget(scrollAreaWidgetContents_2);

        gridLayout_3->addWidget(readOnlyScrollArea, 0, 0, 1, 4);

        refreshButton = new QPushButton(viewTab);
        refreshButton->setObjectName(QStringLiteral("refreshButton"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/files/images/actions/go-jump.svg"), QSize(), QIcon::Normal, QIcon::Off);
        refreshButton->setIcon(icon5);

        gridLayout_3->addWidget(refreshButton, 1, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(714, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 1, 1, 1, 1);

        viewStatusLabel = new QLabel(viewTab);
        viewStatusLabel->setObjectName(QStringLiteral("viewStatusLabel"));

        gridLayout_3->addWidget(viewStatusLabel, 1, 2, 1, 1);

        tabWidget->addTab(viewTab, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(WaypointList);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(WaypointList);
    } // setupUi

    void retranslateUi(QWidget *WaypointList)
    {
        WaypointList->setWindowTitle(QApplication::translate("WaypointList", "Form", Q_NULLPTR));
        actionAddWaypoint->setText(QApplication::translate("WaypointList", "Add Waypoint", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionAddWaypoint->setToolTip(QApplication::translate("WaypointList", "Add a new waypoint to the end of the list", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionTransmit->setText(QApplication::translate("WaypointList", "Transmit", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionTransmit->setToolTip(QApplication::translate("WaypointList", "Transmit waypoints to unmanned system", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionRead->setText(QApplication::translate("WaypointList", "Read", Q_NULLPTR));
        altSpinBox->setSuffix(QApplication::translate("WaypointList", " m", Q_NULLPTR));
        altLabel->setText(QApplication::translate("WaypointList", "Alt", Q_NULLPTR));
        wpRadiusSpinBox->setSuffix(QApplication::translate("WaypointList", " m", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        editableListWidget->setToolTip(QApplication::translate("WaypointList", "Waypoint list. The list is empty until you issue a read command or add waypoints.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        editableListWidget->setStatusTip(QApplication::translate("WaypointList", "Waypoint list. The list is empty until you issue a read command or add waypoints.", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        editableListWidget->setWhatsThis(QApplication::translate("WaypointList", "Waypoint list. The list is empty until you issue a read command or add waypoints.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        saveButton->setToolTip(QApplication::translate("WaypointList", "Save waypoints to a file on the local harddisk. Does not save them on the MAV.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        saveButton->setStatusTip(QApplication::translate("WaypointList", "Save waypoints to a file on the local harddisk. Does not save them on the MAV.", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        saveButton->setWhatsThis(QApplication::translate("WaypointList", "Save waypoints to a file on the local harddisk. Does not save them on the MAV.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        saveButton->setText(QApplication::translate("WaypointList", "Save WPs", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        saveButton->setShortcut(QApplication::translate("WaypointList", "Ctrl+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        positionAddButton->setToolTip(QApplication::translate("WaypointList", "Set the current vehicle position as new waypoint", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        positionAddButton->setStatusTip(QApplication::translate("WaypointList", "Set the current vehicle position as new waypoint", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        positionAddButton->setWhatsThis(QApplication::translate("WaypointList", "Set the current vehicle position as new waypoint", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        positionAddButton->setText(QApplication::translate("WaypointList", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        readButton->setToolTip(QApplication::translate("WaypointList", "Read all waypoints from the MAV. Clears the list on this computer.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        readButton->setStatusTip(QApplication::translate("WaypointList", "Read all waypoints from the MAV. Clears the list on this computer.", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        readButton->setWhatsThis(QApplication::translate("WaypointList", "Read all waypoints from the MAV. Clears the list on this computer.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        readButton->setText(QApplication::translate("WaypointList", "Read", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        readButton->setShortcut(QApplication::translate("WaypointList", "Ctrl+R", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        addButton->setToolTip(QApplication::translate("WaypointList", "Add a new waypoint to this list. Transmit via write to the MAV.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        addButton->setStatusTip(QApplication::translate("WaypointList", "Add a new waypoint to this list. Transmit via write to the MAV.", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        addButton->setWhatsThis(QApplication::translate("WaypointList", "Add a new waypoint to this list. Transmit via write to the MAV.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        addButton->setText(QApplication::translate("WaypointList", "...", Q_NULLPTR));
        wpRadiusLabel->setText(QApplication::translate("WaypointList", "WP Radius", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        clearWPListButton->setToolTip(QApplication::translate("WaypointList", "Delete all waypoints from this list. You have to click write to clear the list on the MAV as well.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        clearWPListButton->setStatusTip(QApplication::translate("WaypointList", "Delete all waypoints from this list. You have to click write to clear the list on the MAV as well.", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        clearWPListButton->setWhatsThis(QApplication::translate("WaypointList", "Delete all waypoints from this list. You have to click write to clear the list on the MAV as well.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        clearWPListButton->setText(QApplication::translate("WaypointList", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        loadButton->setToolTip(QApplication::translate("WaypointList", "Load waypoints from a file on the local harddisk. Does not load the waypoints on the MAV.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        loadButton->setStatusTip(QApplication::translate("WaypointList", "Load waypoints from a file on the local harddisk. Does not load the waypoints on the MAV.", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        loadButton->setWhatsThis(QApplication::translate("WaypointList", "Load waypoints from a file on the local harddisk. Does not load the waypoints on the MAV.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        loadButton->setText(QApplication::translate("WaypointList", "Load WPs", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        loadButton->setShortcut(QApplication::translate("WaypointList", "Ctrl+L", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        transmitButton->setToolTip(QApplication::translate("WaypointList", "Transmit all waypoints on this list to the MAV.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        transmitButton->setStatusTip(QApplication::translate("WaypointList", "Transmit all waypoints on this list to the MAV.", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        transmitButton->setWhatsThis(QApplication::translate("WaypointList", "Transmit all waypoints on this list to the MAV.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        transmitButton->setText(QApplication::translate("WaypointList", "Write", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        transmitButton->setShortcut(QApplication::translate("WaypointList", "Ctrl+W", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        statusLabel->setToolTip(QApplication::translate("WaypointList", "The current waypoint transmission status", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        statusLabel->setStatusTip(QApplication::translate("WaypointList", "The current waypoint transmission status", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        statusLabel->setWhatsThis(QApplication::translate("WaypointList", "The current waypoint transmission status", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        statusLabel->setText(QApplication::translate("WaypointList", "Please add first waypoint.", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(editTab), QApplication::translate("WaypointList", "Edit Waypoints", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        refreshButton->setToolTip(QApplication::translate("WaypointList", "Read all waypoints from the MAV and display in View tab..", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        refreshButton->setStatusTip(QApplication::translate("WaypointList", "Read all waypoints from the MAV and display in View tab..", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        refreshButton->setWhatsThis(QApplication::translate("WaypointList", "Read all waypoints from the MAV and display in View tab.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        refreshButton->setText(QApplication::translate("WaypointList", "Refresh", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        refreshButton->setShortcut(QApplication::translate("WaypointList", "Ctrl+R", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        viewStatusLabel->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(viewTab), QApplication::translate("WaypointList", "Onboard Waypoints", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WaypointList: public Ui_WaypointList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WAYPOINTLIST_H
