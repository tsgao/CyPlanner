/********************************************************************************
** Form generated from reading UI file 'CompassMotorCalibrationDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPASSMOTORCALIBRATIONDIALOG_H
#define UI_COMPASSMOTORCALIBRATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_CompassMotorCalibrationDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QPlainTextEdit *messageTextEdit;
    QCustomPlot *customPlot;
    QVBoxLayout *verticalLayout;
    QPushButton *okButton;
    QPushButton *startButton;
    QPushButton *stopButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *CompassMotorCalibrationDialog)
    {
        if (CompassMotorCalibrationDialog->objectName().isEmpty())
            CompassMotorCalibrationDialog->setObjectName(QStringLiteral("CompassMotorCalibrationDialog"));
        CompassMotorCalibrationDialog->resize(705, 404);
        horizontalLayout = new QHBoxLayout(CompassMotorCalibrationDialog);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(CompassMotorCalibrationDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(16777215, 16));

        verticalLayout_2->addWidget(label);

        messageTextEdit = new QPlainTextEdit(CompassMotorCalibrationDialog);
        messageTextEdit->setObjectName(QStringLiteral("messageTextEdit"));
        messageTextEdit->setMaximumSize(QSize(16777215, 71));
        messageTextEdit->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_2->addWidget(messageTextEdit);

        customPlot = new QCustomPlot(CompassMotorCalibrationDialog);
        customPlot->setObjectName(QStringLiteral("customPlot"));

        verticalLayout_2->addWidget(customPlot);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        okButton = new QPushButton(CompassMotorCalibrationDialog);
        okButton->setObjectName(QStringLiteral("okButton"));

        verticalLayout->addWidget(okButton);

        startButton = new QPushButton(CompassMotorCalibrationDialog);
        startButton->setObjectName(QStringLiteral("startButton"));

        verticalLayout->addWidget(startButton);

        stopButton = new QPushButton(CompassMotorCalibrationDialog);
        stopButton->setObjectName(QStringLiteral("stopButton"));

        verticalLayout->addWidget(stopButton);

        verticalSpacer = new QSpacerItem(20, 248, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(CompassMotorCalibrationDialog);

        QMetaObject::connectSlotsByName(CompassMotorCalibrationDialog);
    } // setupUi

    void retranslateUi(QDialog *CompassMotorCalibrationDialog)
    {
        CompassMotorCalibrationDialog->setWindowTitle(QApplication::translate("CompassMotorCalibrationDialog", "Compass Motor Interference Config", Q_NULLPTR));
        label->setText(QApplication::translate("CompassMotorCalibrationDialog", "Messages", Q_NULLPTR));
        okButton->setText(QApplication::translate("CompassMotorCalibrationDialog", "OK", Q_NULLPTR));
        startButton->setText(QApplication::translate("CompassMotorCalibrationDialog", "Start", Q_NULLPTR));
        stopButton->setText(QApplication::translate("CompassMotorCalibrationDialog", "Stop", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CompassMotorCalibrationDialog: public Ui_CompassMotorCalibrationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPASSMOTORCALIBRATIONDIALOG_H
