/********************************************************************************
** Form generated from reading UI file 'QGCMissionConditionYaw.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCMISSIONCONDITIONYAW_H
#define UI_QGCMISSIONCONDITIONYAW_H

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

class Ui_QGCMissionConditionYaw
{
public:
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *param1SpinBox;
    QDoubleSpinBox *param2SpinBox;
    QDoubleSpinBox *param3SpinBox;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *QGCMissionConditionYaw)
    {
        if (QGCMissionConditionYaw->objectName().isEmpty())
            QGCMissionConditionYaw->setObjectName(QStringLiteral("QGCMissionConditionYaw"));
        QGCMissionConditionYaw->resize(1547, 27);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QGCMissionConditionYaw->sizePolicy().hasHeightForWidth());
        QGCMissionConditionYaw->setSizePolicy(sizePolicy);
        QGCMissionConditionYaw->setMinimumSize(QSize(0, 0));
        horizontalLayout = new QHBoxLayout(QGCMissionConditionYaw);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        param1SpinBox = new QDoubleSpinBox(QGCMissionConditionYaw);
        param1SpinBox->setObjectName(QStringLiteral("param1SpinBox"));
        param1SpinBox->setMinimumSize(QSize(135, 0));
        param1SpinBox->setMaximumSize(QSize(135, 16777215));
        param1SpinBox->setKeyboardTracking(false);
        param1SpinBox->setDecimals(1);
        param1SpinBox->setMinimum(0);
        param1SpinBox->setMaximum(359);

        horizontalLayout->addWidget(param1SpinBox);

        param2SpinBox = new QDoubleSpinBox(QGCMissionConditionYaw);
        param2SpinBox->setObjectName(QStringLiteral("param2SpinBox"));
        param2SpinBox->setMinimumSize(QSize(135, 0));
        param2SpinBox->setMaximumSize(QSize(135, 16777215));
        param2SpinBox->setKeyboardTracking(false);
        param2SpinBox->setDecimals(0);
        param2SpinBox->setMinimum(0);
        param2SpinBox->setMaximum(2400);

        horizontalLayout->addWidget(param2SpinBox);

        param3SpinBox = new QDoubleSpinBox(QGCMissionConditionYaw);
        param3SpinBox->setObjectName(QStringLiteral("param3SpinBox"));
        param3SpinBox->setMinimumSize(QSize(75, 0));
        param3SpinBox->setMaximumSize(QSize(75, 16777215));
        param3SpinBox->setKeyboardTracking(false);
        param3SpinBox->setDecimals(0);
        param3SpinBox->setMinimum(-1);
        param3SpinBox->setMaximum(1);

        horizontalLayout->addWidget(param3SpinBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        horizontalLayout->setStretch(0, 10);
        horizontalLayout->setStretch(1, 10);
        horizontalLayout->setStretch(2, 10);

        retranslateUi(QGCMissionConditionYaw);

        QMetaObject::connectSlotsByName(QGCMissionConditionYaw);
    } // setupUi

    void retranslateUi(QWidget *QGCMissionConditionYaw)
    {
        QGCMissionConditionYaw->setWindowTitle(QApplication::translate("QGCMissionConditionYaw", "Form", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        param1SpinBox->setToolTip(QApplication::translate("QGCMissionConditionYaw", "Mission parameter #1", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        param1SpinBox->setStatusTip(QApplication::translate("QGCMissionConditionYaw", "Mission parameter #1", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        param1SpinBox->setPrefix(QApplication::translate("QGCMissionConditionYaw", "degrees ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        param2SpinBox->setToolTip(QApplication::translate("QGCMissionConditionYaw", "Mission parameter #2", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        param2SpinBox->setStatusTip(QApplication::translate("QGCMissionConditionYaw", "Mission parameter #2", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        param2SpinBox->setPrefix(QApplication::translate("QGCMissionConditionYaw", "sec ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        param3SpinBox->setToolTip(QApplication::translate("QGCMissionConditionYaw", "Mission parameter #3", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        param3SpinBox->setStatusTip(QApplication::translate("QGCMissionConditionYaw", "Mission parameter #3", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        param3SpinBox->setPrefix(QApplication::translate("QGCMissionConditionYaw", "dir ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QGCMissionConditionYaw: public Ui_QGCMissionConditionYaw {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCMISSIONCONDITIONYAW_H
