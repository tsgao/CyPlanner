/********************************************************************************
** Form generated from reading UI file 'UASControl.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UASCONTROL_H
#define UI_UASCONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_uasControl
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *controlStatusLabel;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *liftoffButton;
    QPushButton *landButton;
    QPushButton *shutdownButton;
    QComboBox *modeComboBox;
    QPushButton *setModeButton;
    QLabel *lastActionLabel;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *controlButton;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *uasControl)
    {
        if (uasControl->objectName().isEmpty())
            uasControl->setObjectName(QStringLiteral("uasControl"));
        uasControl->resize(200, 228);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(uasControl->sizePolicy().hasHeightForWidth());
        uasControl->setSizePolicy(sizePolicy);
        uasControl->setMinimumSize(QSize(200, 150));
        uasControl->setMaximumSize(QSize(267, 16777215));
        gridLayout = new QGridLayout(uasControl);
        gridLayout->setContentsMargins(4, 4, 4, 4);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer = new QSpacerItem(31, 159, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 7, 1);

        controlStatusLabel = new QLabel(uasControl);
        controlStatusLabel->setObjectName(QStringLiteral("controlStatusLabel"));
        controlStatusLabel->setMinimumSize(QSize(0, 10));
        controlStatusLabel->setAlignment(Qt::AlignCenter);
        controlStatusLabel->setMargin(0);

        gridLayout->addWidget(controlStatusLabel, 0, 1, 2, 3);

        verticalSpacer = new QSpacerItem(216, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 1, 1, 3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        liftoffButton = new QPushButton(uasControl);
        liftoffButton->setObjectName(QStringLiteral("liftoffButton"));
        liftoffButton->setMinimumSize(QSize(25, 16));
        QIcon icon;
        icon.addFile(QStringLiteral(":/files/images/control/launch.svg"), QSize(), QIcon::Normal, QIcon::Off);
        liftoffButton->setIcon(icon);

        horizontalLayout->addWidget(liftoffButton);

        landButton = new QPushButton(uasControl);
        landButton->setObjectName(QStringLiteral("landButton"));
        landButton->setMinimumSize(QSize(25, 16));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/files/images/control/land.svg"), QSize(), QIcon::Normal, QIcon::Off);
        landButton->setIcon(icon1);

        horizontalLayout->addWidget(landButton);

        shutdownButton = new QPushButton(uasControl);
        shutdownButton->setObjectName(QStringLiteral("shutdownButton"));
        shutdownButton->setMinimumSize(QSize(25, 16));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/files/images/actions/system-log-out.svg"), QSize(), QIcon::Normal, QIcon::Off);
        shutdownButton->setIcon(icon2);

        horizontalLayout->addWidget(shutdownButton);


        gridLayout->addLayout(horizontalLayout, 4, 1, 1, 3);

        modeComboBox = new QComboBox(uasControl);
        modeComboBox->setObjectName(QStringLiteral("modeComboBox"));
        modeComboBox->setMinimumSize(QSize(25, 16));

        gridLayout->addWidget(modeComboBox, 5, 1, 1, 2);

        setModeButton = new QPushButton(uasControl);
        setModeButton->setObjectName(QStringLiteral("setModeButton"));
        setModeButton->setMinimumSize(QSize(25, 16));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/files/images/devices/network-wireless.svg"), QSize(), QIcon::Normal, QIcon::Off);
        setModeButton->setIcon(icon3);

        gridLayout->addWidget(setModeButton, 5, 3, 1, 1);

        lastActionLabel = new QLabel(uasControl);
        lastActionLabel->setObjectName(QStringLiteral("lastActionLabel"));
        lastActionLabel->setMinimumSize(QSize(0, 10));
        lastActionLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(lastActionLabel, 6, 1, 1, 3);

        horizontalSpacer_2 = new QSpacerItem(30, 159, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 4, 6, 1);

        controlButton = new QPushButton(uasControl);
        controlButton->setObjectName(QStringLiteral("controlButton"));
        controlButton->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(controlButton, 2, 1, 1, 3);

        verticalSpacer_2 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 7, 1, 1, 3);

        gridLayout->setRowStretch(0, 5);
        gridLayout->setRowStretch(1, 1);
        gridLayout->setRowStretch(2, 40);
        gridLayout->setRowStretch(3, 1);
        gridLayout->setRowStretch(4, 40);
        gridLayout->setRowStretch(5, 40);
        gridLayout->setRowStretch(6, 40);
        gridLayout->setRowStretch(7, 1000);
        gridLayout->setColumnStretch(0, 5);
        gridLayout->setColumnStretch(1, 20);
        gridLayout->setColumnStretch(2, 20);
        gridLayout->setColumnStretch(3, 25);
        gridLayout->setColumnStretch(4, 5);

        retranslateUi(uasControl);

        QMetaObject::connectSlotsByName(uasControl);
    } // setupUi

    void retranslateUi(QWidget *uasControl)
    {
        uasControl->setWindowTitle(QApplication::translate("uasControl", "Form", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        uasControl->setToolTip(QApplication::translate("uasControl", "Control widget to send basic control actions to the micro air vehicle", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        controlStatusLabel->setToolTip(QApplication::translate("uasControl", "Currently controlled system", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        controlStatusLabel->setStatusTip(QApplication::translate("uasControl", "Currently controlled system", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        controlStatusLabel->setText(QApplication::translate("uasControl", "UNCONNECTED", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        liftoffButton->setToolTip(QApplication::translate("uasControl", "Liftoff / Launch", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        liftoffButton->setStatusTip(QApplication::translate("uasControl", "Liftoff / Launch", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        liftoffButton->setText(QApplication::translate("uasControl", "Start", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        landButton->setToolTip(QApplication::translate("uasControl", "Fly straight to landing spot", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        landButton->setStatusTip(QApplication::translate("uasControl", "Fly straight to landing spot", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        landButton->setText(QApplication::translate("uasControl", "Land", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        shutdownButton->setToolTip(QApplication::translate("uasControl", "Only active on the ground: Poweroff system", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        shutdownButton->setStatusTip(QApplication::translate("uasControl", "Only active on the ground: Poweroff system", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        shutdownButton->setText(QApplication::translate("uasControl", "Halt", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        modeComboBox->setToolTip(QApplication::translate("uasControl", "Select MAV operation mode", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        modeComboBox->setStatusTip(QApplication::translate("uasControl", "Select MAV operation mode", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_TOOLTIP
        setModeButton->setToolTip(QApplication::translate("uasControl", "Transmit and enable mode on MAV", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        setModeButton->setStatusTip(QApplication::translate("uasControl", "Transmit and enable mode on MAV", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        setModeButton->setText(QApplication::translate("uasControl", "Set", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        lastActionLabel->setToolTip(QApplication::translate("uasControl", "Status label", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        lastActionLabel->setStatusTip(QApplication::translate("uasControl", "Status label", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        lastActionLabel->setText(QApplication::translate("uasControl", "No actions executed so far", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        controlButton->setToolTip(QApplication::translate("uasControl", "Main control button", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        controlButton->setStatusTip(QApplication::translate("uasControl", "Main control button", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        controlButton->setText(QApplication::translate("uasControl", "Activate Engine", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class uasControl: public Ui_uasControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UASCONTROL_H
