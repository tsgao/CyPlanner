/********************************************************************************
** Form generated from reading UI file 'UASQuickViewItemSelect.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UASQUICKVIEWITEMSELECT_H
#define UI_UASQUICKVIEWITEMSELECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UASQuickViewItemSelect
{
public:
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;

    void setupUi(QWidget *UASQuickViewItemSelect)
    {
        if (UASQuickViewItemSelect->objectName().isEmpty())
            UASQuickViewItemSelect->setObjectName(QStringLiteral("UASQuickViewItemSelect"));
        UASQuickViewItemSelect->resize(704, 499);
        horizontalLayout = new QHBoxLayout(UASQuickViewItemSelect);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        listWidget = new QListWidget(UASQuickViewItemSelect);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        horizontalLayout->addWidget(listWidget);

        stackedWidget = new QStackedWidget(UASQuickViewItemSelect);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);

        horizontalLayout->addWidget(stackedWidget);

        horizontalLayout->setStretch(1, 1);

        retranslateUi(UASQuickViewItemSelect);

        QMetaObject::connectSlotsByName(UASQuickViewItemSelect);
    } // setupUi

    void retranslateUi(QWidget *UASQuickViewItemSelect)
    {
        UASQuickViewItemSelect->setWindowTitle(QApplication::translate("UASQuickViewItemSelect", "Select Item", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UASQuickViewItemSelect: public Ui_UASQuickViewItemSelect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UASQUICKVIEWITEMSELECT_H
