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

    //the 0 will be top left corner and count each piece clockwise
    MapPiece map_outer [80]; //max of 20 per side
    MapPiece map_inner [72]; //max of 18 per side
    MapPiece map_center [256]; //16 squared. pretty big imo, consider reducing

    int getOutHorz();
    void setOutHorz();

    int getOutVert();
    void setOutVert();

    int getInnerHorz();
    void setInnerHorz();

    int getInnerVert();
    void setInnerVert();

    int getCenterHorz();
    void setCenterHorz();

    int getCenterVert();
    void setCenterVert();

};

#endif // MAP_H
