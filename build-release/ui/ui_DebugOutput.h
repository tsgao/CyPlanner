/********************************************************************************
** Form generated from reading UI file 'DebugOutput.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEBUGOUTPUT_H
#define UI_DEBUGOUTPUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DebugOutput
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout;
    QPushButton *copyPushButton;
    QCheckBox *autoScrollCheckBox;
    QCheckBox *onTopCheckBox;
    QSpacerItem *horizontalSpacer;
    QLabel *commitLabel;
    QLineEdit *commitLineEdit;
    QLabel *hashLabel;
    QLineEdit *hashLineEdit;

    void setupUi(QWidget *DebugOutput)
    {
        if (DebugOutput->objectName().isEmpty())
            DebugOutput->setObjectName(QStringLiteral("DebugOutput"));
        DebugOutput->resize(925, 349);
        verticalLayout = new QVBoxLayout(DebugOutput);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textBrowser = new QTextBrowser(DebugOutput);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setLineWrapMode(QTextEdit::NoWrap);

        verticalLayout->addWidget(textBrowser);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        copyPushButton = new QPushButton(DebugOutput);
        copyPushButton->setObjectName(QStringLiteral("copyPushButton"));

        horizontalLayout->addWidget(copyPushButton);

        autoScrollCheckBox = new QCheckBox(DebugOutput);
        autoScrollCheckBox->setObjectName(QStringLiteral("autoScrollCheckBox"));
        autoScrollCheckBox->setChecked(true);

        horizontalLayout->addWidget(autoScrollCheckBox);

        onTopCheckBox = new QCheckBox(DebugOutput);
        onTopCheckBox->setObjectName(QStringLiteral("onTopCheckBox"));

        horizontalLayout->addWidget(onTopCheckBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        commitLabel = new QLabel(DebugOutput);
        commitLabel->setObjectName(QStringLiteral("commitLabel"));

        horizontalLayout->addWidget(commitLabel);

        commitLineEdit = new QLineEdit(DebugOutput);
        commitLineEdit->setObjectName(QStringLiteral("commitLineEdit"));
        commitLineEdit->setReadOnly(true);

        horizontalLayout->addWidget(commitLineEdit);

        hashLabel = new QLabel(DebugOutput);
        hashLabel->setObjectName(QStringLiteral("hashLabel"));

        horizontalLayout->addWidget(hashLabel);

        hashLineEdit = new QLineEdit(DebugOutput);
        hashLineEdit->setObjectName(QStringLiteral("hashLineEdit"));
        hashLineEdit->setReadOnly(true);

        horizontalLayout->addWidget(hashLineEdit);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DebugOutput);

        QMetaObject::connectSlotsByName(DebugOutput);
    } // setupUi

    void retranslateUi(QWidget *DebugOutput)
    {
        DebugOutput->setWindowTitle(QApplication::translate("DebugOutput", "Debug Output", Q_NULLPTR));
        copyPushButton->setText(QApplication::translate("DebugOutput", "Copy to Clipboard", Q_NULLPTR));
        autoScrollCheckBox->setText(QApplication::translate("DebugOutput", "Auto Scroll", Q_NULLPTR));
        onTopCheckBox->setText(QApplication::translate("DebugOutput", "Keep Window On Top", Q_NULLPTR));
        commitLabel->setText(QApplication::translate("DebugOutput", "Commit:", Q_NULLPTR));
        hashLabel->setText(QApplication::translate("DebugOutput", "Hash:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DebugOutput: public Ui_DebugOutput {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEBUGOUTPUT_H
