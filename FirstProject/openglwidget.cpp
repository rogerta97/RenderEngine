#include "openglwidget.h"

#pragma comment (lib, "OpenGL32.lib")

openglwidget::openglwidget(QWidget* parent) : QOpenGLWidget(parent)
{

}

void openglwidget::initializeGL()
{
    initializeOpenGLFunctions();
    createTriangle();
}

void openglwidget::resizeGL(int w, int h)
{
    this->resize(w, h);
}

void openglwidget::paintGL()
{
    drawTriangle();

    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

}

void openglwidget::drawTriangle()
{

    if(program.bind())
    {
        qDebug() << "Valid Program";
        vao.bind();
        glDrawArrays(GL_TRIANGLES, 0, 3);
        vao.release();
        program.release();
    }
}

void openglwidget::createTriangle()
{
    //PROGRAM
    program.create();
    program.addShaderFromSourceFile(QOpenGLShader::Vertex, ":/resources/shaders/shader1_vert.vsh");
    program.addShaderFromSourceFile(QOpenGLShader::Fragment, ":/resources/shaders/shader1_frag.fsh");
    program.link();
    program.bind();

    //VBO
    QVector3D vertices[] = {
        QVector3D(-0.5f, -0.5f, 0.0f), QVector3D(1.0f, 0.0f, 0.0f),
        QVector3D(0.0f, 0.0f, 1.0f),   QVector3D(0.0f, 1.0f, 0.0f),
        QVector3D(0.5f, 0.5f, 0.0f),   QVector3D(0.0f, 0.0f, 1.0f)
    };
    vbo.create();
    vbo.bind();
    vbo.setUsagePattern(QOpenGLBuffer::UsagePattern::StaticDraw);
    vbo.allocate(vertices, 6 * sizeof(QVector3D));

    //VAO
    vao.create();
    vao.bind();
    const GLint compCount = 3;
    const int strideBytes = 2 * sizeof(QVector3D);
    const int offsetBytes0 = 0;
    const int offsetBytes1 = sizeof(QVector3D);

    glEnableVertexAttribArray(0);
    glEnableVertexAttribArray(1);
    glVertexAttribPointer(0, compCount, GL_FLOAT, GL_FALSE, strideBytes, (void*)offsetBytes0);
    glVertexAttribPointer(1, compCount, GL_FLOAT, GL_FALSE, strideBytes, (void*)offsetBytes1);

    vao.release();
    vbo.release();
    program.release();
}
