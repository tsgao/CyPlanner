/********************************************************************************
** Form generated from reading UI file 'AdvancedParamConfig.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADVANCEDPARAMCONFIG_H
#define UI_ADVANCEDPARAMCONFIG_H

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

class Ui_AdvancedParamConfig
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

    void setupUi(QWidget *AdvancedParamConfig)
    {
        if (AdvancedParamConfig->objectName().isEmpty())
            AdvancedParamConfig->setObjectName(QStringLiteral("AdvancedParamConfig"));
        AdvancedParamConfig->resize(725, 632);
        verticalLayout_3 = new QVBoxLayout(AdvancedParamConfig);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        widget = new QWidget(AdvancedParamConfig);
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

        scrollArea = new QScrollArea(AdvancedParamConfig);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 699, 572));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));

        verticalLayout_2->addLayout(verticalLayout);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(scrollArea);


        retranslateUi(AdvancedParamConfig);

        QMetaObject::connectSlotsByName(AdvancedParamConfig);
    } // setupUi

    void retranslateUi(QWidget *AdvancedParamConfig)
    {
        AdvancedParamConfig->setWindowTitle(QApplication::translate("AdvancedParamConfig", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("AdvancedParamConfig", "<h2>Advanced Params</h2>", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        searchFilter->setToolTip(QApplication::translate("AdvancedParamConfig", "Type words separated by spaces. Only parameters which match all search terms will be displayed.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        searchFilter->setPlaceholderText(QApplication::translate("AdvancedParamConfig", "Filter", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AdvancedParamConfig: public Ui_AdvancedParamConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADVANCEDPARAMCONFIG_H
