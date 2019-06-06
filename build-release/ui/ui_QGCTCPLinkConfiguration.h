/********************************************************************************
** Form generated from reading UI file 'QGCTCPLinkConfiguration.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCTCPLINKCONFIGURATION_H
#define UI_QGCTCPLINKCONFIGURATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCTCPLinkConfiguration
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *hostLabel;
    QLineEdit *hostAddressLineEdit;
    QLabel *portLabel;
    QSpinBox *portSpinBox;
    QCheckBox *asServerCheckBox;
    QLabel *statusLabel;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QGCTCPLinkConfiguration)
    {
        if (QGCTCPLinkConfiguration->objectName().isEmpty())
            QGCTCPLinkConfiguration->setObjectName(QStringLiteral("QGCTCPLinkConfiguration"));
        QGCTCPLinkConfiguration->resize(300, 192);
        verticalLayout = new QVBoxLayout(QGCTCPLinkConfiguration);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        hostLabel = new QLabel(QGCTCPLinkConfiguration);
        hostLabel->setObjectName(QStringLiteral("hostLabel"));
        hostLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(hostLabel, 0, 0, 1, 1);

        hostAddressLineEdit = new QLineEdit(QGCTCPLinkConfiguration);
        hostAddressLineEdit->setObjectName(QStringLiteral("hostAddressLineEdit"));

        gridLayout->addWidget(hostAddressLineEdit, 0, 1, 1, 1);

        portLabel = new QLabel(QGCTCPLinkConfiguration);
        portLabel->setObjectName(QStringLiteral("portLabel"));
        portLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(portLabel, 1, 0, 1, 1);

        portSpinBox = new QSpinBox(QGCTCPLinkConfiguration);
        portSpinBox->setObjectName(QStringLiteral("portSpinBox"));
        portSpinBox->setMinimum(1000);
        portSpinBox->setMaximum(100000);

        gridLayout->addWidget(portSpinBox, 1, 1, 1, 1);

        asServerCheckBox = new QCheckBox(QGCTCPLinkConfiguration);
        asServerCheckBox->setObjectName(QStringLiteral("asServerCheckBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(asServerCheckBox->sizePolicy().hasHeightForWidth());
        asServerCheckBox->setSizePolicy(sizePolicy);
        asServerCheckBox->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(asServerCheckBox, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        statusLabel = new QLabel(QGCTCPLinkConfiguration);
        statusLabel->setObjectName(QStringLiteral("statusLabel"));
        QFont font;
        font.setPointSize(14);
        statusLabel->setFont(font);
        statusLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(statusLabel);

        verticalSpacer = new QSpacerItem(20, 75, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(QGCTCPLinkConfiguration);

        QMetaObject::connectSlotsByName(QGCTCPLinkConfiguration);
    } // setupUi

    void retranslateUi(QWidget *QGCTCPLinkConfiguration)
    {
        QGCTCPLinkConfiguration->setWindowTitle(QApplication::translate("QGCTCPLinkConfiguration", "Form", Q_NULLPTR));
        hostLabel->setText(QApplication::translate("QGCTCPLinkConfiguration", "Host Address", Q_NULLPTR));
        portLabel->setText(QApplication::translate("QGCTCPLinkConfiguration", "TCP Port", Q_NULLPTR));
        asServerCheckBox->setText(QApplication::translate("QGCTCPLinkConfiguration", "As Server?", Q_NULLPTR));
        statusLabel->setText(QApplication::translate("QGCTCPLinkConfiguration", "...", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QGCTCPLinkConfiguration: public Ui_QGCTCPLinkConfiguration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCTCPLINKCONFIGURATION_H
