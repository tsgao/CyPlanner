/********************************************************************************
** Form generated from reading UI file 'QGCUnconnectedInfoWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCUNCONNECTEDINFOWIDGET_H
#define UI_QGCUNCONNECTEDINFOWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCUnconnectedInfoWidget
{
public:
    QGridLayout *gridLayout;
    QToolButton *connectButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QGCUnconnectedInfoWidget)
    {
        if (QGCUnconnectedInfoWidget->objectName().isEmpty())
            QGCUnconnectedInfoWidget->setObjectName(QStringLiteral("QGCUnconnectedInfoWidget"));
        QGCUnconnectedInfoWidget->resize(372, 309);
        gridLayout = new QGridLayout(QGCUnconnectedInfoWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        connectButton = new QToolButton(QGCUnconnectedInfoWidget);
        connectButton->setObjectName(QStringLiteral("connectButton"));
        connectButton->setMinimumSize(QSize(150, 150));
        connectButton->setSizeIncrement(QSize(20, 20));
        connectButton->setBaseSize(QSize(150, 150));
        connectButton->setStyleSheet(QLatin1String("\n"
"QToolButton {\n"
"color: #222222;\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #80B81D, stop: 1 #306807);\n"
"margin: 15px;\n"
"padding: 20px;\n"
"border-radius: 18px;\n"
"min-height: 100px;\n"
"border: 2px solid #085B35;\n"
"}\n"
"\n"
"QToolButton:pressed {\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #306807, stop: 1 #80B81D);\n"
"color: #222222;\n"
"border-color: #D1892A;\n"
"}\n"
"\n"
"QToolButton:checked {\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #306807, stop: 1 #80B81D);\n"
"color: #222222;\n"
"border-color: #D1892A;\n"
"}"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/files/images/actions/qgroundcontrol-connect.svg"), QSize(), QIcon::Normal, QIcon::Off);
        connectButton->setIcon(icon);
        connectButton->setIconSize(QSize(140, 140));
        connectButton->setToolButtonStyle(Qt::ToolButtonIconOnly);

        gridLayout->addWidget(connectButton, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        gridLayout->setRowStretch(0, 90);
        gridLayout->setRowStretch(1, 30);

        retranslateUi(QGCUnconnectedInfoWidget);

        QMetaObject::connectSlotsByName(QGCUnconnectedInfoWidget);
    } // setupUi

    void retranslateUi(QWidget *QGCUnconnectedInfoWidget)
    {
        QGCUnconnectedInfoWidget->setWindowTitle(QApplication::translate("QGCUnconnectedInfoWidget", "Form", Q_NULLPTR));
        connectButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QGCUnconnectedInfoWidget: public Ui_QGCUnconnectedInfoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCUNCONNECTEDINFOWIDGET_H
