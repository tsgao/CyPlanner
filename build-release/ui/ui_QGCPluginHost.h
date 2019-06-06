/********************************************************************************
** Form generated from reading UI file 'QGCPluginHost.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCPLUGINHOST_H
#define UI_QGCPLUGINHOST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCPluginHost
{
public:
    QListWidget *pluginListWidget;
    QTextEdit *pluginLog;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *QGCPluginHost)
    {
        if (QGCPluginHost->objectName().isEmpty())
            QGCPluginHost->setObjectName(QStringLiteral("QGCPluginHost"));
        QGCPluginHost->resize(633, 329);
        pluginListWidget = new QListWidget(QGCPluginHost);
        pluginListWidget->setObjectName(QStringLiteral("pluginListWidget"));
        pluginListWidget->setGeometry(QRect(10, 30, 256, 271));
        pluginLog = new QTextEdit(QGCPluginHost);
        pluginLog->setObjectName(QStringLiteral("pluginLog"));
        pluginLog->setGeometry(QRect(280, 30, 341, 271));
        pluginLog->setReadOnly(true);
        label = new QLabel(QGCPluginHost);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 121, 16));
        label_2 = new QLabel(QGCPluginHost);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(280, 10, 91, 16));

        retranslateUi(QGCPluginHost);

        QMetaObject::connectSlotsByName(QGCPluginHost);
    } // setupUi

    void retranslateUi(QWidget *QGCPluginHost)
    {
        QGCPluginHost->setWindowTitle(QApplication::translate("QGCPluginHost", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("QGCPluginHost", "Loaded Plugins", Q_NULLPTR));
        label_2->setText(QApplication::translate("QGCPluginHost", "Plugin Log", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QGCPluginHost: public Ui_QGCPluginHost {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCPLUGINHOST_H
