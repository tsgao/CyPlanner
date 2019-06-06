/********************************************************************************
** Form generated from reading UI file 'LogDownloadDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGDOWNLOADDIALOG_H
#define UI_LOGDOWNLOADDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LogDownloadDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QTableWidget *tableWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *donePushButton;
    QPushButton *refreshPushButton;
    QPushButton *getPushButton;
    QSpacerItem *verticalSpacer_2;
    QPushButton *erasePushButton;
    QPushButton *cancelPushButton;
    QSpacerItem *verticalSpacer;
    QCheckBox *checkAllBox;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *statusLabel;
    QProgressBar *progressBar;

    void setupUi(QDialog *LogDownloadDialog)
    {
        if (LogDownloadDialog->objectName().isEmpty())
            LogDownloadDialog->setObjectName(QStringLiteral("LogDownloadDialog"));
        LogDownloadDialog->resize(577, 422);
        verticalLayout_3 = new QVBoxLayout(LogDownloadDialog);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tableWidget = new QTableWidget(LogDownloadDialog);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        horizontalLayout->addWidget(tableWidget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        donePushButton = new QPushButton(LogDownloadDialog);
        donePushButton->setObjectName(QStringLiteral("donePushButton"));

        verticalLayout->addWidget(donePushButton);

        refreshPushButton = new QPushButton(LogDownloadDialog);
        refreshPushButton->setObjectName(QStringLiteral("refreshPushButton"));

        verticalLayout->addWidget(refreshPushButton);

        getPushButton = new QPushButton(LogDownloadDialog);
        getPushButton->setObjectName(QStringLiteral("getPushButton"));

        verticalLayout->addWidget(getPushButton);

        verticalSpacer_2 = new QSpacerItem(20, 70, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        erasePushButton = new QPushButton(LogDownloadDialog);
        erasePushButton->setObjectName(QStringLiteral("erasePushButton"));

        verticalLayout->addWidget(erasePushButton);

        cancelPushButton = new QPushButton(LogDownloadDialog);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        verticalLayout->addWidget(cancelPushButton);

        verticalSpacer = new QSpacerItem(20, 228, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        checkAllBox = new QCheckBox(LogDownloadDialog);
        checkAllBox->setObjectName(QStringLiteral("checkAllBox"));
        checkAllBox->setChecked(true);

        verticalLayout->addWidget(checkAllBox);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(108, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        statusLabel = new QLabel(LogDownloadDialog);
        statusLabel->setObjectName(QStringLiteral("statusLabel"));
        statusLabel->setMinimumSize(QSize(120, 0));
        statusLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(statusLabel);

        progressBar = new QProgressBar(LogDownloadDialog);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setMaximumSize(QSize(205, 16777215));
        progressBar->setValue(0);

        horizontalLayout_2->addWidget(progressBar);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(LogDownloadDialog);

        QMetaObject::connectSlotsByName(LogDownloadDialog);
    } // setupUi

    void retranslateUi(QDialog *LogDownloadDialog)
    {
        LogDownloadDialog->setWindowTitle(QApplication::translate("LogDownloadDialog", "Log Download", Q_NULLPTR));
        donePushButton->setText(QApplication::translate("LogDownloadDialog", "Done", Q_NULLPTR));
        refreshPushButton->setText(QApplication::translate("LogDownloadDialog", "Refresh", Q_NULLPTR));
        getPushButton->setText(QApplication::translate("LogDownloadDialog", "Download Log(s)", Q_NULLPTR));
        erasePushButton->setText(QApplication::translate("LogDownloadDialog", "Erase Logs", Q_NULLPTR));
        cancelPushButton->setText(QApplication::translate("LogDownloadDialog", "Cancel", Q_NULLPTR));
        checkAllBox->setText(QApplication::translate("LogDownloadDialog", "Check/Uncheck All", Q_NULLPTR));
        statusLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LogDownloadDialog: public Ui_LogDownloadDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGDOWNLOADDIALOG_H
