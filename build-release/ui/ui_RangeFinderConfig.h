/********************************************************************************
** Form generated from reading UI file 'RangeFinderConfig.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RANGEFINDERCONFIG_H
#define UI_RANGEFINDERCONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RangeFinderConfig
{
public:
    QLabel *label;
    QLabel *label_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QLineEdit *rangeLineEdit;
    QLabel *label_4;
    QLineEdit *voltageLineEdit;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QComboBox *typeComboBox;
    QLineEdit *scalingEdit;
    QLabel *label_12;
    QLabel *label_10;
    QLabel *label_15;
    QLabel *label_7;
    QLabel *label_6;
    QComboBox *functionComboBox;
    QLineEdit *maxDistanceEdit;
    QSlider *gainSlider;
    QLabel *label_13;
    QLineEdit *settleTimeEdit;
    QLineEdit *inputPinEdit;
    QLabel *label_14;
    QLineEdit *minDistanceEdit;
    QLineEdit *offsetEdit;
    QLabel *label_9;
    QLabel *label_8;
    QLineEdit *stopPinEdit;
    QLabel *label_11;
    QLabel *gainLabel;
    QCheckBox *rmetricCheckBox;

    void setupUi(QWidget *RangeFinderConfig)
    {
        if (RangeFinderConfig->objectName().isEmpty())
            RangeFinderConfig->setObjectName(QStringLiteral("RangeFinderConfig"));
        RangeFinderConfig->resize(630, 398);
        label = new QLabel(RangeFinderConfig);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 136, 24));
        label->setScaledContents(false);
        label_2 = new QLabel(RangeFinderConfig);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 60, 61, 81));
        label_2->setFrameShape(QFrame::StyledPanel);
        label_2->setLineWidth(2);
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/files/images/devices/AC-0004-11-2.jpg")));
        label_2->setScaledContents(true);
        groupBox = new QGroupBox(RangeFinderConfig);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(450, 40, 161, 101));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        rangeLineEdit = new QLineEdit(groupBox);
        rangeLineEdit->setObjectName(QStringLiteral("rangeLineEdit"));
        rangeLineEdit->setReadOnly(true);

        gridLayout_2->addWidget(rangeLineEdit, 0, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        voltageLineEdit = new QLineEdit(groupBox);
        voltageLineEdit->setObjectName(QStringLiteral("voltageLineEdit"));
        voltageLineEdit->setReadOnly(true);

        gridLayout_2->addWidget(voltageLineEdit, 1, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);

        layoutWidget = new QWidget(RangeFinderConfig);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(90, 60, 346, 335));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        typeComboBox = new QComboBox(layoutWidget);
        typeComboBox->setObjectName(QStringLiteral("typeComboBox"));

        gridLayout->addWidget(typeComboBox, 0, 1, 1, 2);

        scalingEdit = new QLineEdit(layoutWidget);
        scalingEdit->setObjectName(QStringLiteral("scalingEdit"));

        gridLayout->addWidget(scalingEdit, 6, 2, 1, 1);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout->addWidget(label_12, 6, 0, 1, 2);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 4, 0, 1, 2);

        label_15 = new QLabel(layoutWidget);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout->addWidget(label_15, 9, 0, 1, 2);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 1, 0, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        functionComboBox = new QComboBox(layoutWidget);
        functionComboBox->setObjectName(QStringLiteral("functionComboBox"));

        gridLayout->addWidget(functionComboBox, 1, 1, 1, 2);

        maxDistanceEdit = new QLineEdit(layoutWidget);
        maxDistanceEdit->setObjectName(QStringLiteral("maxDistanceEdit"));

        gridLayout->addWidget(maxDistanceEdit, 3, 2, 1, 1);

        gainSlider = new QSlider(layoutWidget);
        gainSlider->setObjectName(QStringLiteral("gainSlider"));
        gainSlider->setMaximum(200);
        gainSlider->setSingleStep(1);
        gainSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(gainSlider, 2, 1, 1, 2);

        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout->addWidget(label_13, 7, 0, 1, 2);

        settleTimeEdit = new QLineEdit(layoutWidget);
        settleTimeEdit->setObjectName(QStringLiteral("settleTimeEdit"));

        gridLayout->addWidget(settleTimeEdit, 7, 2, 1, 1);

        inputPinEdit = new QLineEdit(layoutWidget);
        inputPinEdit->setObjectName(QStringLiteral("inputPinEdit"));

        gridLayout->addWidget(inputPinEdit, 8, 2, 1, 1);

        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout->addWidget(label_14, 8, 0, 1, 2);

        minDistanceEdit = new QLineEdit(layoutWidget);
        minDistanceEdit->setObjectName(QStringLiteral("minDistanceEdit"));

        gridLayout->addWidget(minDistanceEdit, 4, 2, 1, 1);

        offsetEdit = new QLineEdit(layoutWidget);
        offsetEdit->setObjectName(QStringLiteral("offsetEdit"));

        gridLayout->addWidget(offsetEdit, 5, 2, 1, 1);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 3, 0, 1, 2);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 2, 0, 1, 1);

        stopPinEdit = new QLineEdit(layoutWidget);
        stopPinEdit->setObjectName(QStringLiteral("stopPinEdit"));

        gridLayout->addWidget(stopPinEdit, 9, 2, 1, 1);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout->addWidget(label_11, 5, 0, 1, 2);

        gainLabel = new QLabel(layoutWidget);
        gainLabel->setObjectName(QStringLiteral("gainLabel"));

        gridLayout->addWidget(gainLabel, 2, 3, 1, 1);

        rmetricCheckBox = new QCheckBox(layoutWidget);
        rmetricCheckBox->setObjectName(QStringLiteral("rmetricCheckBox"));

        gridLayout->addWidget(rmetricCheckBox, 1, 3, 1, 1);

        QWidget::setTabOrder(typeComboBox, functionComboBox);
        QWidget::setTabOrder(functionComboBox, rmetricCheckBox);
        QWidget::setTabOrder(rmetricCheckBox, gainSlider);
        QWidget::setTabOrder(gainSlider, maxDistanceEdit);
        QWidget::setTabOrder(maxDistanceEdit, minDistanceEdit);
        QWidget::setTabOrder(minDistanceEdit, offsetEdit);
        QWidget::setTabOrder(offsetEdit, scalingEdit);
        QWidget::setTabOrder(scalingEdit, settleTimeEdit);
        QWidget::setTabOrder(settleTimeEdit, inputPinEdit);
        QWidget::setTabOrder(inputPinEdit, stopPinEdit);
        QWidget::setTabOrder(stopPinEdit, rangeLineEdit);
        QWidget::setTabOrder(rangeLineEdit, voltageLineEdit);

        retranslateUi(RangeFinderConfig);

        QMetaObject::connectSlotsByName(RangeFinderConfig);
    } // setupUi

    void retranslateUi(QWidget *RangeFinderConfig)
    {
        RangeFinderConfig->setWindowTitle(QApplication::translate("RangeFinderConfig", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("RangeFinderConfig", "<h2>Range Finder</h2>", Q_NULLPTR));
        label_2->setText(QString());
        groupBox->setTitle(QApplication::translate("RangeFinderConfig", "Current Reading", Q_NULLPTR));
        label_3->setText(QApplication::translate("RangeFinderConfig", "Range (m):", Q_NULLPTR));
        label_4->setText(QApplication::translate("RangeFinderConfig", "Voltage:", Q_NULLPTR));
        label_12->setText(QApplication::translate("RangeFinderConfig", "Scaling m/V:", Q_NULLPTR));
        label_10->setText(QApplication::translate("RangeFinderConfig", "Min Distance (cm):", Q_NULLPTR));
        label_15->setText(QApplication::translate("RangeFinderConfig", "Stop Pin", Q_NULLPTR));
        label_7->setText(QApplication::translate("RangeFinderConfig", "Function:", Q_NULLPTR));
        label_6->setText(QApplication::translate("RangeFinderConfig", "Type:", Q_NULLPTR));
        label_13->setText(QApplication::translate("RangeFinderConfig", "Settle time (ms):", Q_NULLPTR));
        label_14->setText(QApplication::translate("RangeFinderConfig", "Input Pin", Q_NULLPTR));
        label_9->setText(QApplication::translate("RangeFinderConfig", "Max Distance (cm):", Q_NULLPTR));
        label_8->setText(QApplication::translate("RangeFinderConfig", "Gain:", Q_NULLPTR));
        label_11->setText(QApplication::translate("RangeFinderConfig", "Offset (V):", Q_NULLPTR));
        gainLabel->setText(QApplication::translate("RangeFinderConfig", "0.00", Q_NULLPTR));
        rmetricCheckBox->setText(QApplication::translate("RangeFinderConfig", "Ratio Metric", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RangeFinderConfig: public Ui_RangeFinderConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RANGEFINDERCONFIG_H
