/********************************************************************************
** Form generated from reading UI file 'ApmPlaneLevel.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APMPLANELEVEL_H
#define UI_APMPLANELEVEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ApmPlaneLevel
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *levelPushButton;
    QGroupBox *groupBox;
    QCheckBox *manualLevelCheckBox;

    void setupUi(QWidget *ApmPlaneLevel)
    {
        if (ApmPlaneLevel->objectName().isEmpty())
            ApmPlaneLevel->setObjectName(QStringLiteral("ApmPlaneLevel"));
        ApmPlaneLevel->resize(400, 300);
        label = new QLabel(ApmPlaneLevel);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 221, 31));
        label_2 = new QLabel(ApmPlaneLevel);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 70, 271, 41));
        label_3 = new QLabel(ApmPlaneLevel);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 150, 291, 16));
        levelPushButton = new QPushButton(ApmPlaneLevel);
        levelPushButton->setObjectName(QStringLiteral("levelPushButton"));
        levelPushButton->setGeometry(QRect(160, 180, 75, 23));
        groupBox = new QGroupBox(ApmPlaneLevel);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(120, 230, 151, 51));
        manualLevelCheckBox = new QCheckBox(groupBox);
        manualLevelCheckBox->setObjectName(QStringLiteral("manualLevelCheckBox"));
        manualLevelCheckBox->setGeometry(QRect(30, 20, 91, 17));

        retranslateUi(ApmPlaneLevel);

        QMetaObject::connectSlotsByName(ApmPlaneLevel);
    } // setupUi

    void retranslateUi(QWidget *ApmPlaneLevel)
    {
        ApmPlaneLevel->setWindowTitle(QApplication::translate("ApmPlaneLevel", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("ApmPlaneLevel", "<h2>ArduPlane Level</h2>", Q_NULLPTR));
        label_2->setText(QApplication::translate("ApmPlaneLevel", "By Default your plane will autolevel on every boot.\n"
"To disable this action you need to turn on manual\n"
"level and perform a level to calibrate the accel offsets.", Q_NULLPTR));
        label_3->setText(QApplication::translate("ApmPlaneLevel", "Level your plane and click Level to set default accel offsets", Q_NULLPTR));
        levelPushButton->setText(QApplication::translate("ApmPlaneLevel", "Level", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("ApmPlaneLevel", "For advanced users ONLY", Q_NULLPTR));
        manualLevelCheckBox->setText(QApplication::translate("ApmPlaneLevel", "Manual Level", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ApmPlaneLevel: public Ui_ApmPlaneLevel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APMPLANELEVEL_H
