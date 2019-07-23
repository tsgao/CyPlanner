/********************************************************************************
** Form generated from reading UI file 'QGCUDPLinkConfiguration.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCUDPLINKCONFIGURATION_H
#define UI_QGCUDPLINKCONFIGURATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCUDPLinkConfiguration
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *portLabel;
    QSpinBox *portSpinBox;
    QLabel *label;
    QPushButton *addIPButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QGCUDPLinkConfiguration)
    {
        if (QGCUDPLinkConfiguration->objectName().isEmpty())
            QGCUDPLinkConfiguration->setObjectName(QStringLiteral("QGCUDPLinkConfiguration"));
        QGCUDPLinkConfiguration->resize(314, 237);
        verticalLayout = new QVBoxLayout(QGCUDPLinkConfiguration);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        portLabel = new QLabel(QGCUDPLinkConfiguration);
        portLabel->setObjectName(QStringLiteral("portLabel"));

        gridLayout->addWidget(portLabel, 0, 0, 1, 1);

        portSpinBox = new QSpinBox(QGCUDPLinkConfiguration);
        portSpinBox->setObjectName(QStringLiteral("portSpinBox"));
        portSpinBox->setMinimum(1000);
        portSpinBox->setMaximum(100000);

        gridLayout->addWidget(portSpinBox, 0, 1, 1, 1);

        label = new QLabel(QGCUDPLinkConfiguration);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        addIPButton = new QPushButton(QGCUDPLinkConfiguration);
        addIPButton->setObjectName(QStringLiteral("addIPButton"));

        gridLayout->addWidget(addIPButton, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 148, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(QGCUDPLinkConfiguration);

        QMetaObject::connectSlotsByName(QGCUDPLinkConfiguration);
    } // setupUi

    void retranslateUi(QWidget *QGCUDPLinkConfiguration)
    {
        QGCUDPLinkConfiguration->setWindowTitle(QApplication::translate("QGCUDPLinkConfiguration", "Form", Q_NULLPTR));
        portLabel->setText(QApplication::translate("QGCUDPLinkConfiguration", "UDP Port", Q_NULLPTR));
        label->setText(QApplication::translate("QGCUDPLinkConfiguration", "Add remote communication target", Q_NULLPTR));
        addIPButton->setText(QApplication::translate("QGCUDPLinkConfiguration", "Add IP", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QGCUDPLinkConfiguration: public Ui_QGCUDPLinkConfiguration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCUDPLINKCONFIGURATION_H
