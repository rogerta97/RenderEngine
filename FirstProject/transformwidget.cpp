#include "transformwidget.h"
#include "ui_transformwidget.h"
#include "renderwindow.h"

TransformWidget::TransformWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TransformWidget)
{
    ui->setupUi(this);

    pos_x = ui->pos_x;
    pos_y = ui->pos_y;
    scl_x = ui->scale_x;
    scl_y = ui->scale_y;
    rot = ui->rotation;

    red = ui->redSpinBox;
    green = ui->greenSpinBox;
    blue = ui->blueSpinBox;

    scl_x->setValue(1.0f);
    scl_y->setValue(1.0f);
    scl_x->setSingleStep(0.1f);
    scl_y->setSingleStep(0.1f);

    connect(pos_x, QOverload<const QString &>::of(&QDoubleSpinBox::valueChanged),
            this, &TransformWidget::transformChanged);
    connect(pos_y, QOverload<const QString &>::of(&QDoubleSpinBox::valueChanged),
            this, &TransformWidget::transformChanged);
    connect(scl_x, QOverload<const QString &>::of(&QDoubleSpinBox::valueChanged),
            this, &TransformWidget::transformChanged);
    connect(scl_y, QOverload<const QString &>::of(&QDoubleSpinBox::valueChanged),
            this, &TransformWidget::transformChanged);
    connect(rot, QOverload<const QString &>::of(&QDoubleSpinBox::valueChanged),
            this, &TransformWidget::transformChanged);

    connect(red, SIGNAL(valueChanged(int)),
            this, SLOT(colorChanged()));
    connect(green, SIGNAL(valueChanged(int)),
            this, SLOT(colorChanged()));
    connect(blue, SIGNAL(valueChanged(int)),
            this, SLOT(colorChanged()));
}

TransformWidget::~TransformWidget()
{
    delete ui;
}

void TransformWidget::transformChanged()
{
    render_window->changeTransform();
}

void TransformWidget::colorChanged()
{
    render_window->changeColor();
}
