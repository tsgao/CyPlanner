/********************************************************************************
** Form generated from reading UI file 'FrameTypeConfig.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRAMETYPECONFIG_H
#define UI_FRAMETYPECONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FrameTypeConfig
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *LoadParametersButton;
    QSpacerItem *horizontalSpacer;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QHBoxLayout *horizontalLayout_4;

    void setupUi(QWidget *FrameTypeConfig)
    {
        if (FrameTypeConfig->objectName().isEmpty())
            FrameTypeConfig->setObjectName(QStringLiteral("FrameTypeConfig"));
        FrameTypeConfig->resize(830, 609);
        verticalLayout = new QVBoxLayout(FrameTypeConfig);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(FrameTypeConfig);
        label->setObjectName(QStringLiteral("label"));
        label->setScaledContents(false);

        horizontalLayout_3->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        LoadParametersButton = new QPushButton(FrameTypeConfig);
        LoadParametersButton->setObjectName(QStringLiteral("LoadParametersButton"));

        horizontalLayout_3->addWidget(LoadParametersButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_3);

        scrollArea = new QScrollArea(FrameTypeConfig);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(false);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 753, 500));
        horizontalLayout_4 = new QHBoxLayout(scrollAreaWidgetContents_2);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        scrollArea->setWidget(scrollAreaWidgetContents_2);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(FrameTypeConfig);

        QMetaObject::connectSlotsByName(FrameTypeConfig);
    } // setupUi

    void retranslateUi(QWidget *FrameTypeConfig)
    {
        FrameTypeConfig->setWindowTitle(QApplication::translate("FrameTypeConfig", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("FrameTypeConfig", "<h2>Frame Setup</h2>", Q_NULLPTR));
        LoadParametersButton->setText(QApplication::translate("FrameTypeConfig", "Load Parameters for \n"
"Common Frame Types", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FrameTypeConfig: public Ui_FrameTypeConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRAMETYPECONFIG_H
