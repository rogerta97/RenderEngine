#include "scene.h"
#include "shape2d.h"

void Scene::paintEvent(QPaintEvent *)
{

    QPainter painter(this);

    QColor white;
    QBrush background_brush;

    white.setRgb(255, 255, 255);
    background_brush.setColor(white);
    background_brush.setStyle(Qt::SolidPattern);

    painter.setBrush(background_brush);
    QRect draw_rect = rect();
    draw_rect.setSize(QSize(draw_rect.size().width() - 5, draw_rect.size().height() - 5));
    painter.drawRect(draw_rect);

    painter.setBrush(Qt::NoBrush);

    for(auto it = shapes.rbegin(); it != shapes.rend(); it++)
        (*it)->Draw(painter);
}

QSize Scene::sizeHint() const
{
    return QSize(400, 300);
}

QSize Scene::minimumSizeHint() const
{
    return QSize(100, 100);
}
