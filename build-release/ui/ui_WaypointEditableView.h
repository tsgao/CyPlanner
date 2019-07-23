/********************************************************************************
** Form generated from reading UI file 'WaypointEditableView.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WAYPOINTEDITABLEVIEW_H
#define UI_WAYPOINTEDITABLEVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WaypointEditableView
{
public:
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *selectedBox;
    QLabel *idLabel;
    QComboBox *comboBox_action;
    QComboBox *comboBox_frame;
    QWidget *customActionWidget;
    QSpacerItem *removeSpacer;
    QHBoxLayout *horizontalLayout;
    QCheckBox *autoContinue;
    QPushButton *topButton;
    QPushButton *bottomButton;
    QPushButton *upButton;
    QPushButton *downButton;
    QPushButton *removeButton;

    void setupUi(QWidget *WaypointEditableView)
    {
        if (WaypointEditableView->objectName().isEmpty())
            WaypointEditableView->setObjectName(QStringLiteral("WaypointEditableView"));
        WaypointEditableView->resize(1079, 33);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(WaypointEditableView->sizePolicy().hasHeightForWidth());
        WaypointEditableView->setSizePolicy(sizePolicy);
        WaypointEditableView->setMinimumSize(QSize(200, 0));
        WaypointEditableView->setStyleSheet(QLatin1String("QWidget#colorIcon {}\n"
"\n"
"QWidget {\n"
"background-color: #252528;\n"
"color: #DDDDDF;\n"
"border-color: #CCCCCF;\n"
"}\n"
"\n"
"QCheckBox {\n"
"background-color: #252528;\n"
"color: #454545;\n"
"}\n"
"\n"
"QGroupBox {\n"
"	border: 1px solid #EEEEEE;\n"
"	border-radius: 2px;\n"
"	padding: 0px 0px 0px 0px;\n"
"	margin: 0px;\n"
"}\n"
"\n"
" QGroupBox::title {\n"
"     subcontrol-origin: margin;\n"
"     subcontrol-position: top center; /* position at the top center */\n"
"     margin: 0 1px 0px 1px;\n"
"     padding: 0 1px 0px 0px;\n"
"     font: bold 8px;\n"
" }\n"
"\n"
"QPushButton {\n"
"	font-weight: bold;\n"
"	font-size: 12px;\n"
"	border: 1px solid #465158;\n"
"    margin: 1px;\n"
"	border-radius: 2px;\n"
"	min-width:16px;\n"
"	max-width: 16px;\n"
"	min-height: 16px;\n"
"	max-height: 16px;\n"
"	padding: 2px;\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #59666f, stop: 1 #414B52);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0,"
                        " y2: 1, stop: 0 #09A2B2, stop: 1 #414B52);\n"
"}\n"
""));
        horizontalLayout_3 = new QHBoxLayout(WaypointEditableView);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(WaypointEditableView);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(1, 1, 1, 1);
        selectedBox = new QCheckBox(groupBox);
        selectedBox->setObjectName(QStringLiteral("selectedBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(selectedBox->sizePolicy().hasHeightForWidth());
        selectedBox->setSizePolicy(sizePolicy2);
        selectedBox->setMinimumSize(QSize(20, 0));
        selectedBox->setMaximumSize(QSize(18, 18));
        selectedBox->setFocusPolicy(Qt::TabFocus);
        selectedBox->setIconSize(QSize(16, 16));

        horizontalLayout_2->addWidget(selectedBox);

        idLabel = new QLabel(groupBox);
        idLabel->setObjectName(QStringLiteral("idLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(idLabel->sizePolicy().hasHeightForWidth());
        idLabel->setSizePolicy(sizePolicy3);
        idLabel->setMinimumSize(QSize(25, 0));
        idLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(idLabel);

        comboBox_action = new QComboBox(groupBox);
        comboBox_action->setObjectName(QStringLiteral("comboBox_action"));
        sizePolicy2.setHeightForWidth(comboBox_action->sizePolicy().hasHeightForWidth());
        comboBox_action->setSizePolicy(sizePolicy2);
        comboBox_action->setMinimumSize(QSize(140, 0));
        comboBox_action->setMaximumSize(QSize(140, 16777215));
        comboBox_action->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);

        horizontalLayout_2->addWidget(comboBox_action);

        comboBox_frame = new QComboBox(groupBox);
        comboBox_frame->setObjectName(QStringLiteral("comboBox_frame"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(comboBox_frame->sizePolicy().hasHeightForWidth());
        comboBox_frame->setSizePolicy(sizePolicy4);
        comboBox_frame->setMinimumSize(QSize(75, 0));
        comboBox_frame->setMaximumSize(QSize(75, 16777215));
        comboBox_frame->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);

        horizontalLayout_2->addWidget(comboBox_frame);

        customActionWidget = new QWidget(groupBox);
        customActionWidget->setObjectName(QStringLiteral("customActionWidget"));
        sizePolicy1.setHeightForWidth(customActionWidget->sizePolicy().hasHeightForWidth());
        customActionWidget->setSizePolicy(sizePolicy1);
        customActionWidget->setMinimumSize(QSize(0, 0));

        horizontalLayout_2->addWidget(customActionWidget);

        removeSpacer = new QSpacerItem(649, 14, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(removeSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        autoContinue = new QCheckBox(groupBox);
        autoContinue->setObjectName(QStringLiteral("autoContinue"));
        sizePolicy2.setHeightForWidth(autoContinue->sizePolicy().hasHeightForWidth());
        autoContinue->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(autoContinue);

        topButton = new QPushButton(groupBox);
        topButton->setObjectName(QStringLiteral("topButton"));
        sizePolicy2.setHeightForWidth(topButton->sizePolicy().hasHeightForWidth());
        topButton->setSizePolicy(sizePolicy2);
        topButton->setFocusPolicy(Qt::NoFocus);
        QIcon icon;
        icon.addFile(QStringLiteral(":/files/images/actions/go-top.svg"), QSize(), QIcon::Normal, QIcon::Off);
        topButton->setIcon(icon);

        horizontalLayout->addWidget(topButton);

        bottomButton = new QPushButton(groupBox);
        bottomButton->setObjectName(QStringLiteral("bottomButton"));
        sizePolicy2.setHeightForWidth(bottomButton->sizePolicy().hasHeightForWidth());
        bottomButton->setSizePolicy(sizePolicy2);
        bottomButton->setFocusPolicy(Qt::NoFocus);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/files/images/actions/go-bottom.svg"), QSize(), QIcon::Normal, QIcon::Off);
        bottomButton->setIcon(icon1);

        horizontalLayout->addWidget(bottomButton);

        upButton = new QPushButton(groupBox);
        upButton->setObjectName(QStringLiteral("upButton"));
        sizePolicy2.setHeightForWidth(upButton->sizePolicy().hasHeightForWidth());
        upButton->setSizePolicy(sizePolicy2);
        upButton->setMinimumSize(QSize(24, 24));
        upButton->setMaximumSize(QSize(24, 24));
        upButton->setFocusPolicy(Qt::NoFocus);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/files/images/actions/go-up.svg"), QSize(), QIcon::Normal, QIcon::Off);
        upButton->setIcon(icon2);

        horizontalLayout->addWidget(upButton);

        downButton = new QPushButton(groupBox);
        downButton->setObjectName(QStringLiteral("downButton"));
        sizePolicy2.setHeightForWidth(downButton->sizePolicy().hasHeightForWidth());
        downButton->setSizePolicy(sizePolicy2);
        downButton->setMinimumSize(QSize(24, 24));
        downButton->setMaximumSize(QSize(24, 24));
        downButton->setFocusPolicy(Qt::NoFocus);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/files/images/actions/go-down.svg"), QSize(), QIcon::Normal, QIcon::Off);
        downButton->setIcon(icon3);

        horizontalLayout->addWidget(downButton);

        removeButton = new QPushButton(groupBox);
        removeButton->setObjectName(QStringLiteral("removeButton"));
        sizePolicy2.setHeightForWidth(removeButton->sizePolicy().hasHeightForWidth());
        removeButton->setSizePolicy(sizePolicy2);
        removeButton->setMinimumSize(QSize(24, 24));
        removeButton->setMaximumSize(QSize(24, 24));
        removeButton->setFocusPolicy(Qt::NoFocus);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/files/images/actions/list-remove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        removeButton->setIcon(icon4);

        horizontalLayout->addWidget(removeButton);


        horizontalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_3->addWidget(groupBox);


        retranslateUi(WaypointEditableView);

        QMetaObject::connectSlotsByName(WaypointEditableView);
    } // setupUi

    void retranslateUi(QWidget *WaypointEditableView)
    {
        WaypointEditableView->setWindowTitle(QApplication::translate("WaypointEditableView", "Form", Q_NULLPTR));
        groupBox->setTitle(QString());
#ifndef QT_NO_TOOLTIP
        selectedBox->setToolTip(QApplication::translate("WaypointEditableView", "Mission Start", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        selectedBox->setStatusTip(QApplication::translate("WaypointEditableView", "Mission Start", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        selectedBox->setText(QString());
#ifndef QT_NO_TOOLTIP
        idLabel->setToolTip(QApplication::translate("WaypointEditableView", "Waypoint Sequence Number", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        idLabel->setText(QApplication::translate("WaypointEditableView", "ID", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        comboBox_action->setToolTip(QApplication::translate("WaypointEditableView", "Action at Waypoint", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        comboBox_action->setStatusTip(QApplication::translate("WaypointEditableView", "Action at Waypoint", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_TOOLTIP
        comboBox_frame->setToolTip(QApplication::translate("WaypointEditableView", "Coordinate frame", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        comboBox_frame->setStatusTip(QApplication::translate("WaypointEditableView", "Coordinate frame", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_TOOLTIP
        autoContinue->setToolTip(QApplication::translate("WaypointEditableView", "Automatically continue after this waypoint", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        autoContinue->setStatusTip(QApplication::translate("WaypointEditableView", "Automatically continue after this waypoint", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        autoContinue->setText(QString());
#ifndef QT_NO_TOOLTIP
        topButton->setToolTip(QApplication::translate("WaypointEditableView", "Move to top", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        topButton->setStatusTip(QApplication::translate("WaypointEditableView", "Move to top", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        topButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        bottomButton->setToolTip(QApplication::translate("WaypointEditableView", "Move to bottom", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        bottomButton->setStatusTip(QApplication::translate("WaypointEditableView", "Move to bottom", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        bottomButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        upButton->setToolTip(QApplication::translate("WaypointEditableView", "Move up", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        upButton->setStatusTip(QApplication::translate("WaypointEditableView", "Move up", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        upButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        downButton->setToolTip(QApplication::translate("WaypointEditableView", "Move down", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        downButton->setStatusTip(QApplication::translate("WaypointEditableView", "Move down", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        downButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        removeButton->setToolTip(QApplication::translate("WaypointEditableView", "Delete", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        removeButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WaypointEditableView: public Ui_WaypointEditableView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WAYPOINTEDITABLEVIEW_H
