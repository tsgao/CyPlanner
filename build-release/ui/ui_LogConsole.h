/********************************************************************************
** Form generated from reading UI file 'LogConsole.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGCONSOLE_H
#define UI_LOGCONSOLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogConsole
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *listLayout;
    QLabel *label;
    QTableWidget *logsTable;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QPushButton *selectAllButton;
    QPushButton *selectNoneButton;
    QPushButton *pullLogsButton;
    QSpacerItem *verticalSpacer;
    QPushButton *eraseLogsButton;
    QPushButton *stopWorkerButton;
    QPushButton *refreshButton;
    QCheckBox *generateKmlCheck;

    void setupUi(QWidget *LogConsole)
    {
        if (LogConsole->objectName().isEmpty())
            LogConsole->setObjectName(QStringLiteral("LogConsole"));
        LogConsole->resize(748, 276);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LogConsole->sizePolicy().hasHeightForWidth());
        LogConsole->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(LogConsole);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        listLayout = new QVBoxLayout();
        listLayout->setObjectName(QStringLiteral("listLayout"));
        listLayout->setSizeConstraint(QLayout::SetNoConstraint);
        label = new QLabel(LogConsole);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        listLayout->addWidget(label);

        logsTable = new QTableWidget(LogConsole);
        logsTable->setObjectName(QStringLiteral("logsTable"));

        listLayout->addWidget(logsTable);


        horizontalLayout->addLayout(listLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        selectAllButton = new QPushButton(LogConsole);
        selectAllButton->setObjectName(QStringLiteral("selectAllButton"));

        verticalLayout->addWidget(selectAllButton);

        selectNoneButton = new QPushButton(LogConsole);
        selectNoneButton->setObjectName(QStringLiteral("selectNoneButton"));

        verticalLayout->addWidget(selectNoneButton);

        pullLogsButton = new QPushButton(LogConsole);
        pullLogsButton->setObjectName(QStringLiteral("pullLogsButton"));

        verticalLayout->addWidget(pullLogsButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        eraseLogsButton = new QPushButton(LogConsole);
        eraseLogsButton->setObjectName(QStringLiteral("eraseLogsButton"));

        verticalLayout->addWidget(eraseLogsButton);

        stopWorkerButton = new QPushButton(LogConsole);
        stopWorkerButton->setObjectName(QStringLiteral("stopWorkerButton"));

        verticalLayout->addWidget(stopWorkerButton);

        refreshButton = new QPushButton(LogConsole);
        refreshButton->setObjectName(QStringLiteral("refreshButton"));

        verticalLayout->addWidget(refreshButton);

        generateKmlCheck = new QCheckBox(LogConsole);
        generateKmlCheck->setObjectName(QStringLiteral("generateKmlCheck"));
        generateKmlCheck->setChecked(false);

        verticalLayout->addWidget(generateKmlCheck);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(LogConsole);

        QMetaObject::connectSlotsByName(LogConsole);
    } // setupUi

    void retranslateUi(QWidget *LogConsole)
    {
        LogConsole->setWindowTitle(QApplication::translate("LogConsole", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("LogConsole", "Logs from UAV:", Q_NULLPTR));
        selectAllButton->setText(QApplication::translate("LogConsole", "Select All", Q_NULLPTR));
        selectNoneButton->setText(QApplication::translate("LogConsole", "Select None", Q_NULLPTR));
        pullLogsButton->setText(QApplication::translate("LogConsole", "Pull Selected", Q_NULLPTR));
        eraseLogsButton->setText(QApplication::translate("LogConsole", "Erase Logs", Q_NULLPTR));
        stopWorkerButton->setText(QApplication::translate("LogConsole", "Stop", Q_NULLPTR));
        refreshButton->setText(QApplication::translate("LogConsole", "Refresh", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        generateKmlCheck->setToolTip(QApplication::translate("LogConsole", "When checked, generate KML when extracting logs", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        generateKmlCheck->setText(QApplication::translate("LogConsole", "Generate KML", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LogConsole: public Ui_LogConsole {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGCONSOLE_H
