/********************************************************************************
** Form generated from reading UI file 'MissionElevationDisplay.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MISSIONELEVATIONDISPLAY_H
#define UI_MISSIONELEVATIONDISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_MissionElevationDisplay
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QCustomPlot *customPlot;
    QVBoxLayout *verticalLayout;
    QPushButton *refreshButton;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QSpinBox *sampleSpinBox;
    QSpacerItem *verticalSpacer_2;
    QLabel *resolutionLabel;
    QCheckBox *homeAltCheckBox;
    QPushButton *setHomeAltButton;
    QPushButton *infoButton;

    void setupUi(QWidget *MissionElevationDisplay)
    {
        if (MissionElevationDisplay->objectName().isEmpty())
            MissionElevationDisplay->setObjectName(QStringLiteral("MissionElevationDisplay"));
        MissionElevationDisplay->resize(534, 245);
        MissionElevationDisplay->setMinimumSize(QSize(0, 0));
        horizontalLayout_2 = new QHBoxLayout(MissionElevationDisplay);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        customPlot = new QCustomPlot(MissionElevationDisplay);
        customPlot->setObjectName(QStringLiteral("customPlot"));
        customPlot->setMinimumSize(QSize(391, 0));

        horizontalLayout->addWidget(customPlot);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        refreshButton = new QPushButton(MissionElevationDisplay);
        refreshButton->setObjectName(QStringLiteral("refreshButton"));
        refreshButton->setMaximumSize(QSize(100, 16777215));

        verticalLayout->addWidget(refreshButton);

        verticalSpacer = new QSpacerItem(20, 88, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label = new QLabel(MissionElevationDisplay);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        sampleSpinBox = new QSpinBox(MissionElevationDisplay);
        sampleSpinBox->setObjectName(QStringLiteral("sampleSpinBox"));
        sampleSpinBox->setValue(5);

        verticalLayout->addWidget(sampleSpinBox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        resolutionLabel = new QLabel(MissionElevationDisplay);
        resolutionLabel->setObjectName(QStringLiteral("resolutionLabel"));
        resolutionLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(resolutionLabel);

        homeAltCheckBox = new QCheckBox(MissionElevationDisplay);
        homeAltCheckBox->setObjectName(QStringLiteral("homeAltCheckBox"));
        homeAltCheckBox->setMaximumSize(QSize(100, 16777215));

        verticalLayout->addWidget(homeAltCheckBox);

        setHomeAltButton = new QPushButton(MissionElevationDisplay);
        setHomeAltButton->setObjectName(QStringLiteral("setHomeAltButton"));
        setHomeAltButton->setMaximumSize(QSize(100, 16777215));

        verticalLayout->addWidget(setHomeAltButton);

        infoButton = new QPushButton(MissionElevationDisplay);
        infoButton->setObjectName(QStringLiteral("infoButton"));
        infoButton->setMaximumSize(QSize(100, 16777215));

        verticalLayout->addWidget(infoButton);


        horizontalLayout->addLayout(verticalLayout);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(MissionElevationDisplay);

        QMetaObject::connectSlotsByName(MissionElevationDisplay);
    } // setupUi

    void retranslateUi(QWidget *MissionElevationDisplay)
    {
        MissionElevationDisplay->setWindowTitle(QApplication::translate("MissionElevationDisplay", "Form", Q_NULLPTR));
        refreshButton->setText(QApplication::translate("MissionElevationDisplay", "Add Elevation", Q_NULLPTR));
        label->setText(QApplication::translate("MissionElevationDisplay", "Samples x", Q_NULLPTR));
        resolutionLabel->setText(QApplication::translate("MissionElevationDisplay", "...", Q_NULLPTR));
        homeAltCheckBox->setText(QApplication::translate("MissionElevationDisplay", "Use Alt. Offset", Q_NULLPTR));
        setHomeAltButton->setText(QApplication::translate("MissionElevationDisplay", "Set Alt. Offset", Q_NULLPTR));
        infoButton->setText(QApplication::translate("MissionElevationDisplay", "Info", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MissionElevationDisplay: public Ui_MissionElevationDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MISSIONELEVATIONDISPLAY_H
