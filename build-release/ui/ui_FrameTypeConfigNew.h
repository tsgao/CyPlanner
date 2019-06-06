/********************************************************************************
** Form generated from reading UI file 'FrameTypeConfigNew.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRAMETYPECONFIGNEW_H
#define UI_FRAMETYPECONFIGNEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FrameTypeConfigNew
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_9;
    QWidget *plusWidget;
    QWidget *layoutWidget_1;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *plusRadioBtn;
    QPushButton *plusBtn;
    QWidget *xWidget;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *XRadioBtn;
    QPushButton *XBtn;
    QWidget *HVWidget;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_7;
    QRadioButton *hRadioBtn;
    QPushButton *hBtn;
    QRadioButton *vRadioBtn;
    QPushButton *vBtn;
    QWidget *VATailWidget;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_8;
    QRadioButton *VTailRadioBtn;
    QPushButton *vtailBtn;
    QRadioButton *ATailRadioBtn;
    QPushButton *atailBtn;
    QWidget *Y6Bwidget;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_9;
    QRadioButton *Y6BRadioBtn;
    QPushButton *Y6BBtn;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout;
    QPushButton *quadBtn;
    QPushButton *hexaBtn;
    QPushButton *octaBtn;
    QPushButton *octaQuadBtn;
    QPushButton *Y6Btn;
    QPushButton *heliBtn;
    QPushButton *triBtn;
    QPushButton *singleBtn;
    QPushButton *coaxBtn;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *quadRadioBtn;
    QRadioButton *hexaRadioBtn;
    QRadioButton *octaRadionbtn;
    QRadioButton *octaQuadRadioBtn;
    QRadioButton *Y6RadioBtn;
    QRadioButton *heliRadioBtn;
    QRadioButton *triRadioBtn;
    QRadioButton *singleRadioBtn;
    QRadioButton *coaxRadioBtn;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_10;
    QLabel *label_11;
    QButtonGroup *buttonGroup;

    void setupUi(QWidget *FrameTypeConfigNew)
    {
        if (FrameTypeConfigNew->objectName().isEmpty())
            FrameTypeConfigNew->setObjectName(QStringLiteral("FrameTypeConfigNew"));
        FrameTypeConfigNew->resize(1000, 629);
        verticalLayoutWidget = new QWidget(FrameTypeConfigNew);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(150, 180, 701, 441));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(verticalLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_9);

        plusWidget = new QWidget(verticalLayoutWidget);
        plusWidget->setObjectName(QStringLiteral("plusWidget"));
        layoutWidget_1 = new QWidget(plusWidget);
        layoutWidget_1->setObjectName(QStringLiteral("layoutWidget_1"));
        layoutWidget_1->setGeometry(QRect(10, 0, 681, 82));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_1);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        plusRadioBtn = new QRadioButton(layoutWidget_1);
        buttonGroup = new QButtonGroup(FrameTypeConfigNew);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(plusRadioBtn);
        plusRadioBtn->setObjectName(QStringLiteral("plusRadioBtn"));
        plusRadioBtn->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_5->addWidget(plusRadioBtn);

        plusBtn = new QPushButton(layoutWidget_1);
        plusBtn->setObjectName(QStringLiteral("plusBtn"));
        plusBtn->setStyleSheet(QLatin1String("QPushButton {\n"
" 	border: 1px solid black;\n"
"    margin: 3px;\n"
"	border-radius: 2px;\n"
"	padding-top: 4px;\n"
"	padding-left: 8px;\n"
"	padding-right: 8px;\n"
"	padding-bottom: 4px;\n"
"	background-color: 0\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	border-width: 1px dashed #F0F0F0\n"
"}"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/files/images/mavs/frames_plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        plusBtn->setIcon(icon);
        plusBtn->setIconSize(QSize(300, 60));

        horizontalLayout_5->addWidget(plusBtn);

        horizontalLayout_5->setStretch(0, 10);
        horizontalLayout_5->setStretch(1, 90);

        verticalLayout->addWidget(plusWidget);

        xWidget = new QWidget(verticalLayoutWidget);
        xWidget->setObjectName(QStringLiteral("xWidget"));
        layoutWidget_2 = new QWidget(xWidget);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 0, 681, 78));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        XRadioBtn = new QRadioButton(layoutWidget_2);
        buttonGroup->addButton(XRadioBtn);
        XRadioBtn->setObjectName(QStringLiteral("XRadioBtn"));
        XRadioBtn->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_6->addWidget(XRadioBtn);

        XBtn = new QPushButton(layoutWidget_2);
        XBtn->setObjectName(QStringLiteral("XBtn"));
        XBtn->setStyleSheet(QLatin1String("QPushButton {\n"
" 	border: 1px solid black;\n"
"    margin: 3px;\n"
"	border-radius: 2px;\n"
"	padding-top: 4px;\n"
"	padding-left: 8px;\n"
"	padding-right: 8px;\n"
"	padding-bottom: 4px;\n"
"	background-color: 0\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	border-width: 1px dashed #F0F0F0\n"
"}"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/files/images/mavs/frames_x.png"), QSize(), QIcon::Normal, QIcon::Off);
        XBtn->setIcon(icon1);
        XBtn->setIconSize(QSize(400, 60));

        horizontalLayout_6->addWidget(XBtn);

        horizontalLayout_6->setStretch(0, 10);
        horizontalLayout_6->setStretch(1, 90);

        verticalLayout->addWidget(xWidget);

        HVWidget = new QWidget(verticalLayoutWidget);
        HVWidget->setObjectName(QStringLiteral("HVWidget"));
        layoutWidget_3 = new QWidget(HVWidget);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 0, 681, 78));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        hRadioBtn = new QRadioButton(layoutWidget_3);
        buttonGroup->addButton(hRadioBtn);
        hRadioBtn->setObjectName(QStringLiteral("hRadioBtn"));
        hRadioBtn->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_7->addWidget(hRadioBtn);

        hBtn = new QPushButton(layoutWidget_3);
        hBtn->setObjectName(QStringLiteral("hBtn"));
        hBtn->setStyleSheet(QLatin1String("QPushButton {\n"
" 	border: 1px solid black;\n"
"    margin: 3px;\n"
"	border-radius: 2px;\n"
"	padding-top: 4px;\n"
"	padding-left: 8px;\n"
"	padding-right: 8px;\n"
"	padding-bottom: 4px;\n"
"	background-color: 0\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	border-width: 1px dashed #F0F0F0\n"
"}"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/files/images/mavs/frames_quad_I.png"), QSize(), QIcon::Normal, QIcon::Off);
        hBtn->setIcon(icon2);
        hBtn->setIconSize(QSize(200, 60));

        horizontalLayout_7->addWidget(hBtn);

        vRadioBtn = new QRadioButton(layoutWidget_3);
        buttonGroup->addButton(vRadioBtn);
        vRadioBtn->setObjectName(QStringLiteral("vRadioBtn"));
        vRadioBtn->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_7->addWidget(vRadioBtn);

        vBtn = new QPushButton(layoutWidget_3);
        vBtn->setObjectName(QStringLiteral("vBtn"));
        vBtn->setStyleSheet(QLatin1String("QPushButton {\n"
" 	border: 1px solid black;\n"
"    margin: 3px;\n"
"	border-radius: 2px;\n"
"	padding-top: 4px;\n"
"	padding-left: 8px;\n"
"	padding-right: 8px;\n"
"	padding-bottom: 4px;\n"
"	background-color: 0\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	border-width: 1px dashed #F0F0F0\n"
"}"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/files/images/firmware/quady.png"), QSize(), QIcon::Normal, QIcon::Off);
        vBtn->setIcon(icon3);
        vBtn->setIconSize(QSize(200, 60));

        horizontalLayout_7->addWidget(vBtn);

        horizontalLayout_7->setStretch(0, 10);
        horizontalLayout_7->setStretch(1, 40);
        horizontalLayout_7->setStretch(2, 10);
        horizontalLayout_7->setStretch(3, 40);

        verticalLayout->addWidget(HVWidget);

        VATailWidget = new QWidget(verticalLayoutWidget);
        VATailWidget->setObjectName(QStringLiteral("VATailWidget"));
        layoutWidget_4 = new QWidget(VATailWidget);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(10, 0, 681, 81));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        VTailRadioBtn = new QRadioButton(layoutWidget_4);
        buttonGroup->addButton(VTailRadioBtn);
        VTailRadioBtn->setObjectName(QStringLiteral("VTailRadioBtn"));
        VTailRadioBtn->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_8->addWidget(VTailRadioBtn);

        vtailBtn = new QPushButton(layoutWidget_4);
        vtailBtn->setObjectName(QStringLiteral("vtailBtn"));
        vtailBtn->setMinimumSize(QSize(0, 75));
        vtailBtn->setStyleSheet(QLatin1String("QPushButton {\n"
" 	border: 1px solid black;\n"
"    margin: 3px;\n"
"	border-radius: 2px;\n"
"	padding-top: 4px;\n"
"	padding-left: 8px;\n"
"	padding-right: 8px;\n"
"	padding-bottom: 4px;\n"
"	background-color: 0\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	border-width: 1px dashed #F0F0F0\n"
"}"));

        horizontalLayout_8->addWidget(vtailBtn);

        ATailRadioBtn = new QRadioButton(layoutWidget_4);
        buttonGroup->addButton(ATailRadioBtn);
        ATailRadioBtn->setObjectName(QStringLiteral("ATailRadioBtn"));
        ATailRadioBtn->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_8->addWidget(ATailRadioBtn);

        atailBtn = new QPushButton(layoutWidget_4);
        atailBtn->setObjectName(QStringLiteral("atailBtn"));
        atailBtn->setMinimumSize(QSize(0, 75));
        atailBtn->setStyleSheet(QLatin1String("QPushButton {\n"
" 	border: 1px solid black;\n"
"    margin: 3px;\n"
"	border-radius: 2px;\n"
"	padding-top: 4px;\n"
"	padding-left: 8px;\n"
"	padding-right: 8px;\n"
"	padding-bottom: 4px;\n"
"	background-color: 0\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	border-width: 1px dashed #F0F0F0\n"
"}"));

        horizontalLayout_8->addWidget(atailBtn);

        horizontalLayout_8->setStretch(0, 10);
        horizontalLayout_8->setStretch(1, 40);
        horizontalLayout_8->setStretch(2, 10);
        horizontalLayout_8->setStretch(3, 40);

        verticalLayout->addWidget(VATailWidget);

        Y6Bwidget = new QWidget(verticalLayoutWidget);
        Y6Bwidget->setObjectName(QStringLiteral("Y6Bwidget"));
        layoutWidget_5 = new QWidget(Y6Bwidget);
        layoutWidget_5->setObjectName(QStringLiteral("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(10, 0, 681, 78));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        Y6BRadioBtn = new QRadioButton(layoutWidget_5);
        buttonGroup->addButton(Y6BRadioBtn);
        Y6BRadioBtn->setObjectName(QStringLiteral("Y6BRadioBtn"));
        Y6BRadioBtn->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_9->addWidget(Y6BRadioBtn);

        Y6BBtn = new QPushButton(layoutWidget_5);
        Y6BBtn->setObjectName(QStringLiteral("Y6BBtn"));
        Y6BBtn->setStyleSheet(QLatin1String("QPushButton {\n"
" 	border: 1px solid black;\n"
"    margin: 3px;\n"
"	border-radius: 2px;\n"
"	padding-top: 4px;\n"
"	padding-left: 8px;\n"
"	padding-right: 8px;\n"
"	padding-bottom: 4px;\n"
"	background-color: 0\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	border-width: 1px dashed #F0F0F0\n"
"}"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/files/images/mavs/frames-Y6B.png"), QSize(), QIcon::Normal, QIcon::Off);
        Y6BBtn->setIcon(icon4);
        Y6BBtn->setIconSize(QSize(200, 60));

        horizontalLayout_9->addWidget(Y6BBtn);

        horizontalLayout_9->setStretch(0, 10);
        horizontalLayout_9->setStretch(1, 90);

        verticalLayout->addWidget(Y6Bwidget);

        verticalLayout->setStretch(0, 6);
        verticalLayout->setStretch(1, 18);
        verticalLayout->setStretch(2, 18);
        verticalLayout->setStretch(3, 18);
        verticalLayout->setStretch(4, 18);
        verticalLayout->setStretch(5, 18);
        verticalLayoutWidget_2 = new QWidget(FrameTypeConfigNew);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 10, 981, 159));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(verticalLayoutWidget_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_8);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        quadBtn = new QPushButton(verticalLayoutWidget_2);
        quadBtn->setObjectName(QStringLiteral("quadBtn"));
        quadBtn->setMinimumSize(QSize(95, 95));
        quadBtn->setStyleSheet(QLatin1String("QPushButton {\n"
" 	border: 1px solid black;\n"
"    margin: 3px;\n"
"	border-radius: 2px;\n"
"	padding-top: 4px;\n"
"	padding-left: 8px;\n"
"	padding-right: 8px;\n"
"	padding-bottom: 4px;\n"
"	background-color: 0\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	border-width: 1px dashed #F0F0F0\n"
"}"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/files/images/firmware/quadx.png"), QSize(), QIcon::Normal, QIcon::Off);
        quadBtn->setIcon(icon5);
        quadBtn->setIconSize(QSize(75, 75));

        horizontalLayout->addWidget(quadBtn);

        hexaBtn = new QPushButton(verticalLayoutWidget_2);
        hexaBtn->setObjectName(QStringLiteral("hexaBtn"));
        hexaBtn->setMinimumSize(QSize(95, 95));
        hexaBtn->setStyleSheet(QLatin1String("QPushButton {\n"
" 	border: 1px solid black;\n"
"    margin: 3px;\n"
"	border-radius: 2px;\n"
"	padding-top: 4px;\n"
"	padding-left: 8px;\n"
"	padding-right: 8px;\n"
"	padding-bottom: 4px;\n"
"	background-color: 0\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	border-width: 1px dashed #F0F0F0\n"
"}"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/files/images/firmware/hexax.png"), QSize(), QIcon::Normal, QIcon::Off);
        hexaBtn->setIcon(icon6);
        hexaBtn->setIconSize(QSize(75, 75));

        horizontalLayout->addWidget(hexaBtn);

        octaBtn = new QPushButton(verticalLayoutWidget_2);
        octaBtn->setObjectName(QStringLiteral("octaBtn"));
        octaBtn->setMinimumSize(QSize(95, 95));
        octaBtn->setStyleSheet(QLatin1String("QPushButton {\n"
" 	border: 1px solid black;\n"
"    margin: 3px;\n"
"	border-radius: 2px;\n"
"	padding-top: 4px;\n"
"	padding-left: 8px;\n"
"	padding-right: 8px;\n"
"	padding-bottom: 4px;\n"
"	background-color: 0\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	border-width: 1px dashed #F0F0F0\n"
"}"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/files/images/firmware/octax.png"), QSize(), QIcon::Normal, QIcon::Off);
        octaBtn->setIcon(icon7);
        octaBtn->setIconSize(QSize(75, 75));

        horizontalLayout->addWidget(octaBtn);

        octaQuadBtn = new QPushButton(verticalLayoutWidget_2);
        octaQuadBtn->setObjectName(QStringLiteral("octaQuadBtn"));
        octaQuadBtn->setMinimumSize(QSize(95, 95));
        octaQuadBtn->setStyleSheet(QLatin1String("QPushButton {\n"
" 	border: 1px solid black;\n"
"    margin: 3px;\n"
"	border-radius: 2px;\n"
"	padding-top: 4px;\n"
"	padding-left: 8px;\n"
"	padding-right: 8px;\n"
"	padding-bottom: 4px;\n"
"	background-color: 0\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	border-width: 1px dashed #F0F0F0\n"
"}"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/files/images/firmware/octx.png"), QSize(), QIcon::Normal, QIcon::Off);
        octaQuadBtn->setIcon(icon8);
        octaQuadBtn->setIconSize(QSize(75, 75));

        horizontalLayout->addWidget(octaQuadBtn);

        Y6Btn = new QPushButton(verticalLayoutWidget_2);
        Y6Btn->setObjectName(QStringLiteral("Y6Btn"));
        Y6Btn->setMinimumSize(QSize(95, 95));
        Y6Btn->setStyleSheet(QLatin1String("QPushButton {\n"
" 	border: 1px solid black;\n"
"    margin: 3px;\n"
"	border-radius: 2px;\n"
"	padding-top: 4px;\n"
"	padding-left: 8px;\n"
"	padding-right: 8px;\n"
"	padding-bottom: 4px;\n"
"	background-color: 0\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	border-width: 1px dashed #F0F0F0\n"
"}"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/files/images/firmware/hexay.png"), QSize(), QIcon::Normal, QIcon::Off);
        Y6Btn->setIcon(icon9);
        Y6Btn->setIconSize(QSize(75, 75));

        horizontalLayout->addWidget(Y6Btn);

        heliBtn = new QPushButton(verticalLayoutWidget_2);
        heliBtn->setObjectName(QStringLiteral("heliBtn"));
        heliBtn->setMinimumSize(QSize(95, 95));
        heliBtn->setStyleSheet(QLatin1String("QPushButton {\n"
" 	border: 1px solid black;\n"
"    margin: 3px;\n"
"	border-radius: 2px;\n"
"	padding-top: 4px;\n"
"	padding-left: 8px;\n"
"	padding-right: 8px;\n"
"	padding-bottom: 4px;\n"
"	background-color: 0\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	border-width: 1px dashed #F0F0F0\n"
"}"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/files/images/firmware/heli.png"), QSize(), QIcon::Normal, QIcon::Off);
        heliBtn->setIcon(icon10);
        heliBtn->setIconSize(QSize(75, 75));

        horizontalLayout->addWidget(heliBtn);

        triBtn = new QPushButton(verticalLayoutWidget_2);
        triBtn->setObjectName(QStringLiteral("triBtn"));
        triBtn->setMinimumSize(QSize(95, 95));
        triBtn->setStyleSheet(QLatin1String("QPushButton {\n"
" 	border: 1px solid black;\n"
"    margin: 3px;\n"
"	border-radius: 2px;\n"
"	padding-top: 4px;\n"
"	padding-left: 8px;\n"
"	padding-right: 8px;\n"
"	padding-bottom: 4px;\n"
"	background-color: 0\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	border-width: 1px dashed #F0F0F0\n"
"}"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/files/images/firmware/triy.png"), QSize(), QIcon::Normal, QIcon::Off);
        triBtn->setIcon(icon11);
        triBtn->setIconSize(QSize(75, 75));

        horizontalLayout->addWidget(triBtn);

        singleBtn = new QPushButton(verticalLayoutWidget_2);
        singleBtn->setObjectName(QStringLiteral("singleBtn"));
        singleBtn->setMinimumSize(QSize(95, 95));
        singleBtn->setStyleSheet(QLatin1String("QPushButton {\n"
" 	border: 1px solid black;\n"
"    margin: 3px;\n"
"	border-radius: 2px;\n"
"	padding-top: 4px;\n"
"	padding-left: 8px;\n"
"	padding-right: 8px;\n"
"	padding-bottom: 4px;\n"
"	background-color: 0\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	border-width: 1px dashed #F0F0F0\n"
"}"));

        horizontalLayout->addWidget(singleBtn);

        coaxBtn = new QPushButton(verticalLayoutWidget_2);
        coaxBtn->setObjectName(QStringLiteral("coaxBtn"));
        coaxBtn->setMinimumSize(QSize(95, 95));
        coaxBtn->setStyleSheet(QLatin1String("QPushButton {\n"
" 	border: 1px solid black;\n"
"    margin: 3px;\n"
"	border-radius: 2px;\n"
"	padding-top: 4px;\n"
"	padding-left: 8px;\n"
"	padding-right: 8px;\n"
"	padding-bottom: 4px;\n"
"	background-color: 0\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	border-width: 1px dashed #F0F0F0\n"
"}"));

        horizontalLayout->addWidget(coaxBtn);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(50);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(25, -1, -1, -1);
        quadRadioBtn = new QRadioButton(verticalLayoutWidget_2);
        quadRadioBtn->setObjectName(QStringLiteral("quadRadioBtn"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(quadRadioBtn->sizePolicy().hasHeightForWidth());
        quadRadioBtn->setSizePolicy(sizePolicy);
        quadRadioBtn->setMinimumSize(QSize(14, 20));

        horizontalLayout_2->addWidget(quadRadioBtn);

        hexaRadioBtn = new QRadioButton(verticalLayoutWidget_2);
        hexaRadioBtn->setObjectName(QStringLiteral("hexaRadioBtn"));
        sizePolicy.setHeightForWidth(hexaRadioBtn->sizePolicy().hasHeightForWidth());
        hexaRadioBtn->setSizePolicy(sizePolicy);
        hexaRadioBtn->setMinimumSize(QSize(14, 20));

        horizontalLayout_2->addWidget(hexaRadioBtn);

        octaRadionbtn = new QRadioButton(verticalLayoutWidget_2);
        octaRadionbtn->setObjectName(QStringLiteral("octaRadionbtn"));
        sizePolicy.setHeightForWidth(octaRadionbtn->sizePolicy().hasHeightForWidth());
        octaRadionbtn->setSizePolicy(sizePolicy);
        octaRadionbtn->setMinimumSize(QSize(14, 20));

        horizontalLayout_2->addWidget(octaRadionbtn);

        octaQuadRadioBtn = new QRadioButton(verticalLayoutWidget_2);
        octaQuadRadioBtn->setObjectName(QStringLiteral("octaQuadRadioBtn"));
        sizePolicy.setHeightForWidth(octaQuadRadioBtn->sizePolicy().hasHeightForWidth());
        octaQuadRadioBtn->setSizePolicy(sizePolicy);
        octaQuadRadioBtn->setMinimumSize(QSize(14, 20));

        horizontalLayout_2->addWidget(octaQuadRadioBtn);

        Y6RadioBtn = new QRadioButton(verticalLayoutWidget_2);
        Y6RadioBtn->setObjectName(QStringLiteral("Y6RadioBtn"));
        sizePolicy.setHeightForWidth(Y6RadioBtn->sizePolicy().hasHeightForWidth());
        Y6RadioBtn->setSizePolicy(sizePolicy);
        Y6RadioBtn->setMinimumSize(QSize(14, 20));

        horizontalLayout_2->addWidget(Y6RadioBtn);

        heliRadioBtn = new QRadioButton(verticalLayoutWidget_2);
        heliRadioBtn->setObjectName(QStringLiteral("heliRadioBtn"));
        sizePolicy.setHeightForWidth(heliRadioBtn->sizePolicy().hasHeightForWidth());
        heliRadioBtn->setSizePolicy(sizePolicy);
        heliRadioBtn->setMinimumSize(QSize(14, 20));

        horizontalLayout_2->addWidget(heliRadioBtn);

        triRadioBtn = new QRadioButton(verticalLayoutWidget_2);
        triRadioBtn->setObjectName(QStringLiteral("triRadioBtn"));
        sizePolicy.setHeightForWidth(triRadioBtn->sizePolicy().hasHeightForWidth());
        triRadioBtn->setSizePolicy(sizePolicy);
        triRadioBtn->setMinimumSize(QSize(14, 20));

        horizontalLayout_2->addWidget(triRadioBtn);

        singleRadioBtn = new QRadioButton(verticalLayoutWidget_2);
        singleRadioBtn->setObjectName(QStringLiteral("singleRadioBtn"));
        sizePolicy.setHeightForWidth(singleRadioBtn->sizePolicy().hasHeightForWidth());
        singleRadioBtn->setSizePolicy(sizePolicy);
        singleRadioBtn->setMinimumSize(QSize(14, 20));

        horizontalLayout_2->addWidget(singleRadioBtn);

        coaxRadioBtn = new QRadioButton(verticalLayoutWidget_2);
        coaxRadioBtn->setObjectName(QStringLiteral("coaxRadioBtn"));
        sizePolicy.setHeightForWidth(coaxRadioBtn->sizePolicy().hasHeightForWidth());
        coaxRadioBtn->setSizePolicy(sizePolicy);
        coaxRadioBtn->setMinimumSize(QSize(14, 20));

        horizontalLayout_2->addWidget(coaxRadioBtn);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(verticalLayoutWidget_2);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label);

        label_4 = new QLabel(verticalLayoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_4);

        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_2);

        label_3 = new QLabel(verticalLayoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_3);

        label_5 = new QLabel(verticalLayoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_5);

        label_6 = new QLabel(verticalLayoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_6);

        label_7 = new QLabel(verticalLayoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_7);

        label_10 = new QLabel(verticalLayoutWidget_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font);
        label_10->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_10);

        label_11 = new QLabel(verticalLayoutWidget_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font);
        label_11->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_11);


        verticalLayout_2->addLayout(horizontalLayout_3);


        retranslateUi(FrameTypeConfigNew);
        QObject::connect(quadBtn, SIGNAL(clicked()), quadRadioBtn, SLOT(click()));
        QObject::connect(hexaBtn, SIGNAL(clicked()), hexaRadioBtn, SLOT(click()));
        QObject::connect(octaBtn, SIGNAL(clicked()), octaRadionbtn, SLOT(click()));
        QObject::connect(octaQuadBtn, SIGNAL(clicked()), octaQuadRadioBtn, SLOT(click()));
        QObject::connect(Y6Btn, SIGNAL(clicked()), Y6RadioBtn, SLOT(click()));
        QObject::connect(heliBtn, SIGNAL(clicked()), heliRadioBtn, SLOT(click()));
        QObject::connect(triBtn, SIGNAL(clicked()), triRadioBtn, SLOT(click()));
        QObject::connect(plusBtn, SIGNAL(clicked()), plusRadioBtn, SLOT(click()));
        QObject::connect(XBtn, SIGNAL(clicked()), XRadioBtn, SLOT(click()));
        QObject::connect(hBtn, SIGNAL(clicked()), hRadioBtn, SLOT(click()));
        QObject::connect(vBtn, SIGNAL(clicked()), vRadioBtn, SLOT(click()));
        QObject::connect(vtailBtn, SIGNAL(clicked()), VTailRadioBtn, SLOT(click()));
        QObject::connect(atailBtn, SIGNAL(clicked()), ATailRadioBtn, SLOT(click()));
        QObject::connect(Y6BBtn, SIGNAL(clicked()), Y6BRadioBtn, SLOT(click()));
        QObject::connect(singleBtn, SIGNAL(clicked()), singleRadioBtn, SLOT(click()));
        QObject::connect(coaxBtn, SIGNAL(clicked()), coaxRadioBtn, SLOT(click()));

        QMetaObject::connectSlotsByName(FrameTypeConfigNew);
    } // setupUi

    void retranslateUi(QWidget *FrameTypeConfigNew)
    {
        FrameTypeConfigNew->setWindowTitle(QApplication::translate("FrameTypeConfigNew", "Form", Q_NULLPTR));
        label_9->setText(QApplication::translate("FrameTypeConfigNew", "<h2>Frame Type</h2>", Q_NULLPTR));
        plusRadioBtn->setText(QApplication::translate("FrameTypeConfigNew", "Plus", Q_NULLPTR));
        plusBtn->setText(QApplication::translate("FrameTypeConfigNew", "Single Copter    Coax Copter", Q_NULLPTR));
        XRadioBtn->setText(QApplication::translate("FrameTypeConfigNew", "X / Y6A", Q_NULLPTR));
        XBtn->setText(QString());
        hRadioBtn->setText(QApplication::translate("FrameTypeConfigNew", "H", Q_NULLPTR));
        hBtn->setText(QString());
        vRadioBtn->setText(QApplication::translate("FrameTypeConfigNew", "V", Q_NULLPTR));
        vBtn->setText(QString());
        VTailRadioBtn->setText(QApplication::translate("FrameTypeConfigNew", "V-Tail", Q_NULLPTR));
        vtailBtn->setText(QApplication::translate("FrameTypeConfigNew", "Quad with V-Shaped VTails:\n"
"The props make a V-Shape\n"
"when spinning", Q_NULLPTR));
        ATailRadioBtn->setText(QApplication::translate("FrameTypeConfigNew", "A-Tail", Q_NULLPTR));
        atailBtn->setText(QApplication::translate("FrameTypeConfigNew", "Quad with A-Shaped VTails:\n"
"The props make an A-Shape\n"
"when spinning", Q_NULLPTR));
        Y6BRadioBtn->setText(QApplication::translate("FrameTypeConfigNew", "Y6B", Q_NULLPTR));
        Y6BBtn->setText(QString());
        label_8->setText(QApplication::translate("FrameTypeConfigNew", "<h2>Frame Class</h2>", Q_NULLPTR));
        quadBtn->setText(QString());
        hexaBtn->setText(QString());
        octaBtn->setText(QString());
        octaQuadBtn->setText(QString());
        Y6Btn->setText(QString());
        heliBtn->setText(QString());
        triBtn->setText(QString());
        singleBtn->setText(QApplication::translate("FrameTypeConfigNew", "Single Copter", Q_NULLPTR));
        coaxBtn->setText(QApplication::translate("FrameTypeConfigNew", "Coax Copter", Q_NULLPTR));
        quadRadioBtn->setText(QString());
        hexaRadioBtn->setText(QString());
        octaRadionbtn->setText(QString());
        octaQuadRadioBtn->setText(QString());
        Y6RadioBtn->setText(QString());
        heliRadioBtn->setText(QString());
        triRadioBtn->setText(QString());
        singleRadioBtn->setText(QString());
        coaxRadioBtn->setText(QString());
        label->setText(QApplication::translate("FrameTypeConfigNew", "Quad", Q_NULLPTR));
        label_4->setText(QApplication::translate("FrameTypeConfigNew", "Hexa", Q_NULLPTR));
        label_2->setText(QApplication::translate("FrameTypeConfigNew", "Octa", Q_NULLPTR));
        label_3->setText(QApplication::translate("FrameTypeConfigNew", "OctaQuad", Q_NULLPTR));
        label_5->setText(QApplication::translate("FrameTypeConfigNew", "Y6", Q_NULLPTR));
        label_6->setText(QApplication::translate("FrameTypeConfigNew", "Heli", Q_NULLPTR));
        label_7->setText(QApplication::translate("FrameTypeConfigNew", "Tri", Q_NULLPTR));
        label_10->setText(QApplication::translate("FrameTypeConfigNew", "Single", Q_NULLPTR));
        label_11->setText(QApplication::translate("FrameTypeConfigNew", "Coax", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FrameTypeConfigNew: public Ui_FrameTypeConfigNew {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRAMETYPECONFIGNEW_H
