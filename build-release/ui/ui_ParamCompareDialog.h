/********************************************************************************
** Form generated from reading UI file 'ParamCompareDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARAMCOMPAREDIALOG_H
#define UI_PARAMCOMPAREDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ParamCompareDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QTableWidget *compareTableWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *loadButton;
    QPushButton *continueButton;
    QPushButton *cancelButton;
    QSpacerItem *verticalSpacer_2;
    QCheckBox *checkAllBox;

    void setupUi(QDialog *ParamCompareDialog)
    {
        if (ParamCompareDialog->objectName().isEmpty())
            ParamCompareDialog->setObjectName(QStringLiteral("ParamCompareDialog"));
        ParamCompareDialog->resize(589, 401);
        verticalLayout_2 = new QVBoxLayout(ParamCompareDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        compareTableWidget = new QTableWidget(ParamCompareDialog);
        compareTableWidget->setObjectName(QStringLiteral("compareTableWidget"));

        horizontalLayout->addWidget(compareTableWidget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        loadButton = new QPushButton(ParamCompareDialog);
        loadButton->setObjectName(QStringLiteral("loadButton"));

        verticalLayout->addWidget(loadButton);

        continueButton = new QPushButton(ParamCompareDialog);
        continueButton->setObjectName(QStringLiteral("continueButton"));

        verticalLayout->addWidget(continueButton);

        cancelButton = new QPushButton(ParamCompareDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        verticalLayout->addWidget(cancelButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        checkAllBox = new QCheckBox(ParamCompareDialog);
        checkAllBox->setObjectName(QStringLiteral("checkAllBox"));
        checkAllBox->setChecked(true);

        verticalLayout->addWidget(checkAllBox);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(ParamCompareDialog);

        QMetaObject::connectSlotsByName(ParamCompareDialog);
    } // setupUi

    void retranslateUi(QDialog *ParamCompareDialog)
    {
        ParamCompareDialog->setWindowTitle(QApplication::translate("ParamCompareDialog", "Compare Parameters", Q_NULLPTR));
        loadButton->setText(QApplication::translate("ParamCompareDialog", "Load File", Q_NULLPTR));
        continueButton->setText(QApplication::translate("ParamCompareDialog", "Continue", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("ParamCompareDialog", "Cancel", Q_NULLPTR));
        checkAllBox->setText(QApplication::translate("ParamCompareDialog", "Check/Uncheck All", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ParamCompareDialog: public Ui_ParamCompareDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARAMCOMPAREDIALOG_H
