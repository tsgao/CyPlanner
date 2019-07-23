/********************************************************************************
** Form generated from reading UI file 'WatchdogView.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WATCHDOGVIEW_H
#define UI_WATCHDOGVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WatchdogView
{
public:
    QGridLayout *gridLayout;
    QLabel *nameLabel;
    QWidget *processListWidget;

    void setupUi(QWidget *WatchdogView)
    {
        if (WatchdogView->objectName().isEmpty())
            WatchdogView->setObjectName(QStringLiteral("WatchdogView"));
        WatchdogView->resize(400, 300);
        gridLayout = new QGridLayout(WatchdogView);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        nameLabel = new QLabel(WatchdogView);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));

        gridLayout->addWidget(nameLabel, 0, 0, 1, 1);

        processListWidget = new QWidget(WatchdogView);
        processListWidget->setObjectName(QStringLiteral("processListWidget"));

        gridLayout->addWidget(processListWidget, 1, 0, 1, 1);

        gridLayout->setRowStretch(1, 100);

        retranslateUi(WatchdogView);

        QMetaObject::connectSlotsByName(WatchdogView);
    } // setupUi

    void retranslateUi(QWidget *WatchdogView)
    {
        WatchdogView->setWindowTitle(QApplication::translate("WatchdogView", "Form", Q_NULLPTR));
        nameLabel->setText(QApplication::translate("WatchdogView", "Watchdog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WatchdogView: public Ui_WatchdogView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WATCHDOGVIEW_H
