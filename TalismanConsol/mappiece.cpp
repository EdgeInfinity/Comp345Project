#include "mappiece.h"
#include <string>

using namespace std;

MapPiece::MapPiece()
{
    tileName = "UNNAMED";
}

MapPiece::MapPiece(string na)
{
    tileName = na;
}

string MapPiece::getName()
{
    return tileName;
}

void MapPiece::setName(string nam)
{
    tileName = nam;
}




