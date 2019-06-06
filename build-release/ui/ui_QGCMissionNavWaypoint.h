/********************************************************************************
** Form generated from reading UI file 'QGCMissionNavWaypoint.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCMISSIONNAVWAYPOINT_H
#define UI_QGCMISSIONNAVWAYPOINT_H

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

class Ui_QGCMissionNavWaypoint
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
    QDoubleSpinBox *acceptanceSpinBox;
    QDoubleSpinBox *holdTimeSpinBox;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *QGCMissionNavWaypoint)
    {
        if (QGCMissionNavWaypoint->objectName().isEmpty())
            QGCMissionNavWaypoint->setObjectName(QStringLiteral("QGCMissionNavWaypoint"));
        QGCMissionNavWaypoint->resize(1077, 32);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QGCMissionNavWaypoint->sizePolicy().hasHeightForWidth());
        QGCMissionNavWaypoint->setSizePolicy(sizePolicy);
        QGCMissionNavWaypoint->setMinimumSize(QSize(0, 0));
        QGCMissionNavWaypoint->setStyleSheet(QStringLiteral(""));
        horizontalLayout = new QHBoxLayout(QGCMissionNavWaypoint);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        posNSpinBox = new QDoubleSpinBox(QGCMissionNavWaypoint);
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

        posESpinBox = new QDoubleSpinBox(QGCMissionNavWaypoint);
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

        posDSpinBox = new QDoubleSpinBox(QGCMissionNavWaypoint);
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

        latSpinBox = new QDoubleSpinBox(QGCMissionNavWaypoint);
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

        lonSpinBox = new QDoubleSpinBox(QGCMissionNavWaypoint);
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

        altSpinBox = new QDoubleSpinBox(QGCMissionNavWaypoint);
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

        yawSpinBox = new QDoubleSpinBox(QGCMissionNavWaypoint);
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

        acceptanceSpinBox = new QDoubleSpinBox(QGCMissionNavWaypoint);
        acceptanceSpinBox->setObjectName(QStringLiteral("acceptanceSpinBox"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(acceptanceSpinBox->sizePolicy().hasHeightForWidth());
        acceptanceSpinBox->setSizePolicy(sizePolicy2);
        acceptanceSpinBox->setMinimumSize(QSize(75, 0));
        acceptanceSpinBox->setMaximumSize(QSize(75, 16777215));
        acceptanceSpinBox->setKeyboardTracking(false);
        acceptanceSpinBox->setValue(0.2);

        horizontalLayout->addWidget(acceptanceSpinBox);

        holdTimeSpinBox = new QDoubleSpinBox(QGCMissionNavWaypoint);
        holdTimeSpinBox->setObjectName(QStringLiteral("holdTimeSpinBox"));
        sizePolicy2.setHeightForWidth(holdTimeSpinBox->sizePolicy().hasHeightForWidth());
        holdTimeSpinBox->setSizePolicy(sizePolicy2);
        holdTimeSpinBox->setMinimumSize(QSize(75, 0));
        holdTimeSpinBox->setMaximumSize(QSize(75, 16777215));
        holdTimeSpinBox->setKeyboardTracking(false);
        holdTimeSpinBox->setMaximum(9999.99);

        horizontalLayout->addWidget(holdTimeSpinBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        retranslateUi(QGCMissionNavWaypoint);

        QMetaObject::connectSlotsByName(QGCMissionNavWaypoint);
    } // setupUi

    void retranslateUi(QWidget *QGCMissionNavWaypoint)
    {
        QGCMissionNavWaypoint->setWindowTitle(QApplication::translate("QGCMissionNavWaypoint", "Form", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        posNSpinBox->setToolTip(QApplication::translate("QGCMissionNavWaypoint", "Position X coordinate", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        posNSpinBox->setStatusTip(QApplication::translate("QGCMissionNavWaypoint", "Position X corrdinate", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        posNSpinBox->setPrefix(QApplication::translate("QGCMissionNavWaypoint", "N ", Q_NULLPTR));
        posNSpinBox->setSuffix(QApplication::translate("QGCMissionNavWaypoint", " m", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        posESpinBox->setToolTip(QApplication::translate("QGCMissionNavWaypoint", "Position Y/Longitude coordinate", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        posESpinBox->setStatusTip(QApplication::translate("QGCMissionNavWaypoint", "Position Y/Longitude coordinate", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        posESpinBox->setPrefix(QApplication::translate("QGCMissionNavWaypoint", "E ", Q_NULLPTR));
        posESpinBox->setSuffix(QApplication::translate("QGCMissionNavWaypoint", " m", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        posDSpinBox->setToolTip(QApplication::translate("QGCMissionNavWaypoint", "Position Z coordinate (local frame, negative)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        posDSpinBox->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        posDSpinBox->setPrefix(QApplication::translate("QGCMissionNavWaypoint", "D ", Q_NULLPTR));
        posDSpinBox->setSuffix(QApplication::translate("QGCMissionNavWaypoint", " m", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        latSpinBox->setToolTip(QApplication::translate("QGCMissionNavWaypoint", "Latitude in degrees", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        latSpinBox->setStatusTip(QApplication::translate("QGCMissionNavWaypoint", "Latitude in degrees", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        latSpinBox->setPrefix(QApplication::translate("QGCMissionNavWaypoint", "lat ", Q_NULLPTR));
        latSpinBox->setSuffix(QApplication::translate("QGCMissionNavWaypoint", "\302\260", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        lonSpinBox->setToolTip(QApplication::translate("QGCMissionNavWaypoint", "Longitude in degrees", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        lonSpinBox->setStatusTip(QApplication::translate("QGCMissionNavWaypoint", "Longitude in degrees", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        lonSpinBox->setPrefix(QApplication::translate("QGCMissionNavWaypoint", "lon ", Q_NULLPTR));
        lonSpinBox->setSuffix(QApplication::translate("QGCMissionNavWaypoint", "\302\260", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        altSpinBox->setToolTip(QApplication::translate("QGCMissionNavWaypoint", "Altitude in meters", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        altSpinBox->setStatusTip(QApplication::translate("QGCMissionNavWaypoint", "Altitude in meters", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        altSpinBox->setPrefix(QApplication::translate("QGCMissionNavWaypoint", "alt ", Q_NULLPTR));
        altSpinBox->setSuffix(QApplication::translate("QGCMissionNavWaypoint", "m", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        yawSpinBox->setToolTip(QApplication::translate("QGCMissionNavWaypoint", "Rotary wing only: Desired yaw angle at waypoint", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        yawSpinBox->setStatusTip(QApplication::translate("QGCMissionNavWaypoint", "Rotary wing only: Desired yaw angle at waypoint", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        yawSpinBox->setPrefix(QString());
        yawSpinBox->setSuffix(QApplication::translate("QGCMissionNavWaypoint", "\302\260", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        acceptanceSpinBox->setToolTip(QApplication::translate("QGCMissionNavWaypoint", "Uncertainty radius in meters\n"
"where to accept this waypoint as reached", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        acceptanceSpinBox->setStatusTip(QApplication::translate("QGCMissionNavWaypoint", "Uncertainty radius in meters where to accept this waypoint as reached", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        acceptanceSpinBox->setSuffix(QApplication::translate("QGCMissionNavWaypoint", " m", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        holdTimeSpinBox->setToolTip(QApplication::translate("QGCMissionNavWaypoint", "Time to stay/loiter at this position before advancing", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        holdTimeSpinBox->setStatusTip(QApplication::translate("QGCMissionNavWaypoint", "Time to stay/loiter at this position before advancing", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        holdTimeSpinBox->setSuffix(QApplication::translate("QGCMissionNavWaypoint", " s", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QGCMissionNavWaypoint: public Ui_QGCMissionNavWaypoint {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCMISSIONNAVWAYPOINT_H
