/********************************************************************************
** Form generated from reading UI file 'WatchdogControl.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WATCHDOGCONTROL_H
#define UI_WATCHDOGCONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WatchdogControl
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *mainWidget;
    QLabel *processInfoLabel;

    void setupUi(QWidget *WatchdogControl)
    {
        if (WatchdogControl->objectName().isEmpty())
            WatchdogControl->setObjectName(QStringLiteral("WatchdogControl"));
        WatchdogControl->resize(400, 300);
        verticalLayout = new QVBoxLayout(WatchdogControl);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        mainWidget = new QWidget(WatchdogControl);
        mainWidget->setObjectName(QStringLiteral("mainWidget"));

        verticalLayout->addWidget(mainWidget);

        processInfoLabel = new QLabel(WatchdogControl);
        processInfoLabel->setObjectName(QStringLiteral("processInfoLabel"));

        verticalLayout->addWidget(processInfoLabel);

        verticalLayout->setStretch(0, 100);

        retranslateUi(WatchdogControl);

        QMetaObject::connectSlotsByName(WatchdogControl);
    } // setupUi

    void retranslateUi(QWidget *WatchdogControl)
    {
        WatchdogControl->setWindowTitle(QApplication::translate("WatchdogControl", "Form", Q_NULLPTR));
        processInfoLabel->setText(QApplication::translate("WatchdogControl", "0 Processes  Core 1: 0%  Core 2: 0%", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WatchdogControl: public Ui_WatchdogControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WATCHDOGCONTROL_H
