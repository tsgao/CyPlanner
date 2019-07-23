/********************************************************************************
** Form generated from reading UI file 'ParamWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARAMWIDGET_H
#define UI_PARAMWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "APDoubleSpinBox.h"
#include "APSpinBox.h"

QT_BEGIN_NAMESPACE

class Ui_ParamWidget
{
public:
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QLabel *descriptionLabel;
    QHBoxLayout *horizontalLayout;
    APSpinBox *intSpinBox;
    APDoubleSpinBox *doubleSpinBox;
    QVBoxLayout *verticalLayout_2;
    QSlider *valueSlider;
    QHBoxLayout *horizontalLayout_2;
    QLabel *minLabel;
    QSpacerItem *horizontalSpacer_2;
    QLabel *maxLabel;
    QComboBox *valueComboBox;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *ParamWidget)
    {
        if (ParamWidget->objectName().isEmpty())
            ParamWidget->setObjectName(QStringLiteral("ParamWidget"));
        ParamWidget->resize(619, 207);
        horizontalLayout_3 = new QHBoxLayout(ParamWidget);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        titleLabel = new QLabel(ParamWidget);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));

        verticalLayout->addWidget(titleLabel);

        descriptionLabel = new QLabel(ParamWidget);
        descriptionLabel->setObjectName(QStringLiteral("descriptionLabel"));
        descriptionLabel->setWordWrap(true);

        verticalLayout->addWidget(descriptionLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        intSpinBox = new APSpinBox(ParamWidget);
        intSpinBox->setObjectName(QStringLiteral("intSpinBox"));

        horizontalLayout->addWidget(intSpinBox);

        doubleSpinBox = new APDoubleSpinBox(ParamWidget);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setButtonSymbols(QAbstractSpinBox::UpDownArrows);

        horizontalLayout->addWidget(doubleSpinBox);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        valueSlider = new QSlider(ParamWidget);
        valueSlider->setObjectName(QStringLiteral("valueSlider"));
        valueSlider->setMaximum(1000);
        valueSlider->setValue(0);
        valueSlider->setOrientation(Qt::Horizontal);
        valueSlider->setTickPosition(QSlider::TicksBelow);
        valueSlider->setTickInterval(100);

        verticalLayout_2->addWidget(valueSlider);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        minLabel = new QLabel(ParamWidget);
        minLabel->setObjectName(QStringLiteral("minLabel"));

        horizontalLayout_2->addWidget(minLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        maxLabel = new QLabel(ParamWidget);
        maxLabel->setObjectName(QStringLiteral("maxLabel"));

        horizontalLayout_2->addWidget(maxLabel);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout->addLayout(verticalLayout_2);

        valueComboBox = new QComboBox(ParamWidget);
        valueComboBox->setObjectName(QStringLiteral("valueComboBox"));

        horizontalLayout->addWidget(valueComboBox);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_3->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        retranslateUi(ParamWidget);

        QMetaObject::connectSlotsByName(ParamWidget);
    } // setupUi

    void retranslateUi(QWidget *ParamWidget)
    {
        ParamWidget->setWindowTitle(QApplication::translate("ParamWidget", "Form", Q_NULLPTR));
        titleLabel->setText(QApplication::translate("ParamWidget", "TextLabel", Q_NULLPTR));
        descriptionLabel->setText(QApplication::translate("ParamWidget", "TextLabel", Q_NULLPTR));
        minLabel->setText(QApplication::translate("ParamWidget", "TextLabel", Q_NULLPTR));
        maxLabel->setText(QApplication::translate("ParamWidget", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ParamWidget: public Ui_ParamWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARAMWIDGET_H
