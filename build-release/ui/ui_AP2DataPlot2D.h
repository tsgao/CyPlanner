/********************************************************************************
** Form generated from reading UI file 'AP2DataPlot2D.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AP2DATAPLOT2D_H
#define UI_AP2DATAPLOT2D_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "dataselectionscreen.h"

QT_BEGIN_NAMESPACE

class Ui_AP2DataPlot2D
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *horizontalSplitter;
    QSplitter *splitter;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_5;
    QScrollBar *horizontalScrollBar;
    QHBoxLayout *horizontalLayout_41;
    QSpacerItem *horizontalSpacer_5;
    QCheckBox *modeDisplayCheckBox;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QScrollBar *verticalScrollBar;
    QLabel *label_2;
    DataSelectionScreen *dataSelectionScreen;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *downloadPushButton;
    QPushButton *loadOfflineLogButton;
    QPushButton *loadTLogButton;
    QPushButton *graphControlsPushButton;
    QCheckBox *autoScrollCheckBox;
    QCheckBox *showValuesCheckBox;
    QPushButton *toKMLPushButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *AP2DataPlot2D)
    {
        if (AP2DataPlot2D->objectName().isEmpty())
            AP2DataPlot2D->setObjectName(QStringLiteral("AP2DataPlot2D"));
        AP2DataPlot2D->resize(1579, 600);
        verticalLayout = new QVBoxLayout(AP2DataPlot2D);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalSplitter = new QSplitter(AP2DataPlot2D);
        horizontalSplitter->setObjectName(QStringLiteral("horizontalSplitter"));
        horizontalSplitter->setOrientation(Qt::Horizontal);
        horizontalSplitter->setChildrenCollapsible(false);
        splitter = new QSplitter(horizontalSplitter);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        widget = new QWidget(splitter);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(3, 3, 3, 3);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(-1, -1, -1, 0);
        horizontalScrollBar = new QScrollBar(widget);
        horizontalScrollBar->setObjectName(QStringLiteral("horizontalScrollBar"));
        horizontalScrollBar->setOrientation(Qt::Horizontal);

        verticalLayout_5->addWidget(horizontalScrollBar);

        horizontalLayout_41 = new QHBoxLayout();
        horizontalLayout_41->setObjectName(QStringLiteral("horizontalLayout_41"));
        horizontalLayout_41->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalSpacer_5 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_41->addItem(horizontalSpacer_5);

        modeDisplayCheckBox = new QCheckBox(widget);
        modeDisplayCheckBox->setObjectName(QStringLiteral("modeDisplayCheckBox"));
        modeDisplayCheckBox->setChecked(true);

        horizontalLayout_41->addWidget(modeDisplayCheckBox);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_41->addItem(horizontalSpacer_3);


        verticalLayout_5->addLayout(horizontalLayout_41);

        verticalLayout_5->setStretch(0, 1);
        verticalLayout_5->setStretch(1, 1);

        horizontalLayout_3->addLayout(verticalLayout_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(1);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(20, 40));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label);

        verticalScrollBar = new QScrollBar(widget);
        verticalScrollBar->setObjectName(QStringLiteral("verticalScrollBar"));
        verticalScrollBar->setMinimum(1);
        verticalScrollBar->setMaximum(100);
        verticalScrollBar->setOrientation(Qt::Vertical);

        verticalLayout_4->addWidget(verticalScrollBar);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(20, 40));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_2);


        horizontalLayout_3->addLayout(verticalLayout_4);

        horizontalLayout_3->setStretch(0, 20);
        horizontalLayout_3->setStretch(1, 1);

        verticalLayout_3->addLayout(horizontalLayout_3);

        splitter->addWidget(widget);
        horizontalSplitter->addWidget(splitter);
        dataSelectionScreen = new DataSelectionScreen(horizontalSplitter);
        dataSelectionScreen->setObjectName(QStringLiteral("dataSelectionScreen"));
        dataSelectionScreen->setMinimumSize(QSize(150, 0));
        horizontalSplitter->addWidget(dataSelectionScreen);

        verticalLayout->addWidget(horizontalSplitter);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_6 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        downloadPushButton = new QPushButton(AP2DataPlot2D);
        downloadPushButton->setObjectName(QStringLiteral("downloadPushButton"));

        horizontalLayout->addWidget(downloadPushButton);

        loadOfflineLogButton = new QPushButton(AP2DataPlot2D);
        loadOfflineLogButton->setObjectName(QStringLiteral("loadOfflineLogButton"));

        horizontalLayout->addWidget(loadOfflineLogButton);

        loadTLogButton = new QPushButton(AP2DataPlot2D);
        loadTLogButton->setObjectName(QStringLiteral("loadTLogButton"));

        horizontalLayout->addWidget(loadTLogButton);

        graphControlsPushButton = new QPushButton(AP2DataPlot2D);
        graphControlsPushButton->setObjectName(QStringLiteral("graphControlsPushButton"));

        horizontalLayout->addWidget(graphControlsPushButton);

        autoScrollCheckBox = new QCheckBox(AP2DataPlot2D);
        autoScrollCheckBox->setObjectName(QStringLiteral("autoScrollCheckBox"));

        horizontalLayout->addWidget(autoScrollCheckBox);

        showValuesCheckBox = new QCheckBox(AP2DataPlot2D);
        showValuesCheckBox->setObjectName(QStringLiteral("showValuesCheckBox"));

        horizontalLayout->addWidget(showValuesCheckBox);

        toKMLPushButton = new QPushButton(AP2DataPlot2D);
        toKMLPushButton->setObjectName(QStringLiteral("toKMLPushButton"));

        horizontalLayout->addWidget(toKMLPushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        verticalLayout->setStretch(0, 1);

        retranslateUi(AP2DataPlot2D);

        QMetaObject::connectSlotsByName(AP2DataPlot2D);
    } // setupUi

    void retranslateUi(QWidget *AP2DataPlot2D)
    {
        AP2DataPlot2D->setWindowTitle(QApplication::translate("AP2DataPlot2D", "Graph", Q_NULLPTR));
        modeDisplayCheckBox->setText(QApplication::translate("AP2DataPlot2D", "Show MODE", Q_NULLPTR));
        label->setText(QApplication::translate("AP2DataPlot2D", "<h1>+</h1>", Q_NULLPTR));
        label_2->setText(QApplication::translate("AP2DataPlot2D", "<h1>-</h1>", Q_NULLPTR));
        downloadPushButton->setText(QApplication::translate("AP2DataPlot2D", "Download Log", Q_NULLPTR));
        loadOfflineLogButton->setText(QApplication::translate("AP2DataPlot2D", "Open Log", Q_NULLPTR));
        loadTLogButton->setText(QApplication::translate("AP2DataPlot2D", "Enable Log Playback", Q_NULLPTR));
        graphControlsPushButton->setText(QApplication::translate("AP2DataPlot2D", "Graph Controls", Q_NULLPTR));
        autoScrollCheckBox->setText(QApplication::translate("AP2DataPlot2D", "Auto Scroll With Data", Q_NULLPTR));
        showValuesCheckBox->setText(QApplication::translate("AP2DataPlot2D", "Show Values Under Mouse", Q_NULLPTR));
        toKMLPushButton->setText(QApplication::translate("AP2DataPlot2D", "Log to Google Earth File", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AP2DataPlot2D: public Ui_AP2DataPlot2D {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AP2DATAPLOT2D_H
