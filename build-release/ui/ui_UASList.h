/********************************************************************************
** Form generated from reading UI file 'UASList.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UASLIST_H
#define UI_UASLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UASList
{
public:

    void setupUi(QWidget *UASList)
    {
        if (UASList->objectName().isEmpty())
            UASList->setObjectName(QStringLiteral("UASList"));
        UASList->resize(500, 300);
        UASList->setMinimumSize(QSize(0, 0));

        retranslateUi(UASList);

        QMetaObject::connectSlotsByName(UASList);
    } // setupUi

    void retranslateUi(QWidget *UASList)
    {
        UASList->setWindowTitle(QApplication::translate("UASList", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UASList: public Ui_UASList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UASLIST_H
