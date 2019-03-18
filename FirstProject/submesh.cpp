#include "submesh.h"

SubMesh::SubMesh(VertexFormat vertexFormat, void *data, int size)
{
    this->vertexFormat = vertexFormat;
    this->data = (unsigned char*)data;
    this->data_size = size;
    create();
}

SubMesh::SubMesh(VertexFormat vertexFormat, void *data, int size, unsigned int* indices, int indices_count)
{
    this->vertexFormat = vertexFormat;
    this->indices_count = indices_count;
    this->data_size = size;
    this->data = (unsigned char*)data;
    this->indices = (unsigned char*)indices;
    qDebug() << "hello";

    create();
}

void SubMesh::create()
{
    // VAO: Vertex format description and state of VBO's
    vao.create();
    vao.bind();

    // VBO: Buffer with vertex data
    vbo.create();
    vbo.bind();
    vbo.setUsagePattern(QOpenGLBuffer::UsagePattern::StaticDraw);
    vbo.allocate(data, int(data_size));
    data = nullptr;

    //IBO: Buffer with indices
    if (indices != nullptr)
    {
        ibo.create();
        ibo.bind();
        ibo.setUsagePattern(QOpenGLBuffer::UsagePattern::StaticDraw);
        ibo.allocate(indices, int(indices_count * sizeof(unsigned int)));
        indices = nullptr;
    }

    for (int location = 0; location < MAX_VERTEX_ATTRIBUTE; ++location) {

        VertexAttribute &attr = vertexFormat.attribute[location];

//        if(attr.enabled) {
//            glfuncs->glEnableVertexAttribArray(GLuint(location));
//            glfuncs->glVertexAttribPointer(GLuint(location), attr.ncomp, GL_FLOAT, GL_FALSE, vertexFormat.size, (void*) (attr.offset));
//        }
    }

    qDebug() << "Here3";

    // Release
    vao.release();
    vbo.release();
    if(ibo.isCreated()) {
        ibo.release();
    }
}
void SubMesh::update() {


}

//void SubMesh::update() {



//}

void SubMesh::draw() {


    qDebug() << "DrawMesh";

    int num_vertices = data_size / vertexFormat.size;
    vao.bind();

    if(indices_count > 0) {
        glDrawElements(GL_TRIANGLES, indices_count, GL_UNSIGNED_INT, nullptr);
    } else {
        glDrawArrays(GL_TRIANGLES, 0, num_vertices);
    }

    vao.release();
}

void SubMesh::destroy() {

    if (vbo.isCreated()) {vbo.destroy(); }
    if (ibo.isCreated()) {vbo.destroy(); }
    if (vao.isCreated()) {vbo.destroy(); }
}
