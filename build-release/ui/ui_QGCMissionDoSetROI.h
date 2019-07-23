/********************************************************************************
** Form generated from reading UI file 'QGCMissionDoSetROI.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCMISSIONDOSETROI_H
#define UI_QGCMISSIONDOSETROI_H

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

class Ui_QGCMissionDoSetROI
{
public:
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *param5SpinBox;
    QDoubleSpinBox *param6SpinBox;
    QDoubleSpinBox *param7SpinBox;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *QGCMissionDoSetROI)
    {
        if (QGCMissionDoSetROI->objectName().isEmpty())
            QGCMissionDoSetROI->setObjectName(QStringLiteral("QGCMissionDoSetROI"));
        QGCMissionDoSetROI->resize(375, 32);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QGCMissionDoSetROI->sizePolicy().hasHeightForWidth());
        QGCMissionDoSetROI->setSizePolicy(sizePolicy);
        QGCMissionDoSetROI->setMinimumSize(QSize(0, 0));
        horizontalLayout = new QHBoxLayout(QGCMissionDoSetROI);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        param5SpinBox = new QDoubleSpinBox(QGCMissionDoSetROI);
        param5SpinBox->setObjectName(QStringLiteral("param5SpinBox"));
        param5SpinBox->setMinimumSize(QSize(135, 0));
        param5SpinBox->setMaximumSize(QSize(135, 16777215));
        param5SpinBox->setKeyboardTracking(false);
        param5SpinBox->setDecimals(7);
        param5SpinBox->setMinimum(-2.14748e+9);
        param5SpinBox->setMaximum(2.14748e+9);

        horizontalLayout->addWidget(param5SpinBox);

        param6SpinBox = new QDoubleSpinBox(QGCMissionDoSetROI);
        param6SpinBox->setObjectName(QStringLiteral("param6SpinBox"));
        param6SpinBox->setMinimumSize(QSize(135, 0));
        param6SpinBox->setMaximumSize(QSize(135, 16777215));
        param6SpinBox->setKeyboardTracking(false);
        param6SpinBox->setDecimals(7);
        param6SpinBox->setMinimum(-2.14748e+9);
        param6SpinBox->setMaximum(2.14748e+9);

        horizontalLayout->addWidget(param6SpinBox);

        param7SpinBox = new QDoubleSpinBox(QGCMissionDoSetROI);
        param7SpinBox->setObjectName(QStringLiteral("param7SpinBox"));
        param7SpinBox->setMaximumSize(QSize(75, 16777215));
        param7SpinBox->setKeyboardTracking(false);
        param7SpinBox->setDecimals(1);
        param7SpinBox->setMinimum(-2.14748e+9);
        param7SpinBox->setMaximum(2.14748e+9);

        horizontalLayout->addWidget(param7SpinBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        horizontalLayout->setStretch(0, 10);
        horizontalLayout->setStretch(1, 10);
        horizontalLayout->setStretch(2, 10);

        retranslateUi(QGCMissionDoSetROI);

        QMetaObject::connectSlotsByName(QGCMissionDoSetROI);
    } // setupUi

    void retranslateUi(QWidget *QGCMissionDoSetROI)
    {
        QGCMissionDoSetROI->setWindowTitle(QApplication::translate("QGCMissionDoSetROI", "Form", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        param5SpinBox->setToolTip(QApplication::translate("QGCMissionDoSetROI", "Mission parameter #5", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        param5SpinBox->setStatusTip(QApplication::translate("QGCMissionDoSetROI", "Mission parameter #5", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        param5SpinBox->setPrefix(QApplication::translate("QGCMissionDoSetROI", "lat ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        param6SpinBox->setToolTip(QApplication::translate("QGCMissionDoSetROI", "Mission parameter #6", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        param6SpinBox->setStatusTip(QApplication::translate("QGCMissionDoSetROI", "Mission parameter #6", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        param6SpinBox->setPrefix(QApplication::translate("QGCMissionDoSetROI", "Lon ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        param7SpinBox->setToolTip(QApplication::translate("QGCMissionDoSetROI", "Mission parameter #7", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        param7SpinBox->setStatusTip(QApplication::translate("QGCMissionDoSetROI", "Mission parameter #7", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        param7SpinBox->setPrefix(QApplication::translate("QGCMissionDoSetROI", "alt ", Q_NULLPTR));
        param7SpinBox->setSuffix(QApplication::translate("QGCMissionDoSetROI", " m", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QGCMissionDoSetROI: public Ui_QGCMissionDoSetROI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCMISSIONDOSETROI_H
