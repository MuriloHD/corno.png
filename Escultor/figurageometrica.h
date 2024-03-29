#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "sculptor.h"


class FiguraGeometrica
{
protected:
    float r;
    float g;
    float b;
    float a;
public:
    FiguraGeometrica();
    virtual void draw(Sculptor &t) = 0;
    virtual ~FiguraGeometrica();
};

#endif // FIGURAGEOMETRICA_H
