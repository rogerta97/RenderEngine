#ifndef ENTITYMANAGERWIDGET_H
#define ENTITYMANAGERWIDGET_H

#include <QWidget>
#include <QComboBox>
#include <QPushButton>
#include <QListWidget>

class RenderWindow;

namespace Ui {
class EntityManagerWidget;
}

class EntityManagerWidget : public QWidget
{
    Q_OBJECT

public:
    explicit EntityManagerWidget(QWidget *parent = nullptr);
    ~EntityManagerWidget();

    RenderWindow* render_window = nullptr;
private slots:
    void addEntity();
    void deleteEntity();
    void entitySelected();
    void MoveUp();
    void MoveDown();
    void ClearScene();

private:
    Ui::EntityManagerWidget *ui;

    QComboBox* shape_selector = nullptr;
    QPushButton* add_entity_but = nullptr;
    QPushButton* delete_entity_but = nullptr;
    QListWidget* entity_list = nullptr;

    QPushButton* up_but = nullptr;
    QPushButton* down_but = nullptr;
    QPushButton* new_but = nullptr;

    int last_id = 0;
};

#endif // ENTITYMANAGERWIDGET_H
