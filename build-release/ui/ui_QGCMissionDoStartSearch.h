/********************************************************************************
** Form generated from reading UI file 'QGCMissionDoStartSearch.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCMISSIONDOSTARTSEARCH_H
#define UI_QGCMISSIONDOSTARTSEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCMissionDoStartSearch
{
public:
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *param1SpinBox;
    QDoubleSpinBox *param2SpinBox;

    void setupUi(QWidget *QGCMissionDoStartSearch)
    {
        if (QGCMissionDoStartSearch->objectName().isEmpty())
            QGCMissionDoStartSearch->setObjectName(QStringLiteral("QGCMissionDoStartSearch"));
        QGCMissionDoStartSearch->resize(482, 27);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QGCMissionDoStartSearch->sizePolicy().hasHeightForWidth());
        QGCMissionDoStartSearch->setSizePolicy(sizePolicy);
        QGCMissionDoStartSearch->setMinimumSize(QSize(0, 0));
        horizontalLayout = new QHBoxLayout(QGCMissionDoStartSearch);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        param1SpinBox = new QDoubleSpinBox(QGCMissionDoStartSearch);
        param1SpinBox->setObjectName(QStringLiteral("param1SpinBox"));
        param1SpinBox->setKeyboardTracking(false);
        param1SpinBox->setDecimals(3);
        param1SpinBox->setMinimum(0);
        param1SpinBox->setMaximum(100);
        param1SpinBox->setSingleStep(0.1);

        horizontalLayout->addWidget(param1SpinBox);

        param2SpinBox = new QDoubleSpinBox(QGCMissionDoStartSearch);
        param2SpinBox->setObjectName(QStringLiteral("param2SpinBox"));
        param2SpinBox->setKeyboardTracking(false);
        param2SpinBox->setDecimals(0);
        param2SpinBox->setMinimum(0);
        param2SpinBox->setMaximum(2.14748e+9);

        horizontalLayout->addWidget(param2SpinBox);

        horizontalLayout->setStretch(0, 10);
        horizontalLayout->setStretch(1, 10);

        retranslateUi(QGCMissionDoStartSearch);

        QMetaObject::connectSlotsByName(QGCMissionDoStartSearch);
    } // setupUi

    void retranslateUi(QWidget *QGCMissionDoStartSearch)
    {
        QGCMissionDoStartSearch->setWindowTitle(QApplication::translate("QGCMissionDoStartSearch", "Form", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        param1SpinBox->setToolTip(QApplication::translate("QGCMissionDoStartSearch", "Minimal required detection confidence", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        param1SpinBox->setStatusTip(QApplication::translate("QGCMissionDoStartSearch", "Minimal required detection confidence", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        param1SpinBox->setPrefix(QApplication::translate("QGCMissionDoStartSearch", "Conf: ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        param2SpinBox->setToolTip(QApplication::translate("QGCMissionDoStartSearch", "Required number of detections", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        param2SpinBox->setStatusTip(QApplication::translate("QGCMissionDoStartSearch", "Required number of detections", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        param2SpinBox->setPrefix(QApplication::translate("QGCMissionDoStartSearch", "#det: ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QGCMissionDoStartSearch: public Ui_QGCMissionDoStartSearch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCMISSIONDOSTARTSEARCH_H
