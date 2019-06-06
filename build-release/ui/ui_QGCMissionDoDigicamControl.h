/********************************************************************************
** Form generated from reading UI file 'QGCMissionDoDigicamControl.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCMISSIONDODIGICAMCONTROL_H
#define UI_QGCMISSIONDODIGICAMCONTROL_H

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

class Ui_QGCMissionDoDigicamControl
{
public:
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *param1SpinBox;
    QDoubleSpinBox *param4SpinBox;
    QDoubleSpinBox *param5SpinBox;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *QGCMissionDoDigicamControl)
    {
        if (QGCMissionDoDigicamControl->objectName().isEmpty())
            QGCMissionDoDigicamControl->setObjectName(QStringLiteral("QGCMissionDoDigicamControl"));
        QGCMissionDoDigicamControl->resize(1547, 27);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QGCMissionDoDigicamControl->sizePolicy().hasHeightForWidth());
        QGCMissionDoDigicamControl->setSizePolicy(sizePolicy);
        QGCMissionDoDigicamControl->setMinimumSize(QSize(0, 0));
        horizontalLayout = new QHBoxLayout(QGCMissionDoDigicamControl);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        param1SpinBox = new QDoubleSpinBox(QGCMissionDoDigicamControl);
        param1SpinBox->setObjectName(QStringLiteral("param1SpinBox"));
        param1SpinBox->setMinimumSize(QSize(135, 0));
        param1SpinBox->setDecimals(0);

        horizontalLayout->addWidget(param1SpinBox);

        param4SpinBox = new QDoubleSpinBox(QGCMissionDoDigicamControl);
        param4SpinBox->setObjectName(QStringLiteral("param4SpinBox"));
        param4SpinBox->setMinimumSize(QSize(135, 0));
        param4SpinBox->setDecimals(0);

        horizontalLayout->addWidget(param4SpinBox);

        param5SpinBox = new QDoubleSpinBox(QGCMissionDoDigicamControl);
        param5SpinBox->setObjectName(QStringLiteral("param5SpinBox"));
        param5SpinBox->setMinimumSize(QSize(100, 0));
        param5SpinBox->setDecimals(0);

        horizontalLayout->addWidget(param5SpinBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        retranslateUi(QGCMissionDoDigicamControl);

        QMetaObject::connectSlotsByName(QGCMissionDoDigicamControl);
    } // setupUi

    void retranslateUi(QWidget *QGCMissionDoDigicamControl)
    {
        QGCMissionDoDigicamControl->setWindowTitle(QApplication::translate("QGCMissionDoDigicamControl", "Form", Q_NULLPTR));
        param1SpinBox->setPrefix(QApplication::translate("QGCMissionDoDigicamControl", "off/on ", Q_NULLPTR));
        param1SpinBox->setSuffix(QString());
        param4SpinBox->setPrefix(QApplication::translate("QGCMissionDoDigicamControl", "Focus Lock ", Q_NULLPTR));
        param5SpinBox->setPrefix(QApplication::translate("QGCMissionDoDigicamControl", " Shutter ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QGCMissionDoDigicamControl: public Ui_QGCMissionDoDigicamControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCMISSIONDODIGICAMCONTROL_H
