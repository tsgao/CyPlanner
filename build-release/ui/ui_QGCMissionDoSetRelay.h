/********************************************************************************
** Form generated from reading UI file 'QGCMissionDoSetRelay.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCMISSIONDOSETRELAY_H
#define UI_QGCMISSIONDOSETRELAY_H

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

class Ui_QGCMissionDoSetRelay
{
public:
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *param1SpinBox;
    QDoubleSpinBox *param2SpinBox;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *QGCMissionDoSetRelay)
    {
        if (QGCMissionDoSetRelay->objectName().isEmpty())
            QGCMissionDoSetRelay->setObjectName(QStringLiteral("QGCMissionDoSetRelay"));
        QGCMissionDoSetRelay->resize(1547, 27);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QGCMissionDoSetRelay->sizePolicy().hasHeightForWidth());
        QGCMissionDoSetRelay->setSizePolicy(sizePolicy);
        QGCMissionDoSetRelay->setMinimumSize(QSize(0, 0));
        horizontalLayout = new QHBoxLayout(QGCMissionDoSetRelay);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        param1SpinBox = new QDoubleSpinBox(QGCMissionDoSetRelay);
        param1SpinBox->setObjectName(QStringLiteral("param1SpinBox"));
        param1SpinBox->setMinimumSize(QSize(135, 0));
        param1SpinBox->setMaximumSize(QSize(135, 16777215));
        param1SpinBox->setKeyboardTracking(false);
        param1SpinBox->setDecimals(0);
        param1SpinBox->setMinimum(-2.14748e+9);
        param1SpinBox->setMaximum(2.14748e+9);

        horizontalLayout->addWidget(param1SpinBox);

        param2SpinBox = new QDoubleSpinBox(QGCMissionDoSetRelay);
        param2SpinBox->setObjectName(QStringLiteral("param2SpinBox"));
        param2SpinBox->setMinimumSize(QSize(135, 0));
        param2SpinBox->setMaximumSize(QSize(135, 16777215));
        param2SpinBox->setKeyboardTracking(false);
        param2SpinBox->setDecimals(0);
        param2SpinBox->setMinimum(-2.14748e+9);
        param2SpinBox->setMaximum(2.14748e+9);

        horizontalLayout->addWidget(param2SpinBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        horizontalLayout->setStretch(0, 10);
        horizontalLayout->setStretch(1, 10);

        retranslateUi(QGCMissionDoSetRelay);

        QMetaObject::connectSlotsByName(QGCMissionDoSetRelay);
    } // setupUi

    void retranslateUi(QWidget *QGCMissionDoSetRelay)
    {
        QGCMissionDoSetRelay->setWindowTitle(QApplication::translate("QGCMissionDoSetRelay", "Form", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        param1SpinBox->setToolTip(QApplication::translate("QGCMissionDoSetRelay", "Mission parameter #1", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        param1SpinBox->setStatusTip(QApplication::translate("QGCMissionDoSetRelay", "Mission parameter #1", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        param1SpinBox->setPrefix(QApplication::translate("QGCMissionDoSetRelay", "off/on ", Q_NULLPTR));
        param1SpinBox->setSuffix(QApplication::translate("QGCMissionDoSetRelay", " (0 or 1)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        param2SpinBox->setToolTip(QApplication::translate("QGCMissionDoSetRelay", "Mission parameter #2", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        param2SpinBox->setStatusTip(QApplication::translate("QGCMissionDoSetRelay", "Mission parameter #2", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        param2SpinBox->setPrefix(QApplication::translate("QGCMissionDoSetRelay", "Delay ", Q_NULLPTR));
        param2SpinBox->setSuffix(QApplication::translate("QGCMissionDoSetRelay", " (s)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QGCMissionDoSetRelay: public Ui_QGCMissionDoSetRelay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCMISSIONDOSETRELAY_H
