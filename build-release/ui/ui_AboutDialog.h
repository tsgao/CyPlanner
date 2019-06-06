/********************************************************************************
** Form generated from reading UI file 'AboutDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QVBoxLayout *verticalLayout;
    QLabel *appnameLabel;
    QLabel *versionLabel;
    QLabel *linkLabel;
    QLabel *linkLabel_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *okButton;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QStringLiteral("AboutDialog"));
        AboutDialog->resize(473, 175);
        layoutWidget = new QWidget(AboutDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(16, 13, 441, 150));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        appnameLabel = new QLabel(layoutWidget);
        appnameLabel->setObjectName(QStringLiteral("appnameLabel"));
        QFont font;
        font.setPointSize(20);
        appnameLabel->setFont(font);
        appnameLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(appnameLabel);

        versionLabel = new QLabel(layoutWidget);
        versionLabel->setObjectName(QStringLiteral("versionLabel"));
        versionLabel->setAlignment(Qt::AlignCenter);
        versionLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout->addWidget(versionLabel);

        linkLabel = new QLabel(layoutWidget);
        linkLabel->setObjectName(QStringLiteral("linkLabel"));
        linkLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(linkLabel);

        linkLabel_2 = new QLabel(layoutWidget);
        linkLabel_2->setObjectName(QStringLiteral("linkLabel_2"));
        linkLabel_2->setAlignment(Qt::AlignCenter);
        linkLabel_2->setOpenExternalLinks(true);

        verticalLayout->addWidget(linkLabel_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        okButton = new QPushButton(layoutWidget);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(okButton);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout);


        retranslateUi(AboutDialog);

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QApplication::translate("AboutDialog", "About", Q_NULLPTR));
        label_2->setText(QApplication::translate("AboutDialog", "<html><head/><body><p><img src=\":/APMIcon128\"/></p></body></html>", Q_NULLPTR));
        appnameLabel->setText(QApplication::translate("AboutDialog", "APM Planner 2.0.0", Q_NULLPTR));
        versionLabel->setText(QApplication::translate("AboutDialog", "...", Q_NULLPTR));
        linkLabel->setText(QApplication::translate("AboutDialog", "<html><head/><body><p>info:<a href=\"http://planner2.ardupilot.org\"><span style=\" text-decoration: underline; color:#0000ff;\">planner2.ardupilot.org</span></a></p></body></html>", Q_NULLPTR));
        linkLabel_2->setText(QApplication::translate("AboutDialog", "<html><head/><body><p>credits:<a href=\"http://planner2.ardupilot.org/docs/credits-and-contributors.html\"><span style=\" text-decoration: underline; color:#0000ff;\">http://planner2.ardupilot.org/docs/cr...</span></a></p></body></html>", Q_NULLPTR));
        okButton->setText(QApplication::translate("AboutDialog", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
