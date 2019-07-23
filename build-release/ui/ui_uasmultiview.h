/********************************************************************************
** Form generated from reading UI file 'uasmultiview.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UASMULTIVIEW_H
#define UI_UASMULTIVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UASMultiView
{
public:
    QLabel *label;

    void setupUi(QWidget *UASMultiView)
    {
        if (UASMultiView->objectName().isEmpty())
            UASMultiView->setObjectName(QStringLiteral("UASMultiView"));
        UASMultiView->resize(500, 300);
        label = new QLabel(UASMultiView);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 121, 16));

        retranslateUi(UASMultiView);

        QMetaObject::connectSlotsByName(UASMultiView);
    } // setupUi

    void retranslateUi(QWidget *UASMultiView)
    {
        UASMultiView->setWindowTitle(QApplication::translate("UASMultiView", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("UASMultiView", "Multi Fight view", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UASMultiView: public Ui_UASMultiView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UASMULTIVIEW_H
