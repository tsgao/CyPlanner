/********************************************************************************
** Form generated from reading UI file 'APMShortcutModesDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APMSHORTCUTMODESDIALOG_H
#define UI_APMSHORTCUTMODESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_APMShortcutModesDialog
{
public:
    QDialogButtonBox *buttonBox;
    QComboBox *opt1ModeComboBox;
    QComboBox *opt2ModeComboBox;
    QComboBox *opt3ModeComboBox;
    QComboBox *opt4ModeComboBox;

    void setupUi(QDialog *APMShortcutModesDialog)
    {
        if (APMShortcutModesDialog->objectName().isEmpty())
            APMShortcutModesDialog->setObjectName(QStringLiteral("APMShortcutModesDialog"));
        APMShortcutModesDialog->resize(484, 87);
        buttonBox = new QDialogButtonBox(APMShortcutModesDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(140, 44, 341, 40));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        opt1ModeComboBox = new QComboBox(APMShortcutModesDialog);
        opt1ModeComboBox->setObjectName(QStringLiteral("opt1ModeComboBox"));
        opt1ModeComboBox->setGeometry(QRect(10, 8, 111, 26));
        opt2ModeComboBox = new QComboBox(APMShortcutModesDialog);
        opt2ModeComboBox->setObjectName(QStringLiteral("opt2ModeComboBox"));
        opt2ModeComboBox->setGeometry(QRect(130, 8, 111, 26));
        opt3ModeComboBox = new QComboBox(APMShortcutModesDialog);
        opt3ModeComboBox->setObjectName(QStringLiteral("opt3ModeComboBox"));
        opt3ModeComboBox->setGeometry(QRect(250, 8, 111, 26));
        opt4ModeComboBox = new QComboBox(APMShortcutModesDialog);
        opt4ModeComboBox->setObjectName(QStringLiteral("opt4ModeComboBox"));
        opt4ModeComboBox->setGeometry(QRect(370, 8, 111, 26));

        retranslateUi(APMShortcutModesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), APMShortcutModesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), APMShortcutModesDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(APMShortcutModesDialog);
    } // setupUi

    void retranslateUi(QDialog *APMShortcutModesDialog)
    {
        APMShortcutModesDialog->setWindowTitle(QApplication::translate("APMShortcutModesDialog", "Set Shortcut Mode Actions", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class APMShortcutModesDialog: public Ui_APMShortcutModesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APMSHORTCUTMODESDIALOG_H
