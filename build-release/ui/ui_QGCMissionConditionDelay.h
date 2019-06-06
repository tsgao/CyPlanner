/********************************************************************************
** Form generated from reading UI file 'QGCMissionConditionDelay.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCMISSIONCONDITIONDELAY_H
#define UI_QGCMISSIONCONDITIONDELAY_H

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

class Ui_QGCMissionConditionDelay
{
public:
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *param1SpinBox;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *QGCMissionConditionDelay)
    {
        if (QGCMissionConditionDelay->objectName().isEmpty())
            QGCMissionConditionDelay->setObjectName(QStringLiteral("QGCMissionConditionDelay"));
        QGCMissionConditionDelay->resize(444, 30);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QGCMissionConditionDelay->sizePolicy().hasHeightForWidth());
        QGCMissionConditionDelay->setSizePolicy(sizePolicy);
        QGCMissionConditionDelay->setMinimumSize(QSize(135, 0));
        QGCMissionConditionDelay->setMaximumSize(QSize(16777213, 16777160));
        QGCMissionConditionDelay->setStyleSheet(QStringLiteral(""));
        horizontalLayout = new QHBoxLayout(QGCMissionConditionDelay);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        param1SpinBox = new QDoubleSpinBox(QGCMissionConditionDelay);
        param1SpinBox->setObjectName(QStringLiteral("param1SpinBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(param1SpinBox->sizePolicy().hasHeightForWidth());
        param1SpinBox->setSizePolicy(sizePolicy1);
        param1SpinBox->setMinimumSize(QSize(135, 0));
        param1SpinBox->setMaximumSize(QSize(135, 16777215));
        param1SpinBox->setFocusPolicy(Qt::WheelFocus);
        param1SpinBox->setWrapping(false);
        param1SpinBox->setFrame(true);
        param1SpinBox->setAccelerated(true);
        param1SpinBox->setKeyboardTracking(false);
        param1SpinBox->setDecimals(2);
        param1SpinBox->setMinimum(0);
        param1SpinBox->setMaximum(100000);
        param1SpinBox->setSingleStep(1);

        horizontalLayout->addWidget(param1SpinBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        retranslateUi(QGCMissionConditionDelay);

        QMetaObject::connectSlotsByName(QGCMissionConditionDelay);
    } // setupUi

    void retranslateUi(QWidget *QGCMissionConditionDelay)
    {
        QGCMissionConditionDelay->setWindowTitle(QApplication::translate("QGCMissionConditionDelay", "Form", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        param1SpinBox->setToolTip(QApplication::translate("QGCMissionConditionDelay", "Delay duration", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        param1SpinBox->setStatusTip(QApplication::translate("QGCMissionConditionDelay", "Delay duration", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        param1SpinBox->setPrefix(QApplication::translate("QGCMissionConditionDelay", "Duration: ", Q_NULLPTR));
        param1SpinBox->setSuffix(QApplication::translate("QGCMissionConditionDelay", "s", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QGCMissionConditionDelay: public Ui_QGCMissionConditionDelay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCMISSIONCONDITIONDELAY_H
