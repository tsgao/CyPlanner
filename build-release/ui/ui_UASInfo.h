/********************************************************************************
** Form generated from reading UI file 'UASInfo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UASINFO_H
#define UI_UASINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_uasInfo
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QLabel *voltageLabel;
    QLabel *label_7;
    QProgressBar *batteryBar;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *receiveLossLabel;
    QLabel *label_8;
    QProgressBar *receiveLossBar;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_9;
    QLabel *sendLossLabel;
    QLabel *label_11;
    QProgressBar *sendLossBar;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_4;
    QLabel *loadLabel;
    QLabel *label_9;
    QProgressBar *loadBar;
    QFrame *line;
    QSpacerItem *verticalSpacer;
    QLabel *errorLabel;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_10;
    QProgressBar *progressBar;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *uasInfo)
    {
        if (uasInfo->objectName().isEmpty())
            uasInfo->setObjectName(QStringLiteral("uasInfo"));
        uasInfo->resize(230, 161);
        uasInfo->setStyleSheet(QStringLiteral(""));
        gridLayout = new QGridLayout(uasInfo);
        gridLayout->setSpacing(5);
        gridLayout->setContentsMargins(3, 3, 3, 3);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(uasInfo);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(13, 15, QSizePolicy::Maximum, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        voltageLabel = new QLabel(uasInfo);
        voltageLabel->setObjectName(QStringLiteral("voltageLabel"));
        voltageLabel->setTextFormat(Qt::AutoText);
        voltageLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(voltageLabel, 0, 2, 1, 1);

        label_7 = new QLabel(uasInfo);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setTextFormat(Qt::AutoText);
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_7, 0, 3, 1, 1);

        batteryBar = new QProgressBar(uasInfo);
        batteryBar->setObjectName(QStringLiteral("batteryBar"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(10);
        sizePolicy.setVerticalStretch(18);
        sizePolicy.setHeightForWidth(batteryBar->sizePolicy().hasHeightForWidth());
        batteryBar->setSizePolicy(sizePolicy);
        batteryBar->setMinimumSize(QSize(100, 0));
        batteryBar->setMaximumSize(QSize(16777215, 20));
        batteryBar->setBaseSize(QSize(0, 18));
        batteryBar->setMinimum(0);
        batteryBar->setMaximum(100);
        batteryBar->setValue(0);
        batteryBar->setTextVisible(true);

        gridLayout->addWidget(batteryBar, 0, 4, 1, 2);

        label_2 = new QLabel(uasInfo);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(13, 15, QSizePolicy::Maximum, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 1, 1, 1);

        receiveLossLabel = new QLabel(uasInfo);
        receiveLossLabel->setObjectName(QStringLiteral("receiveLossLabel"));
        receiveLossLabel->setTextFormat(Qt::AutoText);
        receiveLossLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(receiveLossLabel, 1, 2, 1, 1);

        label_8 = new QLabel(uasInfo);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setTextFormat(Qt::AutoText);
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_8, 1, 3, 1, 1);

        receiveLossBar = new QProgressBar(uasInfo);
        receiveLossBar->setObjectName(QStringLiteral("receiveLossBar"));
        sizePolicy.setHeightForWidth(receiveLossBar->sizePolicy().hasHeightForWidth());
        receiveLossBar->setSizePolicy(sizePolicy);
        receiveLossBar->setMinimumSize(QSize(100, 0));
        receiveLossBar->setMaximumSize(QSize(16777215, 20));
        receiveLossBar->setBaseSize(QSize(0, 18));
        receiveLossBar->setValue(0);
        receiveLossBar->setTextVisible(true);

        gridLayout->addWidget(receiveLossBar, 1, 4, 1, 2);

        label_6 = new QLabel(uasInfo);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(13, 15, QSizePolicy::Maximum, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_9, 2, 1, 1, 1);

        sendLossLabel = new QLabel(uasInfo);
        sendLossLabel->setObjectName(QStringLiteral("sendLossLabel"));
        sendLossLabel->setTextFormat(Qt::AutoText);
        sendLossLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(sendLossLabel, 2, 2, 1, 1);

        label_11 = new QLabel(uasInfo);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setTextFormat(Qt::AutoText);
        label_11->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_11, 2, 3, 1, 1);

        sendLossBar = new QProgressBar(uasInfo);
        sendLossBar->setObjectName(QStringLiteral("sendLossBar"));
        sizePolicy.setHeightForWidth(sendLossBar->sizePolicy().hasHeightForWidth());
        sendLossBar->setSizePolicy(sizePolicy);
        sendLossBar->setMinimumSize(QSize(100, 0));
        sendLossBar->setMaximumSize(QSize(16777215, 20));
        sendLossBar->setBaseSize(QSize(0, 18));
        sendLossBar->setValue(0);
        sendLossBar->setTextVisible(true);

        gridLayout->addWidget(sendLossBar, 2, 4, 1, 2);

        label_3 = new QLabel(uasInfo);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(13, 15, QSizePolicy::Maximum, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 3, 1, 1, 1);

        loadLabel = new QLabel(uasInfo);
        loadLabel->setObjectName(QStringLiteral("loadLabel"));
        loadLabel->setTextFormat(Qt::AutoText);
        loadLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(loadLabel, 3, 2, 1, 1);

        label_9 = new QLabel(uasInfo);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setTextFormat(Qt::AutoText);
        label_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_9, 3, 3, 1, 1);

        loadBar = new QProgressBar(uasInfo);
        loadBar->setObjectName(QStringLiteral("loadBar"));
        sizePolicy.setHeightForWidth(loadBar->sizePolicy().hasHeightForWidth());
        loadBar->setSizePolicy(sizePolicy);
        loadBar->setMinimumSize(QSize(100, 0));
        loadBar->setMaximumSize(QSize(16777215, 20));
        loadBar->setBaseSize(QSize(0, 18));
        loadBar->setValue(0);
        loadBar->setTextVisible(true);

        gridLayout->addWidget(loadBar, 3, 4, 1, 2);

        line = new QFrame(uasInfo);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 5, 0, 1, 6);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 7, 0, 1, 7);

        errorLabel = new QLabel(uasInfo);
        errorLabel->setObjectName(QStringLiteral("errorLabel"));

        gridLayout->addWidget(errorLabel, 6, 0, 1, 6);

        label_4 = new QLabel(uasInfo);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        label_5 = new QLabel(uasInfo);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 4, 2, 1, 1);

        label_10 = new QLabel(uasInfo);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 4, 3, 1, 1);

        progressBar = new QProgressBar(uasInfo);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setMaximumSize(QSize(16777215, 20));
        progressBar->setBaseSize(QSize(0, 18));
        progressBar->setValue(0);

        gridLayout->addWidget(progressBar, 4, 4, 1, 2);

        horizontalSpacer = new QSpacerItem(13, 15, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 4, 1, 1, 1);

        gridLayout->setRowStretch(7, 100);

        retranslateUi(uasInfo);

        QMetaObject::connectSlotsByName(uasInfo);
    } // setupUi

    void retranslateUi(QWidget *uasInfo)
    {
        uasInfo->setWindowTitle(QApplication::translate("uasInfo", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("uasInfo", "Battery", Q_NULLPTR));
        voltageLabel->setText(QApplication::translate("uasInfo", "12", Q_NULLPTR));
        label_7->setText(QApplication::translate("uasInfo", "V", Q_NULLPTR));
        batteryBar->setFormat(QApplication::translate("uasInfo", "%p%", Q_NULLPTR));
        label_2->setText(QApplication::translate("uasInfo", "MAV RX Loss", Q_NULLPTR));
        receiveLossLabel->setText(QApplication::translate("uasInfo", "0", Q_NULLPTR));
        label_8->setText(QApplication::translate("uasInfo", "%", Q_NULLPTR));
        receiveLossBar->setFormat(QApplication::translate("uasInfo", "%p%", Q_NULLPTR));
        label_6->setText(QApplication::translate("uasInfo", "MAV TX Loss", Q_NULLPTR));
        sendLossLabel->setText(QApplication::translate("uasInfo", "0", Q_NULLPTR));
        label_11->setText(QApplication::translate("uasInfo", "%", Q_NULLPTR));
        sendLossBar->setFormat(QApplication::translate("uasInfo", "%p%", Q_NULLPTR));
        label_3->setText(QApplication::translate("uasInfo", "MCU Load", Q_NULLPTR));
        loadLabel->setText(QApplication::translate("uasInfo", "0", Q_NULLPTR));
        label_9->setText(QApplication::translate("uasInfo", "%", Q_NULLPTR));
        loadBar->setFormat(QApplication::translate("uasInfo", "%p%", Q_NULLPTR));
        errorLabel->setText(QApplication::translate("uasInfo", "No error status received yet", Q_NULLPTR));
        label_4->setText(QApplication::translate("uasInfo", "CPU Load", Q_NULLPTR));
        label_5->setText(QApplication::translate("uasInfo", "0", Q_NULLPTR));
        label_10->setText(QApplication::translate("uasInfo", "%", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class uasInfo: public Ui_uasInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UASINFO_H
