#include "mappiece.h"
#include <QString>

using namespace std;

MapPiece::MapPiece()
{
    tileName = "UNNAMED";
}

MapPiece::MapPiece(QString na)
{
    tileName = na;
}

QString getName()
{
    return tileName;
}

void setName(QString nam)
{
    tileName = nam;
}

bool hasChar()
{
    return hasChar;
}

void setChar(bool cha)
{
    hasChar = cha;
}


