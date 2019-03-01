#include "openglwidget.h"
#include <iostream>

#pragma comment (lib, "OpenGL32.lib")

openglwidget::openglwidget(QWidget* parent) : QOpenGLWidget(parent)
{

}

void openglwidget::initializeGL()
{
    initializeOpenGLFunctions();

    QOpenGLDebugLogger* logger = new QOpenGLDebugLogger(this);
    logger->initialize();

    connect(logger, SIGNAL(messageLogged(const QOpenGLDebugMessage& message)), this,
            SLOT(handleLoggedMessage(const QOpenGLDebugMessage& message)));

    logger->startLogging();

    createTriangle();
}

void openglwidget::handleLoggedMessage(const QOpenGLDebugMessage& message)
{
    std::cout << message.severity() << ": " << message.message().toStdString() << std::endl;
}

void openglwidget::resizeGL(int w, int h)
{
    this->resize(w, h);
}

void openglwidget::paintGL()
{
    glClearDepth(1.0f);
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    if(backface_cull)
        glEnable(GL_CULL_FACE);
    else
        glDisable(GL_CULL_FACE);

    if(depth_test)
    {
        glEnable(GL_DEPTH_TEST);
        glDepthFunc(GL_LESS);

        if(write_depth)
            glDepthMask(GL_TRUE);
        else
            glDepthMask(GL_FALSE);
    }
    else
        glDisable(GL_DEPTH_TEST);


    drawTriangle();
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
        QVector3D(-0.5f, -0.5f, 1.0f), QVector3D(1.0f, 0.0f, 0.0f),
        QVector3D(0.0f, 0.5f, 1.0f),   QVector3D(0.0f, 1.0f, 0.0f),
        QVector3D(0.5f, -0.5f, 1.0f),   QVector3D(0.0f, 0.0f, 1.0f)
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


    qDebug() << "Triangle created";
}
