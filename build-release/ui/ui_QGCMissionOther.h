/********************************************************************************
** Form generated from reading UI file 'QGCMissionOther.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCMISSIONOTHER_H
#define UI_QGCMISSIONOTHER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCMissionOther
{
public:
    QHBoxLayout *horizontalLayout;
    QSpinBox *commandSpinBox;
    QDoubleSpinBox *param1SpinBox;
    QDoubleSpinBox *param2SpinBox;
    QDoubleSpinBox *param3SpinBox;
    QDoubleSpinBox *param4SpinBox;
    QDoubleSpinBox *param5SpinBox;
    QDoubleSpinBox *param6SpinBox;
    QDoubleSpinBox *param7SpinBox;

    void setupUi(QWidget *QGCMissionOther)
    {
        if (QGCMissionOther->objectName().isEmpty())
            QGCMissionOther->setObjectName(QStringLiteral("QGCMissionOther"));
        QGCMissionOther->resize(1266, 27);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QGCMissionOther->sizePolicy().hasHeightForWidth());
        QGCMissionOther->setSizePolicy(sizePolicy);
        QGCMissionOther->setMinimumSize(QSize(0, 0));
        horizontalLayout = new QHBoxLayout(QGCMissionOther);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        commandSpinBox = new QSpinBox(QGCMissionOther);
        commandSpinBox->setObjectName(QStringLiteral("commandSpinBox"));
        commandSpinBox->setKeyboardTracking(false);
        commandSpinBox->setMinimum(0);
        commandSpinBox->setMaximum(255);
        commandSpinBox->setValue(0);

        horizontalLayout->addWidget(commandSpinBox);

        param1SpinBox = new QDoubleSpinBox(QGCMissionOther);
        param1SpinBox->setObjectName(QStringLiteral("param1SpinBox"));
        param1SpinBox->setKeyboardTracking(false);
        param1SpinBox->setDecimals(7);
        param1SpinBox->setMinimum(-2.14748e+9);
        param1SpinBox->setMaximum(2.14748e+9);

        horizontalLayout->addWidget(param1SpinBox);

        param2SpinBox = new QDoubleSpinBox(QGCMissionOther);
        param2SpinBox->setObjectName(QStringLiteral("param2SpinBox"));
        param2SpinBox->setKeyboardTracking(false);
        param2SpinBox->setDecimals(7);
        param2SpinBox->setMinimum(-2.14748e+9);
        param2SpinBox->setMaximum(2.14748e+9);

        horizontalLayout->addWidget(param2SpinBox);

        param3SpinBox = new QDoubleSpinBox(QGCMissionOther);
        param3SpinBox->setObjectName(QStringLiteral("param3SpinBox"));
        param3SpinBox->setKeyboardTracking(false);
        param3SpinBox->setDecimals(7);
        param3SpinBox->setMinimum(-2.14748e+9);
        param3SpinBox->setMaximum(2.14748e+9);

        horizontalLayout->addWidget(param3SpinBox);

        param4SpinBox = new QDoubleSpinBox(QGCMissionOther);
        param4SpinBox->setObjectName(QStringLiteral("param4SpinBox"));
        param4SpinBox->setKeyboardTracking(false);
        param4SpinBox->setDecimals(7);
        param4SpinBox->setMinimum(-2.14748e+9);
        param4SpinBox->setMaximum(2.14748e+9);

        horizontalLayout->addWidget(param4SpinBox);

        param5SpinBox = new QDoubleSpinBox(QGCMissionOther);
        param5SpinBox->setObjectName(QStringLiteral("param5SpinBox"));
        param5SpinBox->setKeyboardTracking(false);
        param5SpinBox->setDecimals(7);
        param5SpinBox->setMinimum(-2.14748e+9);
        param5SpinBox->setMaximum(2.14748e+9);

        horizontalLayout->addWidget(param5SpinBox);

        param6SpinBox = new QDoubleSpinBox(QGCMissionOther);
        param6SpinBox->setObjectName(QStringLiteral("param6SpinBox"));
        param6SpinBox->setKeyboardTracking(false);
        param6SpinBox->setDecimals(7);
        param6SpinBox->setMinimum(-2.14748e+9);
        param6SpinBox->setMaximum(2.14748e+9);

        horizontalLayout->addWidget(param6SpinBox);

        param7SpinBox = new QDoubleSpinBox(QGCMissionOther);
        param7SpinBox->setObjectName(QStringLiteral("param7SpinBox"));
        param7SpinBox->setKeyboardTracking(false);
        param7SpinBox->setDecimals(7);
        param7SpinBox->setMinimum(-2.14748e+9);
        param7SpinBox->setMaximum(2.14748e+9);

        horizontalLayout->addWidget(param7SpinBox);

        horizontalLayout->setStretch(0, 10);
        horizontalLayout->setStretch(1, 10);
        horizontalLayout->setStretch(2, 10);
        horizontalLayout->setStretch(3, 10);
        horizontalLayout->setStretch(4, 10);
        horizontalLayout->setStretch(5, 10);
        horizontalLayout->setStretch(6, 10);
        horizontalLayout->setStretch(7, 10);

        retranslateUi(QGCMissionOther);

        QMetaObject::connectSlotsByName(QGCMissionOther);
    } // setupUi

    void retranslateUi(QWidget *QGCMissionOther)
    {
        QGCMissionOther->setWindowTitle(QApplication::translate("QGCMissionOther", "Form", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        commandSpinBox->setToolTip(QApplication::translate("QGCMissionOther", "MAV_CMD id", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        commandSpinBox->setStatusTip(QApplication::translate("QGCMissionOther", "MAV_CMD id", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        commandSpinBox->setPrefix(QApplication::translate("QGCMissionOther", "CMD ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        param1SpinBox->setToolTip(QApplication::translate("QGCMissionOther", "Mission parameter #1", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        param1SpinBox->setStatusTip(QApplication::translate("QGCMissionOther", "Mission parameter #1", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        param1SpinBox->setPrefix(QApplication::translate("QGCMissionOther", "P1 ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        param2SpinBox->setToolTip(QApplication::translate("QGCMissionOther", "Mission parameter #2", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        param2SpinBox->setStatusTip(QApplication::translate("QGCMissionOther", "Mission parameter #2", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        param2SpinBox->setPrefix(QApplication::translate("QGCMissionOther", "P2 ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        param3SpinBox->setToolTip(QApplication::translate("QGCMissionOther", "Mission parameter #3", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        param3SpinBox->setStatusTip(QApplication::translate("QGCMissionOther", "Mission parameter #3", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        param3SpinBox->setPrefix(QApplication::translate("QGCMissionOther", "P3 ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        param4SpinBox->setToolTip(QApplication::translate("QGCMissionOther", "Mission parameter #4", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        param4SpinBox->setStatusTip(QApplication::translate("QGCMissionOther", "Mission parameter #4", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        param4SpinBox->setPrefix(QApplication::translate("QGCMissionOther", "P4 ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        param5SpinBox->setToolTip(QApplication::translate("QGCMissionOther", "Mission parameter #5", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        param5SpinBox->setStatusTip(QApplication::translate("QGCMissionOther", "Mission parameter #5", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        param5SpinBox->setPrefix(QApplication::translate("QGCMissionOther", "P5 ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        param6SpinBox->setToolTip(QApplication::translate("QGCMissionOther", "Mission parameter #6", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        param6SpinBox->setStatusTip(QApplication::translate("QGCMissionOther", "Mission parameter #6", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        param6SpinBox->setPrefix(QApplication::translate("QGCMissionOther", "P6 ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        param7SpinBox->setToolTip(QApplication::translate("QGCMissionOther", "Mission parameter #7", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        param7SpinBox->setStatusTip(QApplication::translate("QGCMissionOther", "Mission parameter #7", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        param7SpinBox->setPrefix(QApplication::translate("QGCMissionOther", "P7 ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QGCMissionOther: public Ui_QGCMissionOther {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCMISSIONOTHER_H
