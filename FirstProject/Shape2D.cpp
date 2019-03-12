#include "Shape2D.h"
#include "openglwidget.h"

#include <QOpenGLShaderProgram>

void Shape2D::Init()
{
    switch(type)
    {
    case Square:
        InitSquare();
        break;
    case Circle:
        InitCircle();
        break;
    case Triangle:
        InitTriangle();
        break;
    default:
        break;
    }
}

void Shape2D::InitSquare()
{
    vert_num = 6;

    //VBO
    QVector3D vertices[] = {
        QVector3D(-0.5f, -0.5f, 1.0f), QVector3D(1.0f, 0.0f, 0.0f),
        QVector3D(0.5f, -0.5f, 1.0f),   QVector3D(0.0f, 1.0f, 0.0f),
        QVector3D(-0.5f, 0.5f, 1.0f),   QVector3D(0.0f, 0.0f, 1.0f),

        QVector3D(0.5f, -0.5f, 1.0f), QVector3D(0.0f, 1.0f, 0.0f),
        QVector3D(0.5f, 0.5f, 1.0f),   QVector3D(1.0f, 1.0f, 0.0f),
        QVector3D(-0.5f, 0.5f, 1.0f),   QVector3D(0.0f, 0.0f, 1.0f)
    };
    vbo.create();
    vbo.bind();
    vbo.setUsagePattern(QOpenGLBuffer::UsagePattern::StaticDraw);
    vbo.allocate(vertices, vert_num * 2 * sizeof(QVector3D));

    //VAO
    vao.create();
    vao.bind();
    strideBytes = 2 * sizeof(QVector3D);
    offsetBytes0 = 0;
    offsetBytes1 = sizeof(QVector3D);
}

void Shape2D::InitTriangle()
{
    vert_num = 3;

     //VBO
     QVector3D vertices[] = {
         QVector3D(-0.5f, -0.5f, 1.0f), QVector3D(1.0f, 0.0f, 0.0f),
         QVector3D(0.0f, 0.5f, 1.0f),   QVector3D(0.0f, 1.0f, 0.0f),
         QVector3D(0.5f, -0.5f, 1.0f),   QVector3D(0.0f, 0.0f, 1.0f)
     };
     vbo.create();
     vbo.bind();
     vbo.setUsagePattern(QOpenGLBuffer::UsagePattern::StaticDraw);
     vbo.allocate(vertices, vert_num * 2 * sizeof(QVector3D));

     //VAO
     vao.create();
     vao.bind();
     strideBytes = 2 * sizeof(QVector3D);
     offsetBytes0 = 0;
     offsetBytes1 = sizeof(QVector3D);
}

void Shape2D::InitCircle()
{
}

void Shape2D::Draw()
{
    vao.bind();
    glDrawArrays(GL_TRIANGLES, 0, vert_num);
    vao.release();
}

void Shape2D::ReleaseVAOVBO()
{
    vao.release();
    vbo.release();
}
