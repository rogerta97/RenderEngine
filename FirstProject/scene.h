#ifndef SCENE_H
#define SCENE_H

#include <QWidget>
#include <list>

class Shape2d;
#include <QPainter>

class Scene : public QWidget
{
    Q_OBJECT
public:
    explicit Scene(QWidget *parent = nullptr) : QWidget(parent) {};

    void paintEvent(QPaintEvent *event) override;


    QSize minimumSizeHint() const override;
    QSize sizeHint() const override;

public:
    std::list<Shape2d*> shapes;
    Shape2d* selected_shape = nullptr;
};

#endif // SCENE_H
