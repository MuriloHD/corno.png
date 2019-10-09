#include "putvoxel.h"

PutVoxel::PutVoxel(int x,int y,int z,int r1,int b1,int g1)
{
 i = x;
 j = y;
 k = z;
}

void PutVoxel::draw(Sculptor &t)
{
    t.setColor(
t.putVoxel(i,j,k);
}
