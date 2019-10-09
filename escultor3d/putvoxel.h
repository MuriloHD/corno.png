#ifndef PUTVOXEL_H
#define PUTVOXEL_H
#include "figurageometrica.h"
#include "sculptor.h"

class PutVoxel:public FiguraGeometrica
{
protected:
    int i,j,k;

public:
    PutVoxel(int x,int y,int z,int r1,int b1,int g2);
    void draw(Sculptor &t);


};

#endif // PUTVOXEL_H
