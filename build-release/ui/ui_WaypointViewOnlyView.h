/********************************************************************************
** Form generated from reading UI file 'WaypointViewOnlyView.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WAYPOINTVIEWONLYVIEW_H
#define UI_WAYPOINTVIEWONLYVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WaypointViewOnlyView
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QCheckBox *current;
    QLabel *idLabel;
    QLabel *displayBar;
    QSpacerItem *horizontalSpacer;
    QLabel *frameLabel;
    QCheckBox *autoContinue;

    void setupUi(QWidget *WaypointViewOnlyView)
    {
        if (WaypointViewOnlyView->objectName().isEmpty())
            WaypointViewOnlyView->setObjectName(QStringLiteral("WaypointViewOnlyView"));
        WaypointViewOnlyView->resize(704, 31);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(WaypointViewOnlyView->sizePolicy().hasHeightForWidth());
        WaypointViewOnlyView->setSizePolicy(sizePolicy);
        WaypointViewOnlyView->setMinimumSize(QSize(200, 30));
        WaypointViewOnlyView->setStyleSheet(QLatin1String("QGroupBox {\n"
"	border: 1px solid #EEEEEE;\n"
"	border-radius: 5px;\n"
"	padding: 0px 0px 0px 0px;\n"
"margin-top: 1ex; /* leave space at the top for the title */\n"
"	margin: 0px;\n"
"}\n"
"\n"
" QGroupBox::title {\n"
"     subcontrol-origin: margin;\n"
"     subcontrol-position: top center; /* position at the top center */\n"
"     margin: 0 3px 0px 3px;\n"
"     padding: 0 3px 0px 0px;\n"
"     font: bold 8px;\n"
" }"));
        gridLayout = new QGridLayout(WaypointViewOnlyView);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(WaypointViewOnlyView);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        groupBox->setStyleSheet(QStringLiteral(""));
        groupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setContentsMargins(4, 4, 4, 4);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        current = new QCheckBox(groupBox);
        current->setObjectName(QStringLiteral("current"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(current->sizePolicy().hasHeightForWidth());
        current->setSizePolicy(sizePolicy2);
        current->setMinimumSize(QSize(25, 0));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 170, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(0, 255, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(0, 212, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(0, 85, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(0, 113, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(127, 212, 127, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        current->setPalette(palette);

        horizontalLayout->addWidget(current);

        idLabel = new QLabel(groupBox);
        idLabel->setObjectName(QStringLiteral("idLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(idLabel->sizePolicy().hasHeightForWidth());
        idLabel->setSizePolicy(sizePolicy3);
        idLabel->setMinimumSize(QSize(25, 0));
        idLabel->setLineWidth(1);
        idLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(idLabel);

        displayBar = new QLabel(groupBox);
        displayBar->setObjectName(QStringLiteral("displayBar"));
        sizePolicy1.setHeightForWidth(displayBar->sizePolicy().hasHeightForWidth());
        displayBar->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(displayBar);

        horizontalSpacer = new QSpacerItem(79, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        frameLabel = new QLabel(groupBox);
        frameLabel->setObjectName(QStringLiteral("frameLabel"));
        frameLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(frameLabel);

        autoContinue = new QCheckBox(groupBox);
        autoContinue->setObjectName(QStringLiteral("autoContinue"));
        autoContinue->setEnabled(false);
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(autoContinue->sizePolicy().hasHeightForWidth());
        autoContinue->setSizePolicy(sizePolicy4);
        autoContinue->setCheckable(true);

        horizontalLayout->addWidget(autoContinue);

        horizontalLayout->setStretch(1, 2);
        horizontalLayout->setStretch(2, 100);
        horizontalLayout->setStretch(3, 10);
        horizontalLayout->setStretch(4, 5);
        horizontalLayout->setStretch(5, 1);

        gridLayout->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(WaypointViewOnlyView);

        QMetaObject::connectSlotsByName(WaypointViewOnlyView);
    } // setupUi

    void retranslateUi(QWidget *WaypointViewOnlyView)
    {
        WaypointViewOnlyView->setWindowTitle(QApplication::translate("WaypointViewOnlyView", "Form", Q_NULLPTR));
        groupBox->setTitle(QString());
#ifndef QT_NO_TOOLTIP
        current->setToolTip(QApplication::translate("WaypointViewOnlyView", "Currently executed waypoint", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        current->setStatusTip(QApplication::translate("WaypointViewOnlyView", "Currently executed waypoint", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        current->setText(QString());
        idLabel->setText(QApplication::translate("WaypointViewOnlyView", "ID", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        displayBar->setToolTip(QApplication::translate("WaypointViewOnlyView", "Mission element description", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        displayBar->setStatusTip(QApplication::translate("WaypointViewOnlyView", "Mission element description", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        displayBar->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        displayBar->setText(QApplication::translate("WaypointViewOnlyView", "Mission element description", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        frameLabel->setToolTip(QApplication::translate("WaypointViewOnlyView", "Coordinate Frame", "Coordinate Frame"));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        frameLabel->setStatusTip(QApplication::translate("WaypointViewOnlyView", "Coordinate Frame", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        frameLabel->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        frameLabel->setText(QApplication::translate("WaypointViewOnlyView", "Frame", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        autoContinue->setToolTip(QApplication::translate("WaypointViewOnlyView", "Automatically continue after this waypoint", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        autoContinue->setStatusTip(QApplication::translate("WaypointViewOnlyView", "Automatically continue after this waypoint", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        autoContinue->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WaypointViewOnlyView: public Ui_WaypointViewOnlyView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WAYPOINTVIEWONLYVIEW_H
