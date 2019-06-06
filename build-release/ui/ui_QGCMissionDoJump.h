/********************************************************************************
** Form generated from reading UI file 'QGCMissionDoJump.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCMISSIONDOJUMP_H
#define UI_QGCMISSIONDOJUMP_H

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

class Ui_QGCMissionDoJump
{
public:
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *param1SpinBox;
    QDoubleSpinBox *param2SpinBox;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *QGCMissionDoJump)
    {
        if (QGCMissionDoJump->objectName().isEmpty())
            QGCMissionDoJump->setObjectName(QStringLiteral("QGCMissionDoJump"));
        QGCMissionDoJump->resize(448, 37);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QGCMissionDoJump->sizePolicy().hasHeightForWidth());
        QGCMissionDoJump->setSizePolicy(sizePolicy);
        QGCMissionDoJump->setMinimumSize(QSize(0, 0));
        QGCMissionDoJump->setStyleSheet(QStringLiteral(""));
        horizontalLayout = new QHBoxLayout(QGCMissionDoJump);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        param1SpinBox = new QDoubleSpinBox(QGCMissionDoJump);
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
        param1SpinBox->setDecimals(0);
        param1SpinBox->setMinimum(0);
        param1SpinBox->setMaximum(10000);
        param1SpinBox->setSingleStep(1);

        horizontalLayout->addWidget(param1SpinBox);

        param2SpinBox = new QDoubleSpinBox(QGCMissionDoJump);
        param2SpinBox->setObjectName(QStringLiteral("param2SpinBox"));
        sizePolicy1.setHeightForWidth(param2SpinBox->sizePolicy().hasHeightForWidth());
        param2SpinBox->setSizePolicy(sizePolicy1);
        param2SpinBox->setMinimumSize(QSize(135, 0));
        param2SpinBox->setMaximumSize(QSize(135, 16777215));
        param2SpinBox->setFocusPolicy(Qt::WheelFocus);
        param2SpinBox->setKeyboardTracking(false);
        param2SpinBox->setDecimals(0);
        param2SpinBox->setMinimum(-1);
        param2SpinBox->setMaximum(1e+6);
        param2SpinBox->setSingleStep(1);
        param2SpinBox->setValue(1);

        horizontalLayout->addWidget(param2SpinBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        retranslateUi(QGCMissionDoJump);

        QMetaObject::connectSlotsByName(QGCMissionDoJump);
    } // setupUi

    void retranslateUi(QWidget *QGCMissionDoJump)
    {
        QGCMissionDoJump->setWindowTitle(QApplication::translate("QGCMissionDoJump", "Form", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        param1SpinBox->setToolTip(QApplication::translate("QGCMissionDoJump", "Mission element ID to jump to", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        param1SpinBox->setStatusTip(QApplication::translate("QGCMissionDoJump", "Mission element ID to jump to", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        param1SpinBox->setPrefix(QApplication::translate("QGCMissionDoJump", "Jump to index ", Q_NULLPTR));
        param1SpinBox->setSuffix(QString());
#ifndef QT_NO_TOOLTIP
        param2SpinBox->setToolTip(QApplication::translate("QGCMissionDoJump", "Maximal number of jumps", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        param2SpinBox->setStatusTip(QApplication::translate("QGCMissionDoJump", "Maximal number of jumps", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        param2SpinBox->setPrefix(QString());
        param2SpinBox->setSuffix(QApplication::translate("QGCMissionDoJump", " time(s)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QGCMissionDoJump: public Ui_QGCMissionDoJump {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCMISSIONDOJUMP_H
