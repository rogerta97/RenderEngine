/********************************************************************************
** Form generated from reading UI file 'rendersettings.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RENDERSETTINGS_H
#define UI_RENDERSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RenderSettings
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QFrame *line;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QFrame *line_2;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *RenderSettings)
    {
        if (RenderSettings->objectName().isEmpty())
            RenderSettings->setObjectName(QStringLiteral("RenderSettings"));
        RenderSettings->resize(178, 327);
        verticalLayout = new QVBoxLayout(RenderSettings);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(RenderSettings);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        comboBox = new QComboBox(RenderSettings);
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));

        verticalLayout->addWidget(comboBox);

        line = new QFrame(RenderSettings);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        checkBox = new QCheckBox(RenderSettings);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        verticalLayout->addWidget(checkBox);

        checkBox_2 = new QCheckBox(RenderSettings);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        verticalLayout->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(RenderSettings);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));

        verticalLayout->addWidget(checkBox_3);

        line_2 = new QFrame(RenderSettings);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        pushButton = new QPushButton(RenderSettings);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(RenderSettings);

        QMetaObject::connectSlotsByName(RenderSettings);
    } // setupUi

    void retranslateUi(QWidget *RenderSettings)
    {
        RenderSettings->setWindowTitle(QApplication::translate("RenderSettings", "Form", nullptr));
        label->setText(QApplication::translate("RenderSettings", "TextLabel", nullptr));
        comboBox->setItemText(0, QApplication::translate("RenderSettings", "Final Render", nullptr));

        checkBox->setText(QApplication::translate("RenderSettings", "BSOO", nullptr));
        checkBox_2->setText(QApplication::translate("RenderSettings", "CheckBox", nullptr));
        checkBox_3->setText(QApplication::translate("RenderSettings", "CheckBox", nullptr));
        pushButton->setText(QApplication::translate("RenderSettings", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RenderSettings: public Ui_RenderSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RENDERSETTINGS_H
