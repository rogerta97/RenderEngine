#ifndef SHAPE2D_H
#define SHAPE2D_H

#include <QWidget>
#include <QVector2D>
#include <QPen>

struct Transform2D
{
    QVector2D pos = QVector2D(0.0f,0.0f);
    QVector2D scale = QVector2D(1.0f,1.0f);
    float rotation = 0.0f;
};

class Shape2d : public QWidget
{
public:
    enum Shape { Line, Points, Polyline, Polygon, Rect, RoundedRect, Ellipse, Arc,
                 Chord, Pie, Path, Text, Pixmap };

    Shape2d(QWidget *parent = nullptr);

    Transform2D transform;
    QString name;
    QColor color;
public slots:
    void setPen(const QPen &pen);
    void setBrush(const QBrush &brush);

    virtual void Draw(QPainter& painter) {};

protected:

    QPen pen;
    QBrush brush;
};

#endif // SHAPE2D_H
