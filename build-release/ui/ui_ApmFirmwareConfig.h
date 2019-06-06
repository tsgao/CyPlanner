/********************************************************************************
** Form generated from reading UI file 'ApmFirmwareConfig.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APMFIRMWARECONFIG_H
#define UI_APMFIRMWARECONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ApmFirmwareConfig
{
public:
    QVBoxLayout *verticalLayout_14;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *warningLabel;
    QLabel *warningLabelAC33;
    QLabel *Only2CopterVersionsLabel;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *y6PushButton;
    QLabel *y6Label;
    QLabel *planeLabel;
    QPushButton *planePushButton;
    QPushButton *octaPushButton;
    QLabel *octaLabel;
    QLabel *quadLabel;
    QPushButton *quadPushButton;
    QLabel *octaQuadLabel;
    QPushButton *octaQuadPushButton;
    QLabel *triLabel;
    QPushButton *triPushButton;
    QLabel *hexaLabel;
    QPushButton *hexaPushButton;
    QLabel *copterLabel;
    QPushButton *copterPushButton;
    QLabel *roverLabel;
    QPushButton *roverPushButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *optionsLabel;
    QHBoxLayout *horizontalLayout;
    QPushButton *betaFirmwareButton;
    QPushButton *flashCustomFWButton;
    QPushButton *stableFirmwareButton;
    QPushButton *rebootButton;
    QLabel *label_2;
    QComboBox *linkComboBox;
    QLabel *comPortNameLabel;
    QHBoxLayout *horizontalLayout_2;
    QProgressBar *progressBar;
    QPushButton *cancelPushButton;
    QHBoxLayout *horizontalLayout_3;
    QLabel *statusLabel_2;
    QLabel *statusLabel;
    QCheckBox *showOutputCheckBox;
    QTextBrowser *textBrowser;
    QPushButton *mutlicopterPushButton;
    QLabel *multicopterLabel;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_3;

    void setupUi(QWidget *ApmFirmwareConfig)
    {
        if (ApmFirmwareConfig->objectName().isEmpty())
            ApmFirmwareConfig->setObjectName(QStringLiteral("ApmFirmwareConfig"));
        ApmFirmwareConfig->setEnabled(true);
        ApmFirmwareConfig->resize(818, 820);
        verticalLayout_14 = new QVBoxLayout(ApmFirmwareConfig);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(ApmFirmwareConfig);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setWidgetResizable(false);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 800, 775));
        verticalLayoutWidget = new QWidget(scrollAreaWidgetContents);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 921, 919));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(0, 30));

        verticalLayout_2->addWidget(label);

        warningLabel = new QLabel(verticalLayoutWidget);
        warningLabel->setObjectName(QStringLiteral("warningLabel"));

        verticalLayout_2->addWidget(warningLabel);

        warningLabelAC33 = new QLabel(verticalLayoutWidget);
        warningLabelAC33->setObjectName(QStringLiteral("warningLabelAC33"));

        verticalLayout_2->addWidget(warningLabelAC33);

        Only2CopterVersionsLabel = new QLabel(verticalLayoutWidget);
        Only2CopterVersionsLabel->setObjectName(QStringLiteral("Only2CopterVersionsLabel"));

        verticalLayout_2->addWidget(Only2CopterVersionsLabel);

        stackedWidget = new QStackedWidget(verticalLayoutWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        y6PushButton = new QPushButton(page);
        y6PushButton->setObjectName(QStringLiteral("y6PushButton"));
        y6PushButton->setGeometry(QRect(160, 180, 125, 125));
        y6PushButton->setMinimumSize(QSize(125, 125));
        y6PushButton->setMaximumSize(QSize(125, 125));
        QIcon icon;
        icon.addFile(QStringLiteral(":/files/images/firmware/hexay.png"), QSize(), QIcon::Normal, QIcon::Off);
        y6PushButton->setIcon(icon);
        y6PushButton->setIconSize(QSize(100, 100));
        y6Label = new QLabel(page);
        y6Label->setObjectName(QStringLiteral("y6Label"));
        y6Label->setGeometry(QRect(160, 305, 131, 30));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(y6Label->sizePolicy().hasHeightForWidth());
        y6Label->setSizePolicy(sizePolicy);
        y6Label->setMinimumSize(QSize(113, 16));
        y6Label->setMaximumSize(QSize(16777215, 16777215));
        y6Label->setAlignment(Qt::AlignCenter);
        planeLabel = new QLabel(page);
        planeLabel->setObjectName(QStringLiteral("planeLabel"));
        planeLabel->setGeometry(QRect(160, 140, 131, 30));
        sizePolicy.setHeightForWidth(planeLabel->sizePolicy().hasHeightForWidth());
        planeLabel->setSizePolicy(sizePolicy);
        planeLabel->setMinimumSize(QSize(113, 16));
        planeLabel->setMaximumSize(QSize(16777215, 16777215));
        planeLabel->setAlignment(Qt::AlignCenter);
        planePushButton = new QPushButton(page);
        planePushButton->setObjectName(QStringLiteral("planePushButton"));
        planePushButton->setGeometry(QRect(160, 15, 125, 125));
        planePushButton->setMinimumSize(QSize(125, 125));
        planePushButton->setMaximumSize(QSize(125, 125));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/files/images/firmware/plane.png"), QSize(), QIcon::Normal, QIcon::Off);
        planePushButton->setIcon(icon1);
        planePushButton->setIconSize(QSize(100, 100));
        octaPushButton = new QPushButton(page);
        octaPushButton->setObjectName(QStringLiteral("octaPushButton"));
        octaPushButton->setGeometry(QRect(581, 180, 125, 125));
        octaPushButton->setMinimumSize(QSize(125, 125));
        octaPushButton->setMaximumSize(QSize(125, 125));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/files/images/firmware/octax.png"), QSize(), QIcon::Normal, QIcon::Off);
        octaPushButton->setIcon(icon2);
        octaPushButton->setIconSize(QSize(100, 100));
        octaLabel = new QLabel(page);
        octaLabel->setObjectName(QStringLiteral("octaLabel"));
        octaLabel->setGeometry(QRect(580, 305, 131, 30));
        sizePolicy.setHeightForWidth(octaLabel->sizePolicy().hasHeightForWidth());
        octaLabel->setSizePolicy(sizePolicy);
        octaLabel->setMinimumSize(QSize(113, 16));
        octaLabel->setMaximumSize(QSize(16777215, 16777215));
        octaLabel->setAlignment(Qt::AlignCenter);
        quadLabel = new QLabel(page);
        quadLabel->setObjectName(QStringLiteral("quadLabel"));
        quadLabel->setGeometry(QRect(570, 140, 151, 30));
        sizePolicy.setHeightForWidth(quadLabel->sizePolicy().hasHeightForWidth());
        quadLabel->setSizePolicy(sizePolicy);
        quadLabel->setMinimumSize(QSize(113, 16));
        quadLabel->setMaximumSize(QSize(16777215, 16777215));
        quadLabel->setAlignment(Qt::AlignCenter);
        quadPushButton = new QPushButton(page);
        quadPushButton->setObjectName(QStringLiteral("quadPushButton"));
        quadPushButton->setGeometry(QRect(580, 15, 125, 125));
        quadPushButton->setMinimumSize(QSize(125, 125));
        quadPushButton->setMaximumSize(QSize(125, 125));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/files/images/firmware/quadx.png"), QSize(), QIcon::Normal, QIcon::Off);
        quadPushButton->setIcon(icon3);
        quadPushButton->setIconSize(QSize(100, 100));
        octaQuadLabel = new QLabel(page);
        octaQuadLabel->setObjectName(QStringLiteral("octaQuadLabel"));
        octaQuadLabel->setGeometry(QRect(301, 305, 131, 30));
        sizePolicy.setHeightForWidth(octaQuadLabel->sizePolicy().hasHeightForWidth());
        octaQuadLabel->setSizePolicy(sizePolicy);
        octaQuadLabel->setMinimumSize(QSize(113, 16));
        octaQuadLabel->setMaximumSize(QSize(16777215, 16777215));
        octaQuadLabel->setAlignment(Qt::AlignCenter);
        octaQuadPushButton = new QPushButton(page);
        octaQuadPushButton->setObjectName(QStringLiteral("octaQuadPushButton"));
        octaQuadPushButton->setGeometry(QRect(300, 180, 125, 125));
        octaQuadPushButton->setMinimumSize(QSize(125, 125));
        octaQuadPushButton->setMaximumSize(QSize(125, 125));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/files/images/firmware/octx.png"), QSize(), QIcon::Normal, QIcon::Off);
        octaQuadPushButton->setIcon(icon4);
        octaQuadPushButton->setIconSize(QSize(100, 100));
        triLabel = new QLabel(page);
        triLabel->setObjectName(QStringLiteral("triLabel"));
        triLabel->setGeometry(QRect(14, 305, 131, 30));
        sizePolicy.setHeightForWidth(triLabel->sizePolicy().hasHeightForWidth());
        triLabel->setSizePolicy(sizePolicy);
        triLabel->setMinimumSize(QSize(113, 16));
        triLabel->setMaximumSize(QSize(16777215, 16777215));
        triLabel->setAlignment(Qt::AlignCenter);
        triPushButton = new QPushButton(page);
        triPushButton->setObjectName(QStringLiteral("triPushButton"));
        triPushButton->setGeometry(QRect(20, 180, 125, 125));
        triPushButton->setMinimumSize(QSize(125, 125));
        triPushButton->setMaximumSize(QSize(125, 125));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/files/images/firmware/triy.png"), QSize(), QIcon::Normal, QIcon::Off);
        triPushButton->setIcon(icon5);
        triPushButton->setIconSize(QSize(100, 100));
        hexaLabel = new QLabel(page);
        hexaLabel->setObjectName(QStringLiteral("hexaLabel"));
        hexaLabel->setGeometry(QRect(439, 305, 131, 30));
        sizePolicy.setHeightForWidth(hexaLabel->sizePolicy().hasHeightForWidth());
        hexaLabel->setSizePolicy(sizePolicy);
        hexaLabel->setMinimumSize(QSize(113, 16));
        hexaLabel->setMaximumSize(QSize(16777215, 16777215));
        hexaLabel->setAlignment(Qt::AlignCenter);
        hexaPushButton = new QPushButton(page);
        hexaPushButton->setObjectName(QStringLiteral("hexaPushButton"));
        hexaPushButton->setGeometry(QRect(440, 180, 125, 125));
        hexaPushButton->setMinimumSize(QSize(125, 125));
        hexaPushButton->setMaximumSize(QSize(125, 125));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/files/images/firmware/hexax.png"), QSize(), QIcon::Normal, QIcon::Off);
        hexaPushButton->setIcon(icon6);
        hexaPushButton->setIconSize(QSize(100, 100));
        copterLabel = new QLabel(page);
        copterLabel->setObjectName(QStringLiteral("copterLabel"));
        copterLabel->setGeometry(QRect(300, 140, 131, 30));
        sizePolicy.setHeightForWidth(copterLabel->sizePolicy().hasHeightForWidth());
        copterLabel->setSizePolicy(sizePolicy);
        copterLabel->setMaximumSize(QSize(16777215, 16777215));
        copterLabel->setAlignment(Qt::AlignCenter);
        copterPushButton = new QPushButton(page);
        copterPushButton->setObjectName(QStringLiteral("copterPushButton"));
        copterPushButton->setGeometry(QRect(300, 15, 125, 125));
        copterPushButton->setMinimumSize(QSize(125, 125));
        copterPushButton->setMaximumSize(QSize(125, 125));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/files/images/firmware/heli.png"), QSize(), QIcon::Normal, QIcon::Off);
        copterPushButton->setIcon(icon7);
        copterPushButton->setIconSize(QSize(100, 100));
        roverLabel = new QLabel(page);
        roverLabel->setObjectName(QStringLiteral("roverLabel"));
        roverLabel->setGeometry(QRect(20, 140, 131, 30));
        sizePolicy.setHeightForWidth(roverLabel->sizePolicy().hasHeightForWidth());
        roverLabel->setSizePolicy(sizePolicy);
        roverLabel->setMinimumSize(QSize(113, 16));
        roverLabel->setMaximumSize(QSize(16777215, 16777215));
        roverLabel->setAlignment(Qt::AlignCenter);
        roverPushButton = new QPushButton(page);
        roverPushButton->setObjectName(QStringLiteral("roverPushButton"));
        roverPushButton->setGeometry(QRect(20, 15, 125, 125));
        roverPushButton->setMinimumSize(QSize(125, 125));
        roverPushButton->setMaximumSize(QSize(125, 125));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/files/images/firmware/rover.png"), QSize(), QIcon::Normal, QIcon::Off);
        roverPushButton->setIcon(icon8);
        roverPushButton->setIconSize(QSize(100, 100));
        layoutWidget = new QWidget(page);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 360, 681, 261));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        optionsLabel = new QLabel(layoutWidget);
        optionsLabel->setObjectName(QStringLiteral("optionsLabel"));

        verticalLayout->addWidget(optionsLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        betaFirmwareButton = new QPushButton(layoutWidget);
        betaFirmwareButton->setObjectName(QStringLiteral("betaFirmwareButton"));
        betaFirmwareButton->setMinimumSize(QSize(100, 25));
        betaFirmwareButton->setMaximumSize(QSize(16777215, 24));
        betaFirmwareButton->setCheckable(false);
        betaFirmwareButton->setChecked(false);

        horizontalLayout->addWidget(betaFirmwareButton);

        flashCustomFWButton = new QPushButton(layoutWidget);
        flashCustomFWButton->setObjectName(QStringLiteral("flashCustomFWButton"));
        flashCustomFWButton->setMinimumSize(QSize(100, 25));
        flashCustomFWButton->setMaximumSize(QSize(180, 24));

        horizontalLayout->addWidget(flashCustomFWButton);

        stableFirmwareButton = new QPushButton(layoutWidget);
        stableFirmwareButton->setObjectName(QStringLiteral("stableFirmwareButton"));
        stableFirmwareButton->setMinimumSize(QSize(100, 0));
        stableFirmwareButton->setMaximumSize(QSize(16777215, 24));

        horizontalLayout->addWidget(stableFirmwareButton);

        rebootButton = new QPushButton(layoutWidget);
        rebootButton->setObjectName(QStringLiteral("rebootButton"));
        rebootButton->setMinimumSize(QSize(100, 0));
        rebootButton->setMaximumSize(QSize(16777215, 24));

        horizontalLayout->addWidget(rebootButton);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(false);

        horizontalLayout->addWidget(label_2);

        linkComboBox = new QComboBox(layoutWidget);
        linkComboBox->setObjectName(QStringLiteral("linkComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(linkComboBox->sizePolicy().hasHeightForWidth());
        linkComboBox->setSizePolicy(sizePolicy1);
        linkComboBox->setMinimumSize(QSize(123, 0));
        linkComboBox->setMaximumSize(QSize(220, 24));

        horizontalLayout->addWidget(linkComboBox);

        comPortNameLabel = new QLabel(layoutWidget);
        comPortNameLabel->setObjectName(QStringLiteral("comPortNameLabel"));

        horizontalLayout->addWidget(comPortNameLabel);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        progressBar = new QProgressBar(layoutWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setMaximumSize(QSize(680, 16777215));
        progressBar->setValue(24);

        horizontalLayout_2->addWidget(progressBar);

        cancelPushButton = new QPushButton(layoutWidget);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));
        cancelPushButton->setMinimumSize(QSize(100, 24));
        cancelPushButton->setMaximumSize(QSize(16777215, 24));

        horizontalLayout_2->addWidget(cancelPushButton);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        statusLabel_2 = new QLabel(layoutWidget);
        statusLabel_2->setObjectName(QStringLiteral("statusLabel_2"));
        statusLabel_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_3->addWidget(statusLabel_2);

        statusLabel = new QLabel(layoutWidget);
        statusLabel->setObjectName(QStringLiteral("statusLabel"));
        statusLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        statusLabel->setWordWrap(true);

        horizontalLayout_3->addWidget(statusLabel);

        showOutputCheckBox = new QCheckBox(layoutWidget);
        showOutputCheckBox->setObjectName(QStringLiteral("showOutputCheckBox"));

        horizontalLayout_3->addWidget(showOutputCheckBox);

        horizontalLayout_3->setStretch(0, 7);
        horizontalLayout_3->setStretch(1, 80);
        horizontalLayout_3->setStretch(2, 16);

        verticalLayout->addLayout(horizontalLayout_3);

        textBrowser = new QTextBrowser(layoutWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy2);
        textBrowser->setMinimumSize(QSize(661, 31));
        textBrowser->setReadOnly(false);
        textBrowser->setOverwriteMode(false);
        textBrowser->setTextInteractionFlags(Qt::TextEditorInteraction);

        verticalLayout->addWidget(textBrowser);

        mutlicopterPushButton = new QPushButton(page);
        mutlicopterPushButton->setObjectName(QStringLiteral("mutlicopterPushButton"));
        mutlicopterPushButton->setGeometry(QRect(440, 15, 125, 125));
        mutlicopterPushButton->setMinimumSize(QSize(125, 125));
        mutlicopterPushButton->setMaximumSize(QSize(125, 125));
        mutlicopterPushButton->setIcon(icon3);
        mutlicopterPushButton->setIconSize(QSize(100, 100));
        multicopterLabel = new QLabel(page);
        multicopterLabel->setObjectName(QStringLiteral("multicopterLabel"));
        multicopterLabel->setGeometry(QRect(430, 140, 151, 30));
        sizePolicy.setHeightForWidth(multicopterLabel->sizePolicy().hasHeightForWidth());
        multicopterLabel->setSizePolicy(sizePolicy);
        multicopterLabel->setMinimumSize(QSize(113, 16));
        multicopterLabel->setMaximumSize(QSize(16777215, 16777215));
        multicopterLabel->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        verticalLayout_12 = new QVBoxLayout(page_2);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        label_3 = new QLabel(page_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_12->addWidget(label_3);

        stackedWidget->addWidget(page_2);

        verticalLayout_2->addWidget(stackedWidget);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_14->addWidget(scrollArea);


        retranslateUi(ApmFirmwareConfig);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ApmFirmwareConfig);
    } // setupUi

    void retranslateUi(QWidget *ApmFirmwareConfig)
    {
        ApmFirmwareConfig->setWindowTitle(QApplication::translate("ApmFirmwareConfig", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("ApmFirmwareConfig", "<h2>Firmware</h2>", Q_NULLPTR));
        warningLabel->setText(QApplication::translate("ApmFirmwareConfig", "<html><head/><body><p><span style=\" font-size:large; font-weight:600; color:#e90000;\">WARNING:</span><span style=\" font-size:large; font-weight:600; color:#cf8a00;\"> Only install BETA firmware if you are an experienced tester.</span></p></body></html>", Q_NULLPTR));
        warningLabelAC33->setText(QApplication::translate("ApmFirmwareConfig", "<html><head/><body><p><span style=\" font-size:large; font-weight:600; color:#e90000;\">WARNING:</span><span style=\" font-size:large; font-weight:600; color:#cf8a00;\"> ArduCopter 3.3 is not available for APM1/APM2. The last available version is shown here </span></p></body></html>", Q_NULLPTR));
        Only2CopterVersionsLabel->setText(QApplication::translate("ApmFirmwareConfig", "<html><head/><body><table>\n"
"<tbody><tr><td><h3><span style=\"color: #e90000;\">Information:</span></h2></td>\n"
"<td><h3><span style=\"color: #cf8a00;\">ArduCopter 3.5 has only one firmware for all multicopter types.</span></h2></td></tr>\n"
"<tr><td>&nbsp;</td><td><strong>Use frame configuration to select \"frame class\" and \"frame type\"</strong></td></tr></tbody>\n"
"</table></body></html>", Q_NULLPTR));
        y6PushButton->setText(QString());
        y6Label->setText(QApplication::translate("ApmFirmwareConfig", "ArduCopter vX.XX", Q_NULLPTR));
        planeLabel->setText(QApplication::translate("ApmFirmwareConfig", "ArduPlane vX.XX", Q_NULLPTR));
        planePushButton->setText(QString());
        octaPushButton->setText(QString());
        octaLabel->setText(QApplication::translate("ApmFirmwareConfig", "ArduCopter vX.XX", Q_NULLPTR));
        quadLabel->setText(QApplication::translate("ApmFirmwareConfig", "ArduCopter vX.XX", Q_NULLPTR));
        quadPushButton->setText(QString());
        octaQuadLabel->setText(QApplication::translate("ApmFirmwareConfig", "ArduCopter vX.XX", Q_NULLPTR));
        octaQuadPushButton->setText(QString());
        triLabel->setText(QApplication::translate("ApmFirmwareConfig", "ArduCopter vX.XX", Q_NULLPTR));
        triPushButton->setText(QString());
        hexaLabel->setText(QApplication::translate("ApmFirmwareConfig", "ArduCopter vX.XX", Q_NULLPTR));
        hexaPushButton->setText(QString());
        copterLabel->setText(QApplication::translate("ApmFirmwareConfig", "ArduCopter vX.XX", Q_NULLPTR));
        copterPushButton->setText(QString());
        roverLabel->setText(QApplication::translate("ApmFirmwareConfig", "ArduRover vX.XX", Q_NULLPTR));
        roverPushButton->setText(QString());
        optionsLabel->setText(QApplication::translate("ApmFirmwareConfig", "Firmware Options", Q_NULLPTR));
        betaFirmwareButton->setText(QApplication::translate("ApmFirmwareConfig", "Beta", Q_NULLPTR));
        flashCustomFWButton->setText(QApplication::translate("ApmFirmwareConfig", "Custom ", Q_NULLPTR));
        stableFirmwareButton->setText(QApplication::translate("ApmFirmwareConfig", "Stable", Q_NULLPTR));
        rebootButton->setText(QApplication::translate("ApmFirmwareConfig", "Reboot ", Q_NULLPTR));
        label_2->setText(QApplication::translate("ApmFirmwareConfig", "<h4>Firmware Upload<br>Com Port</h4>", Q_NULLPTR));
        comPortNameLabel->setText(QString());
        cancelPushButton->setText(QApplication::translate("ApmFirmwareConfig", "Cancel", Q_NULLPTR));
        statusLabel_2->setText(QApplication::translate("ApmFirmwareConfig", "Status:", Q_NULLPTR));
        statusLabel->setText(QString());
        showOutputCheckBox->setText(QApplication::translate("ApmFirmwareConfig", "Show Output", Q_NULLPTR));
        mutlicopterPushButton->setText(QString());
        multicopterLabel->setText(QApplication::translate("ApmFirmwareConfig", "ArduCopter vX.XX", Q_NULLPTR));
        label_3->setText(QApplication::translate("ApmFirmwareConfig", "<html><head/><body><p><span style=\" font-size:12pt;\">You cannot load new firmware while connected via MAVLink.</span></p><p><br/></p><p><span style=\" font-size:12pt;\">Please press the Disconnect button at top right to end the current</span></p><p><span style=\" font-size:12pt;\">MAVLink session and enable firmware loading screen</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ApmFirmwareConfig: public Ui_ApmFirmwareConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APMFIRMWARECONFIG_H
