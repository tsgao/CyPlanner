/********************************************************************************
** Form generated from reading UI file 'SlugsPadCameraControl.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SLUGSPADCAMERACONTROL_H
#define UI_SLUGSPADCAMERACONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SlugsPadCameraControl
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *lbPixel;
    QLabel *lbDirection;

    void setupUi(QWidget *SlugsPadCameraControl)
    {
        if (SlugsPadCameraControl->objectName().isEmpty())
            SlugsPadCameraControl->setObjectName(QStringLiteral("SlugsPadCameraControl"));
        SlugsPadCameraControl->resize(200, 200);
        SlugsPadCameraControl->setMinimumSize(QSize(200, 200));
        SlugsPadCameraControl->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        gridLayout = new QGridLayout(SlugsPadCameraControl);
        gridLayout->setSpacing(1);
        gridLayout->setContentsMargins(1, 1, 1, 1);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        frame = new QFrame(SlugsPadCameraControl);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(200, 200));
        frame->setMouseTracking(true);
        frame->setStyleSheet(QStringLiteral("background-color: rgb(135, 206, 235);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalSpacer = new QSpacerItem(20, 156, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lbPixel = new QLabel(frame);
        lbPixel->setObjectName(QStringLiteral("lbPixel"));
        lbPixel->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(lbPixel);

        lbDirection = new QLabel(frame);
        lbDirection->setObjectName(QStringLiteral("lbDirection"));

        horizontalLayout->addWidget(lbDirection);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);


        gridLayout->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(SlugsPadCameraControl);

        QMetaObject::connectSlotsByName(SlugsPadCameraControl);
    } // setupUi

    void retranslateUi(QWidget *SlugsPadCameraControl)
    {
        SlugsPadCameraControl->setWindowTitle(QApplication::translate("SlugsPadCameraControl", "Form", Q_NULLPTR));
        lbPixel->setText(QApplication::translate("SlugsPadCameraControl", "----", Q_NULLPTR));
        lbDirection->setText(QApplication::translate("SlugsPadCameraControl", "----", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SlugsPadCameraControl: public Ui_SlugsPadCameraControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SLUGSPADCAMERACONTROL_H
