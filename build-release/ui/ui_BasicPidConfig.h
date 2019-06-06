/********************************************************************************
** Form generated from reading UI file 'BasicPidConfig.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASICPIDCONFIG_H
#define UI_BASICPIDCONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BasicPidConfig
{
public:
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_4;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *BasicPidConfig)
    {
        if (BasicPidConfig->objectName().isEmpty())
            BasicPidConfig->setObjectName(QStringLiteral("BasicPidConfig"));
        BasicPidConfig->resize(786, 387);
        verticalLayout_3 = new QVBoxLayout(BasicPidConfig);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label = new QLabel(BasicPidConfig);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_3->addWidget(label);

        scrollArea_2 = new QScrollArea(BasicPidConfig);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 760, 329));
        verticalLayout_4 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        scrollArea = new QScrollArea(scrollAreaWidgetContents_2);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 734, 303));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_2->addLayout(verticalLayout);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_4->addWidget(scrollArea);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_3->addWidget(scrollArea_2);


        retranslateUi(BasicPidConfig);

        QMetaObject::connectSlotsByName(BasicPidConfig);
    } // setupUi

    void retranslateUi(QWidget *BasicPidConfig)
    {
        BasicPidConfig->setWindowTitle(QApplication::translate("BasicPidConfig", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("BasicPidConfig", "<h2>Basic Tuning</h2>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class BasicPidConfig: public Ui_BasicPidConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASICPIDCONFIG_H
