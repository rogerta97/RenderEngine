#ifndef OPENGLWIDGET_H
#define OPENGLWIDGET_H

#include <QOpenGLWidget>
#include <QOpenGLFunctions_3_3_Core>
#include <QOpenGLBuffer>
#include <QOpenGLVertexArrayObject>
#include <QOpenGLShaderProgram>
#include <QOpenGLDebugLogger>

class entity;
class scene;
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

    bool backface_cull = false;
    bool depth_test = false;
    bool write_depth = false;

    scene* currentScene = nullptr;

public slots:

    void finalizeGL();
    void handleLoggedMessage(const QOpenGLDebugMessage& message);
};

#endif // OPENGLWIDGET_H
