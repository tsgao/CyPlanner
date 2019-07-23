/********************************************************************************
** Form generated from reading UI file 'QGCParamSlider.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCPARAMSLIDER_H
#define UI_QGCPARAMSLIDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCParamSlider
{
public:
    QGridLayout *gridLayout;
    QSpinBox *intValueSpinBox;
    QComboBox *editSelectParamComboBox;
    QFrame *editLine1;
    QSlider *valueSlider;
    QPushButton *editDoneButton;
    QFrame *editLine2;
    QCheckBox *editInfoCheckBox;
    QSpacerItem *horizontalSpacer;
    QPushButton *editRefreshParamsButton;
    QSpacerItem *verticalSpacer;
    QPushButton *readButton;
    QComboBox *editSelectComponentComboBox;
    QLineEdit *editNameLabel;
    QLabel *editStatusLabel;
    QPushButton *writeButton;
    QDoubleSpinBox *doubleValueSpinBox;
    QDoubleSpinBox *editMinSpinBox;
    QDoubleSpinBox *editMaxSpinBox;
    QLabel *nameLabel;
    QToolButton *infoLabel;

    void setupUi(QWidget *QGCParamSlider)
    {
        if (QGCParamSlider->objectName().isEmpty())
            QGCParamSlider->setObjectName(QStringLiteral("QGCParamSlider"));
        QGCParamSlider->resize(789, 244);
        gridLayout = new QGridLayout(QGCParamSlider);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(12);
        gridLayout->setContentsMargins(6, 3, 6, 3);
        intValueSpinBox = new QSpinBox(QGCParamSlider);
        intValueSpinBox->setObjectName(QStringLiteral("intValueSpinBox"));
        intValueSpinBox->setMinimum(-999999999);
        intValueSpinBox->setMaximum(999999999);

        gridLayout->addWidget(intValueSpinBox, 2, 6, 1, 1);

        editSelectParamComboBox = new QComboBox(QGCParamSlider);
        editSelectParamComboBox->setObjectName(QStringLiteral("editSelectParamComboBox"));
        editSelectParamComboBox->setEnabled(false);

        gridLayout->addWidget(editSelectParamComboBox, 3, 6, 1, 3);

        editLine1 = new QFrame(QGCParamSlider);
        editLine1->setObjectName(QStringLiteral("editLine1"));
        editLine1->setMinimumSize(QSize(0, 0));
        editLine1->setFrameShape(QFrame::HLine);
        editLine1->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(editLine1, 0, 0, 1, 11);

        valueSlider = new QSlider(QGCParamSlider);
        valueSlider->setObjectName(QStringLiteral("valueSlider"));
        valueSlider->setMinimumSize(QSize(60, 0));
        valueSlider->setMaximumSize(QSize(250, 16777215));
        valueSlider->setMaximum(1000000);
        valueSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(valueSlider, 2, 7, 1, 2);

        editDoneButton = new QPushButton(QGCParamSlider);
        editDoneButton->setObjectName(QStringLiteral("editDoneButton"));

        gridLayout->addWidget(editDoneButton, 4, 10, 1, 1);

        editLine2 = new QFrame(QGCParamSlider);
        editLine2->setObjectName(QStringLiteral("editLine2"));
        editLine2->setMinimumSize(QSize(0, 0));
        editLine2->setFrameShape(QFrame::HLine);
        editLine2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(editLine2, 6, 0, 1, 11);

        editInfoCheckBox = new QCheckBox(QGCParamSlider);
        editInfoCheckBox->setObjectName(QStringLiteral("editInfoCheckBox"));
        editInfoCheckBox->setChecked(true);

        gridLayout->addWidget(editInfoCheckBox, 3, 9, 1, 1);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        editRefreshParamsButton = new QPushButton(QGCParamSlider);
        editRefreshParamsButton->setObjectName(QStringLiteral("editRefreshParamsButton"));
        editRefreshParamsButton->setEnabled(true);

        gridLayout->addWidget(editRefreshParamsButton, 3, 10, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 2, 1, 9);

        readButton = new QPushButton(QGCParamSlider);
        readButton->setObjectName(QStringLiteral("readButton"));
        readButton->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(readButton, 2, 10, 1, 1);

        editSelectComponentComboBox = new QComboBox(QGCParamSlider);
        editSelectComponentComboBox->setObjectName(QStringLiteral("editSelectComponentComboBox"));
        editSelectComponentComboBox->setEnabled(false);

        gridLayout->addWidget(editSelectComponentComboBox, 3, 1, 1, 5);

        editNameLabel = new QLineEdit(QGCParamSlider);
        editNameLabel->setObjectName(QStringLiteral("editNameLabel"));

        gridLayout->addWidget(editNameLabel, 1, 1, 1, 7);

        editStatusLabel = new QLabel(QGCParamSlider);
        editStatusLabel->setObjectName(QStringLiteral("editStatusLabel"));

        gridLayout->addWidget(editStatusLabel, 4, 1, 1, 8);

        writeButton = new QPushButton(QGCParamSlider);
        writeButton->setObjectName(QStringLiteral("writeButton"));
        writeButton->setMinimumSize(QSize(0, 0));
        writeButton->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(writeButton, 2, 9, 1, 1);

        doubleValueSpinBox = new QDoubleSpinBox(QGCParamSlider);
        doubleValueSpinBox->setObjectName(QStringLiteral("doubleValueSpinBox"));
        doubleValueSpinBox->setMinimum(-1e+9);
        doubleValueSpinBox->setMaximum(1e+9);

        gridLayout->addWidget(doubleValueSpinBox, 2, 4, 1, 1);

        editMinSpinBox = new QDoubleSpinBox(QGCParamSlider);
        editMinSpinBox->setObjectName(QStringLiteral("editMinSpinBox"));
        editMinSpinBox->setMinimum(-1e+9);
        editMinSpinBox->setMaximum(1e+9);

        gridLayout->addWidget(editMinSpinBox, 1, 8, 1, 1);

        editMaxSpinBox = new QDoubleSpinBox(QGCParamSlider);
        editMaxSpinBox->setObjectName(QStringLiteral("editMaxSpinBox"));
        editMaxSpinBox->setMinimum(-1e+9);
        editMaxSpinBox->setMaximum(1e+9);

        gridLayout->addWidget(editMaxSpinBox, 1, 9, 1, 2);

        nameLabel = new QLabel(QGCParamSlider);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setMinimumSize(QSize(60, 0));
        nameLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(nameLabel, 2, 2, 1, 1);

        infoLabel = new QToolButton(QGCParamSlider);
        infoLabel->setObjectName(QStringLiteral("infoLabel"));

        gridLayout->addWidget(infoLabel, 2, 3, 1, 1);

        gridLayout->setColumnStretch(0, 10);

        retranslateUi(QGCParamSlider);

        QMetaObject::connectSlotsByName(QGCParamSlider);
    } // setupUi

    void retranslateUi(QWidget *QGCParamSlider)
    {
        QGCParamSlider->setWindowTitle(QApplication::translate("QGCParamSlider", "Form", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        editSelectParamComboBox->setToolTip(QApplication::translate("QGCParamSlider", "Select parameter", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        editSelectParamComboBox->setStatusTip(QApplication::translate("QGCParamSlider", "Select parameter", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        editDoneButton->setText(QApplication::translate("QGCParamSlider", "Done", Q_NULLPTR));
        editInfoCheckBox->setText(QApplication::translate("QGCParamSlider", "Show Info", Q_NULLPTR));
        editRefreshParamsButton->setText(QApplication::translate("QGCParamSlider", "Refresh", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        readButton->setToolTip(QApplication::translate("QGCParamSlider", "Read the current parameter value on the system", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        readButton->setStatusTip(QApplication::translate("QGCParamSlider", "Read the current parameter value on the system", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        readButton->setText(QApplication::translate("QGCParamSlider", "Get", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        editSelectComponentComboBox->setToolTip(QApplication::translate("QGCParamSlider", "Select component", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        editSelectComponentComboBox->setStatusTip(QApplication::translate("QGCParamSlider", "Select component", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        editNameLabel->setText(QApplication::translate("QGCParamSlider", "<Parameter Name / Label>", Q_NULLPTR));
        editStatusLabel->setText(QApplication::translate("QGCParamSlider", "Please click first on refresh to update selection menus..", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        writeButton->setToolTip(QApplication::translate("QGCParamSlider", "Transmit the current slider value to the system", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        writeButton->setStatusTip(QApplication::translate("QGCParamSlider", "Transmit the current slider value to the system", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        writeButton->setText(QApplication::translate("QGCParamSlider", "Set", Q_NULLPTR));
        editMinSpinBox->setPrefix(QApplication::translate("QGCParamSlider", "MIN: ", Q_NULLPTR));
        editMaxSpinBox->setPrefix(QApplication::translate("QGCParamSlider", "MAX: ", Q_NULLPTR));
        nameLabel->setText(QApplication::translate("QGCParamSlider", "Name", Q_NULLPTR));
        infoLabel->setText(QApplication::translate("QGCParamSlider", "?", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QGCParamSlider: public Ui_QGCParamSlider {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCPARAMSLIDER_H
