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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
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
    QDoubleSpinBox *pos_x;
    QDoubleSpinBox *pos_y;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QDoubleSpinBox *scale_x;
    QDoubleSpinBox *scale_y;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QDoubleSpinBox *rotation;
    QFrame *line;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QSpinBox *redSpinBox;
    QLabel *label_7;
    QSpinBox *greenSpinBox;
    QLabel *label_8;
    QSpinBox *blueSpinBox;
    QSpacerItem *verticalSpacer;
    QFrame *line_2;

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

        pos_x = new QDoubleSpinBox(TransformWidget);
        pos_x->setObjectName(QString::fromUtf8("pos_x"));
        pos_x->setMaximum(530.000000000000000);

        horizontalLayout->addWidget(pos_x);

        pos_y = new QDoubleSpinBox(TransformWidget);
        pos_y->setObjectName(QString::fromUtf8("pos_y"));
        pos_y->setMaximum(300.000000000000000);

        horizontalLayout->addWidget(pos_y);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(TransformWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        scale_x = new QDoubleSpinBox(TransformWidget);
        scale_x->setObjectName(QString::fromUtf8("scale_x"));

        horizontalLayout_3->addWidget(scale_x);

        scale_y = new QDoubleSpinBox(TransformWidget);
        scale_y->setObjectName(QString::fromUtf8("scale_y"));

        horizontalLayout_3->addWidget(scale_y);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(TransformWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        rotation = new QDoubleSpinBox(TransformWidget);
        rotation->setObjectName(QString::fromUtf8("rotation"));

        horizontalLayout_2->addWidget(rotation);


        verticalLayout->addLayout(horizontalLayout_2);

        line = new QFrame(TransformWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        label_5 = new QLabel(TransformWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_6 = new QLabel(TransformWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(10, 16777215));
        label_6->setFrameShape(QFrame::NoFrame);
        label_6->setWordWrap(false);

        horizontalLayout_4->addWidget(label_6);

        redSpinBox = new QSpinBox(TransformWidget);
        redSpinBox->setObjectName(QString::fromUtf8("redSpinBox"));
        redSpinBox->setMaximum(255);

        horizontalLayout_4->addWidget(redSpinBox);

        label_7 = new QLabel(TransformWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMaximumSize(QSize(10, 16777215));

        horizontalLayout_4->addWidget(label_7);

        greenSpinBox = new QSpinBox(TransformWidget);
        greenSpinBox->setObjectName(QString::fromUtf8("greenSpinBox"));
        greenSpinBox->setMaximum(255);

        horizontalLayout_4->addWidget(greenSpinBox);

        label_8 = new QLabel(TransformWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMaximumSize(QSize(10, 16777215));

        horizontalLayout_4->addWidget(label_8);

        blueSpinBox = new QSpinBox(TransformWidget);
        blueSpinBox->setObjectName(QString::fromUtf8("blueSpinBox"));
        blueSpinBox->setMaximum(255);

        horizontalLayout_4->addWidget(blueSpinBox);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        line_2 = new QFrame(TransformWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);


        retranslateUi(TransformWidget);

        QMetaObject::connectSlotsByName(TransformWidget);
    } // setupUi

    void retranslateUi(QWidget *TransformWidget)
    {
        TransformWidget->setWindowTitle(QApplication::translate("TransformWidget", "Form", nullptr));
        label->setText(QApplication::translate("TransformWidget", "Transform: ", nullptr));
        label_2->setText(QApplication::translate("TransformWidget", "Position", nullptr));
        label_3->setText(QApplication::translate("TransformWidget", "Scale", nullptr));
        label_4->setText(QApplication::translate("TransformWidget", "Rotation", nullptr));
        label_5->setText(QApplication::translate("TransformWidget", "Color:", nullptr));
        label_6->setText(QApplication::translate("TransformWidget", "R:", nullptr));
        label_7->setText(QApplication::translate("TransformWidget", "G:", nullptr));
        label_8->setText(QApplication::translate("TransformWidget", "B:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TransformWidget: public Ui_TransformWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSFORMWIDGET_H
