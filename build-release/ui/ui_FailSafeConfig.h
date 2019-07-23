/********************************************************************************
** Form generated from reading UI file 'FailSafeConfig.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FAILSAFECONFIG_H
#define UI_FAILSAFECONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ui/designer/QGCRadioChannelDisplay.h"

QT_BEGIN_NAMESPACE

class Ui_FailSafeConfig
{
public:
    QLabel *label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QGCRadioChannelDisplay *radio1In;
    QGCRadioChannelDisplay *radio2In;
    QGCRadioChannelDisplay *radio3In;
    QGCRadioChannelDisplay *radio4In;
    QGCRadioChannelDisplay *radio5In;
    QGCRadioChannelDisplay *radio6In;
    QGCRadioChannelDisplay *radio7In;
    QGCRadioChannelDisplay *radio8In;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QGCRadioChannelDisplay *radio1Out;
    QGCRadioChannelDisplay *radio2Out;
    QGCRadioChannelDisplay *radio3Out;
    QGCRadioChannelDisplay *radio4Out;
    QGCRadioChannelDisplay *radio5Out;
    QGCRadioChannelDisplay *radio6Out;
    QGCRadioChannelDisplay *radio7Out;
    QGCRadioChannelDisplay *radio8Out;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QLabel *modeLabel;
    QLabel *armedLabel;
    QLabel *gpsLabel;
    QLabel *label_2;
    QLabel *label_3;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *throttleCheckBox;
    QComboBox *throttleFailSafeComboBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QSpinBox *throttlePwmSpinBox;
    QCheckBox *throttleActionCheckBox;
    QCheckBox *gcsCheckBox;
    QCheckBox *fsShortCheckBox;
    QCheckBox *fsLongCheckBox;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_6;
    QComboBox *batteryFailSafeComboBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QDoubleSpinBox *batteryVoltSpinBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QSpinBox *batteryCapSpinBox;

    void setupUi(QWidget *FailSafeConfig)
    {
        if (FailSafeConfig->objectName().isEmpty())
            FailSafeConfig->setObjectName(QStringLiteral("FailSafeConfig"));
        FailSafeConfig->resize(832, 528);
        label = new QLabel(FailSafeConfig);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 141, 31));
        verticalLayoutWidget = new QWidget(FailSafeConfig);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 70, 252, 401));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        radio1In = new QGCRadioChannelDisplay(verticalLayoutWidget);
        radio1In->setObjectName(QStringLiteral("radio1In"));
        radio1In->setMinimumSize(QSize(250, 40));
        radio1In->setMaximumSize(QSize(250, 40));

        verticalLayout->addWidget(radio1In);

        radio2In = new QGCRadioChannelDisplay(verticalLayoutWidget);
        radio2In->setObjectName(QStringLiteral("radio2In"));
        radio2In->setMinimumSize(QSize(250, 40));
        radio2In->setMaximumSize(QSize(250, 40));

        verticalLayout->addWidget(radio2In);

        radio3In = new QGCRadioChannelDisplay(verticalLayoutWidget);
        radio3In->setObjectName(QStringLiteral("radio3In"));
        radio3In->setMinimumSize(QSize(250, 40));
        radio3In->setMaximumSize(QSize(250, 40));

        verticalLayout->addWidget(radio3In);

        radio4In = new QGCRadioChannelDisplay(verticalLayoutWidget);
        radio4In->setObjectName(QStringLiteral("radio4In"));
        radio4In->setMinimumSize(QSize(250, 40));
        radio4In->setMaximumSize(QSize(250, 40));

        verticalLayout->addWidget(radio4In);

        radio5In = new QGCRadioChannelDisplay(verticalLayoutWidget);
        radio5In->setObjectName(QStringLiteral("radio5In"));
        radio5In->setMinimumSize(QSize(250, 40));
        radio5In->setMaximumSize(QSize(250, 40));

        verticalLayout->addWidget(radio5In);

        radio6In = new QGCRadioChannelDisplay(verticalLayoutWidget);
        radio6In->setObjectName(QStringLiteral("radio6In"));
        radio6In->setMinimumSize(QSize(250, 40));
        radio6In->setMaximumSize(QSize(250, 40));

        verticalLayout->addWidget(radio6In);

        radio7In = new QGCRadioChannelDisplay(verticalLayoutWidget);
        radio7In->setObjectName(QStringLiteral("radio7In"));
        radio7In->setMinimumSize(QSize(250, 40));
        radio7In->setMaximumSize(QSize(250, 40));

        verticalLayout->addWidget(radio7In);

        radio8In = new QGCRadioChannelDisplay(verticalLayoutWidget);
        radio8In->setObjectName(QStringLiteral("radio8In"));
        radio8In->setMinimumSize(QSize(250, 40));
        radio8In->setMaximumSize(QSize(250, 40));

        verticalLayout->addWidget(radio8In);

        verticalLayoutWidget_2 = new QWidget(FailSafeConfig);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(300, 70, 252, 401));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        radio1Out = new QGCRadioChannelDisplay(verticalLayoutWidget_2);
        radio1Out->setObjectName(QStringLiteral("radio1Out"));
        radio1Out->setMinimumSize(QSize(250, 40));
        radio1Out->setMaximumSize(QSize(250, 40));

        verticalLayout_2->addWidget(radio1Out);

        radio2Out = new QGCRadioChannelDisplay(verticalLayoutWidget_2);
        radio2Out->setObjectName(QStringLiteral("radio2Out"));
        radio2Out->setMinimumSize(QSize(250, 40));
        radio2Out->setMaximumSize(QSize(250, 40));

        verticalLayout_2->addWidget(radio2Out);

        radio3Out = new QGCRadioChannelDisplay(verticalLayoutWidget_2);
        radio3Out->setObjectName(QStringLiteral("radio3Out"));
        radio3Out->setMinimumSize(QSize(250, 40));
        radio3Out->setMaximumSize(QSize(250, 40));

        verticalLayout_2->addWidget(radio3Out);

        radio4Out = new QGCRadioChannelDisplay(verticalLayoutWidget_2);
        radio4Out->setObjectName(QStringLiteral("radio4Out"));
        radio4Out->setMinimumSize(QSize(250, 40));
        radio4Out->setMaximumSize(QSize(250, 40));

        verticalLayout_2->addWidget(radio4Out);

        radio5Out = new QGCRadioChannelDisplay(verticalLayoutWidget_2);
        radio5Out->setObjectName(QStringLiteral("radio5Out"));
        radio5Out->setMinimumSize(QSize(250, 40));
        radio5Out->setMaximumSize(QSize(250, 40));

        verticalLayout_2->addWidget(radio5Out);

        radio6Out = new QGCRadioChannelDisplay(verticalLayoutWidget_2);
        radio6Out->setObjectName(QStringLiteral("radio6Out"));
        radio6Out->setMinimumSize(QSize(250, 40));
        radio6Out->setMaximumSize(QSize(250, 40));

        verticalLayout_2->addWidget(radio6Out);

        radio7Out = new QGCRadioChannelDisplay(verticalLayoutWidget_2);
        radio7Out->setObjectName(QStringLiteral("radio7Out"));
        radio7Out->setMinimumSize(QSize(250, 40));
        radio7Out->setMaximumSize(QSize(250, 40));

        verticalLayout_2->addWidget(radio7Out);

        radio8Out = new QGCRadioChannelDisplay(verticalLayoutWidget_2);
        radio8Out->setObjectName(QStringLiteral("radio8Out"));
        radio8Out->setMinimumSize(QSize(250, 40));
        radio8Out->setMaximumSize(QSize(250, 40));

        verticalLayout_2->addWidget(radio8Out);

        groupBox = new QGroupBox(FailSafeConfig);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(570, 60, 211, 141));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        modeLabel = new QLabel(groupBox);
        modeLabel->setObjectName(QStringLiteral("modeLabel"));

        verticalLayout_3->addWidget(modeLabel);

        armedLabel = new QLabel(groupBox);
        armedLabel->setObjectName(QStringLiteral("armedLabel"));

        verticalLayout_3->addWidget(armedLabel);

        gpsLabel = new QLabel(groupBox);
        gpsLabel->setObjectName(QStringLiteral("gpsLabel"));

        verticalLayout_3->addWidget(gpsLabel);

        label_2 = new QLabel(FailSafeConfig);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 40, 62, 16));
        label_3 = new QLabel(FailSafeConfig);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(360, 40, 110, 16));
        groupBox_3 = new QGroupBox(FailSafeConfig);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(570, 200, 211, 151));
        verticalLayout_5 = new QVBoxLayout(groupBox_3);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        throttleCheckBox = new QCheckBox(groupBox_3);
        throttleCheckBox->setObjectName(QStringLiteral("throttleCheckBox"));

        verticalLayout_5->addWidget(throttleCheckBox);

        throttleFailSafeComboBox = new QComboBox(groupBox_3);
        throttleFailSafeComboBox->setObjectName(QStringLiteral("throttleFailSafeComboBox"));

        verticalLayout_5->addWidget(throttleFailSafeComboBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_2->addWidget(label_5);

        throttlePwmSpinBox = new QSpinBox(groupBox_3);
        throttlePwmSpinBox->setObjectName(QStringLiteral("throttlePwmSpinBox"));
        throttlePwmSpinBox->setMaximum(3000);

        horizontalLayout_2->addWidget(throttlePwmSpinBox);


        verticalLayout_5->addLayout(horizontalLayout_2);

        throttleActionCheckBox = new QCheckBox(groupBox_3);
        throttleActionCheckBox->setObjectName(QStringLiteral("throttleActionCheckBox"));

        verticalLayout_5->addWidget(throttleActionCheckBox);

        gcsCheckBox = new QCheckBox(groupBox_3);
        gcsCheckBox->setObjectName(QStringLiteral("gcsCheckBox"));

        verticalLayout_5->addWidget(gcsCheckBox);

        fsShortCheckBox = new QCheckBox(groupBox_3);
        fsShortCheckBox->setObjectName(QStringLiteral("fsShortCheckBox"));

        verticalLayout_5->addWidget(fsShortCheckBox);

        fsLongCheckBox = new QCheckBox(groupBox_3);
        fsLongCheckBox->setObjectName(QStringLiteral("fsLongCheckBox"));

        verticalLayout_5->addWidget(fsLongCheckBox);

        groupBox_4 = new QGroupBox(FailSafeConfig);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(570, 350, 211, 121));
        verticalLayout_6 = new QVBoxLayout(groupBox_4);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        batteryFailSafeComboBox = new QComboBox(groupBox_4);
        batteryFailSafeComboBox->setObjectName(QStringLiteral("batteryFailSafeComboBox"));

        verticalLayout_6->addWidget(batteryFailSafeComboBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout->addWidget(label_6);

        batteryVoltSpinBox = new QDoubleSpinBox(groupBox_4);
        batteryVoltSpinBox->setObjectName(QStringLiteral("batteryVoltSpinBox"));
        batteryVoltSpinBox->setMaximum(100);

        horizontalLayout->addWidget(batteryVoltSpinBox);


        verticalLayout_6->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_3->addWidget(label_7);

        batteryCapSpinBox = new QSpinBox(groupBox_4);
        batteryCapSpinBox->setObjectName(QStringLiteral("batteryCapSpinBox"));
        batteryCapSpinBox->setMaximum(10000);

        horizontalLayout_3->addWidget(batteryCapSpinBox);


        verticalLayout_6->addLayout(horizontalLayout_3);


        retranslateUi(FailSafeConfig);

        QMetaObject::connectSlotsByName(FailSafeConfig);
    } // setupUi

    void retranslateUi(QWidget *FailSafeConfig)
    {
        FailSafeConfig->setWindowTitle(QApplication::translate("FailSafeConfig", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("FailSafeConfig", "<h2>Fail Safe</h2>", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("FailSafeConfig", "Status", Q_NULLPTR));
        modeLabel->setText(QApplication::translate("FailSafeConfig", "TextLabel", Q_NULLPTR));
        armedLabel->setText(QApplication::translate("FailSafeConfig", "TextLabel", Q_NULLPTR));
        gpsLabel->setText(QApplication::translate("FailSafeConfig", "TextLabel", Q_NULLPTR));
        label_2->setText(QApplication::translate("FailSafeConfig", "Radio IN", Q_NULLPTR));
        label_3->setText(QApplication::translate("FailSafeConfig", "Servo/Motor OUT", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("FailSafeConfig", "Throttle Failsafe", Q_NULLPTR));
        throttleCheckBox->setText(QApplication::translate("FailSafeConfig", "Throttle FailSafe", Q_NULLPTR));
        label_5->setText(QApplication::translate("FailSafeConfig", "Throttle PWM", Q_NULLPTR));
        throttleActionCheckBox->setText(QApplication::translate("FailSafeConfig", "Throttle FailSafe Action", Q_NULLPTR));
        gcsCheckBox->setText(QApplication::translate("FailSafeConfig", "GCS FailSafe", Q_NULLPTR));
        fsShortCheckBox->setText(QApplication::translate("FailSafeConfig", "FailSafe Short (1 sec)", Q_NULLPTR));
        fsLongCheckBox->setText(QApplication::translate("FailSafeConfig", "FailSafe Long (20 sec)", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("FailSafeConfig", "Battery Failsafe", Q_NULLPTR));
        label_6->setText(QApplication::translate("FailSafeConfig", "Low Battery (V)", Q_NULLPTR));
        label_7->setText(QApplication::translate("FailSafeConfig", "Low Battery (mAh)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FailSafeConfig: public Ui_FailSafeConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FAILSAFECONFIG_H
