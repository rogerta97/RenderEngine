#ifndef SHAPELINE_H
#define SHAPELINE_H

#include "shape2d.h"

class ShapeLine : public Shape2d
{
public:
    ShapeLine(QWidget *parent = nullptr);


protected:
    void Draw(QPainter& painter);
};

#endif // SHAPELINE_H
