#ifndef ENTITY_H
#define ENTITY_H

#include <mesh.h>

// base class container

class entity
{
public:
    entity();

    void update();
    void draw();
    void destroy();

    void addMesh(Mesh* newMesh);

private:
    Mesh* mesh = nullptr;
};

#endif // ENTITY_H
