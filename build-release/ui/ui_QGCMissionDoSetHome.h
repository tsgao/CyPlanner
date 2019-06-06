/********************************************************************************
** Form generated from reading UI file 'QGCMissionDoSetHome.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCMISSIONDOSETHOME_H
#define UI_QGCMISSIONDOSETHOME_H

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

class Ui_QGCMissionDoSetHome
{
public:
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *param5SpinBox;
    QDoubleSpinBox *param6SpinBox;
    QDoubleSpinBox *param1SpinBox;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *QGCMissionDoSetHome)
    {
        if (QGCMissionDoSetHome->objectName().isEmpty())
            QGCMissionDoSetHome->setObjectName(QStringLiteral("QGCMissionDoSetHome"));
        QGCMissionDoSetHome->resize(400, 32);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QGCMissionDoSetHome->sizePolicy().hasHeightForWidth());
        QGCMissionDoSetHome->setSizePolicy(sizePolicy);
        QGCMissionDoSetHome->setMinimumSize(QSize(0, 0));
        QGCMissionDoSetHome->setMaximumSize(QSize(16777215, 16777215));
        horizontalLayout = new QHBoxLayout(QGCMissionDoSetHome);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        param5SpinBox = new QDoubleSpinBox(QGCMissionDoSetHome);
        param5SpinBox->setObjectName(QStringLiteral("param5SpinBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(param5SpinBox->sizePolicy().hasHeightForWidth());
        param5SpinBox->setSizePolicy(sizePolicy1);
        param5SpinBox->setMinimumSize(QSize(135, 0));
        param5SpinBox->setMaximumSize(QSize(135, 16777215));
        param5SpinBox->setKeyboardTracking(false);
        param5SpinBox->setDecimals(7);
        param5SpinBox->setMinimum(-2.14748e+9);
        param5SpinBox->setMaximum(2.14748e+9);

        horizontalLayout->addWidget(param5SpinBox);

        param6SpinBox = new QDoubleSpinBox(QGCMissionDoSetHome);
        param6SpinBox->setObjectName(QStringLiteral("param6SpinBox"));
        sizePolicy1.setHeightForWidth(param6SpinBox->sizePolicy().hasHeightForWidth());
        param6SpinBox->setSizePolicy(sizePolicy1);
        param6SpinBox->setMinimumSize(QSize(135, 0));
        param6SpinBox->setMaximumSize(QSize(135, 16777215));
        param6SpinBox->setKeyboardTracking(false);
        param6SpinBox->setDecimals(7);
        param6SpinBox->setMinimum(-2.14748e+9);
        param6SpinBox->setMaximum(2.14748e+9);

        horizontalLayout->addWidget(param6SpinBox);

        param1SpinBox = new QDoubleSpinBox(QGCMissionDoSetHome);
        param1SpinBox->setObjectName(QStringLiteral("param1SpinBox"));
        sizePolicy1.setHeightForWidth(param1SpinBox->sizePolicy().hasHeightForWidth());
        param1SpinBox->setSizePolicy(sizePolicy1);
        param1SpinBox->setMinimumSize(QSize(75, 0));
        param1SpinBox->setMaximumSize(QSize(75, 16777215));
        param1SpinBox->setKeyboardTracking(false);
        param1SpinBox->setDecimals(0);
        param1SpinBox->setMinimum(0);
        param1SpinBox->setMaximum(1);

        horizontalLayout->addWidget(param1SpinBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        retranslateUi(QGCMissionDoSetHome);

        QMetaObject::connectSlotsByName(QGCMissionDoSetHome);
    } // setupUi

    void retranslateUi(QWidget *QGCMissionDoSetHome)
    {
        QGCMissionDoSetHome->setWindowTitle(QApplication::translate("QGCMissionDoSetHome", "Form", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        param5SpinBox->setToolTip(QApplication::translate("QGCMissionDoSetHome", "Mission parameter #5", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        param5SpinBox->setStatusTip(QApplication::translate("QGCMissionDoSetHome", "Mission parameter #5", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        param5SpinBox->setPrefix(QApplication::translate("QGCMissionDoSetHome", "Lat ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        param6SpinBox->setToolTip(QApplication::translate("QGCMissionDoSetHome", "Mission parameter #6", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        param6SpinBox->setStatusTip(QApplication::translate("QGCMissionDoSetHome", "Mission parameter #6", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        param6SpinBox->setPrefix(QApplication::translate("QGCMissionDoSetHome", "Lon ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        param1SpinBox->setToolTip(QApplication::translate("QGCMissionDoSetHome", "Current (0) or Specified (1)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        param1SpinBox->setStatusTip(QApplication::translate("QGCMissionDoSetHome", "Mission parameter #1", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        param1SpinBox->setPrefix(QString());
        param1SpinBox->setSuffix(QString());
    } // retranslateUi

};

namespace Ui {
    class QGCMissionDoSetHome: public Ui_QGCMissionDoSetHome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCMISSIONDOSETHOME_H
