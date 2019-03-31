#include "renderwindow.h"
#include "scene.h"
#include "shapecircle.h"
#include "shaperect.h"
#include <QGridLayout>

const int IdRole = Qt::UserRole;

RenderWindow::RenderWindow(QWidget *parent) : QWidget(parent)
{
    scene = new Scene();

    penWidthSpinBox = new QSpinBox;
    penWidthSpinBox->setRange(0, 20);
    penWidthSpinBox->setSpecialValueText(tr("0 (cosmetic pen)"));

    penWidthLabel = new QLabel(tr("Pen &Width:"));
    penWidthLabel->setBuddy(penWidthSpinBox);

    penStyleComboBox = new QComboBox;
    penStyleComboBox->addItem(tr("Solid"), static_cast<int>(Qt::SolidLine));
    penStyleComboBox->addItem(tr("Dash"), static_cast<int>(Qt::DashLine));
    penStyleComboBox->addItem(tr("Dot"), static_cast<int>(Qt::DotLine));
    penStyleComboBox->addItem(tr("Dash Dot"), static_cast<int>(Qt::DashDotLine));
    penStyleComboBox->addItem(tr("Dash Dot Dot"), static_cast<int>(Qt::DashDotDotLine));
    penStyleComboBox->addItem(tr("None"), static_cast<int>(Qt::NoPen));

    penStyleLabel = new QLabel(tr("&Pen Style:"));
    penStyleLabel->setBuddy(penStyleComboBox);

    penCapComboBox = new QComboBox;
    penCapComboBox->addItem(tr("Flat"), Qt::FlatCap);
    penCapComboBox->addItem(tr("Square"), Qt::SquareCap);
    penCapComboBox->addItem(tr("Round"), Qt::RoundCap);

    penCapLabel = new QLabel(tr("Pen &Cap:"));
    penCapLabel->setBuddy(penCapComboBox);

    penJoinComboBox = new QComboBox;
    penJoinComboBox->addItem(tr("Miter"), Qt::MiterJoin);
    penJoinComboBox->addItem(tr("Bevel"), Qt::BevelJoin);
    penJoinComboBox->addItem(tr("Round"), Qt::RoundJoin);

    penJoinLabel = new QLabel(tr("Pen &Join:"));
    penJoinLabel->setBuddy(penJoinComboBox);

    brushStyleComboBox = new QComboBox;
    brushStyleComboBox->addItem(tr("Linear Gradient"),
            static_cast<int>(Qt::LinearGradientPattern));
    brushStyleComboBox->addItem(tr("Radial Gradient"),
            static_cast<int>(Qt::RadialGradientPattern));
    brushStyleComboBox->addItem(tr("Conical Gradient"),
            static_cast<int>(Qt::ConicalGradientPattern));
    brushStyleComboBox->addItem(tr("Solid"), static_cast<int>(Qt::SolidPattern));
    brushStyleComboBox->addItem(tr("Horizontal"), static_cast<int>(Qt::HorPattern));
    brushStyleComboBox->addItem(tr("Vertical"), static_cast<int>(Qt::VerPattern));
    brushStyleComboBox->addItem(tr("Cross"), static_cast<int>(Qt::CrossPattern));
    brushStyleComboBox->addItem(tr("Backward Diagonal"), static_cast<int>(Qt::BDiagPattern));
    brushStyleComboBox->addItem(tr("Forward Diagonal"), static_cast<int>(Qt::FDiagPattern));
    brushStyleComboBox->addItem(tr("Diagonal Cross"), static_cast<int>(Qt::DiagCrossPattern));

    brushStyleLabel = new QLabel(tr("&Brush:"));
    brushStyleLabel->setBuddy(brushStyleComboBox);

    connect(penWidthSpinBox, SIGNAL(valueChanged(int)),
            this, SLOT(penChanged()));
    connect(penStyleComboBox, SIGNAL(activated(int)),
            this, SLOT(penChanged()));
    connect(penCapComboBox, SIGNAL(activated(int)),
            this, SLOT(penChanged()));
    connect(penJoinComboBox, SIGNAL(activated(int)),
            this, SLOT(penChanged()));
    connect(brushStyleComboBox, SIGNAL(activated(int)),
            this, SLOT(brushChanged()));


    QGridLayout *mainLayout = new QGridLayout;
    mainLayout->setColumnStretch(0, 1);
    mainLayout->setColumnStretch(3, 1);
    mainLayout->addWidget(scene, 0, 0, 1, 4);
    mainLayout->addWidget(penWidthLabel, 3, 0, Qt::AlignRight);
    mainLayout->addWidget(penWidthSpinBox, 3, 1);
    mainLayout->addWidget(penStyleLabel, 4, 0, Qt::AlignRight);
    mainLayout->addWidget(penStyleComboBox, 4, 1);
    mainLayout->addWidget(penCapLabel, 3, 2, Qt::AlignRight);
    mainLayout->addWidget(penCapComboBox, 3, 3);
    mainLayout->addWidget(penJoinLabel, 2, 2, Qt::AlignRight);
    mainLayout->addWidget(penJoinComboBox, 2, 3);
    mainLayout->addWidget(brushStyleLabel, 4, 2, Qt::AlignRight);
    mainLayout->addWidget(brushStyleComboBox, 4, 3);
    setLayout(mainLayout);

    penChanged();
    brushChanged();

    setWindowTitle(tr("Basic Drawing"));
}

void RenderWindow::penChanged()
{
    int width = penWidthSpinBox->value();
    Qt::PenStyle style = Qt::PenStyle(penStyleComboBox->itemData(
            penStyleComboBox->currentIndex(), IdRole).toInt());
    Qt::PenCapStyle cap = Qt::PenCapStyle(penCapComboBox->itemData(
            penCapComboBox->currentIndex(), IdRole).toInt());
    Qt::PenJoinStyle join = Qt::PenJoinStyle(penJoinComboBox->itemData(
            penJoinComboBox->currentIndex(), IdRole).toInt());

    for(auto it = scene->shapes.begin(); it != scene->shapes.end();it++)
        (*it)->setPen(QPen(Qt::blue, width, style, cap, join));

    scene->update();
}

void RenderWindow::brushChanged()
{
    Qt::BrushStyle style = Qt::BrushStyle(brushStyleComboBox->itemData(
                                              brushStyleComboBox->currentIndex(), IdRole).toInt());

    if (style == Qt::LinearGradientPattern) {
           QLinearGradient linearGradient(0, 0, 100, 100);
           linearGradient.setColorAt(0.0, Qt::white);
           linearGradient.setColorAt(1.0, Qt::black);

           for(auto it = scene->shapes.begin(); it != scene->shapes.end();it++)
           {
                linearGradient.setColorAt(0.2, (*it)->color);
                (*it)->setBrush(linearGradient);
           }
    } else if (style == Qt::RadialGradientPattern) {
           QRadialGradient radialGradient(50, 50, 50, 70, 70);
           radialGradient.setColorAt(0.0, Qt::white);
           radialGradient.setColorAt(1.0, Qt::black);

           for(auto it = scene->shapes.begin(); it != scene->shapes.end();it++)
           {
                radialGradient.setColorAt(0.2, (*it)->color);
                (*it)->setBrush(radialGradient);
           }
       } else if (style == Qt::ConicalGradientPattern) {
           QConicalGradient conicalGradient(50, 50, 150);
           conicalGradient.setColorAt(0.0, Qt::white);
           conicalGradient.setColorAt(1.0, Qt::black);

           for(auto it = scene->shapes.begin(); it != scene->shapes.end();it++)
           {
                conicalGradient.setColorAt(0.2, (*it)->color);
                (*it)->setBrush(conicalGradient);
           }
    } else {

        for(auto it = scene->shapes.begin(); it != scene->shapes.end();it++)
            (*it)->setBrush(QBrush((*it)->color, style));
    }

    scene->update();
}

void RenderWindow::changeTransform()
{
    if(scene->selected_shape && !ignore_callbacks)
    {
        scene->selected_shape->transform.pos.setX(transformWidget->pos_x->value());
        scene->selected_shape->transform.pos.setY(transformWidget->pos_y->value());
        scene->selected_shape->transform.scale.setX(transformWidget->scl_x->value());
        scene->selected_shape->transform.scale.setY(transformWidget->scl_y->value());
        scene->selected_shape->transform.rotation = transformWidget->rot->value();

        scene->update();
    }
}


void RenderWindow::changeColor()
{
    if(scene->selected_shape && !ignore_callbacks)
    {
        scene->selected_shape->color.setRgb(
                    transformWidget->red->value(),
                    transformWidget->green->value(),
                    transformWidget->blue->value()
                    );

        brushChanged();
    }
}


