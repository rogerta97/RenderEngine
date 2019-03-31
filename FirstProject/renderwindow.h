#ifndef RENDERWINDOW_H
#define RENDERWINDOW_H

#include <QWidget>
#include <QLabel>
#include <QComboBox>
#include <QSpinBox>
#include <QColorDialog>
#include "transformwidget.h"

class Scene;

class RenderWindow : public QWidget
{
    Q_OBJECT

public:
    RenderWindow(QWidget* parent = nullptr);
    void changeTransform();
    void changeColor();

    TransformWidget* transformWidget;
    Scene* scene = nullptr;
    bool ignore_callbacks = false;


public slots:
    void penChanged();
    void brushChanged();

private:
    QLabel *penWidthLabel;
    QLabel *penStyleLabel;
    QLabel *penCapLabel;
    QLabel *penJoinLabel;
    QLabel *brushStyleLabel;
    QSpinBox *penWidthSpinBox;
    QComboBox *penStyleComboBox;
    QComboBox *penCapComboBox;
    QComboBox *penJoinComboBox;
    QComboBox *brushStyleComboBox;
};

#endif // RENDERWINDOW_H
