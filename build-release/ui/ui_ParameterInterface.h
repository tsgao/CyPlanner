/********************************************************************************
** Form generated from reading UI file 'ParameterInterface.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARAMETERINTERFACE_H
#define UI_PARAMETERINTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_parameterWidget
{
public:
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QStackedWidget *sensorSettings;

    void setupUi(QWidget *parameterWidget)
    {
        if (parameterWidget->objectName().isEmpty())
            parameterWidget->setObjectName(QStringLiteral("parameterWidget"));
        parameterWidget->resize(707, 572);
        verticalLayout = new QVBoxLayout(parameterWidget);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        stackedWidget = new QStackedWidget(parameterWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));

        verticalLayout->addWidget(stackedWidget);

        sensorSettings = new QStackedWidget(parameterWidget);
        sensorSettings->setObjectName(QStringLiteral("sensorSettings"));

        verticalLayout->addWidget(sensorSettings);

        verticalLayout->setStretch(0, 100);
        verticalLayout->setStretch(1, 1);

        retranslateUi(parameterWidget);

        stackedWidget->setCurrentIndex(-1);
        sensorSettings->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(parameterWidget);
    } // setupUi

    void retranslateUi(QWidget *parameterWidget)
    {
        parameterWidget->setWindowTitle(QApplication::translate("parameterWidget", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class parameterWidget: public Ui_parameterWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARAMETERINTERFACE_H
