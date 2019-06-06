/********************************************************************************
** Form generated from reading UI file 'QGCMissionNavSweep.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCMISSIONNAVSWEEP_H
#define UI_QGCMISSIONNAVSWEEP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCMissionNavSweep
{
public:
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *posN1SpinBox;
    QDoubleSpinBox *posE1SpinBox;
    QDoubleSpinBox *posN2SpinBox;
    QDoubleSpinBox *posE2SpinBox;
    QDoubleSpinBox *posDSpinBox;
    QDoubleSpinBox *lat1SpinBox;
    QDoubleSpinBox *lon1SpinBox;
    QDoubleSpinBox *lat2SpinBox;
    QDoubleSpinBox *lon2SpinBox;
    QDoubleSpinBox *altSpinBox;
    QDoubleSpinBox *radSpinBox;

    void setupUi(QWidget *QGCMissionNavSweep)
    {
        if (QGCMissionNavSweep->objectName().isEmpty())
            QGCMissionNavSweep->setObjectName(QStringLiteral("QGCMissionNavSweep"));
        QGCMissionNavSweep->resize(2208, 37);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QGCMissionNavSweep->sizePolicy().hasHeightForWidth());
        QGCMissionNavSweep->setSizePolicy(sizePolicy);
        QGCMissionNavSweep->setMinimumSize(QSize(0, 0));
        QGCMissionNavSweep->setStyleSheet(QStringLiteral(""));
        horizontalLayout = new QHBoxLayout(QGCMissionNavSweep);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        posN1SpinBox = new QDoubleSpinBox(QGCMissionNavSweep);
        posN1SpinBox->setObjectName(QStringLiteral("posN1SpinBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(posN1SpinBox->sizePolicy().hasHeightForWidth());
        posN1SpinBox->setSizePolicy(sizePolicy1);
        posN1SpinBox->setFocusPolicy(Qt::WheelFocus);
        posN1SpinBox->setWrapping(false);
        posN1SpinBox->setFrame(true);
        posN1SpinBox->setAccelerated(true);
        posN1SpinBox->setKeyboardTracking(false);
        posN1SpinBox->setMinimum(-10000);
        posN1SpinBox->setMaximum(10000);
        posN1SpinBox->setSingleStep(0.05);

        horizontalLayout->addWidget(posN1SpinBox);

        posE1SpinBox = new QDoubleSpinBox(QGCMissionNavSweep);
        posE1SpinBox->setObjectName(QStringLiteral("posE1SpinBox"));
        sizePolicy1.setHeightForWidth(posE1SpinBox->sizePolicy().hasHeightForWidth());
        posE1SpinBox->setSizePolicy(sizePolicy1);
        posE1SpinBox->setFocusPolicy(Qt::WheelFocus);
        posE1SpinBox->setKeyboardTracking(false);
        posE1SpinBox->setMinimum(-10000);
        posE1SpinBox->setMaximum(10000);
        posE1SpinBox->setSingleStep(0.05);
        posE1SpinBox->setValue(0);

        horizontalLayout->addWidget(posE1SpinBox);

        posN2SpinBox = new QDoubleSpinBox(QGCMissionNavSweep);
        posN2SpinBox->setObjectName(QStringLiteral("posN2SpinBox"));
        sizePolicy1.setHeightForWidth(posN2SpinBox->sizePolicy().hasHeightForWidth());
        posN2SpinBox->setSizePolicy(sizePolicy1);
        posN2SpinBox->setFocusPolicy(Qt::WheelFocus);
        posN2SpinBox->setWrapping(false);
        posN2SpinBox->setFrame(true);
        posN2SpinBox->setAccelerated(true);
        posN2SpinBox->setKeyboardTracking(false);
        posN2SpinBox->setMinimum(-10000);
        posN2SpinBox->setMaximum(10000);
        posN2SpinBox->setSingleStep(0.05);

        horizontalLayout->addWidget(posN2SpinBox);

        posE2SpinBox = new QDoubleSpinBox(QGCMissionNavSweep);
        posE2SpinBox->setObjectName(QStringLiteral("posE2SpinBox"));
        sizePolicy1.setHeightForWidth(posE2SpinBox->sizePolicy().hasHeightForWidth());
        posE2SpinBox->setSizePolicy(sizePolicy1);
        posE2SpinBox->setFocusPolicy(Qt::WheelFocus);
        posE2SpinBox->setKeyboardTracking(false);
        posE2SpinBox->setMinimum(-10000);
        posE2SpinBox->setMaximum(10000);
        posE2SpinBox->setSingleStep(0.05);
        posE2SpinBox->setValue(0);

        horizontalLayout->addWidget(posE2SpinBox);

        posDSpinBox = new QDoubleSpinBox(QGCMissionNavSweep);
        posDSpinBox->setObjectName(QStringLiteral("posDSpinBox"));
        sizePolicy1.setHeightForWidth(posDSpinBox->sizePolicy().hasHeightForWidth());
        posDSpinBox->setSizePolicy(sizePolicy1);
        posDSpinBox->setFocusPolicy(Qt::WheelFocus);
        posDSpinBox->setKeyboardTracking(false);
        posDSpinBox->setMinimum(-10000);
        posDSpinBox->setMaximum(10000);
        posDSpinBox->setSingleStep(0.05);

        horizontalLayout->addWidget(posDSpinBox);

        lat1SpinBox = new QDoubleSpinBox(QGCMissionNavSweep);
        lat1SpinBox->setObjectName(QStringLiteral("lat1SpinBox"));
        sizePolicy1.setHeightForWidth(lat1SpinBox->sizePolicy().hasHeightForWidth());
        lat1SpinBox->setSizePolicy(sizePolicy1);
        lat1SpinBox->setFocusPolicy(Qt::WheelFocus);
        lat1SpinBox->setKeyboardTracking(false);
        lat1SpinBox->setDecimals(7);
        lat1SpinBox->setMinimum(-90);
        lat1SpinBox->setMaximum(90);
        lat1SpinBox->setSingleStep(1e-5);

        horizontalLayout->addWidget(lat1SpinBox);

        lon1SpinBox = new QDoubleSpinBox(QGCMissionNavSweep);
        lon1SpinBox->setObjectName(QStringLiteral("lon1SpinBox"));
        sizePolicy1.setHeightForWidth(lon1SpinBox->sizePolicy().hasHeightForWidth());
        lon1SpinBox->setSizePolicy(sizePolicy1);
        lon1SpinBox->setFocusPolicy(Qt::WheelFocus);
        lon1SpinBox->setKeyboardTracking(false);
        lon1SpinBox->setDecimals(7);
        lon1SpinBox->setMinimum(-180);
        lon1SpinBox->setMaximum(180);
        lon1SpinBox->setSingleStep(1e-5);

        horizontalLayout->addWidget(lon1SpinBox);

        lat2SpinBox = new QDoubleSpinBox(QGCMissionNavSweep);
        lat2SpinBox->setObjectName(QStringLiteral("lat2SpinBox"));
        sizePolicy1.setHeightForWidth(lat2SpinBox->sizePolicy().hasHeightForWidth());
        lat2SpinBox->setSizePolicy(sizePolicy1);
        lat2SpinBox->setFocusPolicy(Qt::WheelFocus);
        lat2SpinBox->setKeyboardTracking(false);
        lat2SpinBox->setDecimals(7);
        lat2SpinBox->setMinimum(-90);
        lat2SpinBox->setMaximum(90);
        lat2SpinBox->setSingleStep(1e-5);

        horizontalLayout->addWidget(lat2SpinBox);

        lon2SpinBox = new QDoubleSpinBox(QGCMissionNavSweep);
        lon2SpinBox->setObjectName(QStringLiteral("lon2SpinBox"));
        sizePolicy1.setHeightForWidth(lon2SpinBox->sizePolicy().hasHeightForWidth());
        lon2SpinBox->setSizePolicy(sizePolicy1);
        lon2SpinBox->setFocusPolicy(Qt::WheelFocus);
        lon2SpinBox->setKeyboardTracking(false);
        lon2SpinBox->setDecimals(7);
        lon2SpinBox->setMinimum(-180);
        lon2SpinBox->setMaximum(180);
        lon2SpinBox->setSingleStep(1e-5);

        horizontalLayout->addWidget(lon2SpinBox);

        altSpinBox = new QDoubleSpinBox(QGCMissionNavSweep);
        altSpinBox->setObjectName(QStringLiteral("altSpinBox"));
        sizePolicy1.setHeightForWidth(altSpinBox->sizePolicy().hasHeightForWidth());
        altSpinBox->setSizePolicy(sizePolicy1);
        altSpinBox->setKeyboardTracking(false);
        altSpinBox->setDecimals(2);
        altSpinBox->setMinimum(-100000);
        altSpinBox->setMaximum(100000);

        horizontalLayout->addWidget(altSpinBox);

        radSpinBox = new QDoubleSpinBox(QGCMissionNavSweep);
        radSpinBox->setObjectName(QStringLiteral("radSpinBox"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(radSpinBox->sizePolicy().hasHeightForWidth());
        radSpinBox->setSizePolicy(sizePolicy2);
        radSpinBox->setKeyboardTracking(false);
        radSpinBox->setValue(0.2);

        horizontalLayout->addWidget(radSpinBox);


        retranslateUi(QGCMissionNavSweep);

        QMetaObject::connectSlotsByName(QGCMissionNavSweep);
    } // setupUi

    void retranslateUi(QWidget *QGCMissionNavSweep)
    {
        QGCMissionNavSweep->setWindowTitle(QApplication::translate("QGCMissionNavSweep", "Form", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        posN1SpinBox->setToolTip(QApplication::translate("QGCMissionNavSweep", "X coordinate of the first sweep area corner", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        posN1SpinBox->setStatusTip(QApplication::translate("QGCMissionNavSweep", "X coordinate of the first sweep area corner", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        posN1SpinBox->setPrefix(QApplication::translate("QGCMissionNavSweep", "(1)N ", Q_NULLPTR));
        posN1SpinBox->setSuffix(QApplication::translate("QGCMissionNavSweep", " m", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        posE1SpinBox->setToolTip(QApplication::translate("QGCMissionNavSweep", "Y coordinate of the first sweep area corner", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        posE1SpinBox->setStatusTip(QApplication::translate("QGCMissionNavSweep", "Y coordinate of the first sweep area corner", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        posE1SpinBox->setPrefix(QApplication::translate("QGCMissionNavSweep", "(1)E ", Q_NULLPTR));
        posE1SpinBox->setSuffix(QApplication::translate("QGCMissionNavSweep", " m", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        posN2SpinBox->setToolTip(QApplication::translate("QGCMissionNavSweep", "X coordinate of the second sweep area corner", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        posN2SpinBox->setStatusTip(QApplication::translate("QGCMissionNavSweep", "X coordinate of the second sweep area corner", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        posN2SpinBox->setPrefix(QApplication::translate("QGCMissionNavSweep", "(2)N ", Q_NULLPTR));
        posN2SpinBox->setSuffix(QApplication::translate("QGCMissionNavSweep", " m", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        posE2SpinBox->setToolTip(QApplication::translate("QGCMissionNavSweep", "Y coordinate of the second sweep area corner", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        posE2SpinBox->setStatusTip(QApplication::translate("QGCMissionNavSweep", "Y coordinate of the second sweep area corner", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        posE2SpinBox->setPrefix(QApplication::translate("QGCMissionNavSweep", "(2)E ", Q_NULLPTR));
        posE2SpinBox->setSuffix(QApplication::translate("QGCMissionNavSweep", " m", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        posDSpinBox->setToolTip(QApplication::translate("QGCMissionNavSweep", "Z coordinate (local frame, negative)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        posDSpinBox->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        posDSpinBox->setPrefix(QApplication::translate("QGCMissionNavSweep", "D ", Q_NULLPTR));
        posDSpinBox->setSuffix(QApplication::translate("QGCMissionNavSweep", " m", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        lat1SpinBox->setToolTip(QApplication::translate("QGCMissionNavSweep", "Latitude of the first sweep area corner", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        lat1SpinBox->setStatusTip(QApplication::translate("QGCMissionNavSweep", "Latitude of the first sweep area corner", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        lat1SpinBox->setPrefix(QApplication::translate("QGCMissionNavSweep", "(1)lat ", Q_NULLPTR));
        lat1SpinBox->setSuffix(QApplication::translate("QGCMissionNavSweep", "\302\260", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        lon1SpinBox->setToolTip(QApplication::translate("QGCMissionNavSweep", "Longitude of the first sweep area corner", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        lon1SpinBox->setStatusTip(QApplication::translate("QGCMissionNavSweep", "Longitude of the first sweep area corner", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        lon1SpinBox->setPrefix(QApplication::translate("QGCMissionNavSweep", "(1)lon ", Q_NULLPTR));
        lon1SpinBox->setSuffix(QApplication::translate("QGCMissionNavSweep", "\302\260", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        lat2SpinBox->setToolTip(QApplication::translate("QGCMissionNavSweep", "Latitude of the second sweep area corner", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        lat2SpinBox->setStatusTip(QApplication::translate("QGCMissionNavSweep", "Latitude of the second sweep area corner", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        lat2SpinBox->setPrefix(QApplication::translate("QGCMissionNavSweep", "(2)lat ", Q_NULLPTR));
        lat2SpinBox->setSuffix(QApplication::translate("QGCMissionNavSweep", "\302\260", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        lon2SpinBox->setToolTip(QApplication::translate("QGCMissionNavSweep", "Longitude of the second sweep area corner", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        lon2SpinBox->setStatusTip(QApplication::translate("QGCMissionNavSweep", "Longitude of the second sweep area corner", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        lon2SpinBox->setPrefix(QApplication::translate("QGCMissionNavSweep", "(2)lon ", Q_NULLPTR));
        lon2SpinBox->setSuffix(QApplication::translate("QGCMissionNavSweep", "\302\260", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        altSpinBox->setToolTip(QApplication::translate("QGCMissionNavSweep", "Altitude", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        altSpinBox->setStatusTip(QApplication::translate("QGCMissionNavSweep", "Altitude", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        altSpinBox->setPrefix(QApplication::translate("QGCMissionNavSweep", "alt ", Q_NULLPTR));
        altSpinBox->setSuffix(QApplication::translate("QGCMissionNavSweep", "m", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        radSpinBox->setToolTip(QApplication::translate("QGCMissionNavSweep", "Radius of the circle under the MAV covered by the camera", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        radSpinBox->setStatusTip(QApplication::translate("QGCMissionNavSweep", "Radius of the circle under the MAV covered by the camera", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        radSpinBox->setSuffix(QApplication::translate("QGCMissionNavSweep", " m", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QGCMissionNavSweep: public Ui_QGCMissionNavSweep {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCMISSIONNAVSWEEP_H
