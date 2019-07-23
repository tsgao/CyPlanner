/********************************************************************************
** Form generated from reading UI file 'QGCMissionNavContinueChangeAlt.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCMISSIONNAVCONTINUECHANGEALT_H
#define UI_QGCMISSIONNAVCONTINUECHANGEALT_H

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

class Ui_QGCMissionNavContinueChangeAlt
{
public:
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *param7SpinBox;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *QGCMissionNavContinueChangeAlt)
    {
        if (QGCMissionNavContinueChangeAlt->objectName().isEmpty())
            QGCMissionNavContinueChangeAlt->setObjectName(QStringLiteral("QGCMissionNavContinueChangeAlt"));
        QGCMissionNavContinueChangeAlt->resize(191, 27);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QGCMissionNavContinueChangeAlt->sizePolicy().hasHeightForWidth());
        QGCMissionNavContinueChangeAlt->setSizePolicy(sizePolicy);
        QGCMissionNavContinueChangeAlt->setMinimumSize(QSize(0, 0));
        QGCMissionNavContinueChangeAlt->setMaximumSize(QSize(191, 16777215));
        horizontalLayout = new QHBoxLayout(QGCMissionNavContinueChangeAlt);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        param7SpinBox = new QDoubleSpinBox(QGCMissionNavContinueChangeAlt);
        param7SpinBox->setObjectName(QStringLiteral("param7SpinBox"));
        param7SpinBox->setMinimumSize(QSize(75, 0));
        param7SpinBox->setMaximumSize(QSize(75, 16777215));
        param7SpinBox->setKeyboardTracking(false);
        param7SpinBox->setDecimals(2);
        param7SpinBox->setMinimum(-2.14748e+9);
        param7SpinBox->setMaximum(2.14748e+9);

        horizontalLayout->addWidget(param7SpinBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        horizontalLayout->setStretch(0, 10);

        retranslateUi(QGCMissionNavContinueChangeAlt);

        QMetaObject::connectSlotsByName(QGCMissionNavContinueChangeAlt);
    } // setupUi

    void retranslateUi(QWidget *QGCMissionNavContinueChangeAlt)
    {
        QGCMissionNavContinueChangeAlt->setWindowTitle(QApplication::translate("QGCMissionNavContinueChangeAlt", "Form", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        param7SpinBox->setToolTip(QApplication::translate("QGCMissionNavContinueChangeAlt", "Mission parameter #7", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        param7SpinBox->setStatusTip(QApplication::translate("QGCMissionNavContinueChangeAlt", "Altitude", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        param7SpinBox->setPrefix(QApplication::translate("QGCMissionNavContinueChangeAlt", "alt ", Q_NULLPTR));
        param7SpinBox->setSuffix(QApplication::translate("QGCMissionNavContinueChangeAlt", "m", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QGCMissionNavContinueChangeAlt: public Ui_QGCMissionNavContinueChangeAlt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCMISSIONNAVCONTINUECHANGEALT_H
