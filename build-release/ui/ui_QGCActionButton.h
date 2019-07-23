/********************************************************************************
** Form generated from reading UI file 'QGCActionButton.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCACTIONBUTTON_H
#define UI_QGCACTIONBUTTON_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCActionButton
{
public:
    QGridLayout *gridLayout;
    QLabel *nameLabel;
    QComboBox *editActionComboBox;
    QPushButton *editActionsRefreshButton;
    QPushButton *editFinishButton;
    QLineEdit *editButtonName;
    QLineEdit *editNameLabel;
    QPushButton *actionButton;

    void setupUi(QWidget *QGCActionButton)
    {
        if (QGCActionButton->objectName().isEmpty())
            QGCActionButton->setObjectName(QStringLiteral("QGCActionButton"));
        QGCActionButton->resize(400, 111);
        gridLayout = new QGridLayout(QGCActionButton);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(6, 3, 6, 3);
        nameLabel = new QLabel(QGCActionButton);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setMinimumSize(QSize(50, 0));
        nameLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(nameLabel, 1, 0, 1, 2);

        editActionComboBox = new QComboBox(QGCActionButton);
        editActionComboBox->setObjectName(QStringLiteral("editActionComboBox"));

        gridLayout->addWidget(editActionComboBox, 2, 0, 1, 1);

        editActionsRefreshButton = new QPushButton(QGCActionButton);
        editActionsRefreshButton->setObjectName(QStringLiteral("editActionsRefreshButton"));

        gridLayout->addWidget(editActionsRefreshButton, 2, 1, 1, 1);

        editFinishButton = new QPushButton(QGCActionButton);
        editFinishButton->setObjectName(QStringLiteral("editFinishButton"));

        gridLayout->addWidget(editFinishButton, 2, 2, 1, 1);

        editButtonName = new QLineEdit(QGCActionButton);
        editButtonName->setObjectName(QStringLiteral("editButtonName"));

        gridLayout->addWidget(editButtonName, 0, 2, 1, 1);

        editNameLabel = new QLineEdit(QGCActionButton);
        editNameLabel->setObjectName(QStringLiteral("editNameLabel"));

        gridLayout->addWidget(editNameLabel, 0, 0, 1, 2);

        actionButton = new QPushButton(QGCActionButton);
        actionButton->setObjectName(QStringLiteral("actionButton"));
        actionButton->setMinimumSize(QSize(30, 0));

        gridLayout->addWidget(actionButton, 1, 2, 1, 1);

        gridLayout->setColumnStretch(0, 100);
        gridLayout->setColumnStretch(1, 100);
        gridLayout->setColumnStretch(2, 50);

        retranslateUi(QGCActionButton);
        QObject::connect(editNameLabel, SIGNAL(textChanged(QString)), nameLabel, SLOT(setText(QString)));

        QMetaObject::connectSlotsByName(QGCActionButton);
    } // setupUi

    void retranslateUi(QWidget *QGCActionButton)
    {
        QGCActionButton->setWindowTitle(QApplication::translate("QGCActionButton", "Form", Q_NULLPTR));
        nameLabel->setText(QApplication::translate("QGCActionButton", "Description", Q_NULLPTR));
        editActionsRefreshButton->setText(QApplication::translate("QGCActionButton", "Refresh Actions", Q_NULLPTR));
        editFinishButton->setText(QApplication::translate("QGCActionButton", "Done", Q_NULLPTR));
        editButtonName->setText(QApplication::translate("QGCActionButton", "Button name", Q_NULLPTR));
        editNameLabel->setText(QApplication::translate("QGCActionButton", "Description", Q_NULLPTR));
        actionButton->setText(QApplication::translate("QGCActionButton", "Button name", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QGCActionButton: public Ui_QGCActionButton {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCACTIONBUTTON_H
