/********************************************************************************
** Form generated from reading UI file 'DownloadRemoteParamsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOWNLOADREMOTEPARAMSDIALOG_H
#define UI_DOWNLOADREMOTEPARAMSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DownloadRemoteParamsDialog
{
public:
    QLabel *statusLabel;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *downloadButton;
    QPushButton *closeButton;
    QPushButton *refreshButton;
    QProgressBar *progressBar;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *DownloadRemoteParamsDialog)
    {
        if (DownloadRemoteParamsDialog->objectName().isEmpty())
            DownloadRemoteParamsDialog->setObjectName(QStringLiteral("DownloadRemoteParamsDialog"));
        DownloadRemoteParamsDialog->resize(392, 247);
        statusLabel = new QLabel(DownloadRemoteParamsDialog);
        statusLabel->setObjectName(QStringLiteral("statusLabel"));
        statusLabel->setGeometry(QRect(10, 220, 371, 16));
        layoutWidget = new QWidget(DownloadRemoteParamsDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 371, 194));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        listWidget = new QListWidget(layoutWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        horizontalLayout->addWidget(listWidget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        downloadButton = new QPushButton(layoutWidget);
        downloadButton->setObjectName(QStringLiteral("downloadButton"));

        verticalLayout->addWidget(downloadButton);

        closeButton = new QPushButton(layoutWidget);
        closeButton->setObjectName(QStringLiteral("closeButton"));

        verticalLayout->addWidget(closeButton);

        refreshButton = new QPushButton(layoutWidget);
        refreshButton->setObjectName(QStringLiteral("refreshButton"));
        refreshButton->setMinimumSize(QSize(0, 0));
        refreshButton->setMaximumSize(QSize(16777212, 16777215));

        verticalLayout->addWidget(refreshButton);

        progressBar = new QProgressBar(layoutWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setMinimumSize(QSize(80, 0));
        progressBar->setMaximumSize(QSize(16777215, 16777215));
        progressBar->setValue(0);

        verticalLayout->addWidget(progressBar);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(DownloadRemoteParamsDialog);

        QMetaObject::connectSlotsByName(DownloadRemoteParamsDialog);
    } // setupUi

    void retranslateUi(QDialog *DownloadRemoteParamsDialog)
    {
        DownloadRemoteParamsDialog->setWindowTitle(QApplication::translate("DownloadRemoteParamsDialog", "Download Parameters", Q_NULLPTR));
        statusLabel->setText(QApplication::translate("DownloadRemoteParamsDialog", "Status:", Q_NULLPTR));
        downloadButton->setText(QApplication::translate("DownloadRemoteParamsDialog", "Download", Q_NULLPTR));
        closeButton->setText(QApplication::translate("DownloadRemoteParamsDialog", "Close", Q_NULLPTR));
        refreshButton->setText(QApplication::translate("DownloadRemoteParamsDialog", "Refresh", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DownloadRemoteParamsDialog: public Ui_DownloadRemoteParamsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOWNLOADREMOTEPARAMSDIALOG_H
