#include "shape2d.h"

#include <QPainter>

Shape2d::Shape2d(QWidget *parent) : QWidget(parent)
{
    setBackgroundRole(QPalette::Base);
    setAutoFillBackground(true);
}



void Shape2d::setPen(const QPen &pen)
{
    this->pen = pen;
    update();
}

void Shape2d::setBrush(const QBrush &brush)
{
    this->brush = brush;
    update();
}

