#ifndef SHAPESQUARE_H
#define SHAPESQUARE_H

#include "shape2d.h"

class ShapeRect : public Shape2d
{
public:
    ShapeRect(QWidget *parent = nullptr);


protected:
    void Draw(QPainter& painter);
};

#endif // SHAPESQUARE_H
