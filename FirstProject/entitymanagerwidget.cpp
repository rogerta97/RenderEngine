#include "entitymanagerwidget.h"
#include "ui_entitymanagerwidget.h"
#include "shape2d.h"
#include "renderwindow.h"
#include "scene.h"
#include "shapecircle.h"
#include "shaperect.h"
#include "shapeline.h"

#include <QListWidgetItem>

EntityManagerWidget::EntityManagerWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EntityManagerWidget)
{
    ui->setupUi(this);

    shape_selector = ui->shape_combo;

    shape_selector->addItem(tr("Circle"), Shape2d::Ellipse);
    shape_selector->addItem(tr("Square"), Shape2d::Rect);
    shape_selector->addItem(tr("Line"), Shape2d::Line);

    add_entity_but = ui->add_button;
    delete_entity_but = ui->delete_button;
    entity_list = ui->entity_list;

    up_but = ui->up_button;
    down_but = ui->down_button;
    new_but = ui->newButton;

    entity_list->setSelectionMode(QAbstractItemView::SingleSelection);

    connect(add_entity_but, SIGNAL(clicked(bool)),
            this, SLOT(addEntity()));
    connect(delete_entity_but, SIGNAL(clicked(bool)),
            this, SLOT(deleteEntity()));
    connect(up_but, SIGNAL(clicked(bool)),
            this, SLOT(MoveUp()));
    connect(down_but, SIGNAL(clicked(bool)),
            this, SLOT(MoveDown()));
    connect(new_but, SIGNAL(clicked(bool)),
            this, SLOT(ClearScene()));
    connect(entity_list, SIGNAL(itemSelectionChanged()),
            this, SLOT(entitySelected()));
}

EntityManagerWidget::~EntityManagerWidget()
{
    delete ui;
}

void EntityManagerWidget::addEntity()
{
    Shape2d* shape = nullptr;
    QListWidgetItem* new_item = nullptr;
    switch(shape_selector->currentIndex())
    {
    case 0:
        shape = new ShapeCircle();
        shape->name = "Circle_"+ QString::number(last_id);
        break;
    case 1:
        shape = new ShapeRect();
        shape->name = "Rect_" + QString::number(last_id);
        break;
    case 2:
        shape = new ShapeLine();
        shape->name = "Line_" + QString::number(last_id);
        break;
    }

    last_id++;

    new_item = new QListWidgetItem (shape->name);
    entity_list->insertItem(0, new_item);
    entity_list->setCurrentItem(new_item);

    render_window->scene->shapes.push_front(shape);
    entitySelected();

    render_window->brushChanged();
    render_window->penChanged();
}

void EntityManagerWidget::deleteEntity()
{
    if(render_window->scene->selected_shape)
    {
        render_window->scene->shapes.remove(render_window->scene->selected_shape);
        delete render_window->scene->selected_shape;
        render_window->scene->selected_shape = nullptr;
        render_window->scene->update();

        delete entity_list->takeItem(entity_list->currentRow());
        entity_list->update();

    }
}

void EntityManagerWidget::entitySelected()
{
    if(entity_list->currentItem())
    {
        for(auto it = render_window->scene->shapes.begin(); it != render_window->scene->shapes.end(); it++)
            if(entity_list->currentItem()->text() == (*it)->name)
            {
                render_window->scene->selected_shape = *it;

                render_window->ignore_callbacks = true;
                render_window->transformWidget->pos_x->setValue((*it)->transform.pos.x());
                render_window->transformWidget->pos_y->setValue((*it)->transform.pos.y());
                render_window->transformWidget->scl_x->setValue((*it)->transform.scale.x());
                render_window->transformWidget->scl_y->setValue((*it)->transform.scale.y());
                render_window->transformWidget->rot->setValue((*it)->transform.rotation);
                render_window->transformWidget->red->setValue((*it)->color.red());
                render_window->transformWidget->green->setValue((*it)->color.green());
                render_window->transformWidget->blue->setValue((*it)->color.blue());
                render_window->ignore_callbacks = false;

                render_window->transformWidget->update();
                return;
            }
    }
    render_window->scene->selected_shape = nullptr;
}

void EntityManagerWidget::MoveUp()
{
    if(render_window->scene->selected_shape)
    {
        if(render_window->scene->shapes.front() != render_window->scene->selected_shape &&
                render_window->scene->shapes.size() > 1)
        {

            for(auto it = render_window->scene->shapes.cbegin(); it != render_window->scene->shapes.cend();)
            {
                it++;
                if(render_window->scene->selected_shape == (*it))
                {
                    it--;
                    render_window->scene->shapes.remove(render_window->scene->selected_shape);
                    render_window->scene->shapes.insert(it, render_window->scene->selected_shape);
                    render_window->scene->update();

                    int row = entity_list->currentRow();
                    QListWidgetItem* item = entity_list->takeItem(row);
                    entity_list->insertItem(row - 1, item);
                    entity_list->setCurrentItem(item);
                    entity_list->update();

                    return;
                }
            }
        }
    }
}

void EntityManagerWidget::MoveDown()
{
    if(render_window->scene->selected_shape)
    {
        if(render_window->scene->shapes.back() != render_window->scene->selected_shape &&
                render_window->scene->shapes.size() > 1)
        {

            for(auto it = render_window->scene->shapes.cbegin(); it != render_window->scene->shapes.cend();it++)
            {
                if(render_window->scene->selected_shape == (*it))
                {
                    it++;
                    it++;
                    render_window->scene->shapes.remove(render_window->scene->selected_shape);
                    render_window->scene->shapes.insert(it, render_window->scene->selected_shape);
                    render_window->scene->update();

                    int row = entity_list->currentRow();
                    QListWidgetItem* item = entity_list->takeItem(row);
                    entity_list->insertItem(row + 1, item);
                    entity_list->setCurrentItem(item);
                    entity_list->update();

                    return;
                }
            }
        }
    }
}

void EntityManagerWidget::ClearScene()
{
    entity_list->clear();
    entity_list->update();

    render_window->scene->shapes.clear();
    render_window->scene->selected_shape = nullptr;
    render_window->scene->update();
    last_id = 0;
}
