/********************************************************************************
** Form generated from reading UI file 'UnconnectedUASInfoWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UNCONNECTEDUASINFOWIDGET_H
#define UI_UNCONNECTEDUASINFOWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_UnconnectedUASInfoWidget
{
public:
    QGridLayout *gridLayout;
    QTextEdit *textEdit;

    void setupUi(QGroupBox *UnconnectedUASInfoWidget)
    {
        if (UnconnectedUASInfoWidget->objectName().isEmpty())
            UnconnectedUASInfoWidget->setObjectName(QStringLiteral("UnconnectedUASInfoWidget"));
        UnconnectedUASInfoWidget->resize(279, 114);
        UnconnectedUASInfoWidget->setStyleSheet(QStringLiteral("border:0;"));
        gridLayout = new QGridLayout(UnconnectedUASInfoWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textEdit = new QTextEdit(UnconnectedUASInfoWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setLineWidth(0);
        textEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit->setAutoFormatting(QTextEdit::AutoAll);
        textEdit->setUndoRedoEnabled(false);
        textEdit->setReadOnly(true);

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);


        retranslateUi(UnconnectedUASInfoWidget);

        QMetaObject::connectSlotsByName(UnconnectedUASInfoWidget);
    } // setupUi

    void retranslateUi(QGroupBox *UnconnectedUASInfoWidget)
    {
        UnconnectedUASInfoWidget->setWindowTitle(QString());
        UnconnectedUASInfoWidget->setTitle(QString());
        textEdit->setHtml(QApplication::translate("UnconnectedUASInfoWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt; font-weight:600; color:#b5b5b5;\">NO UAV</span></p></td></tr></table></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UnconnectedUASInfoWidget: public Ui_UnconnectedUASInfoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UNCONNECTEDUASINFOWIDGET_H
