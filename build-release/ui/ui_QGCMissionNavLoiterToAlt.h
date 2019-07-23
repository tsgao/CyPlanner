/********************************************************************************
** Form generated from reading UI file 'QGCMissionNavLoiterToAlt.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCMISSIONNAVLOITERTOALT_H
#define UI_QGCMISSIONNAVLOITERTOALT_H

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

class Ui_QGCMissionNavLoiterToAlt
{
public:
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *posNSpinBox;
    QDoubleSpinBox *posESpinBox;
    QDoubleSpinBox *posDSpinBox;
    QDoubleSpinBox *latSpinBox;
    QDoubleSpinBox *lonSpinBox;
    QDoubleSpinBox *altSpinBox;
    QDoubleSpinBox *headingreqSpinBox;
    QDoubleSpinBox *radiusSpinBox;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *QGCMissionNavLoiterToAlt)
    {
        if (QGCMissionNavLoiterToAlt->objectName().isEmpty())
            QGCMissionNavLoiterToAlt->setObjectName(QStringLiteral("QGCMissionNavLoiterToAlt"));
        QGCMissionNavLoiterToAlt->resize(900, 44);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QGCMissionNavLoiterToAlt->sizePolicy().hasHeightForWidth());
        QGCMissionNavLoiterToAlt->setSizePolicy(sizePolicy);
        QGCMissionNavLoiterToAlt->setMinimumSize(QSize(0, 0));
        QGCMissionNavLoiterToAlt->setStyleSheet(QStringLiteral(""));
        horizontalLayout = new QHBoxLayout(QGCMissionNavLoiterToAlt);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        posNSpinBox = new QDoubleSpinBox(QGCMissionNavLoiterToAlt);
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

        posESpinBox = new QDoubleSpinBox(QGCMissionNavLoiterToAlt);
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

        posDSpinBox = new QDoubleSpinBox(QGCMissionNavLoiterToAlt);
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

        latSpinBox = new QDoubleSpinBox(QGCMissionNavLoiterToAlt);
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

        lonSpinBox = new QDoubleSpinBox(QGCMissionNavLoiterToAlt);
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

        altSpinBox = new QDoubleSpinBox(QGCMissionNavLoiterToAlt);
        altSpinBox->setObjectName(QStringLiteral("altSpinBox"));
        sizePolicy2.setHeightForWidth(altSpinBox->sizePolicy().hasHeightForWidth());
        altSpinBox->setSizePolicy(sizePolicy2);
        altSpinBox->setMinimumSize(QSize(75, 0));
        altSpinBox->setMaximumSize(QSize(75, 16777215));
        altSpinBox->setKeyboardTracking(false);
        altSpinBox->setDecimals(0);
        altSpinBox->setMinimum(-100000);
        altSpinBox->setMaximum(100000);

        horizontalLayout->addWidget(altSpinBox);

        headingreqSpinBox = new QDoubleSpinBox(QGCMissionNavLoiterToAlt);
        headingreqSpinBox->setObjectName(QStringLiteral("headingreqSpinBox"));
        sizePolicy1.setHeightForWidth(headingreqSpinBox->sizePolicy().hasHeightForWidth());
        headingreqSpinBox->setSizePolicy(sizePolicy1);
        headingreqSpinBox->setMinimumSize(QSize(100, 0));
        headingreqSpinBox->setMaximumSize(QSize(75, 16777215));
        headingreqSpinBox->setFocusPolicy(Qt::StrongFocus);
        headingreqSpinBox->setWrapping(true);
        headingreqSpinBox->setKeyboardTracking(false);
        headingreqSpinBox->setDecimals(0);
        headingreqSpinBox->setMinimum(0);
        headingreqSpinBox->setMaximum(1);

        horizontalLayout->addWidget(headingreqSpinBox);

        radiusSpinBox = new QDoubleSpinBox(QGCMissionNavLoiterToAlt);
        radiusSpinBox->setObjectName(QStringLiteral("radiusSpinBox"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(radiusSpinBox->sizePolicy().hasHeightForWidth());
        radiusSpinBox->setSizePolicy(sizePolicy3);
        radiusSpinBox->setMinimumSize(QSize(75, 0));
        radiusSpinBox->setMaximumSize(QSize(75, 16777215));
        radiusSpinBox->setKeyboardTracking(false);
        radiusSpinBox->setDecimals(0);
        radiusSpinBox->setMinimum(-1000);
        radiusSpinBox->setMaximum(1000);
        radiusSpinBox->setValue(0);

        horizontalLayout->addWidget(radiusSpinBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        retranslateUi(QGCMissionNavLoiterToAlt);

        QMetaObject::connectSlotsByName(QGCMissionNavLoiterToAlt);
    } // setupUi

    void retranslateUi(QWidget *QGCMissionNavLoiterToAlt)
    {
        QGCMissionNavLoiterToAlt->setWindowTitle(QApplication::translate("QGCMissionNavLoiterToAlt", "Form", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        posNSpinBox->setToolTip(QApplication::translate("QGCMissionNavLoiterToAlt", "Position X coordinate", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        posNSpinBox->setStatusTip(QApplication::translate("QGCMissionNavLoiterToAlt", "Position X corrdinate", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        posNSpinBox->setPrefix(QApplication::translate("QGCMissionNavLoiterToAlt", "N ", Q_NULLPTR));
        posNSpinBox->setSuffix(QApplication::translate("QGCMissionNavLoiterToAlt", " m", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        posESpinBox->setToolTip(QApplication::translate("QGCMissionNavLoiterToAlt", "Position Y/Longitude coordinate", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        posESpinBox->setStatusTip(QApplication::translate("QGCMissionNavLoiterToAlt", "Position Y/Longitude coordinate", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        posESpinBox->setPrefix(QApplication::translate("QGCMissionNavLoiterToAlt", "E ", Q_NULLPTR));
        posESpinBox->setSuffix(QApplication::translate("QGCMissionNavLoiterToAlt", " m", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        posDSpinBox->setToolTip(QApplication::translate("QGCMissionNavLoiterToAlt", "Position Z coordinate (local frame, negative)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        posDSpinBox->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        posDSpinBox->setPrefix(QApplication::translate("QGCMissionNavLoiterToAlt", "D ", Q_NULLPTR));
        posDSpinBox->setSuffix(QApplication::translate("QGCMissionNavLoiterToAlt", " m", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        latSpinBox->setToolTip(QApplication::translate("QGCMissionNavLoiterToAlt", "Latitude in degrees", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        latSpinBox->setStatusTip(QApplication::translate("QGCMissionNavLoiterToAlt", "Latitude in degrees", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        latSpinBox->setPrefix(QApplication::translate("QGCMissionNavLoiterToAlt", "lat ", Q_NULLPTR));
        latSpinBox->setSuffix(QApplication::translate("QGCMissionNavLoiterToAlt", "\302\260", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        lonSpinBox->setToolTip(QApplication::translate("QGCMissionNavLoiterToAlt", "Longitude in degrees", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        lonSpinBox->setStatusTip(QApplication::translate("QGCMissionNavLoiterToAlt", "Longitude in degrees", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        lonSpinBox->setPrefix(QApplication::translate("QGCMissionNavLoiterToAlt", "lon ", Q_NULLPTR));
        lonSpinBox->setSuffix(QApplication::translate("QGCMissionNavLoiterToAlt", "\302\260", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        altSpinBox->setToolTip(QApplication::translate("QGCMissionNavLoiterToAlt", "Altitude in meters", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        altSpinBox->setStatusTip(QApplication::translate("QGCMissionNavLoiterToAlt", "Altitude in meters", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        altSpinBox->setPrefix(QApplication::translate("QGCMissionNavLoiterToAlt", "alt ", Q_NULLPTR));
        altSpinBox->setSuffix(QApplication::translate("QGCMissionNavLoiterToAlt", "m", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        headingreqSpinBox->setToolTip(QApplication::translate("QGCMissionNavLoiterToAlt", "Heading Required , if true (1),  the aircraft will not leave the loiter until heading toward the next waypoint.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        headingreqSpinBox->setStatusTip(QApplication::translate("QGCMissionNavLoiterToAlt", "Heading Required , if true (1),  the aircraft will not leave the loiter until heading toward the next waypoint.", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        headingreqSpinBox->setPrefix(QApplication::translate("QGCMissionNavLoiterToAlt", "hdg:", Q_NULLPTR));
        headingreqSpinBox->setSuffix(QApplication::translate("QGCMissionNavLoiterToAlt", " (0/1)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        radiusSpinBox->setToolTip(QApplication::translate("QGCMissionNavLoiterToAlt", "Radius in meters. If positive loiter clockwise, negative counter-clockwise, 0 means no change to standard loiter.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        radiusSpinBox->setStatusTip(QApplication::translate("QGCMissionNavLoiterToAlt", "Radius in meters. If positive loiter clockwise, negative counter-clockwise, 0 means no change to standard loiter.", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        radiusSpinBox->setPrefix(QApplication::translate("QGCMissionNavLoiterToAlt", "r:", Q_NULLPTR));
        radiusSpinBox->setSuffix(QApplication::translate("QGCMissionNavLoiterToAlt", "m", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QGCMissionNavLoiterToAlt: public Ui_QGCMissionNavLoiterToAlt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCMISSIONNAVLOITERTOALT_H
