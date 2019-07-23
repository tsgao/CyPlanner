/********************************************************************************
** Form generated from reading UI file 'FrameTypeConfigOld.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRAMETYPECONFIGOLD_H
#define UI_FRAMETYPECONFIGOLD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FrameTypeConfigOld
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QRadioButton *plusRadioButton;
    QPushButton *pushButton;
    QRadioButton *xRadioButton;
    QPushButton *pushButton_2;
    QRadioButton *vRadioButton;
    QPushButton *pushButton_5;
    QSpacerItem *horizontalSpacer_3;
    QRadioButton *hRadioButton;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_3;
    QLabel *label_7;
    QRadioButton *newY6radioButton;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_4;
    QLabel *label_8;

    void setupUi(QWidget *FrameTypeConfigOld)
    {
        if (FrameTypeConfigOld->objectName().isEmpty())
            FrameTypeConfigOld->setObjectName(QStringLiteral("FrameTypeConfigOld"));
        FrameTypeConfigOld->resize(599, 570);
        layoutWidget = new QWidget(FrameTypeConfigOld);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 580, 550));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        plusRadioButton = new QRadioButton(layoutWidget);
        plusRadioButton->setObjectName(QStringLiteral("plusRadioButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(plusRadioButton->sizePolicy().hasHeightForWidth());
        plusRadioButton->setSizePolicy(sizePolicy);
        plusRadioButton->setMinimumSize(QSize(100, 0));
        plusRadioButton->setMaximumSize(QSize(150, 16777215));
        plusRadioButton->setLayoutDirection(Qt::RightToLeft);
        plusRadioButton->setIconSize(QSize(500, 150));

        gridLayout->addWidget(plusRadioButton, 0, 0, 1, 1);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QLatin1String("QPushButton {\n"
"    /*min-height: 16px;*/\n"
"	border: 0px;\n"
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
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(400, 80));

        gridLayout->addWidget(pushButton, 0, 1, 1, 1);

        xRadioButton = new QRadioButton(layoutWidget);
        xRadioButton->setObjectName(QStringLiteral("xRadioButton"));
        sizePolicy.setHeightForWidth(xRadioButton->sizePolicy().hasHeightForWidth());
        xRadioButton->setSizePolicy(sizePolicy);
        xRadioButton->setMinimumSize(QSize(100, 0));
        xRadioButton->setMaximumSize(QSize(150, 16777215));
        xRadioButton->setLayoutDirection(Qt::RightToLeft);
        xRadioButton->setAutoFillBackground(false);
        xRadioButton->setIconSize(QSize(500, 150));

        gridLayout->addWidget(xRadioButton, 1, 0, 1, 1);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton {\n"
"    /*min-height: 16px;*/\n"
"	border: 0px;\n"
"    margin: 3px;\n"
"	border-radius: 2px;\n"
"	padding-top: 4px;\n"
"	padding-left: 8px;\n"
"	padding-right: 8px;\n"
"	padding-bottom: 4px;\n"
"	background-color: 0\n"
"}\n"
""));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/files/images/mavs/frames_x.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(380, 80));

        gridLayout->addWidget(pushButton_2, 1, 1, 1, 1);

        vRadioButton = new QRadioButton(layoutWidget);
        vRadioButton->setObjectName(QStringLiteral("vRadioButton"));
        sizePolicy.setHeightForWidth(vRadioButton->sizePolicy().hasHeightForWidth());
        vRadioButton->setSizePolicy(sizePolicy);
        vRadioButton->setMinimumSize(QSize(100, 0));
        vRadioButton->setMaximumSize(QSize(150, 16777215));
        vRadioButton->setLayoutDirection(Qt::RightToLeft);
        vRadioButton->setAutoFillBackground(false);
        vRadioButton->setIconSize(QSize(500, 120));

        gridLayout->addWidget(vRadioButton, 2, 0, 1, 1);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setStyleSheet(QLatin1String("QPushButton {\n"
"    /*min-height: 16px;*/\n"
"	border: 0px;\n"
"    margin: 3px;\n"
"	border-radius: 2px;\n"
"	padding-top: 4px;\n"
"	padding-left: 8px;\n"
"	padding-right: 8px;\n"
"	padding-bottom: 4px;\n"
"	background-color: 0\n"
"}\n"
""));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/files/images/firmware/quady.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon2);
        pushButton_5->setIconSize(QSize(90, 90));

        gridLayout->addWidget(pushButton_5, 2, 1, 2, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 3, 2, 1, 1);

        hRadioButton = new QRadioButton(layoutWidget);
        hRadioButton->setObjectName(QStringLiteral("hRadioButton"));
        sizePolicy.setHeightForWidth(hRadioButton->sizePolicy().hasHeightForWidth());
        hRadioButton->setSizePolicy(sizePolicy);
        hRadioButton->setMinimumSize(QSize(100, 0));
        hRadioButton->setMaximumSize(QSize(150, 16777215));
        hRadioButton->setLayoutDirection(Qt::RightToLeft);
        hRadioButton->setIconSize(QSize(500, 120));

        gridLayout->addWidget(hRadioButton, 4, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setStyleSheet(QLatin1String("QPushButton {\n"
"    /*min-height: 16px;*/\n"
"	border: 0px;\n"
"    margin: 3px;\n"
"	border-radius: 2px;\n"
"	padding-top: 4px;\n"
"	padding-left: 8px;\n"
"	padding-right: 8px;\n"
"	padding-bottom: 4px;\n"
"	background-color: 0\n"
"}\n"
""));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/files/images/mavs/frames_quad_I.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon3);
        pushButton_3->setIconSize(QSize(100, 100));

        horizontalLayout->addWidget(pushButton_3);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setWordWrap(true);

        horizontalLayout->addWidget(label_7);


        gridLayout->addLayout(horizontalLayout, 4, 1, 1, 1);

        newY6radioButton = new QRadioButton(layoutWidget);
        newY6radioButton->setObjectName(QStringLiteral("newY6radioButton"));
        sizePolicy.setHeightForWidth(newY6radioButton->sizePolicy().hasHeightForWidth());
        newY6radioButton->setSizePolicy(sizePolicy);
        newY6radioButton->setMinimumSize(QSize(100, 0));
        newY6radioButton->setMaximumSize(QSize(150, 16777215));
        newY6radioButton->setLayoutDirection(Qt::RightToLeft);
        newY6radioButton->setIconSize(QSize(500, 120));

        gridLayout->addWidget(newY6radioButton, 5, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setStyleSheet(QLatin1String("QPushButton {\n"
"    /*min-height: 16px;*/\n"
"	border: 0px;\n"
"    margin: 3px;\n"
"	border-radius: 2px;\n"
"	padding-top: 4px;\n"
"	padding-left: 8px;\n"
"	padding-right: 8px;\n"
"	padding-bottom: 4px;\n"
"	background-color: 0\n"
"}\n"
""));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/files/images/mavs/frames-Y6B.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon4);
        pushButton_4->setIconSize(QSize(100, 100));

        horizontalLayout_2->addWidget(pushButton_4);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setWordWrap(true);

        horizontalLayout_2->addWidget(label_8);


        gridLayout->addLayout(horizontalLayout_2, 5, 1, 1, 1);


        retranslateUi(FrameTypeConfigOld);

        QMetaObject::connectSlotsByName(FrameTypeConfigOld);
    } // setupUi

    void retranslateUi(QWidget *FrameTypeConfigOld)
    {
        FrameTypeConfigOld->setWindowTitle(QApplication::translate("FrameTypeConfigOld", "Form", Q_NULLPTR));
        plusRadioButton->setText(QApplication::translate("FrameTypeConfigOld", "'Plus' Style", Q_NULLPTR));
        pushButton->setText(QString());
        xRadioButton->setText(QApplication::translate("FrameTypeConfigOld", "'X' Style", Q_NULLPTR));
        pushButton_2->setText(QString());
        vRadioButton->setText(QApplication::translate("FrameTypeConfigOld", "'V' Style", Q_NULLPTR));
        pushButton_5->setText(QString());
        hRadioButton->setText(QApplication::translate("FrameTypeConfigOld", "'H' Style", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("FrameTypeConfigOld", "`", Q_NULLPTR));
        label_7->setText(QApplication::translate("FrameTypeConfigOld", "NOTE: X and H are not interchangable as the prop rotation changes", Q_NULLPTR));
        newY6radioButton->setText(QApplication::translate("FrameTypeConfigOld", "Y6B", Q_NULLPTR));
        pushButton_4->setText(QString());
        label_8->setText(QApplication::translate("FrameTypeConfigOld", "NOTE: This is the new Y6 configuration with all props on the bottom rotating CCW and on top CW ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FrameTypeConfigOld: public Ui_FrameTypeConfigOld {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRAMETYPECONFIGOLD_H
