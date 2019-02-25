#include "openglwidget.h"

#pragma comment (lib, "OpenGL32.lib")

openglwidget::openglwidget(QWidget* parent) : QOpenGLWidget(parent)
{

}

void openglwidget::initializeGL()
{
    initializeOpenGLFunctions();
}

void openglwidget::resizeGL(int w, int h)
{
    this->resize(w, h);
}

void openglwidget::paintGL()
{
    glClearColor(0.9f, 0.5f, 0.5f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
}
