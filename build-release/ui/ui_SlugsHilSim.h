/********************************************************************************
** Form generated from reading UI file 'SlugsHilSim.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SLUGSHILSIM_H
#define UI_SLUGSHILSIM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SlugsHilSim
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *ed_ipAdress;
    QFrame *line;
    QLabel *label;
    QLineEdit *ed_rxPort;
    QLabel *label_3;
    QLineEdit *ed_txPort;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_3;
    QComboBox *cb_mavlinkLinks;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *bt_startHil;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLineEdit *ed_count;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *ed_1;
    QLineEdit *ed_2;
    QLineEdit *ed_3;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *tbA;
    QLineEdit *tbB;
    QLineEdit *tbC;

    void setupUi(QWidget *SlugsHilSim)
    {
        if (SlugsHilSim->objectName().isEmpty())
            SlugsHilSim->setObjectName(QStringLiteral("SlugsHilSim"));
        SlugsHilSim->resize(337, 278);
        SlugsHilSim->setMinimumSize(QSize(320, 252));
        SlugsHilSim->setMaximumSize(QSize(450, 278));
        QFont font;
        font.setPointSize(10);
        SlugsHilSim->setFont(font);
        verticalLayout = new QVBoxLayout(SlugsHilSim);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(SlugsHilSim);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        ed_ipAdress = new QLineEdit(SlugsHilSim);
        ed_ipAdress->setObjectName(QStringLiteral("ed_ipAdress"));
        ed_ipAdress->setMinimumSize(QSize(60, 18));
        ed_ipAdress->setMaximumSize(QSize(80, 18));

        gridLayout->addWidget(ed_ipAdress, 0, 1, 1, 1);

        line = new QFrame(SlugsHilSim);
        line->setObjectName(QStringLiteral("line"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 0, 1, 2);

        label = new QLabel(SlugsHilSim);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font1);
        label->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(label, 2, 0, 1, 1);

        ed_rxPort = new QLineEdit(SlugsHilSim);
        ed_rxPort->setObjectName(QStringLiteral("ed_rxPort"));
        ed_rxPort->setMinimumSize(QSize(60, 18));
        ed_rxPort->setMaximumSize(QSize(80, 18));

        gridLayout->addWidget(ed_rxPort, 2, 1, 1, 1);

        label_3 = new QLabel(SlugsHilSim);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);
        label_3->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        ed_txPort = new QLineEdit(SlugsHilSim);
        ed_txPort->setObjectName(QStringLiteral("ed_txPort"));
        ed_txPort->setMinimumSize(QSize(60, 18));
        ed_txPort->setMaximumSize(QSize(80, 18));

        gridLayout->addWidget(ed_txPort, 3, 1, 1, 1);


        horizontalLayout_2->addLayout(gridLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(SlugsHilSim);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);
        label_4->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_3->addWidget(label_4);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        cb_mavlinkLinks = new QComboBox(SlugsHilSim);
        cb_mavlinkLinks->setObjectName(QStringLiteral("cb_mavlinkLinks"));
        cb_mavlinkLinks->setMinimumSize(QSize(171, 26));

        horizontalLayout_3->addWidget(cb_mavlinkLinks);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        bt_startHil = new QPushButton(SlugsHilSim);
        bt_startHil->setObjectName(QStringLiteral("bt_startHil"));
        bt_startHil->setCheckable(true);

        horizontalLayout->addWidget(bt_startHil);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_7 = new QLabel(SlugsHilSim);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font1);
        label_7->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_4->addWidget(label_7);

        ed_count = new QLineEdit(SlugsHilSim);
        ed_count->setObjectName(QStringLiteral("ed_count"));
        ed_count->setMinimumSize(QSize(60, 18));
        ed_count->setMaximumSize(QSize(80, 18));
        ed_count->setReadOnly(true);

        horizontalLayout_4->addWidget(ed_count);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        ed_1 = new QLineEdit(SlugsHilSim);
        ed_1->setObjectName(QStringLiteral("ed_1"));
        ed_1->setMinimumSize(QSize(60, 18));
        ed_1->setMaximumSize(QSize(80, 18));
        ed_1->setReadOnly(true);

        horizontalLayout_5->addWidget(ed_1);

        ed_2 = new QLineEdit(SlugsHilSim);
        ed_2->setObjectName(QStringLiteral("ed_2"));
        ed_2->setMinimumSize(QSize(60, 18));
        ed_2->setMaximumSize(QSize(80, 18));
        ed_2->setReadOnly(true);

        horizontalLayout_5->addWidget(ed_2);

        ed_3 = new QLineEdit(SlugsHilSim);
        ed_3->setObjectName(QStringLiteral("ed_3"));
        ed_3->setMinimumSize(QSize(60, 18));
        ed_3->setMaximumSize(QSize(80, 18));
        ed_3->setReadOnly(true);

        horizontalLayout_5->addWidget(ed_3);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        tbA = new QLineEdit(SlugsHilSim);
        tbA->setObjectName(QStringLiteral("tbA"));

        horizontalLayout_6->addWidget(tbA);

        tbB = new QLineEdit(SlugsHilSim);
        tbB->setObjectName(QStringLiteral("tbB"));

        horizontalLayout_6->addWidget(tbB);

        tbC = new QLineEdit(SlugsHilSim);
        tbC->setObjectName(QStringLiteral("tbC"));

        horizontalLayout_6->addWidget(tbC);


        verticalLayout->addLayout(horizontalLayout_6);


        retranslateUi(SlugsHilSim);

        QMetaObject::connectSlotsByName(SlugsHilSim);
    } // setupUi

    void retranslateUi(QWidget *SlugsHilSim)
    {
        SlugsHilSim->setWindowTitle(QApplication::translate("SlugsHilSim", "Form", Q_NULLPTR));
        label_2->setText(QApplication::translate("SlugsHilSim", "IP Address", Q_NULLPTR));
        label->setText(QApplication::translate("SlugsHilSim", "Receive Port", Q_NULLPTR));
        label_3->setText(QApplication::translate("SlugsHilSim", "Send Port", Q_NULLPTR));
        label_4->setText(QApplication::translate("SlugsHilSim", "Slugs HIL Link", Q_NULLPTR));
        bt_startHil->setText(QApplication::translate("SlugsHilSim", "Set Slugs in HIL Mode", Q_NULLPTR));
        label_7->setText(QApplication::translate("SlugsHilSim", "Count", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SlugsHilSim: public Ui_SlugsHilSim {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SLUGSHILSIM_H
