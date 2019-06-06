/********************************************************************************
** Form generated from reading UI file 'JoystickWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JOYSTICKWIDGET_H
#define UI_JOYSTICKWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDial>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_JoystickWidget
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLCDNumber *xValue;
    QSlider *xSlider;
    QLCDNumber *yValue;
    QDial *dial;
    QLabel *label_2;
    QSlider *ySlider;
    QLabel *label;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_2;
    QProgressBar *thrust;
    QHBoxLayout *horizontalLayout;
    QLabel *statusLabel;
    QLabel *joystickLabel;
    QPushButton *joystickButton;
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_3;
    QSpinBox *autoMapSpinBox;
    QSpinBox *stabilizeMapSpinBox;
    QLabel *label_10;
    QCheckBox *rollInvertCheckBox;
    QCheckBox *pitchInvertCheckBox;
    QCheckBox *throttleInvertCheckBox;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *label_5;
    QSpinBox *throttleMapSpinBox;
    QSpinBox *rollMapSpinBox;
    QSpinBox *pitchMapSpinBox;
    QSpinBox *yawMapSpinBox;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_8;
    QCheckBox *yawInvertCheckBox;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *JoystickWidget)
    {
        if (JoystickWidget->objectName().isEmpty())
            JoystickWidget->setObjectName(QStringLiteral("JoystickWidget"));
        JoystickWidget->resize(624, 448);
        JoystickWidget->setMinimumSize(QSize(368, 274));
        gridLayout_2 = new QGridLayout(JoystickWidget);
        gridLayout_2->setSpacing(8);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(8, 8, 8, 8);
        groupBox = new QGroupBox(JoystickWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMinimumSize(QSize(0, 0));
        groupBox->setMaximumSize(QSize(40, 400));
        groupBox->setAlignment(Qt::AlignCenter);
        groupBox->setFlat(false);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(3, 3, 3, 3);

        gridLayout_2->addWidget(groupBox, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(JoystickWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setAlignment(Qt::AlignCenter);
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(6, 6, 6, 6);
        xValue = new QLCDNumber(groupBox_2);
        xValue->setObjectName(QStringLiteral("xValue"));
        xValue->setMinimumSize(QSize(0, 0));
        xValue->setMaximumSize(QSize(40, 24));
        xValue->setFrameShadow(QFrame::Plain);
        xValue->setSmallDecimalPoint(true);
        xValue->setDigitCount(3);
        xValue->setSegmentStyle(QLCDNumber::Flat);

        gridLayout->addWidget(xValue, 0, 1, 1, 1);

        xSlider = new QSlider(groupBox_2);
        xSlider->setObjectName(QStringLiteral("xSlider"));
        xSlider->setEnabled(false);
        xSlider->setMinimum(-100);
        xSlider->setMaximum(100);
        xSlider->setOrientation(Qt::Vertical);

        gridLayout->addWidget(xSlider, 1, 1, 2, 1);

        yValue = new QLCDNumber(groupBox_2);
        yValue->setObjectName(QStringLiteral("yValue"));
        yValue->setEnabled(true);
        yValue->setMaximumSize(QSize(40, 24));
        yValue->setFrameShadow(QFrame::Plain);
        yValue->setSmallDecimalPoint(true);
        yValue->setDigitCount(3);
        yValue->setSegmentStyle(QLCDNumber::Flat);

        gridLayout->addWidget(yValue, 4, 6, 1, 1);

        dial = new QDial(groupBox_2);
        dial->setObjectName(QStringLiteral("dial"));
        dial->setEnabled(false);
        dial->setMinimum(-100);
        dial->setMaximum(100);

        gridLayout->addWidget(dial, 0, 2, 3, 5);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 4, 2, 1, 1);

        ySlider = new QSlider(groupBox_2);
        ySlider->setObjectName(QStringLiteral("ySlider"));
        ySlider->setEnabled(false);
        ySlider->setMinimum(-100);
        ySlider->setMaximum(100);
        ySlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(ySlider, 4, 3, 1, 3);

        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 4, 1, 1, 1);


        gridLayout_2->addWidget(groupBox_2, 1, 2, 1, 1);

        groupBox_3 = new QGroupBox(JoystickWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setMaximumSize(QSize(60, 16777215));
        verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(2, 2, 2, 2);
        thrust = new QProgressBar(groupBox_3);
        thrust->setObjectName(QStringLiteral("thrust"));
        thrust->setEnabled(true);
        thrust->setMinimumSize(QSize(40, 20));
        thrust->setValue(0);
        thrust->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        thrust->setOrientation(Qt::Vertical);

        verticalLayout_2->addWidget(thrust);


        gridLayout_2->addWidget(groupBox_3, 1, 3, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        statusLabel = new QLabel(JoystickWidget);
        statusLabel->setObjectName(QStringLiteral("statusLabel"));

        horizontalLayout->addWidget(statusLabel);

        joystickLabel = new QLabel(JoystickWidget);
        joystickLabel->setObjectName(QStringLiteral("joystickLabel"));

        horizontalLayout->addWidget(joystickLabel);

        joystickButton = new QPushButton(JoystickWidget);
        joystickButton->setObjectName(QStringLiteral("joystickButton"));
        joystickButton->setEnabled(false);
        joystickButton->setCheckable(true);
        joystickButton->setChecked(false);
        joystickButton->setAutoDefault(false);
        joystickButton->setFlat(false);

        horizontalLayout->addWidget(joystickButton);

        buttonBox = new QDialogButtonBox(JoystickWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);

        horizontalLayout->setStretch(0, 30);
        horizontalLayout->setStretch(3, 30);

        gridLayout_2->addLayout(horizontalLayout, 2, 0, 1, 5);

        groupBox_4 = new QGroupBox(JoystickWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setAlignment(Qt::AlignCenter);
        groupBox_4->setFlat(false);
        gridLayout_3 = new QGridLayout(groupBox_4);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        autoMapSpinBox = new QSpinBox(groupBox_4);
        autoMapSpinBox->setObjectName(QStringLiteral("autoMapSpinBox"));
        autoMapSpinBox->setEnabled(true);
        autoMapSpinBox->setMinimum(0);
        autoMapSpinBox->setMaximum(10);
        autoMapSpinBox->setValue(0);

        gridLayout_3->addWidget(autoMapSpinBox, 6, 2, 1, 1);

        stabilizeMapSpinBox = new QSpinBox(groupBox_4);
        stabilizeMapSpinBox->setObjectName(QStringLiteral("stabilizeMapSpinBox"));
        stabilizeMapSpinBox->setMaximum(10);

        gridLayout_3->addWidget(stabilizeMapSpinBox, 7, 2, 1, 1);

        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_3->addWidget(label_10, 0, 3, 1, 1);

        rollInvertCheckBox = new QCheckBox(groupBox_4);
        rollInvertCheckBox->setObjectName(QStringLiteral("rollInvertCheckBox"));
        rollInvertCheckBox->setLayoutDirection(Qt::LeftToRight);
        rollInvertCheckBox->setText(QStringLiteral(""));

        gridLayout_3->addWidget(rollInvertCheckBox, 1, 3, 1, 1);

        pitchInvertCheckBox = new QCheckBox(groupBox_4);
        pitchInvertCheckBox->setObjectName(QStringLiteral("pitchInvertCheckBox"));

        gridLayout_3->addWidget(pitchInvertCheckBox, 2, 3, 1, 1);

        throttleInvertCheckBox = new QCheckBox(groupBox_4);
        throttleInvertCheckBox->setObjectName(QStringLiteral("throttleInvertCheckBox"));

        gridLayout_3->addWidget(throttleInvertCheckBox, 4, 3, 1, 1);

        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_3->addWidget(label_7, 6, 1, 1, 1);

        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_3->addWidget(label_6, 4, 1, 1, 1);

        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_3->addWidget(label_5, 3, 1, 1, 1);

        throttleMapSpinBox = new QSpinBox(groupBox_4);
        throttleMapSpinBox->setObjectName(QStringLiteral("throttleMapSpinBox"));
        throttleMapSpinBox->setMaximum(10);

        gridLayout_3->addWidget(throttleMapSpinBox, 4, 2, 1, 1);

        rollMapSpinBox = new QSpinBox(groupBox_4);
        rollMapSpinBox->setObjectName(QStringLiteral("rollMapSpinBox"));
        rollMapSpinBox->setMaximum(10);

        gridLayout_3->addWidget(rollMapSpinBox, 1, 2, 1, 1);

        pitchMapSpinBox = new QSpinBox(groupBox_4);
        pitchMapSpinBox->setObjectName(QStringLiteral("pitchMapSpinBox"));
        pitchMapSpinBox->setMaximum(10);

        gridLayout_3->addWidget(pitchMapSpinBox, 2, 2, 1, 1);

        yawMapSpinBox = new QSpinBox(groupBox_4);
        yawMapSpinBox->setObjectName(QStringLiteral("yawMapSpinBox"));
        yawMapSpinBox->setMaximum(10);

        gridLayout_3->addWidget(yawMapSpinBox, 3, 2, 1, 1);

        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_3->addWidget(label_4, 2, 1, 1, 1);

        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_3->addWidget(label_3, 1, 1, 1, 1);

        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_3->addWidget(label_8, 7, 1, 1, 1);

        yawInvertCheckBox = new QCheckBox(groupBox_4);
        yawInvertCheckBox->setObjectName(QStringLiteral("yawInvertCheckBox"));

        gridLayout_3->addWidget(yawInvertCheckBox, 3, 3, 1, 1);

        verticalSpacer_2 = new QSpacerItem(0, 10, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout_3->addItem(verticalSpacer_2, 5, 1, 1, 3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 8, 1, 1, 3);


        gridLayout_2->addWidget(groupBox_4, 1, 4, 1, 1);

        gridLayout_2->setColumnStretch(0, 10);
        gridLayout_2->setColumnStretch(4, 10);

        retranslateUi(JoystickWidget);
        QObject::connect(buttonBox, SIGNAL(accepted()), JoystickWidget, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), JoystickWidget, SLOT(reject()));

        QMetaObject::connectSlotsByName(JoystickWidget);
    } // setupUi

    void retranslateUi(QDialog *JoystickWidget)
    {
        JoystickWidget->setWindowTitle(QApplication::translate("JoystickWidget", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("JoystickWidget", "Buttons", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("JoystickWidget", "Stick", Q_NULLPTR));
        label_2->setText(QApplication::translate("JoystickWidget", "Y", Q_NULLPTR));
        label->setText(QApplication::translate("JoystickWidget", "X", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("JoystickWidget", "Throttle", Q_NULLPTR));
        statusLabel->setText(QApplication::translate("JoystickWidget", "hat", Q_NULLPTR));
        joystickLabel->setText(QApplication::translate("JoystickWidget", "No joystick detected yet.. waiting", Q_NULLPTR));
        joystickButton->setText(QApplication::translate("JoystickWidget", "Activate", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("JoystickWidget", "Mappings", Q_NULLPTR));
        label_10->setText(QApplication::translate("JoystickWidget", "Invert?", Q_NULLPTR));
        pitchInvertCheckBox->setText(QString());
        throttleInvertCheckBox->setText(QString());
        label_7->setText(QApplication::translate("JoystickWidget", "Auto Button", Q_NULLPTR));
        label_6->setText(QApplication::translate("JoystickWidget", "Throttle", Q_NULLPTR));
        label_5->setText(QApplication::translate("JoystickWidget", "Yaw Axis (Z)", Q_NULLPTR));
        label_4->setText(QApplication::translate("JoystickWidget", "Pitch Axis (X)", Q_NULLPTR));
        label_3->setText(QApplication::translate("JoystickWidget", "Roll Axis (Y)", Q_NULLPTR));
        label_8->setText(QApplication::translate("JoystickWidget", "Stabilize Button", Q_NULLPTR));
        yawInvertCheckBox->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class JoystickWidget: public Ui_JoystickWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOYSTICKWIDGET_H
