
#ifndef MAPPIECE_H
#define MAPPIECE_H

#include <QString>


class MapPiece
{
private:

    QString tileName;
    bool hasChar = false;



public:
    MapPiece();
    getName();
    setName();
    getChar();
    setChar();
};

#endif // MAPPIECE_H
