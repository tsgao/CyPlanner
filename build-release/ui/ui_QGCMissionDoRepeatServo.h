/********************************************************************************
** Form generated from reading UI file 'QGCMissionDoRepeatServo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCMISSIONDOREPEATSERVO_H
#define UI_QGCMISSIONDOREPEATSERVO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCMissionDoRepeatServo
{
public:
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *param1SpinBox;
    QDoubleSpinBox *param2SpinBox;
    QDoubleSpinBox *param3SpinBox;
    QDoubleSpinBox *param4SpinBox;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *QGCMissionDoRepeatServo)
    {
        if (QGCMissionDoRepeatServo->objectName().isEmpty())
            QGCMissionDoRepeatServo->setObjectName(QStringLiteral("QGCMissionDoRepeatServo"));
        QGCMissionDoRepeatServo->resize(1547, 27);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QGCMissionDoRepeatServo->sizePolicy().hasHeightForWidth());
        QGCMissionDoRepeatServo->setSizePolicy(sizePolicy);
        QGCMissionDoRepeatServo->setMinimumSize(QSize(0, 0));
        horizontalLayout = new QHBoxLayout(QGCMissionDoRepeatServo);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        param1SpinBox = new QDoubleSpinBox(QGCMissionDoRepeatServo);
        param1SpinBox->setObjectName(QStringLiteral("param1SpinBox"));
        param1SpinBox->setMinimumSize(QSize(135, 0));
        param1SpinBox->setMaximumSize(QSize(135, 16777215));
        param1SpinBox->setKeyboardTracking(false);
        param1SpinBox->setDecimals(0);
        param1SpinBox->setMinimum(-2.14748e+9);
        param1SpinBox->setMaximum(2.14748e+9);

        horizontalLayout->addWidget(param1SpinBox);

        param2SpinBox = new QDoubleSpinBox(QGCMissionDoRepeatServo);
        param2SpinBox->setObjectName(QStringLiteral("param2SpinBox"));
        param2SpinBox->setMinimumSize(QSize(135, 0));
        param2SpinBox->setMaximumSize(QSize(135, 16777215));
        param2SpinBox->setKeyboardTracking(false);
        param2SpinBox->setDecimals(0);
        param2SpinBox->setMinimum(900);
        param2SpinBox->setMaximum(2100);
        param2SpinBox->setValue(1500);

        horizontalLayout->addWidget(param2SpinBox);

        param3SpinBox = new QDoubleSpinBox(QGCMissionDoRepeatServo);
        param3SpinBox->setObjectName(QStringLiteral("param3SpinBox"));
        param3SpinBox->setMinimumSize(QSize(75, 0));
        param3SpinBox->setMaximumSize(QSize(75, 16777215));
        param3SpinBox->setKeyboardTracking(false);
        param3SpinBox->setDecimals(0);
        param3SpinBox->setMinimum(0);
        param3SpinBox->setMaximum(2.14748e+9);

        horizontalLayout->addWidget(param3SpinBox);

        param4SpinBox = new QDoubleSpinBox(QGCMissionDoRepeatServo);
        param4SpinBox->setObjectName(QStringLiteral("param4SpinBox"));
        param4SpinBox->setMinimumSize(QSize(75, 0));
        param4SpinBox->setMaximumSize(QSize(75, 16777215));
        param4SpinBox->setKeyboardTracking(false);
        param4SpinBox->setDecimals(0);
        param4SpinBox->setMinimum(-2.14748e+9);
        param4SpinBox->setMaximum(2.14748e+9);

        horizontalLayout->addWidget(param4SpinBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        horizontalLayout->setStretch(0, 10);
        horizontalLayout->setStretch(1, 10);
        horizontalLayout->setStretch(2, 10);
        horizontalLayout->setStretch(3, 10);

        retranslateUi(QGCMissionDoRepeatServo);

        QMetaObject::connectSlotsByName(QGCMissionDoRepeatServo);
    } // setupUi

    void retranslateUi(QWidget *QGCMissionDoRepeatServo)
    {
        QGCMissionDoRepeatServo->setWindowTitle(QApplication::translate("QGCMissionDoRepeatServo", "Form", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        param1SpinBox->setToolTip(QApplication::translate("QGCMissionDoRepeatServo", "Mission parameter #1", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        param1SpinBox->setStatusTip(QApplication::translate("QGCMissionDoRepeatServo", "Mission parameter #1", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        param1SpinBox->setPrefix(QApplication::translate("QGCMissionDoRepeatServo", " Servo ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        param2SpinBox->setToolTip(QApplication::translate("QGCMissionDoRepeatServo", "Mission parameter #2", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        param2SpinBox->setStatusTip(QApplication::translate("QGCMissionDoRepeatServo", "Mission parameter #2", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        param2SpinBox->setPrefix(QApplication::translate("QGCMissionDoRepeatServo", "PWM ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        param3SpinBox->setToolTip(QApplication::translate("QGCMissionDoRepeatServo", "Mission parameter #3", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        param3SpinBox->setStatusTip(QApplication::translate("QGCMissionDoRepeatServo", "Mission parameter #3", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        param3SpinBox->setPrefix(QApplication::translate("QGCMissionDoRepeatServo", "Repeat ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        param4SpinBox->setToolTip(QApplication::translate("QGCMissionDoRepeatServo", "Mission parameter #4", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        param4SpinBox->setStatusTip(QApplication::translate("QGCMissionDoRepeatServo", "Mission parameter #4", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        param4SpinBox->setPrefix(QApplication::translate("QGCMissionDoRepeatServo", "Delay (s) ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QGCMissionDoRepeatServo: public Ui_QGCMissionDoRepeatServo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCMISSIONDOREPEATSERVO_H
