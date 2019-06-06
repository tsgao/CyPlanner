/********************************************************************************
** Form generated from reading UI file 'QGCMissionNavLoiterTime.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCMISSIONNAVLOITERTIME_H
#define UI_QGCMISSIONNAVLOITERTIME_H

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

class Ui_QGCMissionNavLoiterTime
{
public:
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *posNSpinBox;
    QDoubleSpinBox *posESpinBox;
    QDoubleSpinBox *posDSpinBox;
    QDoubleSpinBox *latSpinBox;
    QDoubleSpinBox *lonSpinBox;
    QDoubleSpinBox *altSpinBox;
    QDoubleSpinBox *yawSpinBox;
    QDoubleSpinBox *radSpinBox;
    QDoubleSpinBox *timeSpinBox;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *QGCMissionNavLoiterTime)
    {
        if (QGCMissionNavLoiterTime->objectName().isEmpty())
            QGCMissionNavLoiterTime->setObjectName(QStringLiteral("QGCMissionNavLoiterTime"));
        QGCMissionNavLoiterTime->resize(2208, 37);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QGCMissionNavLoiterTime->sizePolicy().hasHeightForWidth());
        QGCMissionNavLoiterTime->setSizePolicy(sizePolicy);
        QGCMissionNavLoiterTime->setMinimumSize(QSize(0, 0));
        QGCMissionNavLoiterTime->setStyleSheet(QStringLiteral(""));
        horizontalLayout = new QHBoxLayout(QGCMissionNavLoiterTime);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        posNSpinBox = new QDoubleSpinBox(QGCMissionNavLoiterTime);
        posNSpinBox->setObjectName(QStringLiteral("posNSpinBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(posNSpinBox->sizePolicy().hasHeightForWidth());
        posNSpinBox->setSizePolicy(sizePolicy1);
        posNSpinBox->setMinimumSize(QSize(135, 0));
        posNSpinBox->setMaximumSize(QSize(135, 16777215));
        posNSpinBox->setFocusPolicy(Qt::WheelFocus);
        posNSpinBox->setWrapping(false);
        posNSpinBox->setFrame(true);
        posNSpinBox->setAccelerated(true);
        posNSpinBox->setKeyboardTracking(false);
        posNSpinBox->setMinimum(-10000);
        posNSpinBox->setMaximum(10000);
        posNSpinBox->setSingleStep(0.05);

        horizontalLayout->addWidget(posNSpinBox);

        posESpinBox = new QDoubleSpinBox(QGCMissionNavLoiterTime);
        posESpinBox->setObjectName(QStringLiteral("posESpinBox"));
        sizePolicy1.setHeightForWidth(posESpinBox->sizePolicy().hasHeightForWidth());
        posESpinBox->setSizePolicy(sizePolicy1);
        posESpinBox->setMinimumSize(QSize(135, 0));
        posESpinBox->setMaximumSize(QSize(135, 16777215));
        posESpinBox->setFocusPolicy(Qt::WheelFocus);
        posESpinBox->setKeyboardTracking(false);
        posESpinBox->setMinimum(-10000);
        posESpinBox->setMaximum(10000);
        posESpinBox->setSingleStep(0.05);
        posESpinBox->setValue(0);

        horizontalLayout->addWidget(posESpinBox);

        posDSpinBox = new QDoubleSpinBox(QGCMissionNavLoiterTime);
        posDSpinBox->setObjectName(QStringLiteral("posDSpinBox"));
        sizePolicy1.setHeightForWidth(posDSpinBox->sizePolicy().hasHeightForWidth());
        posDSpinBox->setSizePolicy(sizePolicy1);
        posDSpinBox->setMinimumSize(QSize(75, 0));
        posDSpinBox->setMaximumSize(QSize(75, 16777215));
        posDSpinBox->setFocusPolicy(Qt::WheelFocus);
        posDSpinBox->setKeyboardTracking(false);
        posDSpinBox->setMinimum(-10000);
        posDSpinBox->setMaximum(10000);
        posDSpinBox->setSingleStep(0.05);

        horizontalLayout->addWidget(posDSpinBox);

        latSpinBox = new QDoubleSpinBox(QGCMissionNavLoiterTime);
        latSpinBox->setObjectName(QStringLiteral("latSpinBox"));
        sizePolicy1.setHeightForWidth(latSpinBox->sizePolicy().hasHeightForWidth());
        latSpinBox->setSizePolicy(sizePolicy1);
        latSpinBox->setMinimumSize(QSize(135, 0));
        latSpinBox->setMaximumSize(QSize(135, 16777215));
        latSpinBox->setFocusPolicy(Qt::WheelFocus);
        latSpinBox->setKeyboardTracking(false);
        latSpinBox->setDecimals(7);
        latSpinBox->setMinimum(-90);
        latSpinBox->setMaximum(90);
        latSpinBox->setSingleStep(1e-5);

        horizontalLayout->addWidget(latSpinBox);

        lonSpinBox = new QDoubleSpinBox(QGCMissionNavLoiterTime);
        lonSpinBox->setObjectName(QStringLiteral("lonSpinBox"));
        sizePolicy1.setHeightForWidth(lonSpinBox->sizePolicy().hasHeightForWidth());
        lonSpinBox->setSizePolicy(sizePolicy1);
        lonSpinBox->setMinimumSize(QSize(135, 0));
        lonSpinBox->setMaximumSize(QSize(135, 16777215));
        lonSpinBox->setFocusPolicy(Qt::WheelFocus);
        lonSpinBox->setKeyboardTracking(false);
        lonSpinBox->setDecimals(7);
        lonSpinBox->setMinimum(-180);
        lonSpinBox->setMaximum(180);
        lonSpinBox->setSingleStep(1e-5);

        horizontalLayout->addWidget(lonSpinBox);

        altSpinBox = new QDoubleSpinBox(QGCMissionNavLoiterTime);
        altSpinBox->setObjectName(QStringLiteral("altSpinBox"));
        sizePolicy1.setHeightForWidth(altSpinBox->sizePolicy().hasHeightForWidth());
        altSpinBox->setSizePolicy(sizePolicy1);
        altSpinBox->setMinimumSize(QSize(75, 0));
        altSpinBox->setMaximumSize(QSize(75, 16777215));
        altSpinBox->setKeyboardTracking(false);
        altSpinBox->setDecimals(2);
        altSpinBox->setMinimum(-100000);
        altSpinBox->setMaximum(100000);

        horizontalLayout->addWidget(altSpinBox);

        yawSpinBox = new QDoubleSpinBox(QGCMissionNavLoiterTime);
        yawSpinBox->setObjectName(QStringLiteral("yawSpinBox"));
        sizePolicy1.setHeightForWidth(yawSpinBox->sizePolicy().hasHeightForWidth());
        yawSpinBox->setSizePolicy(sizePolicy1);
        yawSpinBox->setMinimumSize(QSize(75, 0));
        yawSpinBox->setMaximumSize(QSize(75, 16777215));
        yawSpinBox->setFocusPolicy(Qt::StrongFocus);
        yawSpinBox->setWrapping(true);
        yawSpinBox->setKeyboardTracking(false);
        yawSpinBox->setDecimals(0);
        yawSpinBox->setMinimum(-180);
        yawSpinBox->setMaximum(180);

        horizontalLayout->addWidget(yawSpinBox);

        radSpinBox = new QDoubleSpinBox(QGCMissionNavLoiterTime);
        radSpinBox->setObjectName(QStringLiteral("radSpinBox"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(radSpinBox->sizePolicy().hasHeightForWidth());
        radSpinBox->setSizePolicy(sizePolicy2);
        radSpinBox->setMinimumSize(QSize(75, 0));
        radSpinBox->setMaximumSize(QSize(75, 16777215));
        radSpinBox->setKeyboardTracking(false);
        radSpinBox->setMinimum(-1e+6);
        radSpinBox->setMaximum(1e+6);
        radSpinBox->setValue(0);

        horizontalLayout->addWidget(radSpinBox);

        timeSpinBox = new QDoubleSpinBox(QGCMissionNavLoiterTime);
        timeSpinBox->setObjectName(QStringLiteral("timeSpinBox"));
        sizePolicy2.setHeightForWidth(timeSpinBox->sizePolicy().hasHeightForWidth());
        timeSpinBox->setSizePolicy(sizePolicy2);
        timeSpinBox->setMinimumSize(QSize(75, 0));
        timeSpinBox->setMaximumSize(QSize(75, 16777215));
        timeSpinBox->setKeyboardTracking(false);
        timeSpinBox->setDecimals(2);
        timeSpinBox->setMinimum(0);
        timeSpinBox->setMaximum(1e+6);
        timeSpinBox->setValue(0);

        horizontalLayout->addWidget(timeSpinBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        retranslateUi(QGCMissionNavLoiterTime);

        QMetaObject::connectSlotsByName(QGCMissionNavLoiterTime);
    } // setupUi

    void retranslateUi(QWidget *QGCMissionNavLoiterTime)
    {
        QGCMissionNavLoiterTime->setWindowTitle(QApplication::translate("QGCMissionNavLoiterTime", "Form", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        posNSpinBox->setToolTip(QApplication::translate("QGCMissionNavLoiterTime", "Position X coordinate", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        posNSpinBox->setStatusTip(QApplication::translate("QGCMissionNavLoiterTime", "Position X corrdinate", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        posNSpinBox->setPrefix(QApplication::translate("QGCMissionNavLoiterTime", "N ", Q_NULLPTR));
        posNSpinBox->setSuffix(QApplication::translate("QGCMissionNavLoiterTime", " m", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        posESpinBox->setToolTip(QApplication::translate("QGCMissionNavLoiterTime", "Position Y/Longitude coordinate", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        posESpinBox->setStatusTip(QApplication::translate("QGCMissionNavLoiterTime", "Position Y/Longitude coordinate", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        posESpinBox->setPrefix(QApplication::translate("QGCMissionNavLoiterTime", "E ", Q_NULLPTR));
        posESpinBox->setSuffix(QApplication::translate("QGCMissionNavLoiterTime", " m", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        posDSpinBox->setToolTip(QApplication::translate("QGCMissionNavLoiterTime", "Position Z coordinate (local frame, negative)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        posDSpinBox->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        posDSpinBox->setPrefix(QApplication::translate("QGCMissionNavLoiterTime", "D ", Q_NULLPTR));
        posDSpinBox->setSuffix(QApplication::translate("QGCMissionNavLoiterTime", " m", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        latSpinBox->setToolTip(QApplication::translate("QGCMissionNavLoiterTime", "Latitude in degrees", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        latSpinBox->setStatusTip(QApplication::translate("QGCMissionNavLoiterTime", "Latitude in degrees", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        latSpinBox->setPrefix(QApplication::translate("QGCMissionNavLoiterTime", "lat ", Q_NULLPTR));
        latSpinBox->setSuffix(QApplication::translate("QGCMissionNavLoiterTime", "\302\260", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        lonSpinBox->setToolTip(QApplication::translate("QGCMissionNavLoiterTime", "Longitude in degrees", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        lonSpinBox->setStatusTip(QApplication::translate("QGCMissionNavLoiterTime", "Longitude in degrees", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        lonSpinBox->setPrefix(QApplication::translate("QGCMissionNavLoiterTime", "lon ", Q_NULLPTR));
        lonSpinBox->setSuffix(QApplication::translate("QGCMissionNavLoiterTime", "\302\260", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        altSpinBox->setToolTip(QApplication::translate("QGCMissionNavLoiterTime", "Altitude in meters", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        altSpinBox->setStatusTip(QApplication::translate("QGCMissionNavLoiterTime", "Altitude in meters", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        altSpinBox->setPrefix(QApplication::translate("QGCMissionNavLoiterTime", "alt ", Q_NULLPTR));
        altSpinBox->setSuffix(QApplication::translate("QGCMissionNavLoiterTime", "m", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        yawSpinBox->setToolTip(QApplication::translate("QGCMissionNavLoiterTime", "Rotary wing only: Desired yaw angle at waypoint", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        yawSpinBox->setStatusTip(QApplication::translate("QGCMissionNavLoiterTime", "Rotary wing only: Desired yaw angle at waypoint", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        yawSpinBox->setPrefix(QString());
        yawSpinBox->setSuffix(QApplication::translate("QGCMissionNavLoiterTime", "\302\260", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        radSpinBox->setToolTip(QApplication::translate("QGCMissionNavLoiterTime", "Loiter Radius. If negative loiter counter-clockwise", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        radSpinBox->setStatusTip(QApplication::translate("QGCMissionNavLoiterTime", "Loiter Radius. If negative loiter counter-clockwise", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        radSpinBox->setSuffix(QApplication::translate("QGCMissionNavLoiterTime", " m", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        timeSpinBox->setToolTip(QApplication::translate("QGCMissionNavLoiterTime", "Time to loiter around the mission point", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        timeSpinBox->setStatusTip(QApplication::translate("QGCMissionNavLoiterTime", "Time to loiter around the mission point", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        timeSpinBox->setSuffix(QApplication::translate("QGCMissionNavLoiterTime", " s", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QGCMissionNavLoiterTime: public Ui_QGCMissionNavLoiterTime {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCMISSIONNAVLOITERTIME_H
