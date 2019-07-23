/********************************************************************************
** Form generated from reading UI file 'LogAnalysis.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGANALYSIS_H
#define UI_LOGANALYSIS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "dataselectionscreen.h"

QT_BEGIN_NAMESPACE

class Ui_LogAnalysis
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
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_7;
    QCheckBox *modeDisplayCheckBox;
    QCheckBox *errDisplayCheckBox;
    QCheckBox *evDisplayCheckBox;
    QCheckBox *msgDisplayCheckBox;
    QSpacerItem *horizontalSpacer_8;
    QCheckBox *showValuesCheckBox;
    QCheckBox *tableCursorCheckBox;
    QCheckBox *rangeCursorCheckBox;
    QSpacerItem *horizontalSpacer_9;
    QCheckBox *indexTypeCheckBox;
    QHBoxLayout *horizontalLayout_41;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *graphControlsPushButton;
    QPushButton *resetScalingPushButton;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *storeGraphSettingsButton;
    QPushButton *applyGraphSettingsButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *storeToPresetPushBtn;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QScrollBar *verticalScrollBar;
    QLabel *label_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QTableView *tableWidget;
    QGroupBox *tableFilterGroupBox;
    QVBoxLayout *verticalLayout_7;
    QTreeWidget *filterSelectTreeWidget;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *filterAcceptPushButton;
    QPushButton *filterCancelPushButton;
    QPushButton *filterSelectAllPushButton;
    QPushButton *filterInvertSelectPushButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *filterShowPushButton;
    DataSelectionScreen *dataSelectionScreen;

    void setupUi(QWidget *LogAnalysis)
    {
        if (LogAnalysis->objectName().isEmpty())
            LogAnalysis->setObjectName(QStringLiteral("LogAnalysis"));
        LogAnalysis->resize(1579, 600);
        verticalLayout = new QVBoxLayout(LogAnalysis);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalSplitter = new QSplitter(LogAnalysis);
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
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalScrollBar = new QScrollBar(widget);
        horizontalScrollBar->setObjectName(QStringLiteral("horizontalScrollBar"));
        horizontalScrollBar->setOrientation(Qt::Horizontal);

        verticalLayout_5->addWidget(horizontalScrollBar);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_7 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);

        modeDisplayCheckBox = new QCheckBox(widget);
        modeDisplayCheckBox->setObjectName(QStringLiteral("modeDisplayCheckBox"));
        modeDisplayCheckBox->setChecked(true);

        horizontalLayout_2->addWidget(modeDisplayCheckBox);

        errDisplayCheckBox = new QCheckBox(widget);
        errDisplayCheckBox->setObjectName(QStringLiteral("errDisplayCheckBox"));
        errDisplayCheckBox->setChecked(true);

        horizontalLayout_2->addWidget(errDisplayCheckBox);

        evDisplayCheckBox = new QCheckBox(widget);
        evDisplayCheckBox->setObjectName(QStringLiteral("evDisplayCheckBox"));
        evDisplayCheckBox->setChecked(true);

        horizontalLayout_2->addWidget(evDisplayCheckBox);

        msgDisplayCheckBox = new QCheckBox(widget);
        msgDisplayCheckBox->setObjectName(QStringLiteral("msgDisplayCheckBox"));
        msgDisplayCheckBox->setChecked(true);

        horizontalLayout_2->addWidget(msgDisplayCheckBox);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_8);

        showValuesCheckBox = new QCheckBox(widget);
        showValuesCheckBox->setObjectName(QStringLiteral("showValuesCheckBox"));

        horizontalLayout_2->addWidget(showValuesCheckBox);

        tableCursorCheckBox = new QCheckBox(widget);
        tableCursorCheckBox->setObjectName(QStringLiteral("tableCursorCheckBox"));

        horizontalLayout_2->addWidget(tableCursorCheckBox);

        rangeCursorCheckBox = new QCheckBox(widget);
        rangeCursorCheckBox->setObjectName(QStringLiteral("rangeCursorCheckBox"));

        horizontalLayout_2->addWidget(rangeCursorCheckBox);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_9);

        indexTypeCheckBox = new QCheckBox(widget);
        indexTypeCheckBox->setObjectName(QStringLiteral("indexTypeCheckBox"));

        horizontalLayout_2->addWidget(indexTypeCheckBox);


        verticalLayout_5->addLayout(horizontalLayout_2);

        horizontalLayout_41 = new QHBoxLayout();
        horizontalLayout_41->setObjectName(QStringLiteral("horizontalLayout_41"));
        horizontalLayout_41->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalSpacer_5 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_41->addItem(horizontalSpacer_5);

        graphControlsPushButton = new QPushButton(widget);
        graphControlsPushButton->setObjectName(QStringLiteral("graphControlsPushButton"));

        horizontalLayout_41->addWidget(graphControlsPushButton);

        resetScalingPushButton = new QPushButton(widget);
        resetScalingPushButton->setObjectName(QStringLiteral("resetScalingPushButton"));

        horizontalLayout_41->addWidget(resetScalingPushButton);

        horizontalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_41->addItem(horizontalSpacer_4);

        storeGraphSettingsButton = new QPushButton(widget);
        storeGraphSettingsButton->setObjectName(QStringLiteral("storeGraphSettingsButton"));

        horizontalLayout_41->addWidget(storeGraphSettingsButton);

        applyGraphSettingsButton = new QPushButton(widget);
        applyGraphSettingsButton->setObjectName(QStringLiteral("applyGraphSettingsButton"));

        horizontalLayout_41->addWidget(applyGraphSettingsButton);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_41->addItem(horizontalSpacer);

        storeToPresetPushBtn = new QPushButton(widget);
        storeToPresetPushBtn->setObjectName(QStringLiteral("storeToPresetPushBtn"));

        horizontalLayout_41->addWidget(storeToPresetPushBtn);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_41->addItem(horizontalSpacer_3);


        verticalLayout_5->addLayout(horizontalLayout_41);

        verticalLayout_5->setStretch(1, 1);
        verticalLayout_5->setStretch(2, 1);

        horizontalLayout_3->addLayout(verticalLayout_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(1);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(15, 25));
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
        label_2->setMaximumSize(QSize(15, 45));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_2);


        horizontalLayout_3->addLayout(verticalLayout_4);

        horizontalLayout_3->setStretch(1, 1);

        verticalLayout_3->addLayout(horizontalLayout_3);

        splitter->addWidget(widget);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        tableWidget = new QTableView(layoutWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        horizontalLayout_4->addWidget(tableWidget);

        tableFilterGroupBox = new QGroupBox(layoutWidget);
        tableFilterGroupBox->setObjectName(QStringLiteral("tableFilterGroupBox"));
        verticalLayout_7 = new QVBoxLayout(tableFilterGroupBox);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(3, 3, 3, 3);
        filterSelectTreeWidget = new QTreeWidget(tableFilterGroupBox);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        filterSelectTreeWidget->setHeaderItem(__qtreewidgetitem);
        filterSelectTreeWidget->setObjectName(QStringLiteral("filterSelectTreeWidget"));

        verticalLayout_7->addWidget(filterSelectTreeWidget);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        filterAcceptPushButton = new QPushButton(tableFilterGroupBox);
        filterAcceptPushButton->setObjectName(QStringLiteral("filterAcceptPushButton"));

        horizontalLayout_5->addWidget(filterAcceptPushButton);

        filterCancelPushButton = new QPushButton(tableFilterGroupBox);
        filterCancelPushButton->setObjectName(QStringLiteral("filterCancelPushButton"));

        horizontalLayout_5->addWidget(filterCancelPushButton);

        filterSelectAllPushButton = new QPushButton(tableFilterGroupBox);
        filterSelectAllPushButton->setObjectName(QStringLiteral("filterSelectAllPushButton"));

        horizontalLayout_5->addWidget(filterSelectAllPushButton);

        filterInvertSelectPushButton = new QPushButton(tableFilterGroupBox);
        filterInvertSelectPushButton->setObjectName(QStringLiteral("filterInvertSelectPushButton"));

        horizontalLayout_5->addWidget(filterInvertSelectPushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        verticalLayout_7->addLayout(horizontalLayout_5);


        horizontalLayout_4->addWidget(tableFilterGroupBox);

        filterShowPushButton = new QPushButton(layoutWidget);
        filterShowPushButton->setObjectName(QStringLiteral("filterShowPushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(filterShowPushButton->sizePolicy().hasHeightForWidth());
        filterShowPushButton->setSizePolicy(sizePolicy);
        filterShowPushButton->setMinimumSize(QSize(25, 25));

        horizontalLayout_4->addWidget(filterShowPushButton);

        horizontalLayout_4->setStretch(0, 4);
        horizontalLayout_4->setStretch(1, 1);
        splitter->addWidget(layoutWidget);
        horizontalSplitter->addWidget(splitter);
        dataSelectionScreen = new DataSelectionScreen(horizontalSplitter);
        dataSelectionScreen->setObjectName(QStringLiteral("dataSelectionScreen"));
        dataSelectionScreen->setMinimumSize(QSize(150, 0));
        horizontalSplitter->addWidget(dataSelectionScreen);

        verticalLayout->addWidget(horizontalSplitter);

        verticalLayout->setStretch(0, 1);

        retranslateUi(LogAnalysis);

        QMetaObject::connectSlotsByName(LogAnalysis);
    } // setupUi

    void retranslateUi(QWidget *LogAnalysis)
    {
        LogAnalysis->setWindowTitle(QApplication::translate("LogAnalysis", "Graph", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        modeDisplayCheckBox->setToolTip(QApplication::translate("LogAnalysis", "<html><head/><body><p>Show mode messages</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        modeDisplayCheckBox->setText(QApplication::translate("LogAnalysis", "Show MODE", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        errDisplayCheckBox->setToolTip(QApplication::translate("LogAnalysis", "<html><head/><body><p>Show error messages</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        errDisplayCheckBox->setText(QApplication::translate("LogAnalysis", "Show ERR", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        evDisplayCheckBox->setToolTip(QApplication::translate("LogAnalysis", "<html><head/><body><p>Show event messages</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        evDisplayCheckBox->setText(QApplication::translate("LogAnalysis", "Show EV", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        msgDisplayCheckBox->setToolTip(QApplication::translate("LogAnalysis", "<html><head/><body><p>Show Info messages</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        msgDisplayCheckBox->setText(QApplication::translate("LogAnalysis", "Show MSG", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        showValuesCheckBox->setToolTip(QApplication::translate("LogAnalysis", "<html><head/><body><p>Show value tooltip including the range cursor values when mouse is over plot area.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        showValuesCheckBox->setText(QApplication::translate("LogAnalysis", "Show Values Under Mouse", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        tableCursorCheckBox->setToolTip(QApplication::translate("LogAnalysis", "<html><head/><body><p>Shows a cursor which is linked with the table view. If you select a table line the cursor will jump to this location in the graph and if you drag and drop the cursor the table view will jump to the corresponding line.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        tableCursorCheckBox->setText(QApplication::translate("LogAnalysis", "Show Table Cursor", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        rangeCursorCheckBox->setToolTip(QApplication::translate("LogAnalysis", "<html><head/><body><p>Adds a cursor pair to the plot area. Both of them can be moved by drag an drop. The value tool tip will show additional measurements like min,max... for the area between the cursors.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        rangeCursorCheckBox->setText(QApplication::translate("LogAnalysis", "Show Range Cursor", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        indexTypeCheckBox->setToolTip(QApplication::translate("LogAnalysis", "<html><head/><body><p>switches the horizontal (X) Axis from index to time.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        indexTypeCheckBox->setText(QApplication::translate("LogAnalysis", "Use time on x-axis", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        graphControlsPushButton->setToolTip(QApplication::translate("LogAnalysis", "<html><head/><body><p>Advanced scaling options like setting manual Y-Axis ranges and graph grouping</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        graphControlsPushButton->setText(QApplication::translate("LogAnalysis", "Advanced Scaling", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        resetScalingPushButton->setToolTip(QApplication::translate("LogAnalysis", "<html><head/><body><p>Resets all Y-Axis scalings to fit the whole graph</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        resetScalingPushButton->setText(QApplication::translate("LogAnalysis", "Reset Scaling", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        storeGraphSettingsButton->setToolTip(QApplication::translate("LogAnalysis", "<html><head/><body><p>Saves the currently enabled graphs with their scaling. The saved view is automagically shared between all open analysis windows.</p><p>Saving a new setting overwrites the old one.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        storeGraphSettingsButton->setText(QApplication::translate("LogAnalysis", "Save View", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        applyGraphSettingsButton->setToolTip(QApplication::translate("LogAnalysis", "<html><head/><body><p>Applys a previous saved view (all enabled graphs and their scaling) to the current analysis window replacing the content.</p><p>As all analysis windows share the saved view data this can be used to copy the current settings into another window.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        applyGraphSettingsButton->setText(QApplication::translate("LogAnalysis", "Apply View", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        storeToPresetPushBtn->setToolTip(QApplication::translate("LogAnalysis", "<html><head/><body><p>Adds the current enabled graphs with their settings to the Analyzing Presets menue</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        storeToPresetPushBtn->setText(QApplication::translate("LogAnalysis", "Add View To Preset", Q_NULLPTR));
        label->setText(QApplication::translate("LogAnalysis", "<h2>+</h2>", Q_NULLPTR));
        label_2->setText(QApplication::translate("LogAnalysis", "<h2>-</h2>", Q_NULLPTR));
        tableFilterGroupBox->setTitle(QApplication::translate("LogAnalysis", "Table filter", Q_NULLPTR));
        filterAcceptPushButton->setText(QApplication::translate("LogAnalysis", "Accept", Q_NULLPTR));
        filterCancelPushButton->setText(QApplication::translate("LogAnalysis", "Cancel", Q_NULLPTR));
        filterSelectAllPushButton->setText(QApplication::translate("LogAnalysis", "Select All", Q_NULLPTR));
        filterInvertSelectPushButton->setText(QApplication::translate("LogAnalysis", "Invert Select", Q_NULLPTR));
        filterShowPushButton->setText(QApplication::translate("LogAnalysis", "T\n"
"a\n"
"b\n"
"l\n"
"e\n"
" \n"
"F\n"
"i\n"
"l\n"
"t\n"
"e\n"
"r", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LogAnalysis: public Ui_LogAnalysis {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGANALYSIS_H
