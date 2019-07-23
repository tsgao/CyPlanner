/********************************************************************************
** Form generated from reading UI file 'StandardParamConfig.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STANDARDPARAMCONFIG_H
#define UI_STANDARDPARAMCONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StandardParamConfig
{
public:
    QVBoxLayout *verticalLayout_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLineEdit *searchFilter;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;

    void setupUi(QWidget *StandardParamConfig)
    {
        if (StandardParamConfig->objectName().isEmpty())
            StandardParamConfig->setObjectName(QStringLiteral("StandardParamConfig"));
        StandardParamConfig->resize(651, 552);
        verticalLayout_3 = new QVBoxLayout(StandardParamConfig);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        widget = new QWidget(StandardParamConfig);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        searchFilter = new QLineEdit(widget);
        searchFilter->setObjectName(QStringLiteral("searchFilter"));

        horizontalLayout->addWidget(searchFilter);


        verticalLayout_3->addWidget(widget);

        scrollArea = new QScrollArea(StandardParamConfig);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 625, 492));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));

        verticalLayout_2->addLayout(verticalLayout);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(scrollArea);


        retranslateUi(StandardParamConfig);

        QMetaObject::connectSlotsByName(StandardParamConfig);
    } // setupUi

    void retranslateUi(QWidget *StandardParamConfig)
    {
        StandardParamConfig->setWindowTitle(QApplication::translate("StandardParamConfig", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("StandardParamConfig", "<h2>Standard Params</h2>", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        searchFilter->setToolTip(QApplication::translate("StandardParamConfig", "Type words separated by spaces. Only parameters which match all search terms will be displayed.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        searchFilter->setPlaceholderText(QApplication::translate("StandardParamConfig", "Filter", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class StandardParamConfig: public Ui_StandardParamConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STANDARDPARAMCONFIG_H
