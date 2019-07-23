/********************************************************************************
** Form generated from reading UI file 'QGCToolWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCTOOLWIDGET_H
#define UI_QGCTOOLWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCToolWidget
{
public:
    QVBoxLayout *toolLayout;
    QLabel *hintLabel;

    void setupUi(QWidget *QGCToolWidget)
    {
        if (QGCToolWidget->objectName().isEmpty())
            QGCToolWidget->setObjectName(QStringLiteral("QGCToolWidget"));
        QGCToolWidget->resize(400, 300);
        toolLayout = new QVBoxLayout(QGCToolWidget);
        toolLayout->setSpacing(0);
        toolLayout->setObjectName(QStringLiteral("toolLayout"));
        toolLayout->setContentsMargins(6, 0, 6, 0);
        hintLabel = new QLabel(QGCToolWidget);
        hintLabel->setObjectName(QStringLiteral("hintLabel"));

        toolLayout->addWidget(hintLabel);


        retranslateUi(QGCToolWidget);

        QMetaObject::connectSlotsByName(QGCToolWidget);
    } // setupUi

    void retranslateUi(QWidget *QGCToolWidget)
    {
        QGCToolWidget->setWindowTitle(QApplication::translate("QGCToolWidget", "Form", Q_NULLPTR));
        hintLabel->setText(QApplication::translate("QGCToolWidget", "Right-click into the widget to customize", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QGCToolWidget: public Ui_QGCToolWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCTOOLWIDGET_H
