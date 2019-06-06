/********************************************************************************
** Form generated from reading UI file 'TerminalConsole.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TERMINALCONSOLE_H
#define UI_TERMINALCONSOLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TerminalConsole
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *terminalGroupBox;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *connectButton;
    QPushButton *disconnectButton;
    QCheckBox *localEchoCheckBox;
    QSpacerItem *verticalSpacer_2;
    QComboBox *linkComboBox;
    QComboBox *baudComboBox;
    QSpacerItem *verticalSpacer;
    QPushButton *logsButton;
    QPushButton *settingsButton;
    QPushButton *clearButton;

    void setupUi(QWidget *TerminalConsole)
    {
        if (TerminalConsole->objectName().isEmpty())
            TerminalConsole->setObjectName(QStringLiteral("TerminalConsole"));
        TerminalConsole->resize(614, 382);
        horizontalLayout = new QHBoxLayout(TerminalConsole);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        terminalGroupBox = new QGroupBox(TerminalConsole);
        terminalGroupBox->setObjectName(QStringLiteral("terminalGroupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(100);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(terminalGroupBox->sizePolicy().hasHeightForWidth());
        terminalGroupBox->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(terminalGroupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(3, 3, 3, 3);

        horizontalLayout->addWidget(terminalGroupBox);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        connectButton = new QPushButton(TerminalConsole);
        connectButton->setObjectName(QStringLiteral("connectButton"));

        verticalLayout->addWidget(connectButton);

        disconnectButton = new QPushButton(TerminalConsole);
        disconnectButton->setObjectName(QStringLiteral("disconnectButton"));

        verticalLayout->addWidget(disconnectButton);

        localEchoCheckBox = new QCheckBox(TerminalConsole);
        localEchoCheckBox->setObjectName(QStringLiteral("localEchoCheckBox"));

        verticalLayout->addWidget(localEchoCheckBox);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        linkComboBox = new QComboBox(TerminalConsole);
        linkComboBox->setObjectName(QStringLiteral("linkComboBox"));
        linkComboBox->setMinimumSize(QSize(135, 0));

        verticalLayout->addWidget(linkComboBox);

        baudComboBox = new QComboBox(TerminalConsole);
        baudComboBox->setObjectName(QStringLiteral("baudComboBox"));
        baudComboBox->setMinimumSize(QSize(135, 0));

        verticalLayout->addWidget(baudComboBox);

        verticalSpacer = new QSpacerItem(91, 23, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        logsButton = new QPushButton(TerminalConsole);
        logsButton->setObjectName(QStringLiteral("logsButton"));
        logsButton->setMinimumSize(QSize(135, 0));

        verticalLayout->addWidget(logsButton);

        settingsButton = new QPushButton(TerminalConsole);
        settingsButton->setObjectName(QStringLiteral("settingsButton"));
        settingsButton->setMinimumSize(QSize(135, 0));

        verticalLayout->addWidget(settingsButton);

        clearButton = new QPushButton(TerminalConsole);
        clearButton->setObjectName(QStringLiteral("clearButton"));
        clearButton->setMinimumSize(QSize(135, 0));

        verticalLayout->addWidget(clearButton);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(TerminalConsole);

        QMetaObject::connectSlotsByName(TerminalConsole);
    } // setupUi

    void retranslateUi(QWidget *TerminalConsole)
    {
        TerminalConsole->setWindowTitle(QApplication::translate("TerminalConsole", "Form", Q_NULLPTR));
        terminalGroupBox->setTitle(QApplication::translate("TerminalConsole", "Terminal Output", Q_NULLPTR));
        connectButton->setText(QApplication::translate("TerminalConsole", "Connect", Q_NULLPTR));
        disconnectButton->setText(QApplication::translate("TerminalConsole", "Disconnect", Q_NULLPTR));
        localEchoCheckBox->setText(QApplication::translate("TerminalConsole", "Local Echo", Q_NULLPTR));
        logsButton->setText(QApplication::translate("TerminalConsole", "Logs", Q_NULLPTR));
        settingsButton->setText(QApplication::translate("TerminalConsole", "Adv. Settings", Q_NULLPTR));
        clearButton->setText(QApplication::translate("TerminalConsole", "Clear", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TerminalConsole: public Ui_TerminalConsole {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TERMINALCONSOLE_H
