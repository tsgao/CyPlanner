/********************************************************************************
** Form generated from reading UI file 'FlightModeConfig.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLIGHTMODECONFIG_H
#define UI_FLIGHTMODECONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FlightModeConfig
{
public:
    QLabel *label;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_11;
    QLabel *label_5;
    QLabel *label_9;
    QLabel *label_2;
    QLabel *label_7;
    QLabel *label_13;
    QVBoxLayout *verticalLayout_4;
    QComboBox *mode1ComboBox;
    QComboBox *mode2ComboBox;
    QComboBox *mode3ComboBox;
    QComboBox *mode4ComboBox;
    QComboBox *mode5ComboBox;
    QComboBox *mode6ComboBox;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *mode1SimpleCheckBox;
    QCheckBox *mode2SimpleCheckBox;
    QCheckBox *mode3SimpleCheckBox;
    QCheckBox *mode4SimpleCheckBox;
    QCheckBox *mode5SimpleCheckBox;
    QCheckBox *mode6SimpleCheckBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *mode1Label;
    QLabel *mode2Label;
    QLabel *mode3Label;
    QLabel *mode4Label;
    QLabel *mode5Label;
    QLabel *mode6Label;
    QProgressBar *progressBar;
    QPushButton *savePushButton;

    void setupUi(QWidget *FlightModeConfig)
    {
        if (FlightModeConfig->objectName().isEmpty())
            FlightModeConfig->setObjectName(QStringLiteral("FlightModeConfig"));
        FlightModeConfig->resize(818, 359);
        label = new QLabel(FlightModeConfig);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 151, 31));
        label->setScaledContents(false);
        horizontalLayoutWidget = new QWidget(FlightModeConfig);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(21, 71, 456, 178));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(8);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 0, -1, -1);
        label_11 = new QLabel(horizontalLayoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_11);

        label_5 = new QLabel(horizontalLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_5);

        label_9 = new QLabel(horizontalLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_9);

        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_2);

        label_7 = new QLabel(horizontalLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_7);

        label_13 = new QLabel(horizontalLayoutWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_13);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        mode1ComboBox = new QComboBox(horizontalLayoutWidget);
        mode1ComboBox->setObjectName(QStringLiteral("mode1ComboBox"));
        mode1ComboBox->setFrame(true);

        verticalLayout_4->addWidget(mode1ComboBox);

        mode2ComboBox = new QComboBox(horizontalLayoutWidget);
        mode2ComboBox->setObjectName(QStringLiteral("mode2ComboBox"));
        mode2ComboBox->setStyleSheet(QStringLiteral(""));

        verticalLayout_4->addWidget(mode2ComboBox);

        mode3ComboBox = new QComboBox(horizontalLayoutWidget);
        mode3ComboBox->setObjectName(QStringLiteral("mode3ComboBox"));

        verticalLayout_4->addWidget(mode3ComboBox);

        mode4ComboBox = new QComboBox(horizontalLayoutWidget);
        mode4ComboBox->setObjectName(QStringLiteral("mode4ComboBox"));

        verticalLayout_4->addWidget(mode4ComboBox);

        mode5ComboBox = new QComboBox(horizontalLayoutWidget);
        mode5ComboBox->setObjectName(QStringLiteral("mode5ComboBox"));

        verticalLayout_4->addWidget(mode5ComboBox);

        mode6ComboBox = new QComboBox(horizontalLayoutWidget);
        mode6ComboBox->setObjectName(QStringLiteral("mode6ComboBox"));

        verticalLayout_4->addWidget(mode6ComboBox);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(8);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 0, -1, -1);
        mode1SimpleCheckBox = new QCheckBox(horizontalLayoutWidget);
        mode1SimpleCheckBox->setObjectName(QStringLiteral("mode1SimpleCheckBox"));

        verticalLayout_3->addWidget(mode1SimpleCheckBox);

        mode2SimpleCheckBox = new QCheckBox(horizontalLayoutWidget);
        mode2SimpleCheckBox->setObjectName(QStringLiteral("mode2SimpleCheckBox"));

        verticalLayout_3->addWidget(mode2SimpleCheckBox);

        mode3SimpleCheckBox = new QCheckBox(horizontalLayoutWidget);
        mode3SimpleCheckBox->setObjectName(QStringLiteral("mode3SimpleCheckBox"));

        verticalLayout_3->addWidget(mode3SimpleCheckBox);

        mode4SimpleCheckBox = new QCheckBox(horizontalLayoutWidget);
        mode4SimpleCheckBox->setObjectName(QStringLiteral("mode4SimpleCheckBox"));

        verticalLayout_3->addWidget(mode4SimpleCheckBox);

        mode5SimpleCheckBox = new QCheckBox(horizontalLayoutWidget);
        mode5SimpleCheckBox->setObjectName(QStringLiteral("mode5SimpleCheckBox"));

        verticalLayout_3->addWidget(mode5SimpleCheckBox);

        mode6SimpleCheckBox = new QCheckBox(horizontalLayoutWidget);
        mode6SimpleCheckBox->setObjectName(QStringLiteral("mode6SimpleCheckBox"));

        verticalLayout_3->addWidget(mode6SimpleCheckBox);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        mode1Label = new QLabel(horizontalLayoutWidget);
        mode1Label->setObjectName(QStringLiteral("mode1Label"));
        mode1Label->setStyleSheet(QStringLiteral(""));

        verticalLayout_2->addWidget(mode1Label);

        mode2Label = new QLabel(horizontalLayoutWidget);
        mode2Label->setObjectName(QStringLiteral("mode2Label"));

        verticalLayout_2->addWidget(mode2Label);

        mode3Label = new QLabel(horizontalLayoutWidget);
        mode3Label->setObjectName(QStringLiteral("mode3Label"));

        verticalLayout_2->addWidget(mode3Label);

        mode4Label = new QLabel(horizontalLayoutWidget);
        mode4Label->setObjectName(QStringLiteral("mode4Label"));

        verticalLayout_2->addWidget(mode4Label);

        mode5Label = new QLabel(horizontalLayoutWidget);
        mode5Label->setObjectName(QStringLiteral("mode5Label"));

        verticalLayout_2->addWidget(mode5Label);

        mode6Label = new QLabel(horizontalLayoutWidget);
        mode6Label->setObjectName(QStringLiteral("mode6Label"));
        mode6Label->setStyleSheet(QStringLiteral(""));

        verticalLayout_2->addWidget(mode6Label);


        horizontalLayout->addLayout(verticalLayout_2);

        progressBar = new QProgressBar(FlightModeConfig);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setEnabled(true);
        progressBar->setGeometry(QRect(22, 267, 95, 14));
        progressBar->setMinimumSize(QSize(0, 14));
        progressBar->setMaximumSize(QSize(16777215, 14));
        progressBar->setMinimum(0);
        progressBar->setMaximum(6);
        progressBar->setValue(0);
        savePushButton = new QPushButton(FlightModeConfig);
        savePushButton->setObjectName(QStringLiteral("savePushButton"));
        savePushButton->setGeometry(QRect(134, 259, 101, 32));
        savePushButton->setMinimumSize(QSize(0, 23));

        retranslateUi(FlightModeConfig);

        QMetaObject::connectSlotsByName(FlightModeConfig);
    } // setupUi

    void retranslateUi(QWidget *FlightModeConfig)
    {
        FlightModeConfig->setWindowTitle(QApplication::translate("FlightModeConfig", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("FlightModeConfig", "<h2>Flight Modes</h2>", Q_NULLPTR));
        label_11->setText(QApplication::translate("FlightModeConfig", "Flight Mode 1", Q_NULLPTR));
        label_5->setText(QApplication::translate("FlightModeConfig", "Flight Mode 2", Q_NULLPTR));
        label_9->setText(QApplication::translate("FlightModeConfig", "Flight Mode 3", Q_NULLPTR));
        label_2->setText(QApplication::translate("FlightModeConfig", "Flight Mode 4", Q_NULLPTR));
        label_7->setText(QApplication::translate("FlightModeConfig", "Flight Mode 5", Q_NULLPTR));
        label_13->setText(QApplication::translate("FlightModeConfig", "Flight Mode 6", Q_NULLPTR));
        mode1SimpleCheckBox->setText(QApplication::translate("FlightModeConfig", "Simple Mode", Q_NULLPTR));
        mode2SimpleCheckBox->setText(QApplication::translate("FlightModeConfig", "Simple Mode", Q_NULLPTR));
        mode3SimpleCheckBox->setText(QApplication::translate("FlightModeConfig", "Simple Mode", Q_NULLPTR));
        mode4SimpleCheckBox->setText(QApplication::translate("FlightModeConfig", "Simple Mode", Q_NULLPTR));
        mode5SimpleCheckBox->setText(QApplication::translate("FlightModeConfig", "Simple Mode", Q_NULLPTR));
        mode6SimpleCheckBox->setText(QApplication::translate("FlightModeConfig", "Simple Mode", Q_NULLPTR));
        mode1Label->setText(QApplication::translate("FlightModeConfig", "PWM 0 - 1230", Q_NULLPTR));
        mode2Label->setText(QApplication::translate("FlightModeConfig", "PWM 1231 - 1360", Q_NULLPTR));
        mode3Label->setText(QApplication::translate("FlightModeConfig", "PWM 1361 - 1490", Q_NULLPTR));
        mode4Label->setText(QApplication::translate("FlightModeConfig", "PWM 1491 - 1620", Q_NULLPTR));
        mode5Label->setText(QApplication::translate("FlightModeConfig", "PWM 1621 - 1749", Q_NULLPTR));
        mode6Label->setText(QApplication::translate("FlightModeConfig", "PWM 1750 +", Q_NULLPTR));
        progressBar->setFormat(QApplication::translate("FlightModeConfig", "%p%", Q_NULLPTR));
        savePushButton->setText(QApplication::translate("FlightModeConfig", "Write", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        savePushButton->setShortcut(QApplication::translate("FlightModeConfig", "Ctrl+W", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
    } // retranslateUi

};

namespace Ui {
    class FlightModeConfig: public Ui_FlightModeConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLIGHTMODECONFIG_H
