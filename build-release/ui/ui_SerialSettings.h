/********************************************************************************
** Form generated from reading UI file 'SerialSettings.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIALSETTINGS_H
#define UI_SERIALSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_serialSettings
{
public:
    QAction *actionDelete;
    QAction *actionConnect;
    QAction *actionClose;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *portlabel;
    QComboBox *portName;
    QLabel *portlabel_2;
    QComboBox *baudRate;
    QCheckBox *advCheckBox;
    QGroupBox *advGroupBox;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_3;
    QLabel *portlabel_3;
    QCheckBox *flowControlCheckBox;
    QLabel *portlabel_4;
    QGridLayout *gridLayout_2;
    QRadioButton *parNone;
    QRadioButton *parOdd;
    QRadioButton *parEven;
    QLabel *portlabel_5;
    QSpinBox *dataBitsSpinBox;
    QLabel *portlabel_6;
    QSpinBox *stopBitsSpinBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *serialSettings)
    {
        if (serialSettings->objectName().isEmpty())
            serialSettings->setObjectName(QStringLiteral("serialSettings"));
        serialSettings->resize(325, 343);
        actionDelete = new QAction(serialSettings);
        actionDelete->setObjectName(QStringLiteral("actionDelete"));
        actionConnect = new QAction(serialSettings);
        actionConnect->setObjectName(QStringLiteral("actionConnect"));
        actionClose = new QAction(serialSettings);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        verticalLayout = new QVBoxLayout(serialSettings);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        portlabel = new QLabel(serialSettings);
        portlabel->setObjectName(QStringLiteral("portlabel"));

        gridLayout->addWidget(portlabel, 0, 0, 1, 1);

        portName = new QComboBox(serialSettings);
        portName->setObjectName(QStringLiteral("portName"));
        portName->setMinimumSize(QSize(100, 0));
        portName->setEditable(true);
        portName->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout->addWidget(portName, 0, 1, 1, 1);

        portlabel_2 = new QLabel(serialSettings);
        portlabel_2->setObjectName(QStringLiteral("portlabel_2"));

        gridLayout->addWidget(portlabel_2, 1, 0, 1, 1);

        baudRate = new QComboBox(serialSettings);
        baudRate->setObjectName(QStringLiteral("baudRate"));
        baudRate->setMinimumSize(QSize(100, 0));
        baudRate->setEditable(false);
        baudRate->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout->addWidget(baudRate, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        advCheckBox = new QCheckBox(serialSettings);
        advCheckBox->setObjectName(QStringLiteral("advCheckBox"));

        verticalLayout->addWidget(advCheckBox);

        advGroupBox = new QGroupBox(serialSettings);
        advGroupBox->setObjectName(QStringLiteral("advGroupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(advGroupBox->sizePolicy().hasHeightForWidth());
        advGroupBox->setSizePolicy(sizePolicy);
        advGroupBox->setMaximumSize(QSize(16777215, 16777215));
        horizontalLayout = new QHBoxLayout(advGroupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        portlabel_3 = new QLabel(advGroupBox);
        portlabel_3->setObjectName(QStringLiteral("portlabel_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(portlabel_3->sizePolicy().hasHeightForWidth());
        portlabel_3->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(portlabel_3, 0, 0, 1, 1);

        flowControlCheckBox = new QCheckBox(advGroupBox);
        flowControlCheckBox->setObjectName(QStringLiteral("flowControlCheckBox"));

        gridLayout_3->addWidget(flowControlCheckBox, 0, 1, 1, 1);

        portlabel_4 = new QLabel(advGroupBox);
        portlabel_4->setObjectName(QStringLiteral("portlabel_4"));
        sizePolicy1.setHeightForWidth(portlabel_4->sizePolicy().hasHeightForWidth());
        portlabel_4->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(portlabel_4, 1, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        parNone = new QRadioButton(advGroupBox);
        parNone->setObjectName(QStringLiteral("parNone"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(parNone->sizePolicy().hasHeightForWidth());
        parNone->setSizePolicy(sizePolicy2);
        parNone->setChecked(true);

        gridLayout_2->addWidget(parNone, 0, 0, 1, 1);

        parOdd = new QRadioButton(advGroupBox);
        parOdd->setObjectName(QStringLiteral("parOdd"));
        sizePolicy2.setHeightForWidth(parOdd->sizePolicy().hasHeightForWidth());
        parOdd->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(parOdd, 0, 1, 1, 1);

        parEven = new QRadioButton(advGroupBox);
        parEven->setObjectName(QStringLiteral("parEven"));
        sizePolicy2.setHeightForWidth(parEven->sizePolicy().hasHeightForWidth());
        parEven->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(parEven, 0, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 1, 1, 1, 1);

        portlabel_5 = new QLabel(advGroupBox);
        portlabel_5->setObjectName(QStringLiteral("portlabel_5"));
        sizePolicy1.setHeightForWidth(portlabel_5->sizePolicy().hasHeightForWidth());
        portlabel_5->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(portlabel_5, 2, 0, 1, 1);

        dataBitsSpinBox = new QSpinBox(advGroupBox);
        dataBitsSpinBox->setObjectName(QStringLiteral("dataBitsSpinBox"));
        sizePolicy2.setHeightForWidth(dataBitsSpinBox->sizePolicy().hasHeightForWidth());
        dataBitsSpinBox->setSizePolicy(sizePolicy2);
        dataBitsSpinBox->setMinimumSize(QSize(0, 0));
        dataBitsSpinBox->setMinimum(5);
        dataBitsSpinBox->setMaximum(8);
        dataBitsSpinBox->setValue(8);

        gridLayout_3->addWidget(dataBitsSpinBox, 2, 1, 1, 1);

        portlabel_6 = new QLabel(advGroupBox);
        portlabel_6->setObjectName(QStringLiteral("portlabel_6"));
        sizePolicy1.setHeightForWidth(portlabel_6->sizePolicy().hasHeightForWidth());
        portlabel_6->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(portlabel_6, 3, 0, 1, 1);

        stopBitsSpinBox = new QSpinBox(advGroupBox);
        stopBitsSpinBox->setObjectName(QStringLiteral("stopBitsSpinBox"));
        sizePolicy2.setHeightForWidth(stopBitsSpinBox->sizePolicy().hasHeightForWidth());
        stopBitsSpinBox->setSizePolicy(sizePolicy2);
        stopBitsSpinBox->setFrame(true);
        stopBitsSpinBox->setReadOnly(false);
        stopBitsSpinBox->setMinimum(1);
        stopBitsSpinBox->setMaximum(2);
        stopBitsSpinBox->setValue(1);

        gridLayout_3->addWidget(stopBitsSpinBox, 3, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout_3);


        verticalLayout->addWidget(advGroupBox);

        verticalSpacer = new QSpacerItem(17, 64, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        advCheckBox->raise();
        parNone->raise();

        retranslateUi(serialSettings);
        QObject::connect(actionClose, SIGNAL(triggered()), serialSettings, SLOT(close()));

        QMetaObject::connectSlotsByName(serialSettings);
    } // setupUi

    void retranslateUi(QWidget *serialSettings)
    {
        serialSettings->setWindowTitle(QApplication::translate("serialSettings", "Form", Q_NULLPTR));
        actionDelete->setText(QApplication::translate("serialSettings", "Delete", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionDelete->setToolTip(QApplication::translate("serialSettings", "Delete this link", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionDelete->setStatusTip(QApplication::translate("serialSettings", "Delete this link", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionDelete->setWhatsThis(QApplication::translate("serialSettings", "Link delete button", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        actionConnect->setText(QApplication::translate("serialSettings", "Connect", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionConnect->setToolTip(QApplication::translate("serialSettings", "Connect this link", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionConnect->setStatusTip(QApplication::translate("serialSettings", "Connect this link", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionConnect->setWhatsThis(QApplication::translate("serialSettings", "Connect this link", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        actionClose->setText(QApplication::translate("serialSettings", "Close", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionClose->setToolTip(QApplication::translate("serialSettings", "Close the configuration window", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionClose->setStatusTip(QApplication::translate("serialSettings", "Close the configuration window", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionClose->setWhatsThis(QApplication::translate("serialSettings", "Close the configuration window", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        portlabel->setText(QApplication::translate("serialSettings", "Serial Port", Q_NULLPTR));
        portName->clear();
        portName->insertItems(0, QStringList()
         << QString()
        );
#ifndef QT_NO_TOOLTIP
        portName->setToolTip(QApplication::translate("serialSettings", "The serial port to which the system is connected. All ports listed here should work.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        portName->setStatusTip(QApplication::translate("serialSettings", "The serial port to which the system is connected. All ports listed here should work.", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        portName->setWhatsThis(QApplication::translate("serialSettings", "The serial port to which the system is connected. All ports listed here should work.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        portlabel_2->setText(QApplication::translate("serialSettings", "Baud Rate", Q_NULLPTR));
        baudRate->clear();
        baudRate->insertItems(0, QStringList()
         << QApplication::translate("serialSettings", "50", Q_NULLPTR)
         << QApplication::translate("serialSettings", "75", Q_NULLPTR)
         << QApplication::translate("serialSettings", "110", Q_NULLPTR)
         << QApplication::translate("serialSettings", "134", Q_NULLPTR)
         << QApplication::translate("serialSettings", "150", Q_NULLPTR)
         << QApplication::translate("serialSettings", "200", Q_NULLPTR)
         << QApplication::translate("serialSettings", "300", Q_NULLPTR)
         << QApplication::translate("serialSettings", "600", Q_NULLPTR)
         << QApplication::translate("serialSettings", "1200", Q_NULLPTR)
         << QApplication::translate("serialSettings", "1800", Q_NULLPTR)
         << QApplication::translate("serialSettings", "2400", Q_NULLPTR)
         << QApplication::translate("serialSettings", "4800", Q_NULLPTR)
         << QApplication::translate("serialSettings", "9600", Q_NULLPTR)
         << QApplication::translate("serialSettings", "14400", Q_NULLPTR)
         << QApplication::translate("serialSettings", "19200", Q_NULLPTR)
         << QApplication::translate("serialSettings", "38400", Q_NULLPTR)
         << QApplication::translate("serialSettings", "56000", Q_NULLPTR)
         << QApplication::translate("serialSettings", "57600", Q_NULLPTR)
         << QApplication::translate("serialSettings", "76800", Q_NULLPTR)
         << QApplication::translate("serialSettings", "115200", Q_NULLPTR)
         << QApplication::translate("serialSettings", "128000", Q_NULLPTR)
         << QApplication::translate("serialSettings", "230400", Q_NULLPTR)
         << QApplication::translate("serialSettings", "256000", Q_NULLPTR)
         << QApplication::translate("serialSettings", "460800", Q_NULLPTR)
         << QApplication::translate("serialSettings", "921600", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        baudRate->setToolTip(QApplication::translate("serialSettings", "The data transmission rate. If unsure 57600 and 115200 are very common rates.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        baudRate->setStatusTip(QApplication::translate("serialSettings", "The data transmission rate. If unsure 57600 and 115200 are very common rates.", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        baudRate->setWhatsThis(QApplication::translate("serialSettings", "The data transmission rate. If unsure 57600 and 115200 are very common rates.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        advCheckBox->setText(QApplication::translate("serialSettings", "Show Advanced Port Settings", Q_NULLPTR));
        advGroupBox->setTitle(QApplication::translate("serialSettings", "Advanced", Q_NULLPTR));
        portlabel_3->setText(QApplication::translate("serialSettings", "Flow Control", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        flowControlCheckBox->setToolTip(QApplication::translate("serialSettings", "Activate / deactivate hardware flow control. Commonly deactivated", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        flowControlCheckBox->setStatusTip(QApplication::translate("serialSettings", "Activate / deactivate hardware flow control. Commonly deactivated", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        flowControlCheckBox->setWhatsThis(QApplication::translate("serialSettings", "Activate / deactivate hardware flow control. Commonly deactivated", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        flowControlCheckBox->setText(QApplication::translate("serialSettings", "Active", Q_NULLPTR));
        portlabel_4->setText(QApplication::translate("serialSettings", "Parity", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        parNone->setToolTip(QApplication::translate("serialSettings", "Set the parity. In most cases no parity (None) is used.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        parNone->setStatusTip(QApplication::translate("serialSettings", "Set the parity. In most cases no parity (None) is used.", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        parNone->setWhatsThis(QApplication::translate("serialSettings", "Set the parity. In most cases no parity (None) is used.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        parNone->setText(QApplication::translate("serialSettings", "None", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        parOdd->setToolTip(QApplication::translate("serialSettings", "Set the parity. In most cases no parity (None) is used.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        parOdd->setStatusTip(QApplication::translate("serialSettings", "Set the parity. In most cases no parity (None) is used.", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        parOdd->setWhatsThis(QApplication::translate("serialSettings", "Set the parity. In most cases no parity (None) is used.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        parOdd->setText(QApplication::translate("serialSettings", "Odd", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        parEven->setToolTip(QApplication::translate("serialSettings", "Set the parity. In most cases no parity (None) is used.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        parEven->setStatusTip(QApplication::translate("serialSettings", "Set the parity. In most cases no parity (None) is used.", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        parEven->setWhatsThis(QApplication::translate("serialSettings", "Set the parity. In most cases no parity (None) is used.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        parEven->setText(QApplication::translate("serialSettings", "Even", Q_NULLPTR));
        portlabel_5->setText(QApplication::translate("serialSettings", "Data bits", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        dataBitsSpinBox->setToolTip(QApplication::translate("serialSettings", "Number of data bits per symbol. This is almost always 8.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        dataBitsSpinBox->setStatusTip(QApplication::translate("serialSettings", "Number of data bits per symbol. This is almost always 8.", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        dataBitsSpinBox->setWhatsThis(QApplication::translate("serialSettings", "Number of data bits per symbol. This is almost always 8.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        portlabel_6->setText(QApplication::translate("serialSettings", "Stop bits", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        stopBitsSpinBox->setToolTip(QApplication::translate("serialSettings", "Number of stop bits per symbol. This is almost always 2.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        stopBitsSpinBox->setStatusTip(QApplication::translate("serialSettings", "Number of stop bits per symbol. This is almost always 2.", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        stopBitsSpinBox->setWhatsThis(QApplication::translate("serialSettings", "Number of stop bits per symbol. This is almost always 2.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
    } // retranslateUi

};

namespace Ui {
    class serialSettings: public Ui_serialSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIALSETTINGS_H
