
#ifndef MAPPIECE_H
#define MAPPIECE_H

#include <QString>


class MapPiece
{
private:

    std::string tileName;



public:
    MapPiece();
    MapPiece(std::string);
    std::string getName();
    void setName(std::string);

};

#endif // MAPPIECE_H
