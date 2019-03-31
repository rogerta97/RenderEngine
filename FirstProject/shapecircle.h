#ifndef SHAPECIRCLE_H
#define SHAPECIRCLE_H

#include "shape2d.h"

class ShapeCircle : public Shape2d
{
public:
    ShapeCircle(QWidget *parent = nullptr);


protected:
    void Draw(QPainter& painter);
};

#endif // SHAPECIRCLE_H
