/********************************************************************************
** Form generated from reading UI file 'dataselectionscreen.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATASELECTIONSCREEN_H
#define UI_DATASELECTIONSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DataSelectionScreen
{
public:
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *clearPushButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *DataSelectionScreen)
    {
        if (DataSelectionScreen->objectName().isEmpty())
            DataSelectionScreen->setObjectName(QStringLiteral("DataSelectionScreen"));
        DataSelectionScreen->resize(654, 405);
        verticalLayout = new QVBoxLayout(DataSelectionScreen);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        treeWidget = new QTreeWidget(DataSelectionScreen);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setColumnCount(1);

        verticalLayout->addWidget(treeWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        clearPushButton = new QPushButton(DataSelectionScreen);
        clearPushButton->setObjectName(QStringLiteral("clearPushButton"));

        horizontalLayout->addWidget(clearPushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DataSelectionScreen);

        QMetaObject::connectSlotsByName(DataSelectionScreen);
    } // setupUi

    void retranslateUi(QWidget *DataSelectionScreen)
    {
        DataSelectionScreen->setWindowTitle(QApplication::translate("DataSelectionScreen", "Form", Q_NULLPTR));
        clearPushButton->setText(QApplication::translate("DataSelectionScreen", "Clear Selection", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DataSelectionScreen: public Ui_DataSelectionScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATASELECTIONSCREEN_H
