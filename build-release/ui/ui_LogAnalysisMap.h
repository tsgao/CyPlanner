/********************************************************************************
** Form generated from reading UI file 'LogAnalysisMap.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGANALYSISMAP_H
#define UI_LOGANALYSISMAP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>
#include "opmapwidget.h"

QT_BEGIN_NAMESPACE

class Ui_LogAnalysisMap
{
public:
    QGridLayout *gridLayout;
    mapcontrol::OPMapWidget *map;
    QSlider *zoomSlider;

    void setupUi(QWidget *LogAnalysisMap)
    {
        if (LogAnalysisMap->objectName().isEmpty())
            LogAnalysisMap->setObjectName(QStringLiteral("LogAnalysisMap"));
        LogAnalysisMap->resize(640, 300);
        gridLayout = new QGridLayout(LogAnalysisMap);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(3);
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        map = new mapcontrol::OPMapWidget(LogAnalysisMap);
        map->setObjectName(QStringLiteral("map"));

        gridLayout->addWidget(map, 0, 0, 1, 1);

        zoomSlider = new QSlider(LogAnalysisMap);
        zoomSlider->setObjectName(QStringLiteral("zoomSlider"));
        zoomSlider->setMaximum(600);
        zoomSlider->setPageStep(5);
        zoomSlider->setOrientation(Qt::Vertical);
        zoomSlider->setTickPosition(QSlider::TicksBelow);
        zoomSlider->setTickInterval(0);

        gridLayout->addWidget(zoomSlider, 0, 1, 2, 1);

        gridLayout->setRowStretch(0, 100);

        retranslateUi(LogAnalysisMap);

        QMetaObject::connectSlotsByName(LogAnalysisMap);
    } // setupUi

    void retranslateUi(QWidget *LogAnalysisMap)
    {
        LogAnalysisMap->setWindowTitle(QApplication::translate("LogAnalysisMap", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LogAnalysisMap: public Ui_LogAnalysisMap {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGANALYSISMAP_H
