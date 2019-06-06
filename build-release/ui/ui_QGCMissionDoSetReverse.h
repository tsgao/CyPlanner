/********************************************************************************
** Form generated from reading UI file 'QGCMissionDoSetReverse.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCMISSIONDOSETREVERSE_H
#define UI_QGCMISSIONDOSETREVERSE_H

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

class Ui_QGCMissionDoSetReverse
{
public:
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *param1SpinBox;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *QGCMissionDoSetReverse)
    {
        if (QGCMissionDoSetReverse->objectName().isEmpty())
            QGCMissionDoSetReverse->setObjectName(QStringLiteral("QGCMissionDoSetReverse"));
        QGCMissionDoSetReverse->resize(1547, 27);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QGCMissionDoSetReverse->sizePolicy().hasHeightForWidth());
        QGCMissionDoSetReverse->setSizePolicy(sizePolicy);
        QGCMissionDoSetReverse->setMinimumSize(QSize(0, 0));
        horizontalLayout = new QHBoxLayout(QGCMissionDoSetReverse);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        param1SpinBox = new QDoubleSpinBox(QGCMissionDoSetReverse);
        param1SpinBox->setObjectName(QStringLiteral("param1SpinBox"));
        param1SpinBox->setMinimumSize(QSize(135, 0));
        param1SpinBox->setMaximumSize(QSize(135, 16777215));
        param1SpinBox->setKeyboardTracking(false);
        param1SpinBox->setDecimals(0);
        param1SpinBox->setMinimum(-2.14748e+9);
        param1SpinBox->setMaximum(2.14748e+9);

        horizontalLayout->addWidget(param1SpinBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        horizontalLayout->setStretch(0, 10);

        retranslateUi(QGCMissionDoSetReverse);

        QMetaObject::connectSlotsByName(QGCMissionDoSetReverse);
    } // setupUi

    void retranslateUi(QWidget *QGCMissionDoSetReverse)
    {
        QGCMissionDoSetReverse->setWindowTitle(QApplication::translate("QGCMissionDoSetReverse", "Form", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        param1SpinBox->setToolTip(QApplication::translate("QGCMissionDoSetReverse", "Mission parameter #1", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        param1SpinBox->setStatusTip(QApplication::translate("QGCMissionDoSetReverse", "Mission parameter #1", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        param1SpinBox->setPrefix(QApplication::translate("QGCMissionDoSetReverse", "off/on ", Q_NULLPTR));
        param1SpinBox->setSuffix(QApplication::translate("QGCMissionDoSetReverse", "  (0 or 1)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QGCMissionDoSetReverse: public Ui_QGCMissionDoSetReverse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCMISSIONDOSETREVERSE_H
