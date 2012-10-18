#include <iostream>

#include "map.h"
#include "mappiece.h"

Map::Map()
{
}
Map::Map(int hor, int ver)//check in main if legal amount
{
    int outside = 2* (hor + ver +2);
    int inn = 2 * (hor + ver);
    int cent = (hor-2)*(ver-2);
    for (int i=0;i<=outside-1;i++)
    {
        MapPiece temp;
        map_outer[i]= temp ;
    }
    for (int i=0;i<=inn-1;i++)
    {
        MapPiece temp;
        map_inner[i]= temp;
    }
    for (int i=0;i<=cent-1;i++)
    {
        MapPiece temp;
        map_center[i]= temp;
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
