#ifndef MESH_H
#define MESH_H

#include <string>
#include <submesh.h>
#include <assimp/scene.h>

class Mesh
{
public:
    Mesh();
    ~Mesh();

    Mesh* asMesh();

    void update();
    void draw();
    void destroy();

    void addSubMesh(VertexFormat vertexFormat, void* data, int bytes);
    void addSubMesh(VertexFormat vertexFormat, void* data, int bytes, unsigned int* indices, int bytes_indices);
    void loadModel(const char* filename);

    // Primitives
    void createSphereShape();

    QVector<SubMesh*> submeshes_list;

private:

    // Mesh properties
    std::string name = "";

    void processNode(aiNode* node, aiScene* scene);
    SubMesh* processMesh(aiMesh* node, aiScene* scene);

};

#endif // MESH_H
