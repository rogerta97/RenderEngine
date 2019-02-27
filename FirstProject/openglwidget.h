#ifndef OPENGLWIDGET_H
#define OPENGLWIDGET_H

#include <QOpenGLWidget>
#include <QOpenGLFunctions_3_3_Core>
#include <QOpenGLBuffer>
#include <QOpenGLVertexArrayObject>
#include <QOpenGLShaderProgram>

class openglwidget :
        public QOpenGLWidget,
        protected QOpenGLFunctions_3_3_Core
{
public:
    openglwidget(QWidget* parent = nullptr);

    void initializeGL() override;
    void resizeGL(int width, int height) override;
    void paintGL() override;
    void createTriangle();
    void drawTriangle();

    QOpenGLBuffer vbo;
    QOpenGLVertexArrayObject vao;
    QOpenGLShaderProgram program;

public slots:

    void finalizeGL();
};

#endif // OPENGLWIDGET_H
