#include "scene.h"

scene::scene()
{

}

void scene::create()
{

    // Create Sphere

    entity* sphereEntity = new entity();

    Mesh* sphereMesh = new Mesh();
    sphereMesh->createCubeShape();

    sphereEntity->addMesh(sphereMesh);
    addEntity(sphereEntity);
}

void scene::update(){

    for(int i = 0; i < entity_list.length(); i++)
    {
        entity_list[i]->update();
    }
}

void scene::draw()
{
    for(int i = 0; i < entity_list.length(); i++)
    {
        entity_list[i]->draw();
    }
}

void scene::destroy()
{
    for(int i = 0; i < entity_list.length(); i++)
    {
        entity_list[i]->destroy();
    }
}


void scene::addEntity(entity *newEntity){
    entity_list.push_back(newEntity);
}
