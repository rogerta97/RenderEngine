#ifndef VERTEXFORMAT_H
#define VERTEXFORMAT_H

#define MAX_VERTEX_ATTRIBUTE 10

struct VertexAttribute
{
    bool enabled = false;
    int offset = 0;
    int ncomp = 0;
};


class VertexFormat
{
public:

    void setVertexAttribute(int location, int offset, int ncomp);
    VertexFormat();

public:
    VertexAttribute attribute[MAX_VERTEX_ATTRIBUTE];
    int size = 0;
};

#endif // VERTEXFORMAT_H
