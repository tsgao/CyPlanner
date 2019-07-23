/********************************************************************************
** Form generated from reading UI file 'uasview2.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UASVIEW2_H
#define UI_UASVIEW2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UASView2
{
public:
    QGroupBox *uasViewFrame;
    QGridLayout *gridLayout;
    QLabel *C2Name;
    QLabel *RTKGPSNum;
    QLabel *C6Name;
    QLabel *GPSSatsNum;
    QFrame *line;
    QLabel *RCChannelName;
    QLabel *GPSFixNum;
    QLabel *GPSFixName;
    QLabel *nameLabel;
    QLabel *C2;
    QLabel *GPSHDOPNum;
    QLabel *statusLabel;
    QLabel *C3;
    QLabel *C5Name;
    QLabel *C4;
    QLabel *C4Name;
    QLabel *HeartbeatNum;
    QLabel *AHRELName;
    QLabel *RTKGPSName;
    QLabel *GPSHDOPName;
    QLabel *HeartbeatName;
    QLabel *C1Name;
    QLabel *GPSSatsName;
    QLabel *C3Name;
    QLabel *C1;
    QLabel *AHRELNum;
    QLabel *C7Name;
    QLabel *C8Name;
    QLabel *C5;
    QLabel *C6;
    QLabel *C7;
    QLabel *C8;

    void setupUi(QWidget *UASView2)
    {
        if (UASView2->objectName().isEmpty())
            UASView2->setObjectName(QStringLiteral("UASView2"));
        UASView2->resize(378, 192);
        uasViewFrame = new QGroupBox(UASView2);
        uasViewFrame->setObjectName(QStringLiteral("uasViewFrame"));
        uasViewFrame->setEnabled(true);
        uasViewFrame->setGeometry(QRect(0, -5, 381, 200));
        gridLayout = new QGridLayout(uasViewFrame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        C2Name = new QLabel(uasViewFrame);
        C2Name->setObjectName(QStringLiteral("C2Name"));

        gridLayout->addWidget(C2Name, 4, 0, 1, 1);

        RTKGPSNum = new QLabel(uasViewFrame);
        RTKGPSNum->setObjectName(QStringLiteral("RTKGPSNum"));

        gridLayout->addWidget(RTKGPSNum, 6, 6, 1, 1);

        C6Name = new QLabel(uasViewFrame);
        C6Name->setObjectName(QStringLiteral("C6Name"));

        gridLayout->addWidget(C6Name, 4, 2, 1, 1);

        GPSSatsNum = new QLabel(uasViewFrame);
        GPSSatsNum->setObjectName(QStringLiteral("GPSSatsNum"));

        gridLayout->addWidget(GPSSatsNum, 3, 6, 1, 1);

        line = new QFrame(uasViewFrame);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 2, 4, 6, 1);

        RCChannelName = new QLabel(uasViewFrame);
        RCChannelName->setObjectName(QStringLiteral("RCChannelName"));

        gridLayout->addWidget(RCChannelName, 2, 0, 1, 1);

        GPSFixNum = new QLabel(uasViewFrame);
        GPSFixNum->setObjectName(QStringLiteral("GPSFixNum"));

        gridLayout->addWidget(GPSFixNum, 2, 6, 1, 1);

        GPSFixName = new QLabel(uasViewFrame);
        GPSFixName->setObjectName(QStringLiteral("GPSFixName"));

        gridLayout->addWidget(GPSFixName, 2, 5, 1, 1);

        nameLabel = new QLabel(uasViewFrame);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        QFont font;
        font.setPointSize(14);
        nameLabel->setFont(font);

        gridLayout->addWidget(nameLabel, 0, 0, 1, 1);

        C2 = new QLabel(uasViewFrame);
        C2->setObjectName(QStringLiteral("C2"));

        gridLayout->addWidget(C2, 4, 1, 1, 1);

        GPSHDOPNum = new QLabel(uasViewFrame);
        GPSHDOPNum->setObjectName(QStringLiteral("GPSHDOPNum"));

        gridLayout->addWidget(GPSHDOPNum, 4, 6, 1, 1);

        statusLabel = new QLabel(uasViewFrame);
        statusLabel->setObjectName(QStringLiteral("statusLabel"));

        gridLayout->addWidget(statusLabel, 0, 5, 1, 2);

        C3 = new QLabel(uasViewFrame);
        C3->setObjectName(QStringLiteral("C3"));

        gridLayout->addWidget(C3, 5, 1, 1, 1);

        C5Name = new QLabel(uasViewFrame);
        C5Name->setObjectName(QStringLiteral("C5Name"));

        gridLayout->addWidget(C5Name, 3, 2, 1, 1);

        C4 = new QLabel(uasViewFrame);
        C4->setObjectName(QStringLiteral("C4"));

        gridLayout->addWidget(C4, 6, 1, 1, 1);

        C4Name = new QLabel(uasViewFrame);
        C4Name->setObjectName(QStringLiteral("C4Name"));

        gridLayout->addWidget(C4Name, 6, 0, 1, 1);

        HeartbeatNum = new QLabel(uasViewFrame);
        HeartbeatNum->setObjectName(QStringLiteral("HeartbeatNum"));

        gridLayout->addWidget(HeartbeatNum, 1, 2, 1, 1);

        AHRELName = new QLabel(uasViewFrame);
        AHRELName->setObjectName(QStringLiteral("AHRELName"));

        gridLayout->addWidget(AHRELName, 5, 5, 1, 1);

        RTKGPSName = new QLabel(uasViewFrame);
        RTKGPSName->setObjectName(QStringLiteral("RTKGPSName"));

        gridLayout->addWidget(RTKGPSName, 6, 5, 1, 1);

        GPSHDOPName = new QLabel(uasViewFrame);
        GPSHDOPName->setObjectName(QStringLiteral("GPSHDOPName"));

        gridLayout->addWidget(GPSHDOPName, 4, 5, 1, 1);

        HeartbeatName = new QLabel(uasViewFrame);
        HeartbeatName->setObjectName(QStringLiteral("HeartbeatName"));

        gridLayout->addWidget(HeartbeatName, 1, 0, 1, 1);

        C1Name = new QLabel(uasViewFrame);
        C1Name->setObjectName(QStringLiteral("C1Name"));

        gridLayout->addWidget(C1Name, 3, 0, 1, 1);

        GPSSatsName = new QLabel(uasViewFrame);
        GPSSatsName->setObjectName(QStringLiteral("GPSSatsName"));

        gridLayout->addWidget(GPSSatsName, 3, 5, 1, 1);

        C3Name = new QLabel(uasViewFrame);
        C3Name->setObjectName(QStringLiteral("C3Name"));

        gridLayout->addWidget(C3Name, 5, 0, 1, 1);

        C1 = new QLabel(uasViewFrame);
        C1->setObjectName(QStringLiteral("C1"));

        gridLayout->addWidget(C1, 3, 1, 1, 1);

        AHRELNum = new QLabel(uasViewFrame);
        AHRELNum->setObjectName(QStringLiteral("AHRELNum"));

        gridLayout->addWidget(AHRELNum, 5, 6, 1, 1);

        C7Name = new QLabel(uasViewFrame);
        C7Name->setObjectName(QStringLiteral("C7Name"));

        gridLayout->addWidget(C7Name, 5, 2, 1, 1);

        C8Name = new QLabel(uasViewFrame);
        C8Name->setObjectName(QStringLiteral("C8Name"));

        gridLayout->addWidget(C8Name, 6, 2, 1, 1);

        C5 = new QLabel(uasViewFrame);
        C5->setObjectName(QStringLiteral("C5"));

        gridLayout->addWidget(C5, 3, 3, 1, 1);

        C6 = new QLabel(uasViewFrame);
        C6->setObjectName(QStringLiteral("C6"));

        gridLayout->addWidget(C6, 4, 3, 1, 1);

        C7 = new QLabel(uasViewFrame);
        C7->setObjectName(QStringLiteral("C7"));

        gridLayout->addWidget(C7, 5, 3, 1, 1);

        C8 = new QLabel(uasViewFrame);
        C8->setObjectName(QStringLiteral("C8"));

        gridLayout->addWidget(C8, 6, 3, 1, 1);


        retranslateUi(UASView2);

        QMetaObject::connectSlotsByName(UASView2);
    } // setupUi

    void retranslateUi(QWidget *UASView2)
    {
        UASView2->setWindowTitle(QApplication::translate("UASView2", "Form", Q_NULLPTR));
        uasViewFrame->setTitle(QString());
        C2Name->setText(QApplication::translate("UASView2", "2:", Q_NULLPTR));
        RTKGPSNum->setText(QApplication::translate("UASView2", "1.0", Q_NULLPTR));
        C6Name->setText(QApplication::translate("UASView2", "6:", Q_NULLPTR));
        GPSSatsNum->setText(QApplication::translate("UASView2", "1.0", Q_NULLPTR));
        RCChannelName->setText(QApplication::translate("UASView2", "RC Channel:", Q_NULLPTR));
        GPSFixNum->setText(QApplication::translate("UASView2", "1.0", Q_NULLPTR));
        GPSFixName->setText(QApplication::translate("UASView2", "GPS Fix:", Q_NULLPTR));
        nameLabel->setText(QApplication::translate("UASView2", "nameLabel", Q_NULLPTR));
        C2->setText(QApplication::translate("UASView2", "1.1", Q_NULLPTR));
        GPSHDOPNum->setText(QApplication::translate("UASView2", "1.0", Q_NULLPTR));
        statusLabel->setText(QApplication::translate("UASView2", "dis/connected", Q_NULLPTR));
        C3->setText(QApplication::translate("UASView2", "1.2", Q_NULLPTR));
        C5Name->setText(QApplication::translate("UASView2", "5:", Q_NULLPTR));
        C4->setText(QApplication::translate("UASView2", "1.3", Q_NULLPTR));
        C4Name->setText(QApplication::translate("UASView2", "4:", Q_NULLPTR));
        HeartbeatNum->setText(QApplication::translate("UASView2", "1.0", Q_NULLPTR));
        AHRELName->setText(QApplication::translate("UASView2", "AH REL:", Q_NULLPTR));
        RTKGPSName->setText(QApplication::translate("UASView2", "RTK GPS:", Q_NULLPTR));
        GPSHDOPName->setText(QApplication::translate("UASView2", "GPS HDOP:", Q_NULLPTR));
        HeartbeatName->setText(QApplication::translate("UASView2", "Heartbeat:", Q_NULLPTR));
        C1Name->setText(QApplication::translate("UASView2", "1:", Q_NULLPTR));
        GPSSatsName->setText(QApplication::translate("UASView2", "GPS Sats:", Q_NULLPTR));
        C3Name->setText(QApplication::translate("UASView2", "3:", Q_NULLPTR));
        C1->setText(QApplication::translate("UASView2", "1.0", Q_NULLPTR));
        AHRELNum->setText(QApplication::translate("UASView2", "1.0", Q_NULLPTR));
        C7Name->setText(QApplication::translate("UASView2", "7:", Q_NULLPTR));
        C8Name->setText(QApplication::translate("UASView2", "8:", Q_NULLPTR));
        C5->setText(QApplication::translate("UASView2", "1.0", Q_NULLPTR));
        C6->setText(QApplication::translate("UASView2", "1.1", Q_NULLPTR));
        C7->setText(QApplication::translate("UASView2", "1.2", Q_NULLPTR));
        C8->setText(QApplication::translate("UASView2", "1.3", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UASView2: public Ui_UASView2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UASVIEW2_H
