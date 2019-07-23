/********************************************************************************
** Form generated from reading UI file 'QGCTextLabel.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCTEXTLABEL_H
#define UI_QGCTEXTLABEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCTextLabel
{
public:
    QGridLayout *gridLayout;
    QLineEdit *editNameLabel;
    QFrame *editLine1;
    QLabel *nameLabel;
    QLineEdit *editTextParam;
    QPushButton *editFinishButton;
    QSpinBox *editComponentSpinBox;
    QFrame *editLine2;
    QLabel *textLabel;

    void setupUi(QWidget *QGCTextLabel)
    {
        if (QGCTextLabel->objectName().isEmpty())
            QGCTextLabel->setObjectName(QStringLiteral("QGCTextLabel"));
        QGCTextLabel->resize(1183, 166);
        gridLayout = new QGridLayout(QGCTextLabel);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(6, 3, 6, 3);
        editNameLabel = new QLineEdit(QGCTextLabel);
        editNameLabel->setObjectName(QStringLiteral("editNameLabel"));

        gridLayout->addWidget(editNameLabel, 2, 0, 1, 2);

        editLine1 = new QFrame(QGCTextLabel);
        editLine1->setObjectName(QStringLiteral("editLine1"));
        editLine1->setMinimumSize(QSize(0, 0));
        editLine1->setFrameShape(QFrame::HLine);
        editLine1->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(editLine1, 1, 0, 1, 3);

        nameLabel = new QLabel(QGCTextLabel);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setMinimumSize(QSize(50, 0));
        nameLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(nameLabel, 3, 0, 1, 2);

        editTextParam = new QLineEdit(QGCTextLabel);
        editTextParam->setObjectName(QStringLiteral("editTextParam"));

        gridLayout->addWidget(editTextParam, 2, 2, 1, 1);

        editFinishButton = new QPushButton(QGCTextLabel);
        editFinishButton->setObjectName(QStringLiteral("editFinishButton"));

        gridLayout->addWidget(editFinishButton, 6, 2, 1, 1);

        editComponentSpinBox = new QSpinBox(QGCTextLabel);
        editComponentSpinBox->setObjectName(QStringLiteral("editComponentSpinBox"));
        editComponentSpinBox->setMinimum(0);
        editComponentSpinBox->setMaximum(255);

        gridLayout->addWidget(editComponentSpinBox, 5, 0, 1, 1);

        editLine2 = new QFrame(QGCTextLabel);
        editLine2->setObjectName(QStringLiteral("editLine2"));
        editLine2->setMinimumSize(QSize(0, 0));
        editLine2->setFrameShape(QFrame::HLine);
        editLine2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(editLine2, 7, 0, 1, 3);

        textLabel = new QLabel(QGCTextLabel);
        textLabel->setObjectName(QStringLiteral("textLabel"));

        gridLayout->addWidget(textLabel, 3, 2, 1, 1);

        gridLayout->setColumnStretch(0, 100);

        retranslateUi(QGCTextLabel);
        QObject::connect(editNameLabel, SIGNAL(textChanged(QString)), nameLabel, SLOT(setText(QString)));

        QMetaObject::connectSlotsByName(QGCTextLabel);
    } // setupUi

    void retranslateUi(QWidget *QGCTextLabel)
    {
        QGCTextLabel->setWindowTitle(QApplication::translate("QGCTextLabel", "Form", Q_NULLPTR));
        editNameLabel->setText(QApplication::translate("QGCTextLabel", "<Label Description Label (in front of text)>", Q_NULLPTR));
        nameLabel->setText(QApplication::translate("QGCTextLabel", "Description", Q_NULLPTR));
        editTextParam->setText(QApplication::translate("QGCTextLabel", "<Text Param>", Q_NULLPTR));
        editFinishButton->setText(QApplication::translate("QGCTextLabel", "Done", Q_NULLPTR));
        editComponentSpinBox->setPrefix(QApplication::translate("QGCTextLabel", "Component ID: ", Q_NULLPTR));
        textLabel->setText(QApplication::translate("QGCTextLabel", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QGCTextLabel: public Ui_QGCTextLabel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCTEXTLABEL_H
