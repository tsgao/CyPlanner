/********************************************************************************
** Form generated from reading UI file 'CommSettings.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMSETTINGS_H
#define UI_COMMSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_commSettings
{
public:
    QAction *actionDelete;
    QAction *actionConnect;
    QAction *actionClose;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *linkGroupBox;
    QHBoxLayout *horizontalLayout_2;
    QScrollArea *linkScrollArea;
    QWidget *scrollAreaWidgetContents;
    QCheckBox *advCheckBox;
    QGroupBox *protocolTypeGroupBox;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *linkType;
    QComboBox *connectionType;
    QCheckBox *advancedOptionsCheckBox;
    QLabel *label_5;
    QFrame *line;
    QGroupBox *protocolGroupBox;
    QHBoxLayout *horizontalLayout_3;
    QScrollArea *protocolScrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *connectButton;
    QPushButton *deleteButton;
    QPushButton *closeButton;
    QLabel *connectionStatusLabel;

    void setupUi(QWidget *commSettings)
    {
        if (commSettings->objectName().isEmpty())
            commSettings->setObjectName(QStringLiteral("commSettings"));
        commSettings->resize(330, 394);
        actionDelete = new QAction(commSettings);
        actionDelete->setObjectName(QStringLiteral("actionDelete"));
        actionConnect = new QAction(commSettings);
        actionConnect->setObjectName(QStringLiteral("actionConnect"));
        actionClose = new QAction(commSettings);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        verticalLayout_2 = new QVBoxLayout(commSettings);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        linkGroupBox = new QGroupBox(commSettings);
        linkGroupBox->setObjectName(QStringLiteral("linkGroupBox"));
        horizontalLayout_2 = new QHBoxLayout(linkGroupBox);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        linkScrollArea = new QScrollArea(linkGroupBox);
        linkScrollArea->setObjectName(QStringLiteral("linkScrollArea"));
        linkScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 308, 69));
        linkScrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout_2->addWidget(linkScrollArea);


        verticalLayout_2->addWidget(linkGroupBox);

        advCheckBox = new QCheckBox(commSettings);
        advCheckBox->setObjectName(QStringLiteral("advCheckBox"));

        verticalLayout_2->addWidget(advCheckBox);

        protocolTypeGroupBox = new QGroupBox(commSettings);
        protocolTypeGroupBox->setObjectName(QStringLiteral("protocolTypeGroupBox"));
        verticalLayout = new QVBoxLayout(protocolTypeGroupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(protocolTypeGroupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        linkType = new QComboBox(protocolTypeGroupBox);
        linkType->setObjectName(QStringLiteral("linkType"));

        gridLayout->addWidget(linkType, 0, 1, 1, 1);

        connectionType = new QComboBox(protocolTypeGroupBox);
        connectionType->setObjectName(QStringLiteral("connectionType"));

        gridLayout->addWidget(connectionType, 1, 1, 1, 1);

        advancedOptionsCheckBox = new QCheckBox(protocolTypeGroupBox);
        advancedOptionsCheckBox->setObjectName(QStringLiteral("advancedOptionsCheckBox"));

        gridLayout->addWidget(advancedOptionsCheckBox, 2, 1, 1, 1);

        label_5 = new QLabel(protocolTypeGroupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);


        verticalLayout_2->addWidget(protocolTypeGroupBox);

        line = new QFrame(commSettings);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        protocolGroupBox = new QGroupBox(commSettings);
        protocolGroupBox->setObjectName(QStringLiteral("protocolGroupBox"));
        horizontalLayout_3 = new QHBoxLayout(protocolGroupBox);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        protocolScrollArea = new QScrollArea(protocolGroupBox);
        protocolScrollArea->setObjectName(QStringLiteral("protocolScrollArea"));
        protocolScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 308, 69));
        protocolScrollArea->setWidget(scrollAreaWidgetContents_2);

        horizontalLayout_3->addWidget(protocolScrollArea);


        verticalLayout_2->addWidget(protocolGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(12);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        connectButton = new QPushButton(commSettings);
        connectButton->setObjectName(QStringLiteral("connectButton"));
        connectButton->setCheckable(false);

        horizontalLayout->addWidget(connectButton);

        deleteButton = new QPushButton(commSettings);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));

        horizontalLayout->addWidget(deleteButton);

        closeButton = new QPushButton(commSettings);
        closeButton->setObjectName(QStringLiteral("closeButton"));

        horizontalLayout->addWidget(closeButton);


        verticalLayout_2->addLayout(horizontalLayout);

        connectionStatusLabel = new QLabel(commSettings);
        connectionStatusLabel->setObjectName(QStringLiteral("connectionStatusLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(connectionStatusLabel->sizePolicy().hasHeightForWidth());
        connectionStatusLabel->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(connectionStatusLabel);

        verticalLayout_2->setStretch(0, 4);
        line->raise();
        linkGroupBox->raise();
        protocolGroupBox->raise();
        connectionStatusLabel->raise();
        advCheckBox->raise();
        protocolTypeGroupBox->raise();

        retranslateUi(commSettings);
        QObject::connect(actionClose, SIGNAL(triggered()), commSettings, SLOT(close()));

        connectionType->setCurrentIndex(-1);
        closeButton->setDefault(true);


        QMetaObject::connectSlotsByName(commSettings);
    } // setupUi

    void retranslateUi(QWidget *commSettings)
    {
        commSettings->setWindowTitle(QApplication::translate("commSettings", "Form", Q_NULLPTR));
        actionDelete->setText(QApplication::translate("commSettings", "Delete", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionDelete->setToolTip(QApplication::translate("commSettings", "Delete this link", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionConnect->setText(QApplication::translate("commSettings", "Connect", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionConnect->setToolTip(QApplication::translate("commSettings", "Connect this link", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionClose->setText(QApplication::translate("commSettings", "Close", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionClose->setToolTip(QApplication::translate("commSettings", "Close the configuration window", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        linkGroupBox->setTitle(QApplication::translate("commSettings", "Link", Q_NULLPTR));
        advCheckBox->setText(QApplication::translate("commSettings", "Show Advanced Options", Q_NULLPTR));
        protocolTypeGroupBox->setTitle(QApplication::translate("commSettings", "GroupBox", Q_NULLPTR));
        label->setText(QApplication::translate("commSettings", "Link Type", Q_NULLPTR));
        advancedOptionsCheckBox->setText(QApplication::translate("commSettings", "Advanced Options", Q_NULLPTR));
        label_5->setText(QApplication::translate("commSettings", "Protocol", Q_NULLPTR));
        protocolGroupBox->setTitle(QApplication::translate("commSettings", "Protocol", Q_NULLPTR));
        connectButton->setText(QApplication::translate("commSettings", "Connect", Q_NULLPTR));
        deleteButton->setText(QApplication::translate("commSettings", "Delete Link", Q_NULLPTR));
        closeButton->setText(QApplication::translate("commSettings", "Close", Q_NULLPTR));
        connectionStatusLabel->setText(QApplication::translate("commSettings", "Disconnected", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class commSettings: public Ui_commSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMSETTINGS_H
