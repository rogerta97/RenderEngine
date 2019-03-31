#include "shapeline.h"

#include <QPainter>

ShapeLine::ShapeLine(QWidget *parent)
{
    setBackgroundRole(QPalette::Base);
    setAutoFillBackground(true);
    color = QColor(rand() % 255, rand() % 255, rand() % 255);
}

void ShapeLine::Draw(QPainter& painter)
{
    QLineF line(0, 0, 100, 100);

    painter.setPen(pen);
    painter.setBrush(brush);

    painter.save();

    painter.translate(transform.pos.x(), transform.pos.y());
    painter.rotate(transform.rotation);
    painter.scale(transform.scale.x(), transform.scale.y());

    painter.drawLine(line);

    painter.restore();

    painter.setPen(palette().dark().color());
    painter.setBrush(Qt::NoBrush);

}
