/********************************************************************************
** Form generated from reading UI file 'QGCCommandButton.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCCOMMANDBUTTON_H
#define UI_QGCCOMMANDBUTTON_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCCommandButton
{
public:
    QGridLayout *gridLayout;
    QComboBox *editCommandComboBox;
    QPushButton *editFinishButton;
    QLineEdit *editButtonName;
    QLineEdit *editNameLabel;
    QPushButton *commandButton;
    QSpinBox *editComponentSpinBox;
    QCheckBox *editConfirmationCheckBox;
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *editParam1SpinBox;
    QDoubleSpinBox *editParam2SpinBox;
    QDoubleSpinBox *editParam3SpinBox;
    QDoubleSpinBox *editParam4SpinBox;
    QDoubleSpinBox *editParam5SpinBox;
    QDoubleSpinBox *editParam6SpinBox;
    QDoubleSpinBox *editParam7SpinBox;
    QLabel *nameLabel;
    QCheckBox *editParamsVisibleCheckBox;
    QFrame *editLine1;
    QFrame *editLine2;

    void setupUi(QWidget *QGCCommandButton)
    {
        if (QGCCommandButton->objectName().isEmpty())
            QGCCommandButton->setObjectName(QStringLiteral("QGCCommandButton"));
        QGCCommandButton->resize(1183, 430);
        gridLayout = new QGridLayout(QGCCommandButton);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(6, 3, 6, 3);
        editCommandComboBox = new QComboBox(QGCCommandButton);
        editCommandComboBox->setObjectName(QStringLiteral("editCommandComboBox"));
        editCommandComboBox->setEditable(true);

        gridLayout->addWidget(editCommandComboBox, 7, 0, 1, 3);

        editFinishButton = new QPushButton(QGCCommandButton);
        editFinishButton->setObjectName(QStringLiteral("editFinishButton"));

        gridLayout->addWidget(editFinishButton, 7, 3, 1, 1);

        editButtonName = new QLineEdit(QGCCommandButton);
        editButtonName->setObjectName(QStringLiteral("editButtonName"));

        gridLayout->addWidget(editButtonName, 2, 3, 1, 1);

        editNameLabel = new QLineEdit(QGCCommandButton);
        editNameLabel->setObjectName(QStringLiteral("editNameLabel"));

        gridLayout->addWidget(editNameLabel, 2, 0, 1, 3);

        commandButton = new QPushButton(QGCCommandButton);
        commandButton->setObjectName(QStringLiteral("commandButton"));
        commandButton->setMinimumSize(QSize(60, 0));

        gridLayout->addWidget(commandButton, 4, 3, 1, 1);

        editComponentSpinBox = new QSpinBox(QGCCommandButton);
        editComponentSpinBox->setObjectName(QStringLiteral("editComponentSpinBox"));
        editComponentSpinBox->setMinimum(0);
        editComponentSpinBox->setMaximum(255);

        gridLayout->addWidget(editComponentSpinBox, 6, 0, 1, 1);

        editConfirmationCheckBox = new QCheckBox(QGCCommandButton);
        editConfirmationCheckBox->setObjectName(QStringLiteral("editConfirmationCheckBox"));

        gridLayout->addWidget(editConfirmationCheckBox, 6, 2, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        editParam1SpinBox = new QDoubleSpinBox(QGCCommandButton);
        editParam1SpinBox->setObjectName(QStringLiteral("editParam1SpinBox"));
        editParam1SpinBox->setMinimum(-2.14748e+9);
        editParam1SpinBox->setMaximum(2.14748e+9);

        horizontalLayout->addWidget(editParam1SpinBox);

        editParam2SpinBox = new QDoubleSpinBox(QGCCommandButton);
        editParam2SpinBox->setObjectName(QStringLiteral("editParam2SpinBox"));
        editParam2SpinBox->setMinimum(-2.14748e+9);
        editParam2SpinBox->setValue(0);

        horizontalLayout->addWidget(editParam2SpinBox);

        editParam3SpinBox = new QDoubleSpinBox(QGCCommandButton);
        editParam3SpinBox->setObjectName(QStringLiteral("editParam3SpinBox"));
        editParam3SpinBox->setMinimum(-2.14748e+9);
        editParam3SpinBox->setMaximum(2.14748e+9);

        horizontalLayout->addWidget(editParam3SpinBox);

        editParam4SpinBox = new QDoubleSpinBox(QGCCommandButton);
        editParam4SpinBox->setObjectName(QStringLiteral("editParam4SpinBox"));
        editParam4SpinBox->setMinimum(-2.14748e+9);
        editParam4SpinBox->setMaximum(2.14748e+9);

        horizontalLayout->addWidget(editParam4SpinBox);

        editParam5SpinBox = new QDoubleSpinBox(QGCCommandButton);
        editParam5SpinBox->setObjectName(QStringLiteral("editParam5SpinBox"));
        editParam5SpinBox->setMinimum(-2.14748e+9);
        editParam5SpinBox->setMaximum(2.14748e+9);

        horizontalLayout->addWidget(editParam5SpinBox);

        editParam6SpinBox = new QDoubleSpinBox(QGCCommandButton);
        editParam6SpinBox->setObjectName(QStringLiteral("editParam6SpinBox"));
        editParam6SpinBox->setMinimum(-2.14748e+9);
        editParam6SpinBox->setMaximum(2.14748e+9);

        horizontalLayout->addWidget(editParam6SpinBox);

        editParam7SpinBox = new QDoubleSpinBox(QGCCommandButton);
        editParam7SpinBox->setObjectName(QStringLiteral("editParam7SpinBox"));
        editParam7SpinBox->setMinimum(-2.14748e+9);
        editParam7SpinBox->setMaximum(2.14748e+9);

        horizontalLayout->addWidget(editParam7SpinBox);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 4);

        nameLabel = new QLabel(QGCCommandButton);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setMinimumSize(QSize(50, 0));
        nameLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(nameLabel, 4, 0, 1, 3);

        editParamsVisibleCheckBox = new QCheckBox(QGCCommandButton);
        editParamsVisibleCheckBox->setObjectName(QStringLiteral("editParamsVisibleCheckBox"));

        gridLayout->addWidget(editParamsVisibleCheckBox, 6, 1, 1, 1);

        editLine1 = new QFrame(QGCCommandButton);
        editLine1->setObjectName(QStringLiteral("editLine1"));
        editLine1->setMinimumSize(QSize(0, 0));
        editLine1->setFrameShape(QFrame::HLine);
        editLine1->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(editLine1, 1, 0, 1, 4);

        editLine2 = new QFrame(QGCCommandButton);
        editLine2->setObjectName(QStringLiteral("editLine2"));
        editLine2->setMinimumSize(QSize(0, 0));
        editLine2->setFrameShape(QFrame::HLine);
        editLine2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(editLine2, 8, 0, 1, 4);

        gridLayout->setColumnStretch(0, 100);

        retranslateUi(QGCCommandButton);
        QObject::connect(editNameLabel, SIGNAL(textChanged(QString)), nameLabel, SLOT(setText(QString)));

        QMetaObject::connectSlotsByName(QGCCommandButton);
    } // setupUi

    void retranslateUi(QWidget *QGCCommandButton)
    {
        QGCCommandButton->setWindowTitle(QApplication::translate("QGCCommandButton", "Form", Q_NULLPTR));
        editFinishButton->setText(QApplication::translate("QGCCommandButton", "Done", Q_NULLPTR));
        editButtonName->setText(QApplication::translate("QGCCommandButton", "<Button Label>", Q_NULLPTR));
        editNameLabel->setText(QApplication::translate("QGCCommandButton", "<Button Description Label (in front of button)>", Q_NULLPTR));
        commandButton->setText(QApplication::translate("QGCCommandButton", "Unnamed", Q_NULLPTR));
        editComponentSpinBox->setPrefix(QApplication::translate("QGCCommandButton", "Component ID: ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        editConfirmationCheckBox->setToolTip(QApplication::translate("QGCCommandButton", "Set the confirm flag for this button. Some commands require that first one command is sent without confirm flag and then a second, equal command with confirm flag. This ensures safety.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        editConfirmationCheckBox->setText(QApplication::translate("QGCCommandButton", "Set CONFIRM flag", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        editParam1SpinBox->setToolTip(QApplication::translate("QGCCommandButton", "PARAM1 Value as defined in MAV_CMD list", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        editParam1SpinBox->setStatusTip(QApplication::translate("QGCCommandButton", "PARAM1 Value as defined in MAV_CMD list", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        editParam1SpinBox->setPrefix(QApplication::translate("QGCCommandButton", "P1 ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        editParam2SpinBox->setToolTip(QApplication::translate("QGCCommandButton", "PARAM2 Value as defined in MAV_CMD list", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        editParam2SpinBox->setStatusTip(QApplication::translate("QGCCommandButton", "PARAM2 Value as defined in MAV_CMD list", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        editParam2SpinBox->setPrefix(QApplication::translate("QGCCommandButton", "P2: ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        editParam3SpinBox->setToolTip(QApplication::translate("QGCCommandButton", "PARAM3 Value as defined in MAV_CMD list", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        editParam3SpinBox->setStatusTip(QApplication::translate("QGCCommandButton", "PARAM3 Value as defined in MAV_CMD list", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        editParam3SpinBox->setPrefix(QApplication::translate("QGCCommandButton", "P3: ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        editParam4SpinBox->setToolTip(QApplication::translate("QGCCommandButton", "PARAM4 Value as defined in MAV_CMD list", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        editParam4SpinBox->setStatusTip(QApplication::translate("QGCCommandButton", "PARAM4 Value as defined in MAV_CMD list", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        editParam4SpinBox->setPrefix(QApplication::translate("QGCCommandButton", "P4: ", Q_NULLPTR));
        editParam5SpinBox->setPrefix(QApplication::translate("QGCCommandButton", "P5: ", Q_NULLPTR));
        editParam6SpinBox->setPrefix(QApplication::translate("QGCCommandButton", "P6: ", Q_NULLPTR));
        editParam7SpinBox->setPrefix(QApplication::translate("QGCCommandButton", "P7: ", Q_NULLPTR));
        nameLabel->setText(QApplication::translate("QGCCommandButton", "Description", Q_NULLPTR));
        editParamsVisibleCheckBox->setText(QApplication::translate("QGCCommandButton", "Keep parameters visible", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QGCCommandButton: public Ui_QGCCommandButton {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCCOMMANDBUTTON_H
