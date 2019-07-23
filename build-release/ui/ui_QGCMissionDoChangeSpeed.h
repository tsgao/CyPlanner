/********************************************************************************
** Form generated from reading UI file 'QGCMissionDoChangeSpeed.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCMISSIONDOCHANGESPEED_H
#define UI_QGCMISSIONDOCHANGESPEED_H

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

class Ui_QGCMissionDoChangeSpeed
{
public:
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *param1SpinBox;
    QDoubleSpinBox *param2SpinBox;
    QDoubleSpinBox *param3SpinBox;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *QGCMissionDoChangeSpeed)
    {
        if (QGCMissionDoChangeSpeed->objectName().isEmpty())
            QGCMissionDoChangeSpeed->setObjectName(QStringLiteral("QGCMissionDoChangeSpeed"));
        QGCMissionDoChangeSpeed->resize(1547, 27);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QGCMissionDoChangeSpeed->sizePolicy().hasHeightForWidth());
        QGCMissionDoChangeSpeed->setSizePolicy(sizePolicy);
        QGCMissionDoChangeSpeed->setMinimumSize(QSize(0, 0));
        horizontalLayout = new QHBoxLayout(QGCMissionDoChangeSpeed);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        param1SpinBox = new QDoubleSpinBox(QGCMissionDoChangeSpeed);
        param1SpinBox->setObjectName(QStringLiteral("param1SpinBox"));
        param1SpinBox->setMinimumSize(QSize(135, 0));
        param1SpinBox->setMaximumSize(QSize(135, 16777215));
        param1SpinBox->setKeyboardTracking(false);
        param1SpinBox->setDecimals(0);
        param1SpinBox->setMaximum(1);

        horizontalLayout->addWidget(param1SpinBox);

        param2SpinBox = new QDoubleSpinBox(QGCMissionDoChangeSpeed);
        param2SpinBox->setObjectName(QStringLiteral("param2SpinBox"));
        param2SpinBox->setMinimumSize(QSize(135, 0));
        param2SpinBox->setMaximumSize(QSize(135, 16777215));
        param2SpinBox->setKeyboardTracking(false);
        param2SpinBox->setDecimals(2);
        param2SpinBox->setMinimum(-2.14748e+9);
        param2SpinBox->setMaximum(2.14748e+9);

        horizontalLayout->addWidget(param2SpinBox);

        param3SpinBox = new QDoubleSpinBox(QGCMissionDoChangeSpeed);
        param3SpinBox->setObjectName(QStringLiteral("param3SpinBox"));
        param3SpinBox->setMinimumSize(QSize(75, 0));
        param3SpinBox->setMaximumSize(QSize(75, 16777215));
        param3SpinBox->setKeyboardTracking(false);
        param3SpinBox->setDecimals(0);
        param3SpinBox->setMinimum(-1);
        param3SpinBox->setMaximum(100);
        param3SpinBox->setValue(-1);

        horizontalLayout->addWidget(param3SpinBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        retranslateUi(QGCMissionDoChangeSpeed);

        QMetaObject::connectSlotsByName(QGCMissionDoChangeSpeed);
    } // setupUi

    void retranslateUi(QWidget *QGCMissionDoChangeSpeed)
    {
        QGCMissionDoChangeSpeed->setWindowTitle(QApplication::translate("QGCMissionDoChangeSpeed", "Form", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        param1SpinBox->setToolTip(QApplication::translate("QGCMissionDoChangeSpeed", "Mission parameter #1", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        param1SpinBox->setStatusTip(QApplication::translate("QGCMissionDoChangeSpeed", "Mission parameter #1", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        param1SpinBox->setPrefix(QString());
        param1SpinBox->setSuffix(QApplication::translate("QGCMissionDoChangeSpeed", " (0=AS/1=GS)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        param2SpinBox->setToolTip(QApplication::translate("QGCMissionDoChangeSpeed", "Mission parameter #2", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        param2SpinBox->setStatusTip(QApplication::translate("QGCMissionDoChangeSpeed", "Mission parameter #2", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        param2SpinBox->setPrefix(QApplication::translate("QGCMissionDoChangeSpeed", "speed  ", Q_NULLPTR));
        param2SpinBox->setSuffix(QApplication::translate("QGCMissionDoChangeSpeed", " m/s", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        param3SpinBox->setToolTip(QApplication::translate("QGCMissionDoChangeSpeed", " (0..100, or -1 = no change)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        param3SpinBox->setStatusTip(QApplication::translate("QGCMissionDoChangeSpeed", "Mission parameter #3", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        param3SpinBox->setPrefix(QApplication::translate("QGCMissionDoChangeSpeed", "Thr ", Q_NULLPTR));
        param3SpinBox->setSuffix(QApplication::translate("QGCMissionDoChangeSpeed", "%", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QGCMissionDoChangeSpeed: public Ui_QGCMissionDoChangeSpeed {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCMISSIONDOCHANGESPEED_H
