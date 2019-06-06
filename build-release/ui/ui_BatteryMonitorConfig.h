/********************************************************************************
** Form generated from reading UI file 'BatteryMonitorConfig.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BATTERYMONITORCONFIG_H
#define UI_BATTERYMONITORCONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BatteryMonitorConfig
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label;
    QLabel *label_2;
    QTabWidget *basicTab;
    QWidget *tab;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_5;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *presetGridLayout;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout_3;
    QLabel *label_19;
    QLabel *label_17;
    QLineEdit *battCurrentLineEdit;
    QLabel *label_18;
    QLineEdit *battVoltageLineEdit;
    QLabel *label_13;
    QLineEdit *battCapacityLineEdit;
    QLabel *label_12;
    QLabel *label_16;
    QGridLayout *gridLayout_4;
    QLabel *label_22;
    QLineEdit *measuredVoltsLineEdit_2;
    QLabel *label_21;
    QLabel *label_23;
    QLineEdit *measuredCurrentLineEdit_2;
    QLabel *label_24;
    QLabel *label_20;
    QSpacerItem *horizontalSpacer_2;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_11;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QGridLayout *gridLayout_2;
    QLineEdit *voltPinLineEdit;
    QLineEdit *currPinLineEdit;
    QLabel *label_6;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLineEdit *calcVoltsLineEdit;
    QLabel *label_9;
    QLabel *label_8;
    QLineEdit *ampsPerVoltsLineEdit;
    QLabel *label_11;
    QLineEdit *calcDividerLineEdit;
    QLabel *label_14;
    QLineEdit *measuredCurrentLineEdit;
    QLabel *label_15;
    QLineEdit *batteryCurrentLineEdit;
    QLineEdit *measuredVoltsLineEdit;
    QLabel *label_10;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *BatteryMonitorConfig)
    {
        if (BatteryMonitorConfig->objectName().isEmpty())
            BatteryMonitorConfig->setObjectName(QStringLiteral("BatteryMonitorConfig"));
        BatteryMonitorConfig->resize(1006, 622);
        layoutWidget = new QWidget(BatteryMonitorConfig);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(9, 9, 741, 471));
        verticalLayout_9 = new QVBoxLayout(layoutWidget);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setScaledContents(false);

        horizontalLayout_10->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(141, 51));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/files/images/devices/BR-APMPWRDEAN-2.jpg")));
        label_2->setScaledContents(true);

        horizontalLayout_10->addWidget(label_2);


        verticalLayout_9->addLayout(horizontalLayout_10);

        basicTab = new QTabWidget(layoutWidget);
        basicTab->setObjectName(QStringLiteral("basicTab"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        horizontalLayout_9 = new QHBoxLayout(tab);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        groupBox_2->setMinimumSize(QSize(0, 0));
        groupBox_2->setMaximumSize(QSize(16777215, 16777215));
        horizontalLayout_5 = new QHBoxLayout(groupBox_2);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        scrollArea = new QScrollArea(groupBox_2);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy1);
        scrollArea->setMaximumSize(QSize(16777215, 16777215));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 691, 144));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        presetGridLayout = new QGridLayout();
        presetGridLayout->setObjectName(QStringLiteral("presetGridLayout"));

        verticalLayout_2->addLayout(presetGridLayout);

        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout_5->addWidget(scrollArea);


        verticalLayout->addWidget(groupBox_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_19 = new QLabel(tab);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setMaximumSize(QSize(16, 16));

        gridLayout_3->addWidget(label_19, 2, 2, 1, 1);

        label_17 = new QLabel(tab);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setMaximumSize(QSize(106, 16));
        label_17->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_17, 2, 0, 1, 1);

        battCurrentLineEdit = new QLineEdit(tab);
        battCurrentLineEdit->setObjectName(QStringLiteral("battCurrentLineEdit"));
        battCurrentLineEdit->setEnabled(false);
        battCurrentLineEdit->setMaximumSize(QSize(122, 21));
        battCurrentLineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(battCurrentLineEdit, 2, 1, 1, 1);

        label_18 = new QLabel(tab);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setMaximumSize(QSize(16, 16));

        gridLayout_3->addWidget(label_18, 1, 2, 1, 1);

        battVoltageLineEdit = new QLineEdit(tab);
        battVoltageLineEdit->setObjectName(QStringLiteral("battVoltageLineEdit"));
        battVoltageLineEdit->setEnabled(false);
        battVoltageLineEdit->setMaximumSize(QSize(122, 21));
        battVoltageLineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(battVoltageLineEdit, 1, 1, 1, 1);

        label_13 = new QLabel(tab);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setMaximumSize(QSize(106, 16));
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_13, 0, 0, 1, 1);

        battCapacityLineEdit = new QLineEdit(tab);
        battCapacityLineEdit->setObjectName(QStringLiteral("battCapacityLineEdit"));
        battCapacityLineEdit->setMaximumSize(QSize(122, 21));
        battCapacityLineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(battCapacityLineEdit, 0, 1, 1, 1);

        label_12 = new QLabel(tab);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMaximumSize(QSize(30, 16));

        gridLayout_3->addWidget(label_12, 0, 2, 1, 1);

        label_16 = new QLabel(tab);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setMaximumSize(QSize(106, 16));
        label_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_16, 1, 0, 1, 1);


        horizontalLayout_2->addLayout(gridLayout_3);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_22 = new QLabel(tab);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_22, 2, 0, 1, 1);

        measuredVoltsLineEdit_2 = new QLineEdit(tab);
        measuredVoltsLineEdit_2->setObjectName(QStringLiteral("measuredVoltsLineEdit_2"));
        measuredVoltsLineEdit_2->setMaximumSize(QSize(122, 21));

        gridLayout_4->addWidget(measuredVoltsLineEdit_2, 1, 1, 1, 1);

        label_21 = new QLabel(tab);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_21, 1, 0, 1, 1);

        label_23 = new QLabel(tab);
        label_23->setObjectName(QStringLiteral("label_23"));

        gridLayout_4->addWidget(label_23, 1, 2, 1, 1);

        measuredCurrentLineEdit_2 = new QLineEdit(tab);
        measuredCurrentLineEdit_2->setObjectName(QStringLiteral("measuredCurrentLineEdit_2"));
        measuredCurrentLineEdit_2->setMaximumSize(QSize(122, 21));

        gridLayout_4->addWidget(measuredCurrentLineEdit_2, 2, 1, 1, 1);

        label_24 = new QLabel(tab);
        label_24->setObjectName(QStringLiteral("label_24"));

        gridLayout_4->addWidget(label_24, 2, 2, 1, 1);

        label_20 = new QLabel(tab);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setMaximumSize(QSize(122, 21));

        gridLayout_4->addWidget(label_20, 0, 1, 1, 1);


        horizontalLayout_2->addLayout(gridLayout_4);

        horizontalSpacer_2 = new QSpacerItem(200, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        horizontalLayout_2->setStretch(2, 3);

        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_9->addLayout(verticalLayout);

        basicTab->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_11 = new QVBoxLayout(tab_2);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        groupBox_3 = new QGroupBox(tab_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setMaximumSize(QSize(200, 191));
        verticalLayout_5 = new QVBoxLayout(groupBox_3);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        voltPinLineEdit = new QLineEdit(groupBox_3);
        voltPinLineEdit->setObjectName(QStringLiteral("voltPinLineEdit"));

        gridLayout_2->addWidget(voltPinLineEdit, 0, 1, 1, 1);

        currPinLineEdit = new QLineEdit(groupBox_3);
        currPinLineEdit->setObjectName(QStringLiteral("currPinLineEdit"));

        gridLayout_2->addWidget(currPinLineEdit, 1, 1, 1, 1);

        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 1, 0, 1, 1);


        horizontalLayout_4->addLayout(gridLayout_2);

        horizontalSpacer = new QSpacerItem(161, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        verticalLayout_5->addLayout(horizontalLayout_4);


        horizontalLayout_11->addWidget(groupBox_3);

        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMinimumSize(QSize(270, 190));
        groupBox->setMaximumSize(QSize(419, 190));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        calcVoltsLineEdit = new QLineEdit(groupBox);
        calcVoltsLineEdit->setObjectName(QStringLiteral("calcVoltsLineEdit"));
        calcVoltsLineEdit->setMinimumSize(QSize(20, 0));
        calcVoltsLineEdit->setReadOnly(false);

        gridLayout->addWidget(calcVoltsLineEdit, 1, 1, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 0, 0, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 1, 0, 1, 1);

        ampsPerVoltsLineEdit = new QLineEdit(groupBox);
        ampsPerVoltsLineEdit->setObjectName(QStringLiteral("ampsPerVoltsLineEdit"));
        ampsPerVoltsLineEdit->setMinimumSize(QSize(20, 0));
        ampsPerVoltsLineEdit->setReadOnly(false);

        gridLayout->addWidget(ampsPerVoltsLineEdit, 5, 1, 1, 1);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout->addWidget(label_11, 5, 0, 1, 1);

        calcDividerLineEdit = new QLineEdit(groupBox);
        calcDividerLineEdit->setObjectName(QStringLiteral("calcDividerLineEdit"));
        calcDividerLineEdit->setMinimumSize(QSize(20, 0));
        calcDividerLineEdit->setReadOnly(false);

        gridLayout->addWidget(calcDividerLineEdit, 2, 1, 1, 1);

        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout->addWidget(label_14, 3, 0, 1, 1);

        measuredCurrentLineEdit = new QLineEdit(groupBox);
        measuredCurrentLineEdit->setObjectName(QStringLiteral("measuredCurrentLineEdit"));
        measuredCurrentLineEdit->setMinimumSize(QSize(20, 0));
        measuredCurrentLineEdit->setReadOnly(false);

        gridLayout->addWidget(measuredCurrentLineEdit, 3, 1, 1, 1);

        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout->addWidget(label_15, 4, 0, 1, 1);

        batteryCurrentLineEdit = new QLineEdit(groupBox);
        batteryCurrentLineEdit->setObjectName(QStringLiteral("batteryCurrentLineEdit"));
        batteryCurrentLineEdit->setMinimumSize(QSize(20, 0));
        batteryCurrentLineEdit->setReadOnly(true);

        gridLayout->addWidget(batteryCurrentLineEdit, 4, 1, 1, 1);

        measuredVoltsLineEdit = new QLineEdit(groupBox);
        measuredVoltsLineEdit->setObjectName(QStringLiteral("measuredVoltsLineEdit"));
        measuredVoltsLineEdit->setMinimumSize(QSize(20, 0));
        measuredVoltsLineEdit->setReadOnly(false);

        gridLayout->addWidget(measuredVoltsLineEdit, 0, 1, 1, 1);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 2, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout);


        horizontalLayout_11->addWidget(groupBox);


        verticalLayout_11->addLayout(horizontalLayout_11);

        verticalSpacer = new QSpacerItem(20, 23, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer);

        basicTab->addTab(tab_2, QString());

        verticalLayout_9->addWidget(basicTab);


        retranslateUi(BatteryMonitorConfig);

        basicTab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(BatteryMonitorConfig);
    } // setupUi

    void retranslateUi(QWidget *BatteryMonitorConfig)
    {
        BatteryMonitorConfig->setWindowTitle(QApplication::translate("BatteryMonitorConfig", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("BatteryMonitorConfig", "<h2>Battery Monitor</h2>", Q_NULLPTR));
        label_2->setText(QString());
        groupBox_2->setTitle(QApplication::translate("BatteryMonitorConfig", "Presets", Q_NULLPTR));
        label_19->setText(QApplication::translate("BatteryMonitorConfig", "A", Q_NULLPTR));
        label_17->setText(QApplication::translate("BatteryMonitorConfig", "Current:", Q_NULLPTR));
        label_18->setText(QApplication::translate("BatteryMonitorConfig", "V", Q_NULLPTR));
        label_13->setText(QApplication::translate("BatteryMonitorConfig", "Battery Capacity:", Q_NULLPTR));
        battCapacityLineEdit->setInputMask(QApplication::translate("BatteryMonitorConfig", "000000", Q_NULLPTR));
        label_12->setText(QApplication::translate("BatteryMonitorConfig", "mAh", Q_NULLPTR));
        label_16->setText(QApplication::translate("BatteryMonitorConfig", "   Voltage:", Q_NULLPTR));
        label_22->setText(QApplication::translate("BatteryMonitorConfig", "Current", Q_NULLPTR));
        label_21->setText(QApplication::translate("BatteryMonitorConfig", "Voltage:", Q_NULLPTR));
        label_23->setText(QApplication::translate("BatteryMonitorConfig", "V", Q_NULLPTR));
        label_24->setText(QApplication::translate("BatteryMonitorConfig", "A", Q_NULLPTR));
        label_20->setText(QApplication::translate("BatteryMonitorConfig", "Enter Measured Values", Q_NULLPTR));
        basicTab->setTabText(basicTab->indexOf(tab), QApplication::translate("BatteryMonitorConfig", "Basic", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("BatteryMonitorConfig", "Advanced Setup", Q_NULLPTR));
        label_6->setText(QApplication::translate("BatteryMonitorConfig", "Voltage Pin", Q_NULLPTR));
        label_7->setText(QApplication::translate("BatteryMonitorConfig", "Current Pin", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("BatteryMonitorConfig", "Calibration", Q_NULLPTR));
        label_9->setText(QApplication::translate("BatteryMonitorConfig", "1. Measured Battery Voltage", Q_NULLPTR));
        label_8->setText(QApplication::translate("BatteryMonitorConfig", "2. Voltage from Autopilot (calced)", Q_NULLPTR));
        label_11->setText(QApplication::translate("BatteryMonitorConfig", "6. Amperes per volt:", Q_NULLPTR));
        label_14->setText(QApplication::translate("BatteryMonitorConfig", "4. Measured Current", Q_NULLPTR));
        label_15->setText(QApplication::translate("BatteryMonitorConfig", "5. Battery Current from Autopilot (calced) ", Q_NULLPTR));
        label_10->setText(QApplication::translate("BatteryMonitorConfig", "3. Voltage Divider (calced)", Q_NULLPTR));
        basicTab->setTabText(basicTab->indexOf(tab_2), QApplication::translate("BatteryMonitorConfig", "Advanced", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class BatteryMonitorConfig: public Ui_BatteryMonitorConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATTERYMONITORCONFIG_H
