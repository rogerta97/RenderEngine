#ifndef TRANSFORMWIDGET_H
#define TRANSFORMWIDGET_H

#include <QWidget>
#include <QDoubleSpinBox>
#include <QSpinBox>

class RenderWindow;

namespace Ui {
class TransformWidget;
}

class TransformWidget : public QWidget
{
    Q_OBJECT

public:
    explicit TransformWidget(QWidget *parent = nullptr);
    ~TransformWidget();

    Ui::TransformWidget *ui;
    QDoubleSpinBox* pos_x;
    QDoubleSpinBox* pos_y;
    QDoubleSpinBox* scl_x;
    QDoubleSpinBox* scl_y;
    QDoubleSpinBox* rot;
    QSpinBox* red;
    QSpinBox* green;
    QSpinBox* blue;
    RenderWindow* render_window;


private slots:
    void transformChanged();
    void colorChanged();
};

#endif // TRANSFORMWIDGET_H
