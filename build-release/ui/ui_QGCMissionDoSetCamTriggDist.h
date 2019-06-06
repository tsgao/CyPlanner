/********************************************************************************
** Form generated from reading UI file 'QGCMissionDoSetCamTriggDist.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCMISSIONDOSETCAMTRIGGDIST_H
#define UI_QGCMISSIONDOSETCAMTRIGGDIST_H

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

class Ui_QGCMissionDoSetCamTriggDist
{
public:
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *param1SpinBox;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *QGCMissionDoSetCamTriggDist)
    {
        if (QGCMissionDoSetCamTriggDist->objectName().isEmpty())
            QGCMissionDoSetCamTriggDist->setObjectName(QStringLiteral("QGCMissionDoSetCamTriggDist"));
        QGCMissionDoSetCamTriggDist->resize(760, 27);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QGCMissionDoSetCamTriggDist->sizePolicy().hasHeightForWidth());
        QGCMissionDoSetCamTriggDist->setSizePolicy(sizePolicy);
        QGCMissionDoSetCamTriggDist->setMinimumSize(QSize(0, 0));
        QGCMissionDoSetCamTriggDist->setMaximumSize(QSize(16777215, 16777215));
        horizontalLayout = new QHBoxLayout(QGCMissionDoSetCamTriggDist);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        param1SpinBox = new QDoubleSpinBox(QGCMissionDoSetCamTriggDist);
        param1SpinBox->setObjectName(QStringLiteral("param1SpinBox"));
        param1SpinBox->setMinimumSize(QSize(135, 0));
        param1SpinBox->setMaximumSize(QSize(135, 16777215));
        param1SpinBox->setKeyboardTracking(false);
        param1SpinBox->setDecimals(7);
        param1SpinBox->setMinimum(-2.14748e+9);
        param1SpinBox->setMaximum(2.14748e+9);

        horizontalLayout->addWidget(param1SpinBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        horizontalLayout->setStretch(0, 10);

        retranslateUi(QGCMissionDoSetCamTriggDist);

        QMetaObject::connectSlotsByName(QGCMissionDoSetCamTriggDist);
    } // setupUi

    void retranslateUi(QWidget *QGCMissionDoSetCamTriggDist)
    {
        QGCMissionDoSetCamTriggDist->setWindowTitle(QApplication::translate("QGCMissionDoSetCamTriggDist", "Form", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        param1SpinBox->setToolTip(QApplication::translate("QGCMissionDoSetCamTriggDist", "Mission parameter #1", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        param1SpinBox->setStatusTip(QApplication::translate("QGCMissionDoSetCamTriggDist", "Mission parameter #1", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        param1SpinBox->setPrefix(QApplication::translate("QGCMissionDoSetCamTriggDist", "Distance ", Q_NULLPTR));
        param1SpinBox->setSuffix(QApplication::translate("QGCMissionDoSetCamTriggDist", " (m)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QGCMissionDoSetCamTriggDist: public Ui_QGCMissionDoSetCamTriggDist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCMISSIONDOSETCAMTRIGGDIST_H
