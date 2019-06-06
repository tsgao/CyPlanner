/********************************************************************************
** Form generated from reading UI file 'QGCMissionNavReturnToLaunch.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCMISSIONNAVRETURNTOLAUNCH_H
#define UI_QGCMISSIONNAVRETURNTOLAUNCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCMissionNavReturnToLaunch
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *noParamLabel;

    void setupUi(QWidget *QGCMissionNavReturnToLaunch)
    {
        if (QGCMissionNavReturnToLaunch->objectName().isEmpty())
            QGCMissionNavReturnToLaunch->setObjectName(QStringLiteral("QGCMissionNavReturnToLaunch"));
        QGCMissionNavReturnToLaunch->resize(258, 37);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QGCMissionNavReturnToLaunch->sizePolicy().hasHeightForWidth());
        QGCMissionNavReturnToLaunch->setSizePolicy(sizePolicy);
        QGCMissionNavReturnToLaunch->setMinimumSize(QSize(0, 0));
        QGCMissionNavReturnToLaunch->setStyleSheet(QStringLiteral(""));
        horizontalLayout = new QHBoxLayout(QGCMissionNavReturnToLaunch);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        noParamLabel = new QLabel(QGCMissionNavReturnToLaunch);
        noParamLabel->setObjectName(QStringLiteral("noParamLabel"));
        noParamLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(noParamLabel);


        retranslateUi(QGCMissionNavReturnToLaunch);

        QMetaObject::connectSlotsByName(QGCMissionNavReturnToLaunch);
    } // setupUi

    void retranslateUi(QWidget *QGCMissionNavReturnToLaunch)
    {
        QGCMissionNavReturnToLaunch->setWindowTitle(QApplication::translate("QGCMissionNavReturnToLaunch", "Form", Q_NULLPTR));
        noParamLabel->setText(QApplication::translate("QGCMissionNavReturnToLaunch", "No Parameters", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QGCMissionNavReturnToLaunch: public Ui_QGCMissionNavReturnToLaunch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCMISSIONNAVRETURNTOLAUNCH_H
