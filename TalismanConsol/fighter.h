#ifndef FIGHTER_H
#define FIGHTER_H

#include <string>
#include "character.h"

class Fighter: public Character
{
public:
    Fighter();
    Fighter(std::string na,int li,int st, int cr, int fa, int co,int al,std::string ef1, std::string ef2, std::string ef3);
};

#endif // FIGHTER_H
