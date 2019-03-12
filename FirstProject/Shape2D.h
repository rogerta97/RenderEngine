#ifndef SHAPEDD_H
#define SHAPEDD_H


enum ShapeType { NullShape, Square, Circle, Triangle};

#include <QOpenGLBuffer>
#include <QOpenGLVertexArrayObject>
#include <QOpenGLFunctions_3_3_Core>

struct float3
{
    float3(float _x, float _y, float _z) { x = _x; y = _y; z =_z;}
    float3() { x = 0; y = 0; z =0;}
    void set(float _x, float _y, float _z) { x = _x; y = _y; z =_z;}

    float x = 0.0f; float y = 0.0f; float z = 0.0f;
};


class Shape2D
{
public:
    Shape2D(ShapeType _type, float3 _position = float3(), float3 _scale = float3())
        : type(_type), position(_position), scale(_scale)
    {
        Init();
    }

    ShapeType type = NullShape;
    float3 position = float3();
    float3 scale = float3();

    int vert_num = 0;
    int strideBytes = 0;
    int offsetBytes0 = 0;
    int offsetBytes1 = 0;

    QOpenGLBuffer vbo;
    QOpenGLVertexArrayObject vao;

    void Init();
    void InitTriangle();
    void InitSquare();
    void InitCircle();
    void Draw();

    void ReleaseVAOVBO();
};

#endif // SHAPEDD_H
