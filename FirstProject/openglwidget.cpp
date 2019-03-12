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

      createShader();
      Shape2D* new_shape = new Shape2D(Square);
      enableVAO(new_shape->vert_num, new_shape->strideBytes, new_shape->offsetBytes0, new_shape->offsetBytes1);
      new_shape->ReleaseVAOVBO();
      shapes.push_back(new_shape);
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
    glClearColor(0.2f, 0.2f, 0.2f, 1.0f);
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

    program.bind();
    for(auto it = shapes.begin(); it != shapes.end(); it++)
        (*it)->Draw();
    program.release();
}

void openglwidget::createShader()
{
    program.create();
    program.addShaderFromSourceFile(QOpenGLShader::Vertex, ":/resources/shaders/shader1_vert.vsh");
    program.addShaderFromSourceFile(QOpenGLShader::Fragment, ":/resources/shaders/shader1_frag.fsh");
    program.link();
}

void openglwidget::enableVAO(int vert_num, int strideBytes, int offsetBytes0, int offsetBytes1)
{
     glEnableVertexAttribArray(last_vao);
     glEnableVertexAttribArray(last_vao + 1);
     glVertexAttribPointer(0, vert_num, GL_FLOAT, GL_FALSE, strideBytes, (void*)offsetBytes0);
     glVertexAttribPointer(1, vert_num, GL_FLOAT, GL_FALSE, strideBytes, (void*)offsetBytes1);

     last_vao += 2;
}
