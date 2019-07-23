/********************************************************************************
** Form generated from reading UI file 'ObjectDetectionView.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBJECTDETECTIONVIEW_H
#define UI_OBJECTDETECTIONVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ObjectDetectionView
{
public:
    QGridLayout *gridLayout;
    QListWidget *listWidget;
    QListWidget *letterListWidget;
    QLabel *imageLabel;
    QLabel *letterLabel;
    QLabel *nameLabel;
    QPushButton *clearButton;

    void setupUi(QWidget *ObjectDetectionView)
    {
        if (ObjectDetectionView->objectName().isEmpty())
            ObjectDetectionView->setObjectName(QStringLiteral("ObjectDetectionView"));
        ObjectDetectionView->resize(246, 403);
        gridLayout = new QGridLayout(ObjectDetectionView);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        listWidget = new QListWidget(ObjectDetectionView);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        gridLayout->addWidget(listWidget, 0, 0, 1, 3);

        letterListWidget = new QListWidget(ObjectDetectionView);
        letterListWidget->setObjectName(QStringLiteral("letterListWidget"));

        gridLayout->addWidget(letterListWidget, 1, 0, 1, 3);

        imageLabel = new QLabel(ObjectDetectionView);
        imageLabel->setObjectName(QStringLiteral("imageLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(10);
        sizePolicy.setVerticalStretch(10);
        sizePolicy.setHeightForWidth(imageLabel->sizePolicy().hasHeightForWidth());
        imageLabel->setSizePolicy(sizePolicy);
        imageLabel->setMinimumSize(QSize(110, 110));
        imageLabel->setSizeIncrement(QSize(2, 2));
        imageLabel->setBaseSize(QSize(10, 10));

        gridLayout->addWidget(imageLabel, 2, 0, 1, 1);

        letterLabel = new QLabel(ObjectDetectionView);
        letterLabel->setObjectName(QStringLiteral("letterLabel"));
        sizePolicy.setHeightForWidth(letterLabel->sizePolicy().hasHeightForWidth());
        letterLabel->setSizePolicy(sizePolicy);
        letterLabel->setMinimumSize(QSize(110, 110));
        letterLabel->setSizeIncrement(QSize(2, 2));
        letterLabel->setBaseSize(QSize(10, 10));
        letterLabel->setStyleSheet(QLatin1String("font: 72pt;\n"
"color: white;"));
        letterLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(letterLabel, 2, 1, 1, 2);

        nameLabel = new QLabel(ObjectDetectionView);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));

        gridLayout->addWidget(nameLabel, 3, 0, 1, 2);

        clearButton = new QPushButton(ObjectDetectionView);
        clearButton->setObjectName(QStringLiteral("clearButton"));
        clearButton->setMaximumSize(QSize(80, 16777215));

        gridLayout->addWidget(clearButton, 3, 2, 1, 1);


        retranslateUi(ObjectDetectionView);

        QMetaObject::connectSlotsByName(ObjectDetectionView);
    } // setupUi

    void retranslateUi(QWidget *ObjectDetectionView)
    {
        ObjectDetectionView->setWindowTitle(QApplication::translate("ObjectDetectionView", "Form", Q_NULLPTR));
        imageLabel->setText(QString());
        letterLabel->setText(QString());
        nameLabel->setText(QApplication::translate("ObjectDetectionView", "No objects recognized", Q_NULLPTR));
        clearButton->setText(QApplication::translate("ObjectDetectionView", "Clear", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ObjectDetectionView: public Ui_ObjectDetectionView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBJECTDETECTIONVIEW_H
