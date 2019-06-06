/********************************************************************************
** Form generated from reading UI file 'AutoUpdateDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTOUPDATEDIALOG_H
#define UI_AUTOUPDATEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AutoUpdateDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *ap2Logo;
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QLabel *versionLabel;
    QLabel *questionLabel;
    QLabel *statusLabel;
    QProgressBar *progressBar;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *skipPushButton;
    QPushButton *noPushButton;
    QPushButton *yesPushButton;

    void setupUi(QDialog *AutoUpdateDialog)
    {
        if (AutoUpdateDialog->objectName().isEmpty())
            AutoUpdateDialog->setObjectName(QStringLiteral("AutoUpdateDialog"));
        AutoUpdateDialog->resize(422, 185);
        AutoUpdateDialog->setMaximumSize(QSize(16777215, 185));
        verticalLayout_2 = new QVBoxLayout(AutoUpdateDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        ap2Logo = new QLabel(AutoUpdateDialog);
        ap2Logo->setObjectName(QStringLiteral("ap2Logo"));

        horizontalLayout_2->addWidget(ap2Logo);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        titleLabel = new QLabel(AutoUpdateDialog);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        titleLabel->setMinimumSize(QSize(0, 19));
        titleLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(titleLabel);

        versionLabel = new QLabel(AutoUpdateDialog);
        versionLabel->setObjectName(QStringLiteral("versionLabel"));
        versionLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(versionLabel);

        questionLabel = new QLabel(AutoUpdateDialog);
        questionLabel->setObjectName(QStringLiteral("questionLabel"));
        questionLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(questionLabel);

        statusLabel = new QLabel(AutoUpdateDialog);
        statusLabel->setObjectName(QStringLiteral("statusLabel"));
        statusLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(statusLabel);

        progressBar = new QProgressBar(AutoUpdateDialog);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setMinimum(0);
        progressBar->setMaximum(0);
        progressBar->setValue(0);
        progressBar->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(progressBar);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        skipPushButton = new QPushButton(AutoUpdateDialog);
        skipPushButton->setObjectName(QStringLiteral("skipPushButton"));

        horizontalLayout->addWidget(skipPushButton);

        noPushButton = new QPushButton(AutoUpdateDialog);
        noPushButton->setObjectName(QStringLiteral("noPushButton"));

        horizontalLayout->addWidget(noPushButton);

        yesPushButton = new QPushButton(AutoUpdateDialog);
        yesPushButton->setObjectName(QStringLiteral("yesPushButton"));

        horizontalLayout->addWidget(yesPushButton);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(AutoUpdateDialog);

        QMetaObject::connectSlotsByName(AutoUpdateDialog);
    } // setupUi

    void retranslateUi(QDialog *AutoUpdateDialog)
    {
        AutoUpdateDialog->setWindowTitle(QApplication::translate("AutoUpdateDialog", "Auto Update", Q_NULLPTR));
        ap2Logo->setText(QApplication::translate("AutoUpdateDialog", "<html><head/><body><p><img src=\":/APMIcon128\"/></p></body></html>", Q_NULLPTR));
        titleLabel->setText(QApplication::translate("AutoUpdateDialog", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">New Version Available</span></p></body></html>", Q_NULLPTR));
        versionLabel->setText(QApplication::translate("AutoUpdateDialog", "...", Q_NULLPTR));
        questionLabel->setText(QApplication::translate("AutoUpdateDialog", "Do you want to install this version?", Q_NULLPTR));
        statusLabel->setText(QApplication::translate("AutoUpdateDialog", "...", Q_NULLPTR));
        skipPushButton->setText(QApplication::translate("AutoUpdateDialog", "Skip This Version", Q_NULLPTR));
        noPushButton->setText(QApplication::translate("AutoUpdateDialog", "Remind Me Later", Q_NULLPTR));
        yesPushButton->setText(QApplication::translate("AutoUpdateDialog", "Install", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AutoUpdateDialog: public Ui_AutoUpdateDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTOUPDATEDIALOG_H
