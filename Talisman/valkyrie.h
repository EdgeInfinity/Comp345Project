#ifndef VALKYRIE_H
#define VALKYRIE_H

#include "character.h"

class Valkyrie : public Character
{
public:
    Valkyrie();
    Valkyrie(std::string na,int li,int st, int cr, int fa, int co,int al,std::string ef1, std::string ef2, std::string ef3);
};

#endif // VALKYRIE_H
