/********************************************************************************
** Form generated from reading UI file 'QGCPxImuFirmwareUpdate.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCPXIMUFIRMWAREUPDATE_H
#define UI_QGCPXIMUFIRMWAREUPDATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCPxImuFirmwareUpdate
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QPlainTextEdit *plainTextEdit;
    QRadioButton *radioButton;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QRadioButton *radioButton_2;
    QLabel *label_4;
    QPushButton *pushButton_3;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QWidget *QGCPxImuFirmwareUpdate)
    {
        if (QGCPxImuFirmwareUpdate->objectName().isEmpty())
            QGCPxImuFirmwareUpdate->setObjectName(QStringLiteral("QGCPxImuFirmwareUpdate"));
        QGCPxImuFirmwareUpdate->resize(400, 300);
        gridLayout = new QGridLayout(QGCPxImuFirmwareUpdate);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(QGCPxImuFirmwareUpdate);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setContentsMargins(2, 2, 2, 2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        plainTextEdit = new QPlainTextEdit(groupBox);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        horizontalLayout->addWidget(plainTextEdit);


        gridLayout->addWidget(groupBox, 0, 0, 1, 5);

        radioButton = new QRadioButton(QGCPxImuFirmwareUpdate);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        gridLayout->addWidget(radioButton, 1, 0, 1, 2);

        label_3 = new QLabel(QGCPxImuFirmwareUpdate);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 2, 1, 2);

        pushButton_2 = new QPushButton(QGCPxImuFirmwareUpdate);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 1, 4, 1, 1);

        radioButton_2 = new QRadioButton(QGCPxImuFirmwareUpdate);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        gridLayout->addWidget(radioButton_2, 2, 0, 1, 2);

        label_4 = new QLabel(QGCPxImuFirmwareUpdate);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 2, 2, 1, 2);

        pushButton_3 = new QPushButton(QGCPxImuFirmwareUpdate);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 2, 4, 1, 1);

        label = new QLabel(QGCPxImuFirmwareUpdate);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 3, 0, 1, 1);

        label_2 = new QLabel(QGCPxImuFirmwareUpdate);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 3, 1, 1, 2);

        pushButton = new QPushButton(QGCPxImuFirmwareUpdate);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 3, 3, 1, 2);


        retranslateUi(QGCPxImuFirmwareUpdate);

        QMetaObject::connectSlotsByName(QGCPxImuFirmwareUpdate);
    } // setupUi

    void retranslateUi(QWidget *QGCPxImuFirmwareUpdate)
    {
        QGCPxImuFirmwareUpdate->setWindowTitle(QApplication::translate("QGCPxImuFirmwareUpdate", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QGCPxImuFirmwareUpdate", "Instructions", Q_NULLPTR));
        plainTextEdit->setPlainText(QApplication::translate("QGCPxImuFirmwareUpdate", "<h1>pxIMU Firmware Update</h1>\n"
"\n"
"<li>\n"
"  <item>Item 1</item>\n"
"</li>\n"
"", Q_NULLPTR));
        radioButton->setText(QApplication::translate("QGCPxImuFirmwareUpdate", "From File", Q_NULLPTR));
        label_3->setText(QApplication::translate("QGCPxImuFirmwareUpdate", "Choose file..", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("QGCPxImuFirmwareUpdate", "Choose File", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("QGCPxImuFirmwareUpdate", "From Internet", Q_NULLPTR));
        label_4->setText(QApplication::translate("QGCPxImuFirmwareUpdate", "Firmware v.0.2.1", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("QGCPxImuFirmwareUpdate", "Download", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QApplication::translate("QGCPxImuFirmwareUpdate", "Waiting for first user action", Q_NULLPTR));
        pushButton->setText(QApplication::translate("QGCPxImuFirmwareUpdate", "Flash Firmware", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QGCPxImuFirmwareUpdate: public Ui_QGCPxImuFirmwareUpdate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCPXIMUFIRMWAREUPDATE_H
