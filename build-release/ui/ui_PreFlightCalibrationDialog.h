/********************************************************************************
** Form generated from reading UI file 'PreFlightCalibrationDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFLIGHTCALIBRATIONDIALOG_H
#define UI_PREFLIGHTCALIBRATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PreFlightCalibrationDialog
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *PreFlightCalibrationDialog)
    {
        if (PreFlightCalibrationDialog->objectName().isEmpty())
            PreFlightCalibrationDialog->setObjectName(QStringLiteral("PreFlightCalibrationDialog"));
        PreFlightCalibrationDialog->resize(334, 291);
        horizontalLayout_2 = new QHBoxLayout(PreFlightCalibrationDialog);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        groupBox = new QGroupBox(PreFlightCalibrationDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMinimumSize(QSize(221, 0));

        horizontalLayout->addWidget(groupBox);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        buttonBox = new QDialogButtonBox(PreFlightCalibrationDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setMaximumSize(QSize(71, 16777215));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        verticalSpacer = new QSpacerItem(20, 218, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalLayout->setStretch(1, 1);

        horizontalLayout->addLayout(verticalLayout);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(PreFlightCalibrationDialog);

        QMetaObject::connectSlotsByName(PreFlightCalibrationDialog);
    } // setupUi

    void retranslateUi(QDialog *PreFlightCalibrationDialog)
    {
        PreFlightCalibrationDialog->setWindowTitle(QApplication::translate("PreFlightCalibrationDialog", "Pre-Flight Calibration", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("PreFlightCalibrationDialog", "Generic Vehicle", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PreFlightCalibrationDialog: public Ui_PreFlightCalibrationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFLIGHTCALIBRATIONDIALOG_H
