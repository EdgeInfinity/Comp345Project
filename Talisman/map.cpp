#include <iostream>

#include "map.h"
#include "mappiece.h"

Map::Map()
{
}
Map::Map(int hor, int ver)//check in main if legal amount
{
    int outside = 2* (hor + ver +4);
    int inn = 2 * (hor + ver);
    int cent = (hor-2)*(ver-2);
    for (int i=0;i<=outside-1;i++)
    {
        map_outer[i]= new MapPiece();
    }
    for (int i=0;i<=inn-1;i++)
    {
        map_inner[i]= new MapPiece();
    }
    for (int i=0;i<=cent-1;i++)
    {
        map_center[i]= new MapPiece();
    }
}

int Map::getOutHorz()
{
   return outHorz;
}

void Map::setOutHorz(int h)
{
    outHorz = h;
}

int Map::getOutVert()
{
    return outVert;
}

void Map::setOutVert(int v)
{
    outVert = v;
}

int Map::getInnerHorz()
{
    return innerHorz;
}

void Map::setInnerHorz(int h)
{
    innerHorz = h;
}

int Map::getInnerVert()
{
    return innerVert;
}

void Map::setInnerVert(int v)
{
    innerVert = v;
}

int Map::getCenterHorz()
{
    return centerHorz;
}

void Map::setCenterHorz(int h)
{
    centerHorz = h;
}

int Map::getCenterVert()
{
    return centerVert;
}

void Map::setCenterVert(int v)
{
    centerVert = v;
}
