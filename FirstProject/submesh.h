#ifndef SUBMESH_H
#define SUBMESH_H

#include <cstdio>

#include "openglwidget.h"
#include "vertexformat.h"

class SubMesh
{
public:
    SubMesh(VertexFormat vertexFormat, void *data, int size);
    SubMesh(VertexFormat vertexFormat, void *data, int size, unsigned int* indices, int indices_count);

    void update();
    void create();
    void draw();
    void destroy();

private:

    unsigned char* data = nullptr;
    size_t data_size = 0;

    unsigned char* indices = nullptr;
    size_t indices_count = 0;

    VertexFormat vertexFormat;
    QOpenGLBuffer vbo;
    QOpenGLBuffer ibo;
    QOpenGLVertexArrayObject vao;
};

#endif // SUBMESH_H
