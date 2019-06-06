/********************************************************************************
** Form generated from reading UI file 'QGCSensorSettingsWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCSENSORSETTINGSWIDGET_H
#define UI_QGCSENSORSETTINGSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCSensorSettingsWidget
{
public:
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout;
    QPushButton *rcCalButton;
    QPushButton *magCalButton;
    QPushButton *gyroCalButton;
    QPushButton *pressureCalButton;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QSpinBox *spinBox_rawSensor;
    QLabel *label;
    QSpinBox *spinBox_extended;
    QSpinBox *spinBox_position;
    QSpinBox *spinBox_controller;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QSpinBox *spinBox_rc;
    QSpinBox *spinBox_extra1;
    QSpinBox *spinBox_extra2;
    QSpinBox *spinBox_extra3;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;

    void setupUi(QWidget *QGCSensorSettingsWidget)
    {
        if (QGCSensorSettingsWidget->objectName().isEmpty())
            QGCSensorSettingsWidget->setObjectName(QStringLiteral("QGCSensorSettingsWidget"));
        QGCSensorSettingsWidget->resize(307, 221);
        gridLayout_4 = new QGridLayout(QGCSensorSettingsWidget);
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        groupBox_3 = new QGroupBox(QGCSensorSettingsWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout = new QGridLayout(groupBox_3);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(12);
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(6, 2, 6, 2);
        rcCalButton = new QPushButton(groupBox_3);
        rcCalButton->setObjectName(QStringLiteral("rcCalButton"));

        gridLayout->addWidget(rcCalButton, 0, 0, 1, 1);

        magCalButton = new QPushButton(groupBox_3);
        magCalButton->setObjectName(QStringLiteral("magCalButton"));

        gridLayout->addWidget(magCalButton, 0, 1, 1, 1);

        gyroCalButton = new QPushButton(groupBox_3);
        gyroCalButton->setObjectName(QStringLiteral("gyroCalButton"));

        gridLayout->addWidget(gyroCalButton, 1, 1, 1, 1);

        pressureCalButton = new QPushButton(groupBox_3);
        pressureCalButton->setObjectName(QStringLiteral("pressureCalButton"));

        gridLayout->addWidget(pressureCalButton, 1, 0, 1, 1);

        gridLayout->setColumnStretch(0, 100);
        gridLayout->setColumnStretch(1, 100);

        gridLayout_4->addWidget(groupBox_3, 1, 0, 1, 1);

        groupBox = new QGroupBox(QGCSensorSettingsWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(5);
        gridLayout_2->setVerticalSpacing(2);
        gridLayout_2->setContentsMargins(6, 2, 6, 2);
        spinBox_rawSensor = new QSpinBox(groupBox);
        spinBox_rawSensor->setObjectName(QStringLiteral("spinBox_rawSensor"));
        spinBox_rawSensor->setMaximum(10000);

        gridLayout_2->addWidget(spinBox_rawSensor, 0, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 1, 1, 1);

        spinBox_extended = new QSpinBox(groupBox);
        spinBox_extended->setObjectName(QStringLiteral("spinBox_extended"));
        spinBox_extended->setMaximum(10000);

        gridLayout_2->addWidget(spinBox_extended, 1, 0, 1, 1);

        spinBox_position = new QSpinBox(groupBox);
        spinBox_position->setObjectName(QStringLiteral("spinBox_position"));
        spinBox_position->setMaximum(10000);

        gridLayout_2->addWidget(spinBox_position, 4, 0, 1, 1);

        spinBox_controller = new QSpinBox(groupBox);
        spinBox_controller->setObjectName(QStringLiteral("spinBox_controller"));
        spinBox_controller->setMaximum(10000);

        gridLayout_2->addWidget(spinBox_controller, 5, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 4, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 5, 1, 1, 1);

        spinBox_rc = new QSpinBox(groupBox);
        spinBox_rc->setObjectName(QStringLiteral("spinBox_rc"));
        spinBox_rc->setMaximum(10000);

        gridLayout_2->addWidget(spinBox_rc, 0, 2, 1, 1);

        spinBox_extra1 = new QSpinBox(groupBox);
        spinBox_extra1->setObjectName(QStringLiteral("spinBox_extra1"));
        spinBox_extra1->setMaximum(10000);

        gridLayout_2->addWidget(spinBox_extra1, 1, 2, 1, 1);

        spinBox_extra2 = new QSpinBox(groupBox);
        spinBox_extra2->setObjectName(QStringLiteral("spinBox_extra2"));
        spinBox_extra2->setMaximum(10000);

        gridLayout_2->addWidget(spinBox_extra2, 4, 2, 1, 1);

        spinBox_extra3 = new QSpinBox(groupBox);
        spinBox_extra3->setObjectName(QStringLiteral("spinBox_extra3"));
        spinBox_extra3->setMaximum(10000);

        gridLayout_2->addWidget(spinBox_extra3, 5, 2, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 0, 3, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 1, 3, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 4, 3, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 5, 3, 1, 1);


        gridLayout_4->addWidget(groupBox, 0, 0, 1, 1);

        gridLayout_4->setRowStretch(0, 10);

        retranslateUi(QGCSensorSettingsWidget);

        QMetaObject::connectSlotsByName(QGCSensorSettingsWidget);
    } // setupUi

    void retranslateUi(QWidget *QGCSensorSettingsWidget)
    {
        QGCSensorSettingsWidget->setWindowTitle(QApplication::translate("QGCSensorSettingsWidget", "Form", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("QGCSensorSettingsWidget", "Calibration Wizards", Q_NULLPTR));
        rcCalButton->setText(QApplication::translate("QGCSensorSettingsWidget", "RC Cal.", Q_NULLPTR));
        magCalButton->setText(QApplication::translate("QGCSensorSettingsWidget", "Mag. Cal.", Q_NULLPTR));
        gyroCalButton->setText(QApplication::translate("QGCSensorSettingsWidget", "Gyro Cal.", Q_NULLPTR));
        pressureCalButton->setText(QApplication::translate("QGCSensorSettingsWidget", "Pressure Cal.", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QGCSensorSettingsWidget", "Data Stream Rates (Hz)", Q_NULLPTR));
        label->setText(QApplication::translate("QGCSensorSettingsWidget", "Raw Sensor", Q_NULLPTR));
        label_2->setText(QApplication::translate("QGCSensorSettingsWidget", "Ext. Status", Q_NULLPTR));
        label_3->setText(QApplication::translate("QGCSensorSettingsWidget", "Position", Q_NULLPTR));
        label_4->setText(QApplication::translate("QGCSensorSettingsWidget", "Raw Contr.", Q_NULLPTR));
        label_5->setText(QApplication::translate("QGCSensorSettingsWidget", "RC Chan.", Q_NULLPTR));
        label_6->setText(QApplication::translate("QGCSensorSettingsWidget", "Extra 1", Q_NULLPTR));
        label_7->setText(QApplication::translate("QGCSensorSettingsWidget", "Extra 2", Q_NULLPTR));
        label_8->setText(QApplication::translate("QGCSensorSettingsWidget", "Extra 3", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QGCSensorSettingsWidget: public Ui_QGCSensorSettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCSENSORSETTINGSWIDGET_H
