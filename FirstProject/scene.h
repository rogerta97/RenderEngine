#ifndef SCENE_H
#define SCENE_H

// Will track all meshes

#include <entity.h>
#include <QVector>

class scene
{
public:
    scene();

    void create();
    void update();
    void draw();
    void destroy();

    void addEntity(entity* newEntity);

private:

    QVector<entity*> entity_list;
};

#endif // SCENE_H
