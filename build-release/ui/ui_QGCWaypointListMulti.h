/********************************************************************************
** Form generated from reading UI file 'QGCWaypointListMulti.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCWAYPOINTLISTMULTI_H
#define UI_QGCWAYPOINTLISTMULTI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCWaypointListMulti
{
public:
    QHBoxLayout *horizontalLayout;
    QStackedWidget *stackedWidget;

    void setupUi(QWidget *QGCWaypointListMulti)
    {
        if (QGCWaypointListMulti->objectName().isEmpty())
            QGCWaypointListMulti->setObjectName(QStringLiteral("QGCWaypointListMulti"));
        QGCWaypointListMulti->resize(400, 300);
        horizontalLayout = new QHBoxLayout(QGCWaypointListMulti);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        stackedWidget = new QStackedWidget(QGCWaypointListMulti);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));

        horizontalLayout->addWidget(stackedWidget);


        retranslateUi(QGCWaypointListMulti);

        QMetaObject::connectSlotsByName(QGCWaypointListMulti);
    } // setupUi

    void retranslateUi(QWidget *QGCWaypointListMulti)
    {
        QGCWaypointListMulti->setWindowTitle(QApplication::translate("QGCWaypointListMulti", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QGCWaypointListMulti: public Ui_QGCWaypointListMulti {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCWAYPOINTLISTMULTI_H
