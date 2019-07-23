/********************************************************************************
** Form generated from reading UI file 'RadioCalibrationConfig.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RADIOCALIBRATIONCONFIG_H
#define UI_RADIOCALIBRATIONCONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ui/designer/QGCRadioChannelDisplay.h"

QT_BEGIN_NAMESPACE

class Ui_RadioCalibrationConfig
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_15;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_5;
    QCheckBox *revLeftVCheckBox;
    QSpacerItem *horizontalSpacer_4;
    QGCRadioChannelDisplay *leftVWidget;
    QSpacerItem *horizontalSpacer_11;
    QGCRadioChannelDisplay *rightVWidget;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *revRightVCheckBox;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *revYawCheckBox;
    QGCRadioChannelDisplay *yawWidget;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_2;
    QGCRadioChannelDisplay *rollWidget;
    QCheckBox *revRollCheckBox;
    QFrame *line;
    QHBoxLayout *horizontalLayout_3;
    QGCRadioChannelDisplay *radio5Widget;
    QGCRadioChannelDisplay *radio6Widget;
    QGCRadioChannelDisplay *radio7Widget;
    QGCRadioChannelDisplay *radio8Widget;
    QGCRadioChannelDisplay *radio9Widget;
    QGCRadioChannelDisplay *radio10Widget;
    QGCRadioChannelDisplay *radio11Widget;
    QGCRadioChannelDisplay *radio12Widget;
    QGCRadioChannelDisplay *radio13Widget;
    QGCRadioChannelDisplay *radio14Widget;
    QGCRadioChannelDisplay *radio15Widget;
    QGCRadioChannelDisplay *radio16Widget;
    QGroupBox *elevonConfigGroupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QCheckBox *elevonCheckBox;
    QLabel *label_2;
    QComboBox *elevonOutputComboBox;
    QCheckBox *elevonRevCheckBox;
    QCheckBox *elevonCh1CheckBox;
    QCheckBox *elevonCh2CheckBox;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QComboBox *modeComboBox;
    QSpacerItem *horizontalSpacer;
    QPushButton *calibrateButton;
    QFrame *line_2;
    QGridLayout *gridLayout;
    QLabel *label_9;
    QSpinBox *pitchDZ_spinBox;
    QSpinBox *throtDZ_spinBox;
    QLabel *label_6;
    QPushButton *writeDZ_Button;
    QSpinBox *rollDZ_spinBox;
    QSpinBox *yawDZ_spinBox;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_8;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *RadioCalibrationConfig)
    {
        if (RadioCalibrationConfig->objectName().isEmpty())
            RadioCalibrationConfig->setObjectName(QStringLiteral("RadioCalibrationConfig"));
        RadioCalibrationConfig->resize(626, 736);
        RadioCalibrationConfig->setMaximumSize(QSize(626, 16777215));
        verticalLayout_4 = new QVBoxLayout(RadioCalibrationConfig);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label = new QLabel(RadioCalibrationConfig);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(731, 24));
        label->setScaledContents(false);

        verticalLayout_3->addWidget(label);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        verticalLayout_15->setSizeConstraint(QLayout::SetMinAndMaxSize);
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalSpacer_5 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_5);

        revLeftVCheckBox = new QCheckBox(RadioCalibrationConfig);
        revLeftVCheckBox->setObjectName(QStringLiteral("revLeftVCheckBox"));

        horizontalLayout_13->addWidget(revLeftVCheckBox);

        horizontalSpacer_4 = new QSpacerItem(90, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_4);

        leftVWidget = new QGCRadioChannelDisplay(RadioCalibrationConfig);
        leftVWidget->setObjectName(QStringLiteral("leftVWidget"));
        leftVWidget->setMinimumSize(QSize(40, 200));
        leftVWidget->setMaximumSize(QSize(40, 200));

        horizontalLayout_13->addWidget(leftVWidget);

        horizontalSpacer_11 = new QSpacerItem(150, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_11);

        rightVWidget = new QGCRadioChannelDisplay(RadioCalibrationConfig);
        rightVWidget->setObjectName(QStringLiteral("rightVWidget"));
        rightVWidget->setMinimumSize(QSize(40, 200));
        rightVWidget->setMaximumSize(QSize(40, 200));

        horizontalLayout_13->addWidget(rightVWidget);

        horizontalSpacer_2 = new QSpacerItem(90, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_2);

        revRightVCheckBox = new QCheckBox(RadioCalibrationConfig);
        revRightVCheckBox->setObjectName(QStringLiteral("revRightVCheckBox"));

        horizontalLayout_13->addWidget(revRightVCheckBox);

        horizontalLayout_13->setStretch(3, 1);
        horizontalLayout_13->setStretch(4, 2);
        horizontalLayout_13->setStretch(5, 2);

        verticalLayout_15->addLayout(horizontalLayout_13);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalSpacer_3 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_3);

        revYawCheckBox = new QCheckBox(RadioCalibrationConfig);
        revYawCheckBox->setObjectName(QStringLiteral("revYawCheckBox"));

        horizontalLayout_12->addWidget(revYawCheckBox);

        yawWidget = new QGCRadioChannelDisplay(RadioCalibrationConfig);
        yawWidget->setObjectName(QStringLiteral("yawWidget"));
        yawWidget->setMinimumSize(QSize(220, 60));
        yawWidget->setMaximumSize(QSize(220, 60));

        horizontalLayout_12->addWidget(yawWidget);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_7);

        verticalSpacer_2 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_12->addItem(verticalSpacer_2);

        rollWidget = new QGCRadioChannelDisplay(RadioCalibrationConfig);
        rollWidget->setObjectName(QStringLiteral("rollWidget"));
        rollWidget->setMinimumSize(QSize(220, 60));
        rollWidget->setMaximumSize(QSize(220, 60));
        rollWidget->setStyleSheet(QLatin1String("QGCRadioChannelDisplay{\n"
"qlineargradient(spread:pad, x1:0.473, y1:0, x2:0.443, y2:0.994318, stop:0 rgba(0, 118, 0, 255), stop:1 rgba(188, 255, 192, 255))qlineargradient(spread:pad, x1:0, y1:0.494, x2:0.995074, y2:0.511, stop:0 rgba(0, 118, 0, 255), stop:1 rgba(188, 255, 192, 255))\n"
"}"));

        horizontalLayout_12->addWidget(rollWidget);

        revRollCheckBox = new QCheckBox(RadioCalibrationConfig);
        revRollCheckBox->setObjectName(QStringLiteral("revRollCheckBox"));

        horizontalLayout_12->addWidget(revRollCheckBox);


        verticalLayout_15->addLayout(horizontalLayout_12);


        verticalLayout_2->addLayout(verticalLayout_15);

        line = new QFrame(RadioCalibrationConfig);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        radio5Widget = new QGCRadioChannelDisplay(RadioCalibrationConfig);
        radio5Widget->setObjectName(QStringLiteral("radio5Widget"));
        radio5Widget->setMinimumSize(QSize(30, 150));
        radio5Widget->setMaximumSize(QSize(30, 150));

        horizontalLayout_3->addWidget(radio5Widget);

        radio6Widget = new QGCRadioChannelDisplay(RadioCalibrationConfig);
        radio6Widget->setObjectName(QStringLiteral("radio6Widget"));
        radio6Widget->setMinimumSize(QSize(30, 150));
        radio6Widget->setMaximumSize(QSize(30, 150));

        horizontalLayout_3->addWidget(radio6Widget);

        radio7Widget = new QGCRadioChannelDisplay(RadioCalibrationConfig);
        radio7Widget->setObjectName(QStringLiteral("radio7Widget"));
        radio7Widget->setMinimumSize(QSize(30, 150));
        radio7Widget->setMaximumSize(QSize(30, 150));

        horizontalLayout_3->addWidget(radio7Widget);

        radio8Widget = new QGCRadioChannelDisplay(RadioCalibrationConfig);
        radio8Widget->setObjectName(QStringLiteral("radio8Widget"));
        radio8Widget->setMinimumSize(QSize(30, 150));
        radio8Widget->setMaximumSize(QSize(30, 150));

        horizontalLayout_3->addWidget(radio8Widget);

        radio9Widget = new QGCRadioChannelDisplay(RadioCalibrationConfig);
        radio9Widget->setObjectName(QStringLiteral("radio9Widget"));
        radio9Widget->setMinimumSize(QSize(30, 150));
        radio9Widget->setMaximumSize(QSize(30, 150));

        horizontalLayout_3->addWidget(radio9Widget);

        radio10Widget = new QGCRadioChannelDisplay(RadioCalibrationConfig);
        radio10Widget->setObjectName(QStringLiteral("radio10Widget"));
        radio10Widget->setMinimumSize(QSize(30, 150));
        radio10Widget->setMaximumSize(QSize(30, 150));

        horizontalLayout_3->addWidget(radio10Widget);

        radio11Widget = new QGCRadioChannelDisplay(RadioCalibrationConfig);
        radio11Widget->setObjectName(QStringLiteral("radio11Widget"));
        radio11Widget->setMinimumSize(QSize(30, 150));
        radio11Widget->setMaximumSize(QSize(30, 150));

        horizontalLayout_3->addWidget(radio11Widget);

        radio12Widget = new QGCRadioChannelDisplay(RadioCalibrationConfig);
        radio12Widget->setObjectName(QStringLiteral("radio12Widget"));
        radio12Widget->setMinimumSize(QSize(30, 150));
        radio12Widget->setMaximumSize(QSize(30, 150));

        horizontalLayout_3->addWidget(radio12Widget);

        radio13Widget = new QGCRadioChannelDisplay(RadioCalibrationConfig);
        radio13Widget->setObjectName(QStringLiteral("radio13Widget"));
        radio13Widget->setMinimumSize(QSize(30, 150));
        radio13Widget->setMaximumSize(QSize(30, 150));

        horizontalLayout_3->addWidget(radio13Widget);

        radio14Widget = new QGCRadioChannelDisplay(RadioCalibrationConfig);
        radio14Widget->setObjectName(QStringLiteral("radio14Widget"));
        radio14Widget->setMinimumSize(QSize(30, 150));
        radio14Widget->setMaximumSize(QSize(30, 150));

        horizontalLayout_3->addWidget(radio14Widget);

        radio15Widget = new QGCRadioChannelDisplay(RadioCalibrationConfig);
        radio15Widget->setObjectName(QStringLiteral("radio15Widget"));
        radio15Widget->setMinimumSize(QSize(30, 150));
        radio15Widget->setMaximumSize(QSize(30, 150));

        horizontalLayout_3->addWidget(radio15Widget);

        radio16Widget = new QGCRadioChannelDisplay(RadioCalibrationConfig);
        radio16Widget->setObjectName(QStringLiteral("radio16Widget"));
        radio16Widget->setMinimumSize(QSize(30, 150));
        radio16Widget->setMaximumSize(QSize(30, 150));

        horizontalLayout_3->addWidget(radio16Widget);


        verticalLayout_2->addLayout(horizontalLayout_3);

        elevonConfigGroupBox = new QGroupBox(RadioCalibrationConfig);
        elevonConfigGroupBox->setObjectName(QStringLiteral("elevonConfigGroupBox"));
        elevonConfigGroupBox->setMaximumSize(QSize(16777215, 69));
        verticalLayout = new QVBoxLayout(elevonConfigGroupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        elevonCheckBox = new QCheckBox(elevonConfigGroupBox);
        elevonCheckBox->setObjectName(QStringLiteral("elevonCheckBox"));

        horizontalLayout->addWidget(elevonCheckBox);

        label_2 = new QLabel(elevonConfigGroupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        elevonOutputComboBox = new QComboBox(elevonConfigGroupBox);
        elevonOutputComboBox->setObjectName(QStringLiteral("elevonOutputComboBox"));

        horizontalLayout->addWidget(elevonOutputComboBox);

        elevonRevCheckBox = new QCheckBox(elevonConfigGroupBox);
        elevonRevCheckBox->setObjectName(QStringLiteral("elevonRevCheckBox"));

        horizontalLayout->addWidget(elevonRevCheckBox);

        elevonCh1CheckBox = new QCheckBox(elevonConfigGroupBox);
        elevonCh1CheckBox->setObjectName(QStringLiteral("elevonCh1CheckBox"));

        horizontalLayout->addWidget(elevonCh1CheckBox);

        elevonCh2CheckBox = new QCheckBox(elevonConfigGroupBox);
        elevonCh2CheckBox->setObjectName(QStringLiteral("elevonCh2CheckBox"));

        horizontalLayout->addWidget(elevonCh2CheckBox);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(elevonConfigGroupBox);

        line_3 = new QFrame(RadioCalibrationConfig);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(RadioCalibrationConfig);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        modeComboBox = new QComboBox(RadioCalibrationConfig);
        modeComboBox->setObjectName(QStringLiteral("modeComboBox"));

        horizontalLayout_2->addWidget(modeComboBox);

        horizontalSpacer = new QSpacerItem(558, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        calibrateButton = new QPushButton(RadioCalibrationConfig);
        calibrateButton->setObjectName(QStringLiteral("calibrateButton"));

        horizontalLayout_2->addWidget(calibrateButton);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(verticalLayout_3);

        line_2 = new QFrame(RadioCalibrationConfig);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_9 = new QLabel(RadioCalibrationConfig);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFrameShape(QFrame::NoFrame);
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_9, 0, 4, 1, 1);

        pitchDZ_spinBox = new QSpinBox(RadioCalibrationConfig);
        pitchDZ_spinBox->setObjectName(QStringLiteral("pitchDZ_spinBox"));
        pitchDZ_spinBox->setMaximum(199);

        gridLayout->addWidget(pitchDZ_spinBox, 1, 2, 1, 1);

        throtDZ_spinBox = new QSpinBox(RadioCalibrationConfig);
        throtDZ_spinBox->setObjectName(QStringLiteral("throtDZ_spinBox"));
        throtDZ_spinBox->setMaximum(199);

        gridLayout->addWidget(throtDZ_spinBox, 1, 3, 1, 1);

        label_6 = new QLabel(RadioCalibrationConfig);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 0, 1, 1, 1);

        writeDZ_Button = new QPushButton(RadioCalibrationConfig);
        writeDZ_Button->setObjectName(QStringLiteral("writeDZ_Button"));

        gridLayout->addWidget(writeDZ_Button, 1, 5, 1, 1);

        rollDZ_spinBox = new QSpinBox(RadioCalibrationConfig);
        rollDZ_spinBox->setObjectName(QStringLiteral("rollDZ_spinBox"));
        rollDZ_spinBox->setMaximum(199);

        gridLayout->addWidget(rollDZ_spinBox, 1, 1, 1, 1);

        yawDZ_spinBox = new QSpinBox(RadioCalibrationConfig);
        yawDZ_spinBox->setObjectName(QStringLiteral("yawDZ_spinBox"));
        yawDZ_spinBox->setMaximum(199);

        gridLayout->addWidget(yawDZ_spinBox, 1, 4, 1, 1);

        label_5 = new QLabel(RadioCalibrationConfig);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        label_7 = new QLabel(RadioCalibrationConfig);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_7, 0, 2, 1, 1);

        label_8 = new QLabel(RadioCalibrationConfig);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_8, 0, 3, 1, 1);


        verticalLayout_4->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        retranslateUi(RadioCalibrationConfig);

        QMetaObject::connectSlotsByName(RadioCalibrationConfig);
    } // setupUi

    void retranslateUi(QWidget *RadioCalibrationConfig)
    {
        RadioCalibrationConfig->setWindowTitle(QApplication::translate("RadioCalibrationConfig", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("RadioCalibrationConfig", "<h2>Radio Calibration</h2>", Q_NULLPTR));
        revLeftVCheckBox->setText(QApplication::translate("RadioCalibrationConfig", "Rev", Q_NULLPTR));
        revRightVCheckBox->setText(QApplication::translate("RadioCalibrationConfig", "Rev", Q_NULLPTR));
        revYawCheckBox->setText(QApplication::translate("RadioCalibrationConfig", "Rev", Q_NULLPTR));
        revRollCheckBox->setText(QApplication::translate("RadioCalibrationConfig", "Rev", Q_NULLPTR));
        elevonConfigGroupBox->setTitle(QApplication::translate("RadioCalibrationConfig", "Elevon Config", Q_NULLPTR));
        elevonCheckBox->setText(QApplication::translate("RadioCalibrationConfig", "Elevons", Q_NULLPTR));
        label_2->setText(QApplication::translate("RadioCalibrationConfig", "Elevon Output", Q_NULLPTR));
        elevonRevCheckBox->setText(QApplication::translate("RadioCalibrationConfig", "Elevons Rev", Q_NULLPTR));
        elevonCh1CheckBox->setText(QApplication::translate("RadioCalibrationConfig", "Elevons CH1 Rev", Q_NULLPTR));
        elevonCh2CheckBox->setText(QApplication::translate("RadioCalibrationConfig", "Elevons CH2 Rev", Q_NULLPTR));
        label_3->setText(QApplication::translate("RadioCalibrationConfig", "RC Radio", Q_NULLPTR));
        calibrateButton->setText(QApplication::translate("RadioCalibrationConfig", "Calibrate", Q_NULLPTR));
        label_9->setText(QApplication::translate("RadioCalibrationConfig", "Yaw", Q_NULLPTR));
        label_6->setText(QApplication::translate("RadioCalibrationConfig", "Roll", Q_NULLPTR));
        writeDZ_Button->setText(QApplication::translate("RadioCalibrationConfig", "Write to UAS", Q_NULLPTR));
        label_5->setText(QApplication::translate("RadioCalibrationConfig", "Dead Zones", Q_NULLPTR));
        label_7->setText(QApplication::translate("RadioCalibrationConfig", "Pitch", Q_NULLPTR));
        label_8->setText(QApplication::translate("RadioCalibrationConfig", "Throttle", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RadioCalibrationConfig: public Ui_RadioCalibrationConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RADIOCALIBRATIONCONFIG_H
