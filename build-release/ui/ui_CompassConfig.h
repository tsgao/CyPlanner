/********************************************************************************
** Form generated from reading UI file 'CompassConfig.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPASSCONFIG_H
#define UI_COMPASSCONFIG_H

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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CompassConfig
{
public:
    QLabel *label;
    QLabel *label_4;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *degreesLineEdit;
    QLabel *label_7;
    QLineEdit *minutesLineEdit;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QVBoxLayout *verticalLayout;
    QCheckBox *enableCheckBox;
    QCheckBox *autoDecCheckBox;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *apmLabel;
    QPushButton *onBoardApmButton;
    QHBoxLayout *horizontalLayout_5;
    QLabel *compassGpsLabel;
    QPushButton *gpsCompassButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *px4Label;
    QPushButton *px4Button;
    QLabel *savedLabel;
    QComboBox *orientationComboBox;
    QPushButton *liveCalibrationButton;
    QLabel *label_9;
    QGroupBox *Examples;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_8;
    QGroupBox *groupBox_2;
    QPushButton *compassMotButton;
    QLabel *label_10;

    void setupUi(QWidget *CompassConfig)
    {
        if (CompassConfig->objectName().isEmpty())
            CompassConfig->setObjectName(QStringLiteral("CompassConfig"));
        CompassConfig->resize(684, 485);
        label = new QLabel(CompassConfig);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 0, 521, 31));
        label->setScaledContents(false);
        label_4 = new QLabel(CompassConfig);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(280, 80, 125, 16));
        horizontalLayoutWidget_2 = new QWidget(CompassConfig);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(260, 50, 321, 31));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        degreesLineEdit = new QLineEdit(horizontalLayoutWidget_2);
        degreesLineEdit->setObjectName(QStringLiteral("degreesLineEdit"));

        horizontalLayout_3->addWidget(degreesLineEdit);

        label_7 = new QLabel(horizontalLayoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_3->addWidget(label_7);

        minutesLineEdit = new QLineEdit(horizontalLayoutWidget_2);
        minutesLineEdit->setObjectName(QStringLiteral("minutesLineEdit"));

        horizontalLayout_3->addWidget(minutesLineEdit);

        horizontalLayoutWidget = new QWidget(CompassConfig);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 30, 244, 102));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(100, 100));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/files/images/devices/BR-HMC5883-01-2.jpg")));
        label_2->setScaledContents(true);

        horizontalLayout->addWidget(label_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        enableCheckBox = new QCheckBox(horizontalLayoutWidget);
        enableCheckBox->setObjectName(QStringLiteral("enableCheckBox"));

        verticalLayout->addWidget(enableCheckBox);

        autoDecCheckBox = new QCheckBox(horizontalLayoutWidget);
        autoDecCheckBox->setObjectName(QStringLiteral("autoDecCheckBox"));

        verticalLayout->addWidget(autoDecCheckBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        groupBox = new QGroupBox(CompassConfig);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 140, 271, 341));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        apmLabel = new QLabel(groupBox);
        apmLabel->setObjectName(QStringLiteral("apmLabel"));
        apmLabel->setMaximumSize(QSize(100, 100));
        apmLabel->setPixmap(QPixmap(QString::fromUtf8(":/files/ardupilotmega/images/apm2.5.jpg")));
        apmLabel->setScaledContents(true);

        horizontalLayout_4->addWidget(apmLabel);

        onBoardApmButton = new QPushButton(groupBox);
        onBoardApmButton->setObjectName(QStringLiteral("onBoardApmButton"));
        onBoardApmButton->setMinimumSize(QSize(121, 36));

        horizontalLayout_4->addWidget(onBoardApmButton);


        gridLayout->addLayout(horizontalLayout_4, 1, 0, 1, 2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        compassGpsLabel = new QLabel(groupBox);
        compassGpsLabel->setObjectName(QStringLiteral("compassGpsLabel"));
        compassGpsLabel->setMinimumSize(QSize(0, 0));
        compassGpsLabel->setMaximumSize(QSize(100, 80));
        compassGpsLabel->setPixmap(QPixmap(QString::fromUtf8(":/files/ardupilotmega/images/maggps.png")));
        compassGpsLabel->setScaledContents(true);

        horizontalLayout_5->addWidget(compassGpsLabel);

        gpsCompassButton = new QPushButton(groupBox);
        gpsCompassButton->setObjectName(QStringLiteral("gpsCompassButton"));
        gpsCompassButton->setMinimumSize(QSize(121, 36));

        horizontalLayout_5->addWidget(gpsCompassButton);


        gridLayout->addLayout(horizontalLayout_5, 2, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        px4Label = new QLabel(groupBox);
        px4Label->setObjectName(QStringLiteral("px4Label"));
        px4Label->setMinimumSize(QSize(0, 0));
        px4Label->setMaximumSize(QSize(100, 80));
        px4Label->setPixmap(QPixmap(QString::fromUtf8(":/files/ardupilotmega/images/Pixhawk.png")));
        px4Label->setScaledContents(true);

        horizontalLayout_2->addWidget(px4Label);

        px4Button = new QPushButton(groupBox);
        px4Button->setObjectName(QStringLiteral("px4Button"));
        px4Button->setMinimumSize(QSize(121, 36));

        horizontalLayout_2->addWidget(px4Button);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 2);

        savedLabel = new QLabel(groupBox);
        savedLabel->setObjectName(QStringLiteral("savedLabel"));
        savedLabel->setMinimumSize(QSize(100, 0));
        savedLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(savedLabel, 3, 0, 1, 1);

        orientationComboBox = new QComboBox(groupBox);
        orientationComboBox->setObjectName(QStringLiteral("orientationComboBox"));
        orientationComboBox->setMinimumSize(QSize(125, 0));
        orientationComboBox->setMaximumSize(QSize(200, 16777215));

        gridLayout->addWidget(orientationComboBox, 3, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout);

        liveCalibrationButton = new QPushButton(CompassConfig);
        liveCalibrationButton->setObjectName(QStringLiteral("liveCalibrationButton"));
        liveCalibrationButton->setGeometry(QRect(420, 100, 131, 32));
        liveCalibrationButton->setMinimumSize(QSize(101, 0));
        label_9 = new QLabel(CompassConfig);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(430, 134, 114, 16));
        label_9->setOpenExternalLinks(true);
        Examples = new QGroupBox(CompassConfig);
        Examples->setObjectName(QStringLiteral("Examples"));
        Examples->setGeometry(QRect(350, 310, 311, 121));
        verticalLayout_2 = new QVBoxLayout(Examples);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_5 = new QLabel(Examples);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_2->addWidget(label_5);

        label_6 = new QLabel(Examples);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_2->addWidget(label_6);

        label_8 = new QLabel(Examples);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_2->addWidget(label_8);

        groupBox_2 = new QGroupBox(CompassConfig);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(350, 160, 301, 121));
        compassMotButton = new QPushButton(groupBox_2);
        compassMotButton->setObjectName(QStringLiteral("compassMotButton"));
        compassMotButton->setGeometry(QRect(80, 80, 215, 32));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 30, 271, 41));
        label_10->setWordWrap(true);

        retranslateUi(CompassConfig);

        QMetaObject::connectSlotsByName(CompassConfig);
    } // setupUi

    void retranslateUi(QWidget *CompassConfig)
    {
        CompassConfig->setWindowTitle(QApplication::translate("CompassConfig", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("CompassConfig", "<h2>Compass</h2>", Q_NULLPTR));
        label_4->setText(QApplication::translate("CompassConfig", "<a href=\"http://magnetic-declination.com/\">Declination Website</a>", Q_NULLPTR));
        label_3->setText(QApplication::translate("CompassConfig", "Degrees:", Q_NULLPTR));
        label_7->setText(QApplication::translate("CompassConfig", "Minutes:", Q_NULLPTR));
        label_2->setText(QString());
        enableCheckBox->setText(QApplication::translate("CompassConfig", "Enable", Q_NULLPTR));
        autoDecCheckBox->setText(QApplication::translate("CompassConfig", "Auto Declination", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("CompassConfig", "Orientation (ROTATION)", Q_NULLPTR));
        apmLabel->setText(QString());
        onBoardApmButton->setText(QApplication::translate("CompassConfig", "APM with On-Board\n"
"Compass", Q_NULLPTR));
        compassGpsLabel->setText(QString());
        gpsCompassButton->setText(QApplication::translate("CompassConfig", "APM with 3DR\n"
"GPS/Compass", Q_NULLPTR));
        px4Label->setText(QString());
        px4Button->setText(QApplication::translate("CompassConfig", "Pixhawk / PX4", Q_NULLPTR));
        savedLabel->setText(QString());
        liveCalibrationButton->setText(QApplication::translate("CompassConfig", "Live Calibration", Q_NULLPTR));
        label_9->setText(QApplication::translate("CompassConfig", "<a href=\"https://www.youtube.com/watch?v=DmsueBS0J3E\">YouTube Example</a>", Q_NULLPTR));
        Examples->setTitle(QApplication::translate("CompassConfig", "Example Manual Settings", Q_NULLPTR));
        label_5->setText(QApplication::translate("CompassConfig", "APM with onboard compass: None ie. 0\302\260", Q_NULLPTR));
        label_6->setText(QApplication::translate("CompassConfig", "APM with external compass: Roll 180\302\260 ", Q_NULLPTR));
        label_8->setText(QApplication::translate("CompassConfig", "PX4/Pixhawk with onboard or \n"
"     external compass: None i.e 0\302\260", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("CompassConfig", "Compass Motor Calibration (Optional)", Q_NULLPTR));
        compassMotButton->setText(QApplication::translate("CompassConfig", "Compass Motor Calibration", Q_NULLPTR));
        label_10->setText(QApplication::translate("CompassConfig", "CompassMot calibrates the compass for magnetic interference created by the power electronics.", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CompassConfig: public Ui_CompassConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPASSCONFIG_H
