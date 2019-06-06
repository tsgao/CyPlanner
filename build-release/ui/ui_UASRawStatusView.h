/********************************************************************************
** Form generated from reading UI file 'UASRawStatusView.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UASRAWSTATUSVIEW_H
#define UI_UASRAWSTATUSVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UASRawStatusView
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;

    void setupUi(QWidget *UASRawStatusView)
    {
        if (UASRawStatusView->objectName().isEmpty())
            UASRawStatusView->setObjectName(QStringLiteral("UASRawStatusView"));
        UASRawStatusView->resize(400, 300);
        verticalLayout = new QVBoxLayout(UASRawStatusView);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableWidget = new QTableWidget(UASRawStatusView);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        verticalLayout->addWidget(tableWidget);


        retranslateUi(UASRawStatusView);

        QMetaObject::connectSlotsByName(UASRawStatusView);
    } // setupUi

    void retranslateUi(QWidget *UASRawStatusView)
    {
        UASRawStatusView->setWindowTitle(QApplication::translate("UASRawStatusView", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UASRawStatusView: public Ui_UASRawStatusView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UASRAWSTATUSVIEW_H
