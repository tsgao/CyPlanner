/********************************************************************************
** Form generated from reading UI file 'RadioFlashWizard.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RADIOFLASHWIZARD_H
#define UI_RADIOFLASHWIZARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <QtWidgets/QWizard>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_RadioFlashWizard
{
public:
    QWizardPage *wizardPage1;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_5;
    QRadioButton *standardRadio;
    QRadioButton *rfd900aRadioButton;
    QRadioButton *rfd900uRadioButton;
    QWizardPage *wizardPage2;
    QLabel *label_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QComboBox *deviceComboBox;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QComboBox *baudrateComboBox;
    QWizardPage *wizardPage3;
    QGridLayout *gridLayout;
    QPlainTextEdit *plainTextEdit;
    QPushButton *flashPushButton;

    void setupUi(QWizard *RadioFlashWizard)
    {
        if (RadioFlashWizard->objectName().isEmpty())
            RadioFlashWizard->setObjectName(QStringLiteral("RadioFlashWizard"));
        RadioFlashWizard->resize(400, 286);
        RadioFlashWizard->setWizardStyle(QWizard::NStyles);
        wizardPage1 = new QWizardPage();
        wizardPage1->setObjectName(QStringLiteral("wizardPage1"));
        verticalLayout = new QVBoxLayout(wizardPage1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(wizardPage1);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        label_5 = new QLabel(wizardPage1);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        standardRadio = new QRadioButton(wizardPage1);
        standardRadio->setObjectName(QStringLiteral("standardRadio"));

        verticalLayout->addWidget(standardRadio);

        rfd900aRadioButton = new QRadioButton(wizardPage1);
        rfd900aRadioButton->setObjectName(QStringLiteral("rfd900aRadioButton"));

        verticalLayout->addWidget(rfd900aRadioButton);

        rfd900uRadioButton = new QRadioButton(wizardPage1);
        rfd900uRadioButton->setObjectName(QStringLiteral("rfd900uRadioButton"));

        verticalLayout->addWidget(rfd900uRadioButton);

        RadioFlashWizard->addPage(wizardPage1);
        wizardPage2 = new QWizardPage();
        wizardPage2->setObjectName(QStringLiteral("wizardPage2"));
        label_3 = new QLabel(wizardPage2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 0, 151, 22));
        layoutWidget = new QWidget(wizardPage2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 50, 351, 51));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        deviceComboBox = new QComboBox(layoutWidget);
        deviceComboBox->setObjectName(QStringLiteral("deviceComboBox"));

        verticalLayout_2->addWidget(deviceComboBox);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_4);

        baudrateComboBox = new QComboBox(layoutWidget);
        baudrateComboBox->setObjectName(QStringLiteral("baudrateComboBox"));

        verticalLayout_3->addWidget(baudrateComboBox);


        horizontalLayout->addLayout(verticalLayout_3);

        RadioFlashWizard->addPage(wizardPage2);
        wizardPage3 = new QWizardPage();
        wizardPage3->setObjectName(QStringLiteral("wizardPage3"));
        gridLayout = new QGridLayout(wizardPage3);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        plainTextEdit = new QPlainTextEdit(wizardPage3);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setCenterOnScroll(true);

        gridLayout->addWidget(plainTextEdit, 0, 0, 2, 2);

        flashPushButton = new QPushButton(wizardPage3);
        flashPushButton->setObjectName(QStringLiteral("flashPushButton"));

        gridLayout->addWidget(flashPushButton, 2, 1, 1, 1);

        RadioFlashWizard->addPage(wizardPage3);

        retranslateUi(RadioFlashWizard);

        QMetaObject::connectSlotsByName(RadioFlashWizard);
    } // setupUi

    void retranslateUi(QWizard *RadioFlashWizard)
    {
        RadioFlashWizard->setWindowTitle(QApplication::translate("RadioFlashWizard", "SiK Radio Updater", Q_NULLPTR));
        label->setText(QApplication::translate("RadioFlashWizard", "<html><head/><body><p><span style=\" font-size:18pt;\">Radio Firmware Update</span></p></body></html>", Q_NULLPTR));
        label_5->setText(QApplication::translate("RadioFlashWizard", "This wizard will update your SiK based radio firmware", Q_NULLPTR));
        standardRadio->setText(QApplication::translate("RadioFlashWizard", "3DR Radio (433Mhz/915MHz)", Q_NULLPTR));
        rfd900aRadioButton->setText(QApplication::translate("RadioFlashWizard", "RFD900a (915MHz)", Q_NULLPTR));
        rfd900uRadioButton->setText(QApplication::translate("RadioFlashWizard", "RFD900u (915MHz", Q_NULLPTR));
        label_3->setText(QApplication::translate("RadioFlashWizard", "<html><head/><body><p><span style=\" font-size:18pt;\">Select Device Port</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("RadioFlashWizard", "device", Q_NULLPTR));
        label_4->setText(QApplication::translate("RadioFlashWizard", "baudrate", Q_NULLPTR));
        flashPushButton->setText(QApplication::translate("RadioFlashWizard", "Flash Radio", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RadioFlashWizard: public Ui_RadioFlashWizard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RADIOFLASHWIZARD_H
