/********************************************************************************
** Form generated from reading UI file 'AP2DataPlotAxisDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AP2DATAPLOTAXISDIALOG_H
#define UI_AP2DATAPLOTAXISDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AP2DataPlotAxisDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QTableWidget *graphTableWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *applyPushButton;
    QPushButton *clearPushButton;
    QPushButton *cancelPushButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *AP2DataPlotAxisDialog)
    {
        if (AP2DataPlotAxisDialog->objectName().isEmpty())
            AP2DataPlotAxisDialog->setObjectName(QStringLiteral("AP2DataPlotAxisDialog"));
        AP2DataPlotAxisDialog->resize(739, 405);
        verticalLayout = new QVBoxLayout(AP2DataPlotAxisDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_3 = new QLabel(AP2DataPlotAxisDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setWordWrap(true);

        verticalLayout->addWidget(label_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        graphTableWidget = new QTableWidget(AP2DataPlotAxisDialog);
        graphTableWidget->setObjectName(QStringLiteral("graphTableWidget"));

        horizontalLayout_2->addWidget(graphTableWidget);

        horizontalLayout_2->setStretch(0, 3);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        applyPushButton = new QPushButton(AP2DataPlotAxisDialog);
        applyPushButton->setObjectName(QStringLiteral("applyPushButton"));

        horizontalLayout->addWidget(applyPushButton);

        clearPushButton = new QPushButton(AP2DataPlotAxisDialog);
        clearPushButton->setObjectName(QStringLiteral("clearPushButton"));

        horizontalLayout->addWidget(clearPushButton);

        cancelPushButton = new QPushButton(AP2DataPlotAxisDialog);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        horizontalLayout->addWidget(cancelPushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(AP2DataPlotAxisDialog);

        QMetaObject::connectSlotsByName(AP2DataPlotAxisDialog);
    } // setupUi

    void retranslateUi(QWidget *AP2DataPlotAxisDialog)
    {
        AP2DataPlotAxisDialog->setWindowTitle(QApplication::translate("AP2DataPlotAxisDialog", "Graph Scale Control", Q_NULLPTR));
        label_3->setText(QApplication::translate("AP2DataPlotAxisDialog", "<h1>Axis Range Grouping</h1>\n"
"This Dialog is used for grouping multiple graphs with a single value range (the axis on the left hand side). Select a group from the combo box for a graph, or you can set the range manually by unchecking the \"Auto Axis\" checkbox and typing in Min/Max. <br>Multiple graphs in the same group will all have the same range, which will be automatically calculated", Q_NULLPTR));
        applyPushButton->setText(QApplication::translate("AP2DataPlotAxisDialog", "Apply", Q_NULLPTR));
        clearPushButton->setText(QApplication::translate("AP2DataPlotAxisDialog", "Clear Scaling", Q_NULLPTR));
        cancelPushButton->setText(QApplication::translate("AP2DataPlotAxisDialog", "Done", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AP2DataPlotAxisDialog: public Ui_AP2DataPlotAxisDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AP2DATAPLOTAXISDIALOG_H
