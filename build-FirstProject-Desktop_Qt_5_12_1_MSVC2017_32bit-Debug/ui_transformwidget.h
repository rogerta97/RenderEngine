/********************************************************************************
** Form generated from reading UI file 'transformwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSFORMWIDGET_H
#define UI_TRANSFORMWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TransformWidget
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox_3;
    QDoubleSpinBox *doubleSpinBox_2;
    QDoubleSpinBox *doubleSpinBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox_9;
    QDoubleSpinBox *doubleSpinBox_8;
    QDoubleSpinBox *doubleSpinBox_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox_6;
    QDoubleSpinBox *doubleSpinBox_7;
    QDoubleSpinBox *doubleSpinBox_5;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *TransformWidget)
    {
        if (TransformWidget->objectName().isEmpty())
            TransformWidget->setObjectName(QString::fromUtf8("TransformWidget"));
        TransformWidget->resize(238, 183);
        verticalLayout = new QVBoxLayout(TransformWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(TransformWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(TransformWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        doubleSpinBox_3 = new QDoubleSpinBox(TransformWidget);
        doubleSpinBox_3->setObjectName(QString::fromUtf8("doubleSpinBox_3"));

        horizontalLayout->addWidget(doubleSpinBox_3);

        doubleSpinBox_2 = new QDoubleSpinBox(TransformWidget);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));

        horizontalLayout->addWidget(doubleSpinBox_2);

        doubleSpinBox = new QDoubleSpinBox(TransformWidget);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));

        horizontalLayout->addWidget(doubleSpinBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(TransformWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        doubleSpinBox_9 = new QDoubleSpinBox(TransformWidget);
        doubleSpinBox_9->setObjectName(QString::fromUtf8("doubleSpinBox_9"));

        horizontalLayout_2->addWidget(doubleSpinBox_9);

        doubleSpinBox_8 = new QDoubleSpinBox(TransformWidget);
        doubleSpinBox_8->setObjectName(QString::fromUtf8("doubleSpinBox_8"));

        horizontalLayout_2->addWidget(doubleSpinBox_8);

        doubleSpinBox_4 = new QDoubleSpinBox(TransformWidget);
        doubleSpinBox_4->setObjectName(QString::fromUtf8("doubleSpinBox_4"));

        horizontalLayout_2->addWidget(doubleSpinBox_4);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(TransformWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        doubleSpinBox_6 = new QDoubleSpinBox(TransformWidget);
        doubleSpinBox_6->setObjectName(QString::fromUtf8("doubleSpinBox_6"));

        horizontalLayout_3->addWidget(doubleSpinBox_6);

        doubleSpinBox_7 = new QDoubleSpinBox(TransformWidget);
        doubleSpinBox_7->setObjectName(QString::fromUtf8("doubleSpinBox_7"));

        horizontalLayout_3->addWidget(doubleSpinBox_7);

        doubleSpinBox_5 = new QDoubleSpinBox(TransformWidget);
        doubleSpinBox_5->setObjectName(QString::fromUtf8("doubleSpinBox_5"));

        horizontalLayout_3->addWidget(doubleSpinBox_5);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(TransformWidget);

        QMetaObject::connectSlotsByName(TransformWidget);
    } // setupUi

    void retranslateUi(QWidget *TransformWidget)
    {
        TransformWidget->setWindowTitle(QApplication::translate("TransformWidget", "Form", nullptr));
        label->setText(QApplication::translate("TransformWidget", "Transform: ", nullptr));
        label_2->setText(QApplication::translate("TransformWidget", "Position", nullptr));
        label_4->setText(QApplication::translate("TransformWidget", "Rotation", nullptr));
        label_3->setText(QApplication::translate("TransformWidget", "Scale", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TransformWidget: public Ui_TransformWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSFORMWIDGET_H
