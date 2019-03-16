#include "submesh.h"

SubMesh::SubMesh(VertexFormat vertexFormat, void *data, int size)
{
    this->vertexFormat = vertexFormat;
    memcpy(this->data, data, size);
    this->data_size = size;
}

SubMesh::SubMesh(VertexFormat vertexFormat, void *data, int size, unsigned int* indices, int indices_count)
{
    this->vertexFormat = vertexFormat;
    this->indices_count = indices_count;
    this->data_size = size;
    memcpy(this->data, data, size);
    memcpy(this->indices, indices, indices_count);
}

void SubMesh::update() {

    // VAO: Vertex format description and state of VBO's
    vao.create();
    vao.bind();

    // VBO: Buffer with vertex data
    vbo.create();
    vbo.bind();
    vbo.setUsagePattern(QOpenGLBuffer::UsagePattern::StaticDraw);
    vbo.allocate(data, int(data_size));
    delete[] data;
    data = nullptr;

    //IBO: Buffer with indices
    if (indices != nullptr)
    {
        ibo.create();
        ibo.bind();
        ibo.setUsagePattern(QOpenGLBuffer::UsagePattern::StaticDraw);
        ibo.allocate(indices, int(indices_count * sizeof(unsigned int)));
        delete[] indices;
        indices = nullptr;
    }

    for (int location = 0; location < MAX_VERTEX_ATTRIBUTE; ++location) {

        VertexAttribute &attr = vertexFormat.attribute[location];

        if(attr.enabled) {
            glEnableVertexAttribArray(GLuint(location));
            glVertexAttribPointer(GLuint(location), attr.ncomp, GL_FLOAT, GL_FALSE, vertexFormat.size, (void*) (attr.offset));
        }
    }

    // Release
    vao.release();
    vbo.release();
    if(ibo.isCreated()) {
        ibo.release();
    }
}

void SubMesh::create() {


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
