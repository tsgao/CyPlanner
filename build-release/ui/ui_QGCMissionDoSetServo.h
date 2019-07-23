/********************************************************************************
** Form generated from reading UI file 'QGCMissionDoSetServo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCMISSIONDOSETSERVO_H
#define UI_QGCMISSIONDOSETSERVO_H

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

class Ui_QGCMissionDoSetServo
{
public:
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *param1SpinBox;
    QDoubleSpinBox *param2SpinBox;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *QGCMissionDoSetServo)
    {
        if (QGCMissionDoSetServo->objectName().isEmpty())
            QGCMissionDoSetServo->setObjectName(QStringLiteral("QGCMissionDoSetServo"));
        QGCMissionDoSetServo->resize(1547, 27);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QGCMissionDoSetServo->sizePolicy().hasHeightForWidth());
        QGCMissionDoSetServo->setSizePolicy(sizePolicy);
        QGCMissionDoSetServo->setMinimumSize(QSize(0, 0));
        horizontalLayout = new QHBoxLayout(QGCMissionDoSetServo);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        param1SpinBox = new QDoubleSpinBox(QGCMissionDoSetServo);
        param1SpinBox->setObjectName(QStringLiteral("param1SpinBox"));
        param1SpinBox->setMinimumSize(QSize(135, 0));
        param1SpinBox->setMaximumSize(QSize(135, 16777215));
        param1SpinBox->setKeyboardTracking(false);
        param1SpinBox->setDecimals(0);
        param1SpinBox->setMinimum(-2.14748e+9);
        param1SpinBox->setMaximum(2.14748e+9);

        horizontalLayout->addWidget(param1SpinBox);

        param2SpinBox = new QDoubleSpinBox(QGCMissionDoSetServo);
        param2SpinBox->setObjectName(QStringLiteral("param2SpinBox"));
        param2SpinBox->setMinimumSize(QSize(135, 0));
        param2SpinBox->setMaximumSize(QSize(135, 16777215));
        param2SpinBox->setKeyboardTracking(false);
        param2SpinBox->setDecimals(0);
        param2SpinBox->setMinimum(900);
        param2SpinBox->setMaximum(2100);
        param2SpinBox->setValue(1500);

        horizontalLayout->addWidget(param2SpinBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        horizontalLayout->setStretch(0, 10);
        horizontalLayout->setStretch(1, 10);

        retranslateUi(QGCMissionDoSetServo);

        QMetaObject::connectSlotsByName(QGCMissionDoSetServo);
    } // setupUi

    void retranslateUi(QWidget *QGCMissionDoSetServo)
    {
        QGCMissionDoSetServo->setWindowTitle(QApplication::translate("QGCMissionDoSetServo", "Form", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        param1SpinBox->setToolTip(QApplication::translate("QGCMissionDoSetServo", "Mission parameter #1", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        param1SpinBox->setStatusTip(QApplication::translate("QGCMissionDoSetServo", "Mission parameter #1", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        param1SpinBox->setPrefix(QApplication::translate("QGCMissionDoSetServo", "Servo ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        param2SpinBox->setToolTip(QApplication::translate("QGCMissionDoSetServo", "Mission parameter #2", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        param2SpinBox->setStatusTip(QApplication::translate("QGCMissionDoSetServo", "Mission parameter #2", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        param2SpinBox->setPrefix(QApplication::translate("QGCMissionDoSetServo", "PWM ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QGCMissionDoSetServo: public Ui_QGCMissionDoSetServo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCMISSIONDOSETSERVO_H
