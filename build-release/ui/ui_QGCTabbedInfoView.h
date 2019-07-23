/********************************************************************************
** Form generated from reading UI file 'QGCTabbedInfoView.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCTABBEDINFOVIEW_H
#define UI_QGCTABBEDINFOVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCTabbedInfoView
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;

    void setupUi(QWidget *QGCTabbedInfoView)
    {
        if (QGCTabbedInfoView->objectName().isEmpty())
            QGCTabbedInfoView->setObjectName(QStringLiteral("QGCTabbedInfoView"));
        QGCTabbedInfoView->resize(412, 310);
        verticalLayout = new QVBoxLayout(QGCTabbedInfoView);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(QGCTabbedInfoView);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));

        verticalLayout->addWidget(tabWidget);


        retranslateUi(QGCTabbedInfoView);

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(QGCTabbedInfoView);
    } // setupUi

    void retranslateUi(QWidget *QGCTabbedInfoView)
    {
        QGCTabbedInfoView->setWindowTitle(QApplication::translate("QGCTabbedInfoView", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QGCTabbedInfoView: public Ui_QGCTabbedInfoView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCTABBEDINFOVIEW_H
