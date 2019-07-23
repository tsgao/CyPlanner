/********************************************************************************
** Form generated from reading UI file 'HDDisplay.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HDDISPLAY_H
#define UI_HDDISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HDDisplay
{
public:
    QHBoxLayout *horizontalLayout;
    QGraphicsView *view;

    void setupUi(QWidget *HDDisplay)
    {
        if (HDDisplay->objectName().isEmpty())
            HDDisplay->setObjectName(QStringLiteral("HDDisplay"));
        HDDisplay->resize(400, 300);
        horizontalLayout = new QHBoxLayout(HDDisplay);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        view = new QGraphicsView(HDDisplay);
        view->setObjectName(QStringLiteral("view"));

        horizontalLayout->addWidget(view);


        retranslateUi(HDDisplay);

        QMetaObject::connectSlotsByName(HDDisplay);
    } // setupUi

    void retranslateUi(QWidget *HDDisplay)
    {
        HDDisplay->setWindowTitle(QApplication::translate("HDDisplay", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class HDDisplay: public Ui_HDDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HDDISPLAY_H
