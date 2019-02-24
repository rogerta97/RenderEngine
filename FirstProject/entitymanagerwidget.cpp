#include "entitymanagerwidget.h"
#include "ui_entitymanagerwidget.h"

EntityManagerWidget::EntityManagerWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EntityManagerWidget)
{
    ui->setupUi(this);
}

EntityManagerWidget::~EntityManagerWidget()
{
    delete ui;
}
