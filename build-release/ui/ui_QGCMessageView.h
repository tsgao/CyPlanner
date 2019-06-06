/********************************************************************************
** Form generated from reading UI file 'QGCMessageView.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCMESSAGEVIEW_H
#define UI_QGCMESSAGEVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCMessageView
{
public:
    QHBoxLayout *horizontalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *QGCMessageView)
    {
        if (QGCMessageView->objectName().isEmpty())
            QGCMessageView->setObjectName(QStringLiteral("QGCMessageView"));
        QGCMessageView->resize(305, 283);
        horizontalLayout_2 = new QHBoxLayout(QGCMessageView);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 8, 0, 0);
        scrollArea = new QScrollArea(QGCMessageView);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 303, 273));
        horizontalLayout = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        plainTextEdit = new QPlainTextEdit(scrollAreaWidgetContents);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setReadOnly(true);

        horizontalLayout->addWidget(plainTextEdit);

        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout_2->addWidget(scrollArea);


        retranslateUi(QGCMessageView);

        QMetaObject::connectSlotsByName(QGCMessageView);
    } // setupUi

    void retranslateUi(QWidget *QGCMessageView)
    {
        QGCMessageView->setWindowTitle(QApplication::translate("QGCMessageView", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QGCMessageView: public Ui_QGCMessageView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCMESSAGEVIEW_H
