/********************************************************************************
** Form generated from reading UI file 'QGCMissionNavTakeoff.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCMISSIONNAVTAKEOFF_H
#define UI_QGCMISSIONNAVTAKEOFF_H

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

class Ui_QGCMissionNavTakeoff
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
    QDoubleSpinBox *minPitchSpinBox;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *QGCMissionNavTakeoff)
    {
        if (QGCMissionNavTakeoff->objectName().isEmpty())
            QGCMissionNavTakeoff->setObjectName(QStringLiteral("QGCMissionNavTakeoff"));
        QGCMissionNavTakeoff->resize(900, 44);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QGCMissionNavTakeoff->sizePolicy().hasHeightForWidth());
        QGCMissionNavTakeoff->setSizePolicy(sizePolicy);
        QGCMissionNavTakeoff->setMinimumSize(QSize(0, 0));
        QGCMissionNavTakeoff->setStyleSheet(QStringLiteral(""));
        horizontalLayout = new QHBoxLayout(QGCMissionNavTakeoff);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        posNSpinBox = new QDoubleSpinBox(QGCMissionNavTakeoff);
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

        posESpinBox = new QDoubleSpinBox(QGCMissionNavTakeoff);
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

        posDSpinBox = new QDoubleSpinBox(QGCMissionNavTakeoff);
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

        latSpinBox = new QDoubleSpinBox(QGCMissionNavTakeoff);
        latSpinBox->setObjectName(QStringLiteral("latSpinBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(latSpinBox->sizePolicy().hasHeightForWidth());
        latSpinBox->setSizePolicy(sizePolicy2);
        latSpinBox->setMinimumSize(QSize(135, 0));
        latSpinBox->setMaximumSize(QSize(135, 16777215));
        latSpinBox->setFocusPolicy(Qt::WheelFocus);
        latSpinBox->setKeyboardTracking(false);
        latSpinBox->setDecimals(7);
        latSpinBox->setMinimum(-90);
        latSpinBox->setMaximum(90);
        latSpinBox->setSingleStep(1e-5);

        horizontalLayout->addWidget(latSpinBox);

        lonSpinBox = new QDoubleSpinBox(QGCMissionNavTakeoff);
        lonSpinBox->setObjectName(QStringLiteral("lonSpinBox"));
        sizePolicy2.setHeightForWidth(lonSpinBox->sizePolicy().hasHeightForWidth());
        lonSpinBox->setSizePolicy(sizePolicy2);
        lonSpinBox->setMinimumSize(QSize(135, 0));
        lonSpinBox->setMaximumSize(QSize(135, 16777215));
        lonSpinBox->setFocusPolicy(Qt::WheelFocus);
        lonSpinBox->setKeyboardTracking(false);
        lonSpinBox->setDecimals(7);
        lonSpinBox->setMinimum(-180);
        lonSpinBox->setMaximum(180);
        lonSpinBox->setSingleStep(1e-5);

        horizontalLayout->addWidget(lonSpinBox);

        altSpinBox = new QDoubleSpinBox(QGCMissionNavTakeoff);
        altSpinBox->setObjectName(QStringLiteral("altSpinBox"));
        sizePolicy2.setHeightForWidth(altSpinBox->sizePolicy().hasHeightForWidth());
        altSpinBox->setSizePolicy(sizePolicy2);
        altSpinBox->setMinimumSize(QSize(75, 0));
        altSpinBox->setMaximumSize(QSize(75, 16777215));
        altSpinBox->setKeyboardTracking(false);
        altSpinBox->setDecimals(2);
        altSpinBox->setMinimum(-100000);
        altSpinBox->setMaximum(100000);

        horizontalLayout->addWidget(altSpinBox);

        yawSpinBox = new QDoubleSpinBox(QGCMissionNavTakeoff);
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

        minPitchSpinBox = new QDoubleSpinBox(QGCMissionNavTakeoff);
        minPitchSpinBox->setObjectName(QStringLiteral("minPitchSpinBox"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(minPitchSpinBox->sizePolicy().hasHeightForWidth());
        minPitchSpinBox->setSizePolicy(sizePolicy3);
        minPitchSpinBox->setMinimumSize(QSize(75, 0));
        minPitchSpinBox->setMaximumSize(QSize(75, 16777215));
        minPitchSpinBox->setKeyboardTracking(false);
        minPitchSpinBox->setDecimals(0);
        minPitchSpinBox->setMinimum(-90);
        minPitchSpinBox->setMaximum(90);
        minPitchSpinBox->setValue(0);

        horizontalLayout->addWidget(minPitchSpinBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        retranslateUi(QGCMissionNavTakeoff);

        QMetaObject::connectSlotsByName(QGCMissionNavTakeoff);
    } // setupUi

    void retranslateUi(QWidget *QGCMissionNavTakeoff)
    {
        QGCMissionNavTakeoff->setWindowTitle(QApplication::translate("QGCMissionNavTakeoff", "Form", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        posNSpinBox->setToolTip(QApplication::translate("QGCMissionNavTakeoff", "Position X coordinate", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        posNSpinBox->setStatusTip(QApplication::translate("QGCMissionNavTakeoff", "Position X corrdinate", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        posNSpinBox->setPrefix(QApplication::translate("QGCMissionNavTakeoff", "N ", Q_NULLPTR));
        posNSpinBox->setSuffix(QApplication::translate("QGCMissionNavTakeoff", " m", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        posESpinBox->setToolTip(QApplication::translate("QGCMissionNavTakeoff", "Position Y/Longitude coordinate", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        posESpinBox->setStatusTip(QApplication::translate("QGCMissionNavTakeoff", "Position Y/Longitude coordinate", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        posESpinBox->setPrefix(QApplication::translate("QGCMissionNavTakeoff", "E ", Q_NULLPTR));
        posESpinBox->setSuffix(QApplication::translate("QGCMissionNavTakeoff", " m", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        posDSpinBox->setToolTip(QApplication::translate("QGCMissionNavTakeoff", "Position Z coordinate (local frame, negative)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        posDSpinBox->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        posDSpinBox->setPrefix(QApplication::translate("QGCMissionNavTakeoff", "D ", Q_NULLPTR));
        posDSpinBox->setSuffix(QApplication::translate("QGCMissionNavTakeoff", " m", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        latSpinBox->setToolTip(QApplication::translate("QGCMissionNavTakeoff", "Latitude in degrees", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        latSpinBox->setStatusTip(QApplication::translate("QGCMissionNavTakeoff", "Latitude in degrees", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        latSpinBox->setPrefix(QApplication::translate("QGCMissionNavTakeoff", "lat ", Q_NULLPTR));
        latSpinBox->setSuffix(QApplication::translate("QGCMissionNavTakeoff", "\302\260", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        lonSpinBox->setToolTip(QApplication::translate("QGCMissionNavTakeoff", "Longitude in degrees", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        lonSpinBox->setStatusTip(QApplication::translate("QGCMissionNavTakeoff", "Longitude in degrees", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        lonSpinBox->setPrefix(QApplication::translate("QGCMissionNavTakeoff", "lon ", Q_NULLPTR));
        lonSpinBox->setSuffix(QApplication::translate("QGCMissionNavTakeoff", "\302\260", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        altSpinBox->setToolTip(QApplication::translate("QGCMissionNavTakeoff", "Altitude in meters", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        altSpinBox->setStatusTip(QApplication::translate("QGCMissionNavTakeoff", "Altitude in meters", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        altSpinBox->setPrefix(QApplication::translate("QGCMissionNavTakeoff", "alt ", Q_NULLPTR));
        altSpinBox->setSuffix(QApplication::translate("QGCMissionNavTakeoff", "m", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        yawSpinBox->setToolTip(QApplication::translate("QGCMissionNavTakeoff", "Rotary wing only: Desired yaw angle at waypoint", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        yawSpinBox->setStatusTip(QApplication::translate("QGCMissionNavTakeoff", "Rotary wing only: Desired yaw angle at waypoint", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        yawSpinBox->setPrefix(QString());
        yawSpinBox->setSuffix(QApplication::translate("QGCMissionNavTakeoff", "\302\260", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        minPitchSpinBox->setToolTip(QApplication::translate("QGCMissionNavTakeoff", "Minimum Pitch", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        minPitchSpinBox->setStatusTip(QApplication::translate("QGCMissionNavTakeoff", "Minimum Pitch", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        minPitchSpinBox->setSuffix(QApplication::translate("QGCMissionNavTakeoff", "\302\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QGCMissionNavTakeoff: public Ui_QGCMissionNavTakeoff {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCMISSIONNAVTAKEOFF_H
