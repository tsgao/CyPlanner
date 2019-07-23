/********************************************************************************
** Form generated from reading UI file 'QGCFirmwareUpdateWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCFIRMWAREUPDATEWIDGET_H
#define UI_QGCFIRMWAREUPDATEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCFirmwareUpdateWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QListWidget *autopilotListWidget;
    QTextEdit *textEdit;
    QTextEdit *firmwareInfo;
    QLabel *label_3;
    QListWidget *firmwareListWidget;
    QTextEdit *textEdit_2;
    QPushButton *selectFileButton;
    QProgressBar *progressBar;
    QPushButton *flashFirmwareButton;
    QLabel *label;

    void setupUi(QWidget *QGCFirmwareUpdateWidget)
    {
        if (QGCFirmwareUpdateWidget->objectName().isEmpty())
            QGCFirmwareUpdateWidget->setObjectName(QStringLiteral("QGCFirmwareUpdateWidget"));
        QGCFirmwareUpdateWidget->resize(638, 412);
        gridLayout = new QGridLayout(QGCFirmwareUpdateWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(QGCFirmwareUpdateWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 2);

        autopilotListWidget = new QListWidget(QGCFirmwareUpdateWidget);
        autopilotListWidget->setObjectName(QStringLiteral("autopilotListWidget"));

        gridLayout->addWidget(autopilotListWidget, 1, 0, 1, 2);

        textEdit = new QTextEdit(QGCFirmwareUpdateWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setReadOnly(true);

        gridLayout->addWidget(textEdit, 1, 2, 1, 1);

        firmwareInfo = new QTextEdit(QGCFirmwareUpdateWidget);
        firmwareInfo->setObjectName(QStringLiteral("firmwareInfo"));
        firmwareInfo->setReadOnly(true);

        gridLayout->addWidget(firmwareInfo, 1, 3, 4, 2);

        label_3 = new QLabel(QGCFirmwareUpdateWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 2);

        firmwareListWidget = new QListWidget(QGCFirmwareUpdateWidget);
        firmwareListWidget->setObjectName(QStringLiteral("firmwareListWidget"));

        gridLayout->addWidget(firmwareListWidget, 3, 0, 1, 2);

        textEdit_2 = new QTextEdit(QGCFirmwareUpdateWidget);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setReadOnly(true);

        gridLayout->addWidget(textEdit_2, 3, 2, 2, 1);

        selectFileButton = new QPushButton(QGCFirmwareUpdateWidget);
        selectFileButton->setObjectName(QStringLiteral("selectFileButton"));

        gridLayout->addWidget(selectFileButton, 4, 1, 1, 1);

        progressBar = new QProgressBar(QGCFirmwareUpdateWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);

        gridLayout->addWidget(progressBar, 5, 0, 2, 5);

        flashFirmwareButton = new QPushButton(QGCFirmwareUpdateWidget);
        flashFirmwareButton->setObjectName(QStringLiteral("flashFirmwareButton"));

        gridLayout->addWidget(flashFirmwareButton, 6, 4, 2, 1);

        label = new QLabel(QGCFirmwareUpdateWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 7, 0, 1, 1);


        retranslateUi(QGCFirmwareUpdateWidget);

        QMetaObject::connectSlotsByName(QGCFirmwareUpdateWidget);
    } // setupUi

    void retranslateUi(QWidget *QGCFirmwareUpdateWidget)
    {
        QGCFirmwareUpdateWidget->setWindowTitle(QApplication::translate("QGCFirmwareUpdateWidget", "Form", Q_NULLPTR));
        label_2->setText(QApplication::translate("QGCFirmwareUpdateWidget", "1) Select Autopilot", Q_NULLPTR));
        textEdit->setHtml(QApplication::translate("QGCFirmwareUpdateWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:large; font-weight:600;\">Autopilot Selection</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Select one of the connected autopilots from the list on the left.</span></p></body></html>", Q_NULLPTR));
        firmwareInfo->setHtml(QApplication::translate("QGCFirmwareUpdateWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:large; font-weight:600;\">AP Firmware v0.9.1</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">This software update...</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-inden"
                        "t:0px;\"><span style=\" font-size:10pt;\">FIXES:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">- Fix1</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">FEATURES:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-i"
                        "ndent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">- New feature 1</span></p></body></html>", Q_NULLPTR));
        label_3->setText(QApplication::translate("QGCFirmwareUpdateWidget", "2) Select Software Version", Q_NULLPTR));
        textEdit_2->setHtml(QApplication::translate("QGCFirmwareUpdateWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:large; font-weight:600;\">Software Version Selection</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Select the software version from the online repository on the left or choose the select file button to load a file from the harddisk. Detail information is shown on the right.</span></p></body></html>", Q_NULLPTR));
        selectFileButton->setText(QApplication::translate("QGCFirmwareUpdateWidget", "Select File..", Q_NULLPTR));
        flashFirmwareButton->setText(QApplication::translate("QGCFirmwareUpdateWidget", "Flash Firmware", Q_NULLPTR));
        label->setText(QApplication::translate("QGCFirmwareUpdateWidget", "Status", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QGCFirmwareUpdateWidget: public Ui_QGCFirmwareUpdateWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCFIRMWAREUPDATEWIDGET_H
