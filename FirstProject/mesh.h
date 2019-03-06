#ifndef MESH_H
#define MESH_H

#include <submesh.h>
#include <assimp/scene.h>

class Mesh
{
public:
    Mesh();
    ~Mesh();

    Mesh* asMesh();

    void update();
    void destroy();

    void addSubMesh(VertexFormat vertexFormat, void* data, int bytes);
    void addSubMesh(VertexFormat vertexFormat, void* data, int bytes, unsigned int* indices, int bytes_indices);
    void loadModel(const char* filename);

    QVector<SubMesh*> submeshes_list;

private:

    void processNode(aiNode* node, aiScene* scene);
    SubMesh* processMesh(aiNode* node, aiScene* scene);

};

#endif // MESH_H
