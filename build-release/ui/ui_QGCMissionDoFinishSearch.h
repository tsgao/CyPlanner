/********************************************************************************
** Form generated from reading UI file 'QGCMissionDoFinishSearch.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCMISSIONDOFINISHSEARCH_H
#define UI_QGCMISSIONDOFINISHSEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCMissionDoFinishSearch
{
public:
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *param1SpinBox;
    QDoubleSpinBox *param2SpinBox;
    QDoubleSpinBox *param3SpinBox;

    void setupUi(QWidget *QGCMissionDoFinishSearch)
    {
        if (QGCMissionDoFinishSearch->objectName().isEmpty())
            QGCMissionDoFinishSearch->setObjectName(QStringLiteral("QGCMissionDoFinishSearch"));
        QGCMissionDoFinishSearch->resize(499, 27);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QGCMissionDoFinishSearch->sizePolicy().hasHeightForWidth());
        QGCMissionDoFinishSearch->setSizePolicy(sizePolicy);
        QGCMissionDoFinishSearch->setMinimumSize(QSize(0, 0));
        horizontalLayout = new QHBoxLayout(QGCMissionDoFinishSearch);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        param1SpinBox = new QDoubleSpinBox(QGCMissionDoFinishSearch);
        param1SpinBox->setObjectName(QStringLiteral("param1SpinBox"));
        param1SpinBox->setKeyboardTracking(false);
        param1SpinBox->setDecimals(0);
        param1SpinBox->setMinimum(0);
        param1SpinBox->setMaximum(2.14748e+9);

        horizontalLayout->addWidget(param1SpinBox);

        param2SpinBox = new QDoubleSpinBox(QGCMissionDoFinishSearch);
        param2SpinBox->setObjectName(QStringLiteral("param2SpinBox"));
        param2SpinBox->setKeyboardTracking(false);
        param2SpinBox->setDecimals(0);
        param2SpinBox->setMinimum(0);
        param2SpinBox->setMaximum(2.14748e+9);

        horizontalLayout->addWidget(param2SpinBox);

        param3SpinBox = new QDoubleSpinBox(QGCMissionDoFinishSearch);
        param3SpinBox->setObjectName(QStringLiteral("param3SpinBox"));
        param3SpinBox->setKeyboardTracking(false);
        param3SpinBox->setDecimals(0);
        param3SpinBox->setMinimum(0);
        param3SpinBox->setMaximum(2.14748e+9);

        horizontalLayout->addWidget(param3SpinBox);

        horizontalLayout->setStretch(0, 10);
        horizontalLayout->setStretch(1, 10);
        horizontalLayout->setStretch(2, 10);

        retranslateUi(QGCMissionDoFinishSearch);

        QMetaObject::connectSlotsByName(QGCMissionDoFinishSearch);
    } // setupUi

    void retranslateUi(QWidget *QGCMissionDoFinishSearch)
    {
        QGCMissionDoFinishSearch->setWindowTitle(QApplication::translate("QGCMissionDoFinishSearch", "Form", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        param1SpinBox->setToolTip(QApplication::translate("QGCMissionDoFinishSearch", "Jump to this index, if search successful", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        param1SpinBox->setStatusTip(QApplication::translate("QGCMissionDoFinishSearch", "Jump to this index, if search successful", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        param1SpinBox->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        param1SpinBox->setPrefix(QApplication::translate("QGCMissionDoFinishSearch", "Jump to index: ", Q_NULLPTR));
        param1SpinBox->setSuffix(QString());
#ifndef QT_NO_TOOLTIP
        param2SpinBox->setToolTip(QApplication::translate("QGCMissionDoFinishSearch", "Jump to this index, if search unsuccessful", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        param2SpinBox->setStatusTip(QApplication::translate("QGCMissionDoFinishSearch", "Jump to this index, if search unsuccessful", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        param2SpinBox->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        param2SpinBox->setPrefix(QApplication::translate("QGCMissionDoFinishSearch", "Jump to index:  ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        param3SpinBox->setToolTip(QApplication::translate("QGCMissionDoFinishSearch", "Remaining number of jumps. Terminate search if jumps == 0.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        param3SpinBox->setStatusTip(QApplication::translate("QGCMissionDoFinishSearch", "Remaining number of jumps. Terminate search if jumps == 0.", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        param3SpinBox->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        param3SpinBox->setPrefix(QString());
        param3SpinBox->setSuffix(QApplication::translate("QGCMissionDoFinishSearch", " time(s)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QGCMissionDoFinishSearch: public Ui_QGCMissionDoFinishSearch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCMISSIONDOFINISHSEARCH_H
