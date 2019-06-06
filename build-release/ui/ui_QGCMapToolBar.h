/********************************************************************************
** Form generated from reading UI file 'QGCMapToolBar.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCMAPTOOLBAR_H
#define UI_QGCMAPTOOLBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCMapToolBar
{
public:
    QHBoxLayout *horizontalLayout;
    QPushButton *goToButton;
    QPushButton *editButton;
    QPushButton *goHomeButton;
    QPushButton *lastPosButton;
    QPushButton *ripMapButton;
    QPushButton *clearTrailsButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *followPushButton;
    QSpacerItem *horizontalSpacer;
    QLabel *posLabel;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *optionsButton;

    void setupUi(QWidget *QGCMapToolBar)
    {
        if (QGCMapToolBar->objectName().isEmpty())
            QGCMapToolBar->setObjectName(QStringLiteral("QGCMapToolBar"));
        QGCMapToolBar->resize(917, 44);
        QGCMapToolBar->setMaximumSize(QSize(16777215, 44));
        horizontalLayout = new QHBoxLayout(QGCMapToolBar);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        goToButton = new QPushButton(QGCMapToolBar);
        goToButton->setObjectName(QStringLiteral("goToButton"));
        goToButton->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout->addWidget(goToButton);

        editButton = new QPushButton(QGCMapToolBar);
        editButton->setObjectName(QStringLiteral("editButton"));
        editButton->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout->addWidget(editButton);

        goHomeButton = new QPushButton(QGCMapToolBar);
        goHomeButton->setObjectName(QStringLiteral("goHomeButton"));
        goHomeButton->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout->addWidget(goHomeButton);

        lastPosButton = new QPushButton(QGCMapToolBar);
        lastPosButton->setObjectName(QStringLiteral("lastPosButton"));
        lastPosButton->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout->addWidget(lastPosButton);

        ripMapButton = new QPushButton(QGCMapToolBar);
        ripMapButton->setObjectName(QStringLiteral("ripMapButton"));
        ripMapButton->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout->addWidget(ripMapButton);

        clearTrailsButton = new QPushButton(QGCMapToolBar);
        clearTrailsButton->setObjectName(QStringLiteral("clearTrailsButton"));
        clearTrailsButton->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout->addWidget(clearTrailsButton);

        horizontalSpacer_3 = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        followPushButton = new QPushButton(QGCMapToolBar);
        followPushButton->setObjectName(QStringLiteral("followPushButton"));
        followPushButton->setMaximumSize(QSize(16777215, 16777215));
        followPushButton->setStyleSheet(QLatin1String("QPushButton:checked {\n"
"	background-color: rgb(100, 216, 100);\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(0,255,0);\n"
"}"));
        followPushButton->setCheckable(true);
        followPushButton->setChecked(false);

        horizontalLayout->addWidget(followPushButton);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        posLabel = new QLabel(QGCMapToolBar);
        posLabel->setObjectName(QStringLiteral("posLabel"));
        posLabel->setMaximumSize(QSize(16777085, 16777215));

        horizontalLayout->addWidget(posLabel);

        horizontalSpacer_2 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        optionsButton = new QPushButton(QGCMapToolBar);
        optionsButton->setObjectName(QStringLiteral("optionsButton"));
        optionsButton->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout->addWidget(optionsButton);


        retranslateUi(QGCMapToolBar);

        QMetaObject::connectSlotsByName(QGCMapToolBar);
    } // setupUi

    void retranslateUi(QWidget *QGCMapToolBar)
    {
        QGCMapToolBar->setWindowTitle(QApplication::translate("QGCMapToolBar", "Form", Q_NULLPTR));
        goToButton->setText(QApplication::translate("QGCMapToolBar", "Lat/Lon", Q_NULLPTR));
        editButton->setText(QApplication::translate("QGCMapToolBar", "Edit", Q_NULLPTR));
        goHomeButton->setText(QApplication::translate("QGCMapToolBar", "Go Home", Q_NULLPTR));
        lastPosButton->setText(QApplication::translate("QGCMapToolBar", "Last Pos", Q_NULLPTR));
        ripMapButton->setText(QApplication::translate("QGCMapToolBar", "Cache", Q_NULLPTR));
        clearTrailsButton->setText(QApplication::translate("QGCMapToolBar", "Clear Map", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        followPushButton->setToolTip(QApplication::translate("QGCMapToolBar", "Centers map on current vehicle location", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        followPushButton->setText(QApplication::translate("QGCMapToolBar", "Centre on UAV", Q_NULLPTR));
        posLabel->setText(QApplication::translate("QGCMapToolBar", "00.00 00.00", Q_NULLPTR));
        optionsButton->setText(QApplication::translate("QGCMapToolBar", "Options", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QGCMapToolBar: public Ui_QGCMapToolBar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCMAPTOOLBAR_H
