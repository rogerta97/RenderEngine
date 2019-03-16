#include "entity.h"
#include "mesh.h"

entity::entity()
{

}

void entity::update()
{
    if(mesh != nullptr)
        mesh->update();
}

void entity::draw()
{
    if(mesh != nullptr)
        mesh->draw();
}

void entity::destroy()
{
     if(mesh != nullptr)
         mesh->destroy();
}

void entity::addMesh(Mesh* newMesh)
{
    if (newMesh != nullptr) {
        mesh = newMesh;
    }
}
