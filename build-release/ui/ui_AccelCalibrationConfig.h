/********************************************************************************
** Form generated from reading UI file 'AccelCalibrationConfig.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCELCALIBRATIONCONFIG_H
#define UI_ACCELCALIBRATIONCONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AccelCalibrationConfig
{
public:
    QLabel *label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *accelDescLabel;
    QLabel *coutdownLabel;
    QLabel *outputLabel;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *calibrateAccelButton;
    QSpacerItem *horizontalSpacer_2;
    QFrame *line;
    QLabel *levelOutputLabel;

    void setupUi(QWidget *AccelCalibrationConfig)
    {
        if (AccelCalibrationConfig->objectName().isEmpty())
            AccelCalibrationConfig->setObjectName(QStringLiteral("AccelCalibrationConfig"));
        AccelCalibrationConfig->resize(397, 331);
        label = new QLabel(AccelCalibrationConfig);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 0, 285, 24));
        label->setScaledContents(false);
        verticalLayoutWidget = new QWidget(AccelCalibrationConfig);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 30, 351, 281));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        accelDescLabel = new QLabel(verticalLayoutWidget);
        accelDescLabel->setObjectName(QStringLiteral("accelDescLabel"));
        accelDescLabel->setWordWrap(true);

        verticalLayout->addWidget(accelDescLabel);

        coutdownLabel = new QLabel(verticalLayoutWidget);
        coutdownLabel->setObjectName(QStringLiteral("coutdownLabel"));

        verticalLayout->addWidget(coutdownLabel);

        outputLabel = new QLabel(verticalLayoutWidget);
        outputLabel->setObjectName(QStringLiteral("outputLabel"));

        verticalLayout->addWidget(outputLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        calibrateAccelButton = new QPushButton(verticalLayoutWidget);
        calibrateAccelButton->setObjectName(QStringLiteral("calibrateAccelButton"));
        calibrateAccelButton->setMinimumSize(QSize(120, 35));

        horizontalLayout->addWidget(calibrateAccelButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        line = new QFrame(verticalLayoutWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        levelOutputLabel = new QLabel(verticalLayoutWidget);
        levelOutputLabel->setObjectName(QStringLiteral("levelOutputLabel"));

        verticalLayout->addWidget(levelOutputLabel);

        verticalLayout->setStretch(2, 2);
        verticalLayout->setStretch(3, 2);
        verticalLayout->setStretch(4, 2);

        retranslateUi(AccelCalibrationConfig);

        QMetaObject::connectSlotsByName(AccelCalibrationConfig);
    } // setupUi

    void retranslateUi(QWidget *AccelCalibrationConfig)
    {
        AccelCalibrationConfig->setWindowTitle(QApplication::translate("AccelCalibrationConfig", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("AccelCalibrationConfig", "<html><head/><body><p><span style=\" font-size:x-large; font-weight:600;\">3D Accelerometer Calibration</span></p></body></html>", Q_NULLPTR));
        accelDescLabel->setText(QApplication::translate("AccelCalibrationConfig", "Level your UAV to set default accelerometer offsets (3 axis)<br>This will ask you to place your autopilot on each edge.", Q_NULLPTR));
        coutdownLabel->setText(QString());
        outputLabel->setText(QString());
        calibrateAccelButton->setText(QApplication::translate("AccelCalibrationConfig", "Calibrate", Q_NULLPTR));
        levelOutputLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AccelCalibrationConfig: public Ui_AccelCalibrationConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCELCALIBRATIONCONFIG_H
