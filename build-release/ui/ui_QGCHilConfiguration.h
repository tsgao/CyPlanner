/********************************************************************************
** Form generated from reading UI file 'QGCHilConfiguration.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCHILCONFIGURATION_H
#define UI_QGCHILCONFIGURATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCHilConfiguration
{
public:
    QGridLayout *gridLayout;
    QLabel *simLabel;
    QComboBox *simComboBox;
    QVBoxLayout *simulatorConfigurationLayout;
    QLabel *statusLabel;

    void setupUi(QWidget *QGCHilConfiguration)
    {
        if (QGCHilConfiguration->objectName().isEmpty())
            QGCHilConfiguration->setObjectName(QStringLiteral("QGCHilConfiguration"));
        QGCHilConfiguration->resize(366, 301);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QGCHilConfiguration->sizePolicy().hasHeightForWidth());
        QGCHilConfiguration->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(QGCHilConfiguration);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        simLabel = new QLabel(QGCHilConfiguration);
        simLabel->setObjectName(QStringLiteral("simLabel"));

        gridLayout->addWidget(simLabel, 0, 0, 1, 1);

        simComboBox = new QComboBox(QGCHilConfiguration);
        simComboBox->setObjectName(QStringLiteral("simComboBox"));
        simComboBox->setEditable(true);

        gridLayout->addWidget(simComboBox, 0, 1, 1, 1);

        simulatorConfigurationLayout = new QVBoxLayout();
        simulatorConfigurationLayout->setSpacing(0);
        simulatorConfigurationLayout->setObjectName(QStringLiteral("simulatorConfigurationLayout"));

        gridLayout->addLayout(simulatorConfigurationLayout, 1, 0, 1, 2);

        statusLabel = new QLabel(QGCHilConfiguration);
        statusLabel->setObjectName(QStringLiteral("statusLabel"));

        gridLayout->addWidget(statusLabel, 2, 0, 1, 2);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowStretch(1, 100);
        gridLayout->setRowStretch(2, 1);
        gridLayout->setColumnStretch(0, 40);

        retranslateUi(QGCHilConfiguration);

        QMetaObject::connectSlotsByName(QGCHilConfiguration);
    } // setupUi

    void retranslateUi(QWidget *QGCHilConfiguration)
    {
        QGCHilConfiguration->setWindowTitle(QApplication::translate("QGCHilConfiguration", "Form", Q_NULLPTR));
        simLabel->setText(QApplication::translate("QGCHilConfiguration", "Simulator", Q_NULLPTR));
        simComboBox->clear();
        simComboBox->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("QGCHilConfiguration", "Flightgear", Q_NULLPTR)
         << QApplication::translate("QGCHilConfiguration", "X-Plane 10", Q_NULLPTR)
         << QApplication::translate("QGCHilConfiguration", "X-Plane 9", Q_NULLPTR)
         << QApplication::translate("QGCHilConfiguration", "JSBSim", Q_NULLPTR)
        );
        statusLabel->setText(QApplication::translate("QGCHilConfiguration", "No simulator active..", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QGCHilConfiguration: public Ui_QGCHilConfiguration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCHILCONFIGURATION_H
