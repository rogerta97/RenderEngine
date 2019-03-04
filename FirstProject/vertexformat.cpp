#include "vertexformat.h"

VertexFormat::VertexFormat()
{

}

void VertexFormat::setVertexAttribute(int location, int offset, int ncomp) {
    attribute[location].enabled = true;
    attribute[location].offset = offset;
    attribute[location].ncomp = ncomp;
    size += ncomp * sizeof (float);
}
