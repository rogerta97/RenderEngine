#ifndef ENTITYMANAGERWIDGET_H
#define ENTITYMANAGERWIDGET_H

#include <QWidget>

namespace Ui {
class EntityManagerWidget;
}

class EntityManagerWidget : public QWidget
{
    Q_OBJECT

public:
    explicit EntityManagerWidget(QWidget *parent = nullptr);
    ~EntityManagerWidget();

private:
    Ui::EntityManagerWidget *ui;
};

#endif // ENTITYMANAGERWIDGET_H
