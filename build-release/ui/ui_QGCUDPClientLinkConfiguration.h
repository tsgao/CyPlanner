/********************************************************************************
** Form generated from reading UI file 'QGCUDPClientLinkConfiguration.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCUDPCLIENTLINKCONFIGURATION_H
#define UI_QGCUDPCLIENTLINKCONFIGURATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCUDPClientLinkConfiguration
{
public:
    QFormLayout *formLayout;
    QSpinBox *portSpinBox;
    QLabel *label;
    QLabel *portLabel;
    QLineEdit *ipAddressLineEdit;

    void setupUi(QWidget *QGCUDPClientLinkConfiguration)
    {
        if (QGCUDPClientLinkConfiguration->objectName().isEmpty())
            QGCUDPClientLinkConfiguration->setObjectName(QStringLiteral("QGCUDPClientLinkConfiguration"));
        QGCUDPClientLinkConfiguration->resize(400, 300);
        formLayout = new QFormLayout(QGCUDPClientLinkConfiguration);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        portSpinBox = new QSpinBox(QGCUDPClientLinkConfiguration);
        portSpinBox->setObjectName(QStringLiteral("portSpinBox"));
        portSpinBox->setMinimum(1000);
        portSpinBox->setMaximum(100000);

        formLayout->setWidget(1, QFormLayout::FieldRole, portSpinBox);

        label = new QLabel(QGCUDPClientLinkConfiguration);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        portLabel = new QLabel(QGCUDPClientLinkConfiguration);
        portLabel->setObjectName(QStringLiteral("portLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, portLabel);

        ipAddressLineEdit = new QLineEdit(QGCUDPClientLinkConfiguration);
        ipAddressLineEdit->setObjectName(QStringLiteral("ipAddressLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, ipAddressLineEdit);


        retranslateUi(QGCUDPClientLinkConfiguration);

        QMetaObject::connectSlotsByName(QGCUDPClientLinkConfiguration);
    } // setupUi

    void retranslateUi(QWidget *QGCUDPClientLinkConfiguration)
    {
        QGCUDPClientLinkConfiguration->setWindowTitle(QApplication::translate("QGCUDPClientLinkConfiguration", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("QGCUDPClientLinkConfiguration", "Address", Q_NULLPTR));
        portLabel->setText(QApplication::translate("QGCUDPClientLinkConfiguration", "Port", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QGCUDPClientLinkConfiguration: public Ui_QGCUDPClientLinkConfiguration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCUDPCLIENTLINKCONFIGURATION_H
