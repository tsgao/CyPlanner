/********************************************************************************
** Form generated from reading UI file 'uasview3.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UASVIEW3_H
#define UI_UASVIEW3_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UASView3
{
public:
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *uasViewFrame;
    QGridLayout *gridLayout;
    QLabel *C1;
    QLabel *RTKGPSNum;
    QLabel *C8Name;
    QLabel *C5;
    QLabel *HeartbeatNum;
    QLabel *GPSFixName;
    QLabel *HeartbeatName;
    QLabel *C2Name;
    QLabel *C6;
    QLabel *AHRELName;
    QLabel *GPSHDOPNum;
    QLabel *C4Name;
    QLabel *C3;
    QLabel *GPSFixNum;
    QLabel *GPSSatsNum;
    QLabel *statusLabel;
    QLabel *C4;
    QLabel *AHRELNum;
    QLabel *C1Name;
    QLabel *nameLabel;
    QLabel *RTKGPSName;
    QLabel *GPSHDOPName;
    QLabel *C2;
    QLabel *C8;
    QLabel *C3Name;
    QLabel *GPSSatsName;
    QLabel *C5Name;
    QLabel *C6Name;
    QLabel *C7;
    QLabel *C7Name;

    void setupUi(QWidget *UASView3)
    {
        if (UASView3->objectName().isEmpty())
            UASView3->setObjectName(QStringLiteral("UASView3"));
        UASView3->resize(360, 166);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(UASView3->sizePolicy().hasHeightForWidth());
        UASView3->setSizePolicy(sizePolicy);
        UASView3->setMinimumSize(QSize(260, 166));
        UASView3->setMaximumSize(QSize(360, 16777215));
        UASView3->setStyleSheet(QStringLiteral(""));
        horizontalLayout_2 = new QHBoxLayout(UASView3);
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(2, 2, 2, 0);
        uasViewFrame = new QGroupBox(UASView3);
        uasViewFrame->setObjectName(QStringLiteral("uasViewFrame"));
        sizePolicy.setHeightForWidth(uasViewFrame->sizePolicy().hasHeightForWidth());
        uasViewFrame->setSizePolicy(sizePolicy);
        uasViewFrame->setMinimumSize(QSize(0, 0));
        uasViewFrame->setMaximumSize(QSize(356, 164));
        gridLayout = new QGridLayout(uasViewFrame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(5);
        gridLayout->setVerticalSpacing(2);
        gridLayout->setContentsMargins(4, 4, 4, 4);
        C1 = new QLabel(uasViewFrame);
        C1->setObjectName(QStringLiteral("C1"));

        gridLayout->addWidget(C1, 1, 1, 1, 1);

        RTKGPSNum = new QLabel(uasViewFrame);
        RTKGPSNum->setObjectName(QStringLiteral("RTKGPSNum"));

        gridLayout->addWidget(RTKGPSNum, 5, 5, 1, 1);

        C8Name = new QLabel(uasViewFrame);
        C8Name->setObjectName(QStringLiteral("C8Name"));

        gridLayout->addWidget(C8Name, 4, 2, 1, 1);

        C5 = new QLabel(uasViewFrame);
        C5->setObjectName(QStringLiteral("C5"));

        gridLayout->addWidget(C5, 1, 3, 1, 1);

        HeartbeatNum = new QLabel(uasViewFrame);
        HeartbeatNum->setObjectName(QStringLiteral("HeartbeatNum"));

        gridLayout->addWidget(HeartbeatNum, 1, 5, 1, 1);

        GPSFixName = new QLabel(uasViewFrame);
        GPSFixName->setObjectName(QStringLiteral("GPSFixName"));

        gridLayout->addWidget(GPSFixName, 2, 4, 1, 1);

        HeartbeatName = new QLabel(uasViewFrame);
        HeartbeatName->setObjectName(QStringLiteral("HeartbeatName"));

        gridLayout->addWidget(HeartbeatName, 1, 4, 1, 1);

        C2Name = new QLabel(uasViewFrame);
        C2Name->setObjectName(QStringLiteral("C2Name"));

        gridLayout->addWidget(C2Name, 2, 0, 1, 1);

        C6 = new QLabel(uasViewFrame);
        C6->setObjectName(QStringLiteral("C6"));

        gridLayout->addWidget(C6, 2, 3, 1, 1);

        AHRELName = new QLabel(uasViewFrame);
        AHRELName->setObjectName(QStringLiteral("AHRELName"));

        gridLayout->addWidget(AHRELName, 6, 4, 1, 1);

        GPSHDOPNum = new QLabel(uasViewFrame);
        GPSHDOPNum->setObjectName(QStringLiteral("GPSHDOPNum"));

        gridLayout->addWidget(GPSHDOPNum, 4, 5, 1, 1);

        C4Name = new QLabel(uasViewFrame);
        C4Name->setObjectName(QStringLiteral("C4Name"));

        gridLayout->addWidget(C4Name, 4, 0, 1, 1);

        C3 = new QLabel(uasViewFrame);
        C3->setObjectName(QStringLiteral("C3"));

        gridLayout->addWidget(C3, 3, 1, 1, 1);

        GPSFixNum = new QLabel(uasViewFrame);
        GPSFixNum->setObjectName(QStringLiteral("GPSFixNum"));

        gridLayout->addWidget(GPSFixNum, 2, 5, 1, 1);

        GPSSatsNum = new QLabel(uasViewFrame);
        GPSSatsNum->setObjectName(QStringLiteral("GPSSatsNum"));

        gridLayout->addWidget(GPSSatsNum, 3, 5, 1, 1);

        statusLabel = new QLabel(uasViewFrame);
        statusLabel->setObjectName(QStringLiteral("statusLabel"));

        gridLayout->addWidget(statusLabel, 0, 4, 1, 1);

        C4 = new QLabel(uasViewFrame);
        C4->setObjectName(QStringLiteral("C4"));

        gridLayout->addWidget(C4, 4, 1, 1, 1);

        AHRELNum = new QLabel(uasViewFrame);
        AHRELNum->setObjectName(QStringLiteral("AHRELNum"));

        gridLayout->addWidget(AHRELNum, 6, 5, 1, 1);

        C1Name = new QLabel(uasViewFrame);
        C1Name->setObjectName(QStringLiteral("C1Name"));

        gridLayout->addWidget(C1Name, 1, 0, 1, 1);

        nameLabel = new QLabel(uasViewFrame);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setMaximumSize(QSize(16777215, 16));
        QFont font;
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        nameLabel->setFont(font);

        gridLayout->addWidget(nameLabel, 0, 0, 1, 1);

        RTKGPSName = new QLabel(uasViewFrame);
        RTKGPSName->setObjectName(QStringLiteral("RTKGPSName"));

        gridLayout->addWidget(RTKGPSName, 5, 4, 1, 1);

        GPSHDOPName = new QLabel(uasViewFrame);
        GPSHDOPName->setObjectName(QStringLiteral("GPSHDOPName"));

        gridLayout->addWidget(GPSHDOPName, 4, 4, 1, 1);

        C2 = new QLabel(uasViewFrame);
        C2->setObjectName(QStringLiteral("C2"));

        gridLayout->addWidget(C2, 2, 1, 1, 1);

        C8 = new QLabel(uasViewFrame);
        C8->setObjectName(QStringLiteral("C8"));

        gridLayout->addWidget(C8, 4, 3, 1, 1);

        C3Name = new QLabel(uasViewFrame);
        C3Name->setObjectName(QStringLiteral("C3Name"));

        gridLayout->addWidget(C3Name, 3, 0, 1, 1);

        GPSSatsName = new QLabel(uasViewFrame);
        GPSSatsName->setObjectName(QStringLiteral("GPSSatsName"));

        gridLayout->addWidget(GPSSatsName, 3, 4, 1, 1);

        C5Name = new QLabel(uasViewFrame);
        C5Name->setObjectName(QStringLiteral("C5Name"));

        gridLayout->addWidget(C5Name, 1, 2, 1, 1);

        C6Name = new QLabel(uasViewFrame);
        C6Name->setObjectName(QStringLiteral("C6Name"));

        gridLayout->addWidget(C6Name, 2, 2, 1, 1);

        C7 = new QLabel(uasViewFrame);
        C7->setObjectName(QStringLiteral("C7"));

        gridLayout->addWidget(C7, 3, 3, 1, 1);

        C7Name = new QLabel(uasViewFrame);
        C7Name->setObjectName(QStringLiteral("C7Name"));

        gridLayout->addWidget(C7Name, 3, 2, 1, 1);

        gridLayout->setColumnStretch(0, 1);

        horizontalLayout_2->addWidget(uasViewFrame);


        retranslateUi(UASView3);

        QMetaObject::connectSlotsByName(UASView3);
    } // setupUi

    void retranslateUi(QWidget *UASView3)
    {
        UASView3->setWindowTitle(QApplication::translate("UASView3", "Form", Q_NULLPTR));
        uasViewFrame->setTitle(QString());
        C1->setText(QApplication::translate("UASView3", "1.0", Q_NULLPTR));
        RTKGPSNum->setText(QApplication::translate("UASView3", "1.0", Q_NULLPTR));
        C8Name->setText(QApplication::translate("UASView3", "C8:", Q_NULLPTR));
        C5->setText(QApplication::translate("UASView3", "1.0", Q_NULLPTR));
        HeartbeatNum->setText(QApplication::translate("UASView3", "1.0", Q_NULLPTR));
        GPSFixName->setText(QApplication::translate("UASView3", "GPS Fix:", Q_NULLPTR));
        HeartbeatName->setText(QApplication::translate("UASView3", "Heart Beat:", Q_NULLPTR));
        C2Name->setText(QApplication::translate("UASView3", "C2:", Q_NULLPTR));
        C6->setText(QApplication::translate("UASView3", "1.0", Q_NULLPTR));
        AHRELName->setText(QApplication::translate("UASView3", "AH REL:", Q_NULLPTR));
        GPSHDOPNum->setText(QApplication::translate("UASView3", "1.0", Q_NULLPTR));
        C4Name->setText(QApplication::translate("UASView3", "C4:", Q_NULLPTR));
        C3->setText(QApplication::translate("UASView3", "1.0", Q_NULLPTR));
        GPSFixNum->setText(QApplication::translate("UASView3", "1.0", Q_NULLPTR));
        GPSSatsNum->setText(QApplication::translate("UASView3", "1.0", Q_NULLPTR));
        statusLabel->setText(QApplication::translate("UASView3", "dis/connected", Q_NULLPTR));
        C4->setText(QApplication::translate("UASView3", "1.0", Q_NULLPTR));
        AHRELNum->setText(QApplication::translate("UASView3", "1.0", Q_NULLPTR));
        C1Name->setText(QApplication::translate("UASView3", "C1:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        nameLabel->setToolTip(QApplication::translate("UASView3", "System Name", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        nameLabel->setStatusTip(QApplication::translate("UASView3", "System Name", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        nameLabel->setText(QApplication::translate("UASView3", "UAS001", Q_NULLPTR));
        RTKGPSName->setText(QApplication::translate("UASView3", "RTK GPS:", Q_NULLPTR));
        GPSHDOPName->setText(QApplication::translate("UASView3", "GPS HDOP:", Q_NULLPTR));
        C2->setText(QApplication::translate("UASView3", "1.0", Q_NULLPTR));
        C8->setText(QApplication::translate("UASView3", "1.0", Q_NULLPTR));
        C3Name->setText(QApplication::translate("UASView3", "C3:", Q_NULLPTR));
        GPSSatsName->setText(QApplication::translate("UASView3", "GPS Sats:", Q_NULLPTR));
        C5Name->setText(QApplication::translate("UASView3", "C5:", Q_NULLPTR));
        C6Name->setText(QApplication::translate("UASView3", "C6:", Q_NULLPTR));
        C7->setText(QApplication::translate("UASView3", "1.0", Q_NULLPTR));
        C7Name->setText(QApplication::translate("UASView3", "C7:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UASView3: public Ui_UASView3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UASVIEW3_H
