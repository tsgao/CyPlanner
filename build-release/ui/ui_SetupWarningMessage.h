/********************************************************************************
** Form generated from reading UI file 'SetupWarningMessage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETUPWARNINGMESSAGE_H
#define UI_SETUPWARNINGMESSAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SetupWarningMessage
{
public:

    void setupUi(QWidget *SetupWarningMessage)
    {
        if (SetupWarningMessage->objectName().isEmpty())
            SetupWarningMessage->setObjectName(QStringLiteral("SetupWarningMessage"));
        SetupWarningMessage->resize(564, 383);

        retranslateUi(SetupWarningMessage);

        QMetaObject::connectSlotsByName(SetupWarningMessage);
    } // setupUi

    void retranslateUi(QWidget *SetupWarningMessage)
    {
        SetupWarningMessage->setWindowTitle(QApplication::translate("SetupWarningMessage", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SetupWarningMessage: public Ui_SetupWarningMessage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETUPWARNINGMESSAGE_H
