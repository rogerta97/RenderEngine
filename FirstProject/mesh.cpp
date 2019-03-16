#include <mesh.h>

#define H 32
#define V 16

#include <QFile>
#include <QIODevice>

#include <assimp/postprocess.h>
#include <assimp/Importer.hpp>

Mesh::Mesh()
{
}

void Mesh::loadModel(const char *filename)
{

        Assimp::Importer import;

        QFile file(filename);
        if(!file.open(QIODevice::ReadOnly)) {
            printf("Could not open file for read: %s", filename);
        }

        QByteArray data = file.readAll();

        const aiScene* scene = import.ReadFileFromMemory(
                data.data(), data.size(),
                aiProcess_Triangulate |
                aiProcess_FlipUVs |
                aiProcess_GenSmoothNormals |
                aiProcess_OptimizeMeshes |
                aiProcess_PreTransformVertices |
                aiProcess_ImproveCacheLocality,
                ".obj");

      if (!scene || scene->mFlags & AI_SCENE_FLAGS_INCOMPLETE || !scene->mRootNode) {

          printf("ERROR:ASSIMP::%s", import.GetErrorString());
          return;
      }

}

void Mesh::update() {

    for(int i = 0; i < submeshes_list.length(); i++) {
        submeshes_list[i]->update();
    }
}

void Mesh::draw() {

    qDebug() << "DrawMesh";

    for(int i = 0; i < submeshes_list.length(); i++) {
        submeshes_list[i]->draw();
    }
}

void Mesh::destroy() {

    for(int i = 0; i < submeshes_list.length(); i++) {
        submeshes_list[i]->destroy();
    }
}

void Mesh::createSphereShape() {

    static const float pi = 3.1416f;
    struct Vertex { QVector3D pos; QVector3D norm; };

    Vertex sphere[H][V+ 1];
    for(int counth = 0; counth < H; ++counth) {
        for(int countv = 0; countv < V + 1; ++ countv) {
            float nh = float(counth) / H;
            float nv= float(countv) / V - 0.5f;

            float angleh = 2 * pi * nh;
            float anglev = -pi * nv;

            sphere[counth][countv].pos.setX(sinf(angleh) * cosf(anglev));
            sphere[counth][countv].pos.setY(-sinf(anglev));
            sphere[counth][countv].pos.setZ(cosf(angleh) * cosf(anglev));
            sphere[counth][countv].norm = sphere[counth][countv].pos;
        }
    }

    unsigned int sphereIndices[H][V][6];
    for(unsigned int counth = 0; counth < H; ++counth) {
        for(unsigned int countv = 0; countv < V + 1; ++ countv) {
            sphereIndices[counth][countv][0] = (counth + 0) * (V + 1) + countv;
            sphereIndices[counth][countv][1] = ((counth + 1) % H) * (V + 1) + countv;
            sphereIndices[counth][countv][2] = ((counth + 1) % H) * (V + 1) + countv; + 1;
            sphereIndices[counth][countv][3] = (counth + 0) * (V + 1) + countv;
            sphereIndices[counth][countv][4] = ((counth + 1) % H) * (V + 1) + countv; + 1;
            sphereIndices[counth][countv][5] = (counth + 0) * (V + 1) + countv;
        }
    }

      VertexFormat vertexFormat;
//    vertexFormat.setVertexAttribute(0, 0, 3);
//    vertexFormat.setVertexAttribute(1, sizeof(QVector3D), 3);

      name = "Sphere";
      addSubMesh(vertexFormat, sphere, sizeof(sphere), &sphereIndices[0][0][0], H*V*6);
}

void Mesh::addSubMesh(VertexFormat vertexFormat, void *data, int bytes, unsigned int *indices, int bytes_indices) {

    SubMesh* newSubMesh = new SubMesh(vertexFormat, data, bytes, indices, bytes_indices);
    submeshes_list.push_back(newSubMesh);
}

void Mesh::processNode(aiNode *node, aiScene *scene){

    // process all the node's meshes (if any)
    for(unsigned int i = 0; i < node->mNumMeshes; i++)
    {
        aiMesh* mesh = scene->mMeshes[node->mMeshes[i]];
        submeshes_list.push_back(processMesh(mesh, scene));
    }

    // then dop the same for each of the children
    for (unsigned int i = 0; i < node->mNumChildren; i++)
    {
        processNode(node->mChildren[i], scene);
    }
}

SubMesh* Mesh::processMesh(aiMesh *mesh, aiScene *scene) {

    QVector<float> vertices;
    QVector<unsigned int> indices;

    bool hasTexCoords = false;

    // process vertices
    for(unsigned int i = 0; i < mesh->mNumVertices;i++)
    {
        vertices.push_back((mesh->mVertices[i].x));
        vertices.push_back((mesh->mVertices[i].y));
        vertices.push_back((mesh->mVertices[i].z));
        vertices.push_back((mesh->mVertices[i].x));
        vertices.push_back((mesh->mNormals[i].x));
        vertices.push_back((mesh->mNormals[i].y));
        vertices.push_back((mesh->mNormals[i].z));

        if(mesh->mTextureCoords[0])
        {
            hasTexCoords = true;
            vertices.push_back((mesh->mTextureCoords[0][i].x));
            vertices.push_back((mesh->mTextureCoords[0][i].y));
        }

        // process indices
        for(unsigned int i = 0; i < mesh->mNumFaces; i++) {

            aiFace face = mesh->mFaces[i];
            for(unsigned int j = 0; j < face.mNumIndices; j++){
                indices.push_back(face.mIndices[j]);
            }
        }

        VertexFormat vertexFormat;
        vertexFormat.setVertexAttribute(0, 0, 3);
        vertexFormat.setVertexAttribute(1, 3 * sizeof(float), 2);

        if (hasTexCoords)
        {
            vertexFormat.setVertexAttribute(2, 6 * sizeof(float), 2);
        }

        return new SubMesh(vertexFormat, &vertices[0],
                vertices.size() * sizeof(float),
                &indices[0], indices.size());
    }
}



