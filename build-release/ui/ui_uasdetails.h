/********************************************************************************
** Form generated from reading UI file 'uasdetails.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UASDETAILS_H
#define UI_UASDETAILS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UASDetails
{
public:
    QListView *listView;

    void setupUi(QWidget *UASDetails)
    {
        if (UASDetails->objectName().isEmpty())
            UASDetails->setObjectName(QStringLiteral("UASDetails"));
        UASDetails->resize(400, 300);
        listView = new QListView(UASDetails);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(5, 21, 391, 271));
        listView->setAutoFillBackground(true);

        retranslateUi(UASDetails);

        QMetaObject::connectSlotsByName(UASDetails);
    } // setupUi

    void retranslateUi(QWidget *UASDetails)
    {
        UASDetails->setWindowTitle(QApplication::translate("UASDetails", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UASDetails: public Ui_UASDetails {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UASDETAILS_H
