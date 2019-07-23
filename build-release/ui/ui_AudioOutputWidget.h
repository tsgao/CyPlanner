/********************************************************************************
** Form generated from reading UI file 'AudioOutputWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUDIOOUTPUTWIDGET_H
#define UI_AUDIOOUTPUTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AudioOutputWidget
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QPushButton *muteButton;

    void setupUi(QWidget *AudioOutputWidget)
    {
        if (AudioOutputWidget->objectName().isEmpty())
            AudioOutputWidget->setObjectName(QStringLiteral("AudioOutputWidget"));
        AudioOutputWidget->resize(195, 95);
        gridLayout = new QGridLayout(AudioOutputWidget);
        gridLayout->setContentsMargins(6, 6, 6, 6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer = new QSpacerItem(53, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 2);

        verticalSpacer = new QSpacerItem(180, 43, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 4);

        muteButton = new QPushButton(AudioOutputWidget);
        muteButton->setObjectName(QStringLiteral("muteButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/files/images/status/audio-volume-muted.svg"), QSize(), QIcon::Normal, QIcon::Off);
        muteButton->setIcon(icon);
        muteButton->setIconSize(QSize(16, 16));

        gridLayout->addWidget(muteButton, 0, 0, 1, 1);


        retranslateUi(AudioOutputWidget);

        QMetaObject::connectSlotsByName(AudioOutputWidget);
    } // setupUi

    void retranslateUi(QWidget *AudioOutputWidget)
    {
        AudioOutputWidget->setWindowTitle(QApplication::translate("AudioOutputWidget", "Form", Q_NULLPTR));
        muteButton->setText(QApplication::translate("AudioOutputWidget", "Mute", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AudioOutputWidget: public Ui_AudioOutputWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUDIOOUTPUTWIDGET_H
