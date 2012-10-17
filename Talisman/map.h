#ifndef MAP_H
#define MAP_H

#include "mappiece.h"

class Map
{
private:
    int outHorz;
    int outVert;
    int innerHorz;
    int innerVert;
    int centerHorz;
    int centerVert;

public:
    Map();
    Map(int hor, int ver);

    //the 0 will be top left corner and count each piece clockwise
    MapPiece map_outer [44]; //max of 10 per side
    MapPiece map_inner [36]; //max of 8 per side
    MapPiece map_center [36]; //6 squared

    int getOutHorz();
    void setOutHorz(int);

    int getOutVert();
    void setOutVert(int);

    int getInnerHorz();
    void setInnerHorz(int);

    int getInnerVert();
    void setInnerVert(int);

    int getCenterHorz();
    void setCenterHorz(int);

    int getCenterVert();
    void setCenterVert(int);

};

#endif // MAP_H
