/********************************************************************************
** Form generated from reading UI file 'AirspeedConfig.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AIRSPEEDCONFIG_H
#define UI_AIRSPEEDCONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AirspeedConfig
{
public:
    QLabel *label;
    QLabel *label_2;
    QCheckBox *enableCheckBox;
    QCheckBox *useAirspeedCheckBox;
    QSpinBox *pinSpinBox;
    QLabel *label_3;
    QGroupBox *pinHelperGroupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QGroupBox *hardwareGroupBox;
    QVBoxLayout *verticalLayout_2;
    QComboBox *hardwareComboBox;
    QGroupBox *sensorGroupBox;
    QVBoxLayout *verticalLayout_3;
    QComboBox *sensorComboBox;
    QGroupBox *pinGroupBox;
    QVBoxLayout *verticalLayout_4;
    QComboBox *pinComboBox;

    void setupUi(QWidget *AirspeedConfig)
    {
        if (AirspeedConfig->objectName().isEmpty())
            AirspeedConfig->setObjectName(QStringLiteral("AirspeedConfig"));
        AirspeedConfig->resize(713, 345);
        label = new QLabel(AirspeedConfig);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 201, 31));
        label->setScaledContents(false);
        label_2 = new QLabel(AirspeedConfig);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 60, 71, 71));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/files/images/devices/BR-0004-03-2.jpg")));
        label_2->setScaledContents(true);
        enableCheckBox = new QCheckBox(AirspeedConfig);
        enableCheckBox->setObjectName(QStringLiteral("enableCheckBox"));
        enableCheckBox->setGeometry(QRect(110, 70, 67, 20));
        useAirspeedCheckBox = new QCheckBox(AirspeedConfig);
        useAirspeedCheckBox->setObjectName(QStringLiteral("useAirspeedCheckBox"));
        useAirspeedCheckBox->setGeometry(QRect(110, 100, 108, 20));
        pinSpinBox = new QSpinBox(AirspeedConfig);
        pinSpinBox->setObjectName(QStringLiteral("pinSpinBox"));
        pinSpinBox->setGeometry(QRect(190, 130, 47, 24));
        label_3 = new QLabel(AirspeedConfig);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(110, 130, 73, 16));
        pinHelperGroupBox = new QGroupBox(AirspeedConfig);
        pinHelperGroupBox->setObjectName(QStringLiteral("pinHelperGroupBox"));
        pinHelperGroupBox->setGeometry(QRect(110, 170, 475, 118));
        verticalLayout = new QVBoxLayout(pinHelperGroupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        hardwareGroupBox = new QGroupBox(pinHelperGroupBox);
        hardwareGroupBox->setObjectName(QStringLiteral("hardwareGroupBox"));
        verticalLayout_2 = new QVBoxLayout(hardwareGroupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        hardwareComboBox = new QComboBox(hardwareGroupBox);
        hardwareComboBox->setObjectName(QStringLiteral("hardwareComboBox"));

        verticalLayout_2->addWidget(hardwareComboBox);


        horizontalLayout->addWidget(hardwareGroupBox);

        sensorGroupBox = new QGroupBox(pinHelperGroupBox);
        sensorGroupBox->setObjectName(QStringLiteral("sensorGroupBox"));
        verticalLayout_3 = new QVBoxLayout(sensorGroupBox);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        sensorComboBox = new QComboBox(sensorGroupBox);
        sensorComboBox->setObjectName(QStringLiteral("sensorComboBox"));

        verticalLayout_3->addWidget(sensorComboBox);


        horizontalLayout->addWidget(sensorGroupBox);

        pinGroupBox = new QGroupBox(pinHelperGroupBox);
        pinGroupBox->setObjectName(QStringLiteral("pinGroupBox"));
        verticalLayout_4 = new QVBoxLayout(pinGroupBox);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        pinComboBox = new QComboBox(pinGroupBox);
        pinComboBox->setObjectName(QStringLiteral("pinComboBox"));

        verticalLayout_4->addWidget(pinComboBox);


        horizontalLayout->addWidget(pinGroupBox);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(AirspeedConfig);

        QMetaObject::connectSlotsByName(AirspeedConfig);
    } // setupUi

    void retranslateUi(QWidget *AirspeedConfig)
    {
        AirspeedConfig->setWindowTitle(QApplication::translate("AirspeedConfig", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("AirspeedConfig", "<h2>Airspeed</h2>", Q_NULLPTR));
        label_2->setText(QString());
        enableCheckBox->setText(QApplication::translate("AirspeedConfig", "Enable", Q_NULLPTR));
        useAirspeedCheckBox->setText(QApplication::translate("AirspeedConfig", "Use Airspeed", Q_NULLPTR));
        label_3->setText(QApplication::translate("AirspeedConfig", "Pin Number", Q_NULLPTR));
        pinHelperGroupBox->setTitle(QApplication::translate("AirspeedConfig", "Pin Selection Helper", Q_NULLPTR));
        hardwareGroupBox->setTitle(QApplication::translate("AirspeedConfig", "Choose Hardware", Q_NULLPTR));
        hardwareComboBox->clear();
        hardwareComboBox->insertItems(0, QStringList()
         << QApplication::translate("AirspeedConfig", "Choose One", Q_NULLPTR)
         << QApplication::translate("AirspeedConfig", "APM1.X", Q_NULLPTR)
         << QApplication::translate("AirspeedConfig", "APM2.X", Q_NULLPTR)
         << QApplication::translate("AirspeedConfig", "PX4", Q_NULLPTR)
         << QApplication::translate("AirspeedConfig", "Pixhawk", Q_NULLPTR)
        );
        sensorGroupBox->setTitle(QApplication::translate("AirspeedConfig", "Choose Sensor", Q_NULLPTR));
        pinGroupBox->setTitle(QApplication::translate("AirspeedConfig", "Choose Pin", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AirspeedConfig: public Ui_AirspeedConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AIRSPEEDCONFIG_H
