#ifndef OPENGLWIDGET_H
#define OPENGLWIDGET_H

#include "Shape2D.h"

#include <list>

#include <QOpenGLWidget>
#include <QOpenGLFunctions_3_3_Core>
#include <QOpenGLShaderProgram>
#include <QOpenGLDebugLogger>

class openglwidget :
        public QOpenGLWidget,
        protected QOpenGLFunctions_3_3_Core
{
public:
    openglwidget(QWidget* parent = nullptr);

    void initializeGL() override;
    void resizeGL(int width, int height) override;
    void paintGL() override;
    void createShader();

    QOpenGLShaderProgram program;

    void enableVAO(int vert_num, int strideBytes, int offsetBytes0, int offsetBytes1);

    bool backface_cull = false;
    bool depth_test = false;
    bool write_depth = false;

    std::list<Shape2D*> shapes;
    int last_vao = 0;

public slots:

    void finalizeGL();
    void handleLoggedMessage(const QOpenGLDebugMessage& message);
};

#endif // OPENGLWIDGET_H

