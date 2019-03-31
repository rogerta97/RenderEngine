/********************************************************************************
** Form generated from reading UI file 'entitymanagerwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTITYMANAGERWIDGET_H
#define UI_ENTITYMANAGERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EntityManagerWidget
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *entity_list;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *shape_combo;
    QPushButton *add_button;
    QPushButton *delete_button;
    QHBoxLayout *horizontalLayout;
    QPushButton *up_button;
    QPushButton *down_button;
    QPushButton *newButton;

    void setupUi(QWidget *EntityManagerWidget)
    {
        if (EntityManagerWidget->objectName().isEmpty())
            EntityManagerWidget->setObjectName(QString::fromUtf8("EntityManagerWidget"));
        EntityManagerWidget->resize(244, 236);
        verticalLayout = new QVBoxLayout(EntityManagerWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        entity_list = new QListWidget(EntityManagerWidget);
        entity_list->setObjectName(QString::fromUtf8("entity_list"));

        verticalLayout->addWidget(entity_list);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(EntityManagerWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        shape_combo = new QComboBox(EntityManagerWidget);
        shape_combo->setObjectName(QString::fromUtf8("shape_combo"));

        horizontalLayout_2->addWidget(shape_combo);


        verticalLayout->addLayout(horizontalLayout_2);

        add_button = new QPushButton(EntityManagerWidget);
        add_button->setObjectName(QString::fromUtf8("add_button"));

        verticalLayout->addWidget(add_button);

        delete_button = new QPushButton(EntityManagerWidget);
        delete_button->setObjectName(QString::fromUtf8("delete_button"));

        verticalLayout->addWidget(delete_button);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        up_button = new QPushButton(EntityManagerWidget);
        up_button->setObjectName(QString::fromUtf8("up_button"));

        horizontalLayout->addWidget(up_button);

        down_button = new QPushButton(EntityManagerWidget);
        down_button->setObjectName(QString::fromUtf8("down_button"));

        horizontalLayout->addWidget(down_button);


        verticalLayout->addLayout(horizontalLayout);

        newButton = new QPushButton(EntityManagerWidget);
        newButton->setObjectName(QString::fromUtf8("newButton"));

        verticalLayout->addWidget(newButton);


        retranslateUi(EntityManagerWidget);

        QMetaObject::connectSlotsByName(EntityManagerWidget);
    } // setupUi

    void retranslateUi(QWidget *EntityManagerWidget)
    {
        EntityManagerWidget->setWindowTitle(QApplication::translate("EntityManagerWidget", "Form", nullptr));
        label->setText(QApplication::translate("EntityManagerWidget", "Shape:", nullptr));
        add_button->setText(QApplication::translate("EntityManagerWidget", "Add Entity", nullptr));
        delete_button->setText(QApplication::translate("EntityManagerWidget", "Delete Entity", nullptr));
        up_button->setText(QApplication::translate("EntityManagerWidget", "Move Up", nullptr));
        down_button->setText(QApplication::translate("EntityManagerWidget", "Move Down", nullptr));
        newButton->setText(QApplication::translate("EntityManagerWidget", "New", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EntityManagerWidget: public Ui_EntityManagerWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTITYMANAGERWIDGET_H
