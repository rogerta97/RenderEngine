#include "mesh.h"

#include <QFile>
#include <QIODevice>

#include <assimp/postprocess.h>
#include <assimp/Importer.hpp>

Mesh::Mesh()
{
}

void Mesh::loadModel(const char *filename)
{

        Assimp::Importer a;

//      QFile file(filename);
//      if(!file.open(QIODevice::ReadOnly)) {
//         printf("Could not open file for read: %s", filename);
//      }

//      QByteArray data = file.readAll();

//      const aiScene* scene = import.ReadFileFromMemory(
//                data.data(), data.size(),
//                aiProcess_Triangulate |
//                aiProcess_FlipUVs |
//                aiProcess_GenSmoothNormals |
//                aiProcess_OptimizeMeshes |
//                aiProcess_PreTransformVertices |
//                aiProcess_ImproveCacheLocality,
//                ".obj");

//      if (!scene || scene->mFlags & AI_SCENE_FLAGS_INCOMPLETE || !scene->mRootNode) {

//          printf("ERROR:ASSIMP::%s", import.GetErrorString());
//          return;
//      }

}

void Mesh::processNode(aiNode *node, aiScene *scene){

}

SubMesh* Mesh::processMesh(aiNode *node, aiScene *scene) {

}
