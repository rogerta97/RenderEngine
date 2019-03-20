/********************************************************************************
** Form generated from reading UI file 'entitymanagerwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTITYMANAGERWIDGET_H
#define UI_ENTITYMANAGERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EntityManagerWidget
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *EntityManagerWidget)
    {
        if (EntityManagerWidget->objectName().isEmpty())
            EntityManagerWidget->setObjectName(QString::fromUtf8("EntityManagerWidget"));
        EntityManagerWidget->resize(244, 219);
        verticalLayout = new QVBoxLayout(EntityManagerWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        scrollArea = new QScrollArea(EntityManagerWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 224, 141));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        pushButton = new QPushButton(EntityManagerWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(EntityManagerWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);


        retranslateUi(EntityManagerWidget);

        QMetaObject::connectSlotsByName(EntityManagerWidget);
    } // setupUi

    void retranslateUi(QWidget *EntityManagerWidget)
    {
        EntityManagerWidget->setWindowTitle(QApplication::translate("EntityManagerWidget", "Form", nullptr));
        pushButton->setText(QApplication::translate("EntityManagerWidget", "Add Entity", nullptr));
        pushButton_2->setText(QApplication::translate("EntityManagerWidget", "Delete Entity", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EntityManagerWidget: public Ui_EntityManagerWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTITYMANAGERWIDGET_H
