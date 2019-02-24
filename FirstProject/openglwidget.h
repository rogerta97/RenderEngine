#ifndef OPENGLWIDGET_H
#define OPENGLWIDGET_H

#include <QOpenGLWidget>
#pragma comment( lib, "OpenGL32.lib" )

class openglwidget : public QOpenGLWidget
{
public:
    openglwidget();

    void initializeGL() override;
    void resizeGL(int width, int height) override;
    void paintGL() override;
};

#endif // OPENGLWIDGET_H
