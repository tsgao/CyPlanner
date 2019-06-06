/********************************************************************************
** Form generated from reading UI file 'QGCMAVLinkLogPlayer.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCMAVLINKLOGPLAYER_H
#define UI_QGCMAVLINKLOGPLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCMAVLinkLogPlayer
{
public:
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *logStatsLabel;
    QLabel *logFileNameLabel;
    QToolButton *playButton;
    QLabel *label;
    QLabel *positionLabel;
    QSlider *positionSlider;
    QLabel *speedTitleLabel;
    QHBoxLayout *horizontalLayout;
    QPushButton *speedButton75;
    QPushButton *speedButton100;
    QPushButton *speedButton150;
    QPushButton *speedButton200;
    QPushButton *speedButton500;
    QPushButton *speedButton1000;
    QPushButton *selectFileButton;

    void setupUi(QWidget *QGCMAVLinkLogPlayer)
    {
        if (QGCMAVLinkLogPlayer->objectName().isEmpty())
            QGCMAVLinkLogPlayer->setObjectName(QStringLiteral("QGCMAVLinkLogPlayer"));
        QGCMAVLinkLogPlayer->resize(792, 78);
        horizontalLayout_3 = new QHBoxLayout(QGCMAVLinkLogPlayer);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        logStatsLabel = new QLabel(QGCMAVLinkLogPlayer);
        logStatsLabel->setObjectName(QStringLiteral("logStatsLabel"));

        horizontalLayout_2->addWidget(logStatsLabel);

        logFileNameLabel = new QLabel(QGCMAVLinkLogPlayer);
        logFileNameLabel->setObjectName(QStringLiteral("logFileNameLabel"));

        horizontalLayout_2->addWidget(logFileNameLabel);

        playButton = new QToolButton(QGCMAVLinkLogPlayer);
        playButton->setObjectName(QStringLiteral("playButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/files/images/actions/media-playback-start.svg"), QSize(), QIcon::Normal, QIcon::Off);
        playButton->setIcon(icon);
        playButton->setCheckable(true);

        horizontalLayout_2->addWidget(playButton);

        label = new QLabel(QGCMAVLinkLogPlayer);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        positionLabel = new QLabel(QGCMAVLinkLogPlayer);
        positionLabel->setObjectName(QStringLiteral("positionLabel"));

        horizontalLayout_2->addWidget(positionLabel);

        positionSlider = new QSlider(QGCMAVLinkLogPlayer);
        positionSlider->setObjectName(QStringLiteral("positionSlider"));
        positionSlider->setMinimumSize(QSize(50, 0));
        positionSlider->setPageStep(0);
        positionSlider->setOrientation(Qt::Horizontal);
        positionSlider->setInvertedAppearance(false);
        positionSlider->setInvertedControls(false);
        positionSlider->setTickPosition(QSlider::NoTicks);

        horizontalLayout_2->addWidget(positionSlider);

        speedTitleLabel = new QLabel(QGCMAVLinkLogPlayer);
        speedTitleLabel->setObjectName(QStringLiteral("speedTitleLabel"));

        horizontalLayout_2->addWidget(speedTitleLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        speedButton75 = new QPushButton(QGCMAVLinkLogPlayer);
        speedButton75->setObjectName(QStringLiteral("speedButton75"));
        speedButton75->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(speedButton75->sizePolicy().hasHeightForWidth());
        speedButton75->setSizePolicy(sizePolicy);
        speedButton75->setCheckable(true);

        horizontalLayout->addWidget(speedButton75);

        speedButton100 = new QPushButton(QGCMAVLinkLogPlayer);
        speedButton100->setObjectName(QStringLiteral("speedButton100"));
        speedButton100->setCheckable(true);
        speedButton100->setChecked(true);

        horizontalLayout->addWidget(speedButton100);

        speedButton150 = new QPushButton(QGCMAVLinkLogPlayer);
        speedButton150->setObjectName(QStringLiteral("speedButton150"));
        speedButton150->setCheckable(true);

        horizontalLayout->addWidget(speedButton150);

        speedButton200 = new QPushButton(QGCMAVLinkLogPlayer);
        speedButton200->setObjectName(QStringLiteral("speedButton200"));
        speedButton200->setCheckable(true);

        horizontalLayout->addWidget(speedButton200);

        speedButton500 = new QPushButton(QGCMAVLinkLogPlayer);
        speedButton500->setObjectName(QStringLiteral("speedButton500"));
        speedButton500->setCheckable(true);

        horizontalLayout->addWidget(speedButton500);

        speedButton1000 = new QPushButton(QGCMAVLinkLogPlayer);
        speedButton1000->setObjectName(QStringLiteral("speedButton1000"));
        speedButton1000->setCheckable(true);

        horizontalLayout->addWidget(speedButton1000);


        horizontalLayout_2->addLayout(horizontalLayout);

        selectFileButton = new QPushButton(QGCMAVLinkLogPlayer);
        selectFileButton->setObjectName(QStringLiteral("selectFileButton"));

        horizontalLayout_2->addWidget(selectFileButton);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(QGCMAVLinkLogPlayer);

        QMetaObject::connectSlotsByName(QGCMAVLinkLogPlayer);
    } // setupUi

    void retranslateUi(QWidget *QGCMAVLinkLogPlayer)
    {
        QGCMAVLinkLogPlayer->setWindowTitle(QApplication::translate("QGCMAVLinkLogPlayer", "Form", Q_NULLPTR));
        logStatsLabel->setText(QApplication::translate("QGCMAVLinkLogPlayer", "No logfile selected..", Q_NULLPTR));
        logFileNameLabel->setText(QApplication::translate("QGCMAVLinkLogPlayer", "-", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        playButton->setToolTip(QApplication::translate("QGCMAVLinkLogPlayer", "Start to replay the logfile", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        playButton->setStatusTip(QApplication::translate("QGCMAVLinkLogPlayer", "Start to replay the logfile", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        playButton->setWhatsThis(QApplication::translate("QGCMAVLinkLogPlayer", "Start to replay the logfile", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        playButton->setText(QApplication::translate("QGCMAVLinkLogPlayer", "...", Q_NULLPTR));
        label->setText(QApplication::translate("QGCMAVLinkLogPlayer", "Position:", Q_NULLPTR));
        positionLabel->setText(QString());
#ifndef QT_NO_TOOLTIP
        speedTitleLabel->setToolTip(QApplication::translate("QGCMAVLinkLogPlayer", "Current replay speed", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        speedTitleLabel->setStatusTip(QApplication::translate("QGCMAVLinkLogPlayer", "Current replay speed", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        speedTitleLabel->setWhatsThis(QApplication::translate("QGCMAVLinkLogPlayer", "Current replay speed", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        speedTitleLabel->setText(QApplication::translate("QGCMAVLinkLogPlayer", "Speed", Q_NULLPTR));
        speedButton75->setText(QApplication::translate("QGCMAVLinkLogPlayer", "0.75X", Q_NULLPTR));
        speedButton100->setText(QApplication::translate("QGCMAVLinkLogPlayer", "1x", Q_NULLPTR));
        speedButton150->setText(QApplication::translate("QGCMAVLinkLogPlayer", "1.5X", Q_NULLPTR));
        speedButton200->setText(QApplication::translate("QGCMAVLinkLogPlayer", "2X", Q_NULLPTR));
        speedButton500->setText(QApplication::translate("QGCMAVLinkLogPlayer", "5X", Q_NULLPTR));
        speedButton1000->setText(QApplication::translate("QGCMAVLinkLogPlayer", "10X", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        selectFileButton->setToolTip(QApplication::translate("QGCMAVLinkLogPlayer", "Select the logfile to replay", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        selectFileButton->setStatusTip(QApplication::translate("QGCMAVLinkLogPlayer", "Select the logfile to replay", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        selectFileButton->setWhatsThis(QApplication::translate("QGCMAVLinkLogPlayer", "Select the logfile to replay", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        selectFileButton->setText(QApplication::translate("QGCMAVLinkLogPlayer", "Replay Logfile", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QGCMAVLinkLogPlayer: public Ui_QGCMAVLinkLogPlayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCMAVLINKLOGPLAYER_H
