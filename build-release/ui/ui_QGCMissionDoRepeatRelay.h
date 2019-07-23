/********************************************************************************
** Form generated from reading UI file 'QGCMissionDoRepeatRelay.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCMISSIONDOREPEATRELAY_H
#define UI_QGCMISSIONDOREPEATRELAY_H

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

class Ui_QGCMissionDoRepeatRelay
{
public:
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *param1SpinBox;
    QDoubleSpinBox *param2SpinBox;
    QDoubleSpinBox *param3SpinBox;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *QGCMissionDoRepeatRelay)
    {
        if (QGCMissionDoRepeatRelay->objectName().isEmpty())
            QGCMissionDoRepeatRelay->setObjectName(QStringLiteral("QGCMissionDoRepeatRelay"));
        QGCMissionDoRepeatRelay->resize(1547, 27);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QGCMissionDoRepeatRelay->sizePolicy().hasHeightForWidth());
        QGCMissionDoRepeatRelay->setSizePolicy(sizePolicy);
        QGCMissionDoRepeatRelay->setMinimumSize(QSize(0, 0));
        horizontalLayout = new QHBoxLayout(QGCMissionDoRepeatRelay);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        param1SpinBox = new QDoubleSpinBox(QGCMissionDoRepeatRelay);
        param1SpinBox->setObjectName(QStringLiteral("param1SpinBox"));
        param1SpinBox->setMinimumSize(QSize(135, 0));
        param1SpinBox->setMaximumSize(QSize(135, 16777215));
        param1SpinBox->setKeyboardTracking(false);
        param1SpinBox->setDecimals(0);
        param1SpinBox->setMinimum(-2.14748e+9);
        param1SpinBox->setMaximum(2.14748e+9);

        horizontalLayout->addWidget(param1SpinBox);

        param2SpinBox = new QDoubleSpinBox(QGCMissionDoRepeatRelay);
        param2SpinBox->setObjectName(QStringLiteral("param2SpinBox"));
        param2SpinBox->setMinimumSize(QSize(135, 0));
        param2SpinBox->setMaximumSize(QSize(135, 16777215));
        param2SpinBox->setKeyboardTracking(false);
        param2SpinBox->setDecimals(0);
        param2SpinBox->setMinimum(-2.14748e+9);
        param2SpinBox->setMaximum(2.14748e+9);

        horizontalLayout->addWidget(param2SpinBox);

        param3SpinBox = new QDoubleSpinBox(QGCMissionDoRepeatRelay);
        param3SpinBox->setObjectName(QStringLiteral("param3SpinBox"));
        param3SpinBox->setMinimumSize(QSize(75, 0));
        param3SpinBox->setMaximumSize(QSize(75, 16777215));
        param3SpinBox->setKeyboardTracking(false);
        param3SpinBox->setDecimals(0);
        param3SpinBox->setMinimum(-2.14748e+9);
        param3SpinBox->setMaximum(2.14748e+9);

        horizontalLayout->addWidget(param3SpinBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        horizontalLayout->setStretch(0, 10);
        horizontalLayout->setStretch(1, 10);

        retranslateUi(QGCMissionDoRepeatRelay);

        QMetaObject::connectSlotsByName(QGCMissionDoRepeatRelay);
    } // setupUi

    void retranslateUi(QWidget *QGCMissionDoRepeatRelay)
    {
        QGCMissionDoRepeatRelay->setWindowTitle(QApplication::translate("QGCMissionDoRepeatRelay", "Form", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        param1SpinBox->setToolTip(QApplication::translate("QGCMissionDoRepeatRelay", "Mission parameter #1", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        param1SpinBox->setStatusTip(QApplication::translate("QGCMissionDoRepeatRelay", "Mission parameter #1", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        param1SpinBox->setPrefix(QApplication::translate("QGCMissionDoRepeatRelay", "Relay ", Q_NULLPTR));
        param1SpinBox->setSuffix(QApplication::translate("QGCMissionDoRepeatRelay", " id ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        param2SpinBox->setToolTip(QApplication::translate("QGCMissionDoRepeatRelay", "Mission parameter #2", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        param2SpinBox->setStatusTip(QApplication::translate("QGCMissionDoRepeatRelay", "Mission parameter #2", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        param2SpinBox->setPrefix(QApplication::translate("QGCMissionDoRepeatRelay", "Reps ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        param3SpinBox->setToolTip(QApplication::translate("QGCMissionDoRepeatRelay", "Mission parameter #3", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        param3SpinBox->setStatusTip(QApplication::translate("QGCMissionDoRepeatRelay", "Mission parameter #3", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        param3SpinBox->setPrefix(QApplication::translate("QGCMissionDoRepeatRelay", "Delay ", Q_NULLPTR));
        param3SpinBox->setSuffix(QApplication::translate("QGCMissionDoRepeatRelay", "(s)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QGCMissionDoRepeatRelay: public Ui_QGCMissionDoRepeatRelay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCMISSIONDOREPEATRELAY_H
