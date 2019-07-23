/********************************************************************************
** Form generated from reading UI file 'WatchdogProcessView.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WATCHDOGPROCESSVIEW_H
#define UI_WATCHDOGPROCESSVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WatchdogProcessView
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *nameLabel;
    QLabel *pidLabel;
    QLabel *argumentsLabel;
    QToolButton *startButton;
    QToolButton *restartButton;

    void setupUi(QWidget *WatchdogProcessView)
    {
        if (WatchdogProcessView->objectName().isEmpty())
            WatchdogProcessView->setObjectName(QStringLiteral("WatchdogProcessView"));
        WatchdogProcessView->resize(400, 44);
        horizontalLayout = new QHBoxLayout(WatchdogProcessView);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        nameLabel = new QLabel(WatchdogProcessView);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));

        horizontalLayout->addWidget(nameLabel);

        pidLabel = new QLabel(WatchdogProcessView);
        pidLabel->setObjectName(QStringLiteral("pidLabel"));

        horizontalLayout->addWidget(pidLabel);

        argumentsLabel = new QLabel(WatchdogProcessView);
        argumentsLabel->setObjectName(QStringLiteral("argumentsLabel"));

        horizontalLayout->addWidget(argumentsLabel);

        startButton = new QToolButton(WatchdogProcessView);
        startButton->setObjectName(QStringLiteral("startButton"));

        horizontalLayout->addWidget(startButton);

        restartButton = new QToolButton(WatchdogProcessView);
        restartButton->setObjectName(QStringLiteral("restartButton"));

        horizontalLayout->addWidget(restartButton);


        retranslateUi(WatchdogProcessView);

        QMetaObject::connectSlotsByName(WatchdogProcessView);
    } // setupUi

    void retranslateUi(QWidget *WatchdogProcessView)
    {
        WatchdogProcessView->setWindowTitle(QApplication::translate("WatchdogProcessView", "Form", Q_NULLPTR));
        nameLabel->setText(QApplication::translate("WatchdogProcessView", "TextLabel", Q_NULLPTR));
        pidLabel->setText(QApplication::translate("WatchdogProcessView", "TextLabel", Q_NULLPTR));
        argumentsLabel->setText(QApplication::translate("WatchdogProcessView", "TextLabel", Q_NULLPTR));
        startButton->setText(QApplication::translate("WatchdogProcessView", "...", Q_NULLPTR));
        restartButton->setText(QApplication::translate("WatchdogProcessView", "...", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WatchdogProcessView: public Ui_WatchdogProcessView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WATCHDOGPROCESSVIEW_H
