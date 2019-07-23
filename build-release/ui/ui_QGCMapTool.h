/********************************************************************************
** Form generated from reading UI file 'QGCMapTool.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCMAPTOOL_H
#define UI_QGCMAPTOOL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>
#include "QGCMapToolBar.h"
#include "QGCMapWidget.h"

QT_BEGIN_NAMESPACE

class Ui_QGCMapTool
{
public:
    QGridLayout *gridLayout;
    QGCMapWidget *map;
    QLabel *longitudeLabel;
    QLabel *latitudeLabel;
    QLabel *satsLabel;
    QLabel *hdopLabel;
    QLabel *fixLabel;
    QLabel *zoomLabel;
    QGCMapToolBar *toolBar;
    QSlider *zoomSlider;

    void setupUi(QWidget *QGCMapTool)
    {
        if (QGCMapTool->objectName().isEmpty())
            QGCMapTool->setObjectName(QStringLiteral("QGCMapTool"));
        QGCMapTool->resize(739, 205);
        gridLayout = new QGridLayout(QGCMapTool);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(3);
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        map = new QGCMapWidget(QGCMapTool);
        map->setObjectName(QStringLiteral("map"));
        longitudeLabel = new QLabel(map);
        longitudeLabel->setObjectName(QStringLiteral("longitudeLabel"));
        longitudeLabel->setGeometry(QRect(210, 10, 111, 21));
        QFont font;
        font.setPointSize(17);
        longitudeLabel->setFont(font);
        longitudeLabel->setFrameShape(QFrame::Box);
        latitudeLabel = new QLabel(map);
        latitudeLabel->setObjectName(QStringLiteral("latitudeLabel"));
        latitudeLabel->setGeometry(QRect(90, 10, 111, 21));
        latitudeLabel->setFont(font);
        latitudeLabel->setFrameShape(QFrame::Box);
        satsLabel = new QLabel(map);
        satsLabel->setObjectName(QStringLiteral("satsLabel"));
        satsLabel->setGeometry(QRect(430, 10, 61, 21));
        satsLabel->setFont(font);
        satsLabel->setFrameShape(QFrame::Box);
        hdopLabel = new QLabel(map);
        hdopLabel->setObjectName(QStringLiteral("hdopLabel"));
        hdopLabel->setGeometry(QRect(500, 10, 71, 21));
        hdopLabel->setFont(font);
        hdopLabel->setFrameShape(QFrame::Box);
        fixLabel = new QLabel(map);
        fixLabel->setObjectName(QStringLiteral("fixLabel"));
        fixLabel->setGeometry(QRect(330, 10, 91, 21));
        fixLabel->setFont(font);
        fixLabel->setFrameShape(QFrame::Box);
        zoomLabel = new QLabel(map);
        zoomLabel->setObjectName(QStringLiteral("zoomLabel"));
        zoomLabel->setGeometry(QRect(580, 10, 71, 21));
        zoomLabel->setFont(font);
        zoomLabel->setFrameShape(QFrame::Box);

        gridLayout->addWidget(map, 0, 0, 1, 1);

        toolBar = new QGCMapToolBar(QGCMapTool);
        toolBar->setObjectName(QStringLiteral("toolBar"));

        gridLayout->addWidget(toolBar, 1, 0, 1, 1);

        zoomSlider = new QSlider(QGCMapTool);
        zoomSlider->setObjectName(QStringLiteral("zoomSlider"));
        zoomSlider->setMaximum(600);
        zoomSlider->setPageStep(5);
        zoomSlider->setOrientation(Qt::Vertical);
        zoomSlider->setTickPosition(QSlider::TicksBelow);
        zoomSlider->setTickInterval(0);

        gridLayout->addWidget(zoomSlider, 0, 1, 2, 1);

        gridLayout->setRowStretch(0, 100);

        retranslateUi(QGCMapTool);

        QMetaObject::connectSlotsByName(QGCMapTool);
    } // setupUi

    void retranslateUi(QWidget *QGCMapTool)
    {
        QGCMapTool->setWindowTitle(QApplication::translate("QGCMapTool", "Form", Q_NULLPTR));
        longitudeLabel->setText(QApplication::translate("QGCMapTool", "LON:", Q_NULLPTR));
        latitudeLabel->setText(QApplication::translate("QGCMapTool", "LAT:", Q_NULLPTR));
        satsLabel->setText(QApplication::translate("QGCMapTool", "SATS:", Q_NULLPTR));
        hdopLabel->setText(QApplication::translate("QGCMapTool", "HDOP:", Q_NULLPTR));
        fixLabel->setText(QApplication::translate("QGCMapTool", "FIX:", Q_NULLPTR));
        zoomLabel->setText(QApplication::translate("QGCMapTool", "ZOOM:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QGCMapTool: public Ui_QGCMapTool {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCMAPTOOL_H
