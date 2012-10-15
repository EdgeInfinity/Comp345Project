#include "valkyrie.h"

Valkyrie::Valkyrie()
{
    name = "Valkyrie";
    lives = 4;
    str = 3;
    craft = 4;
    fate = 3;
    coins = 0;
    alignment = 2;
    effects[0] = "You may add 1 to your attack score during battle. ";
    effects[1] = "You may visit the Graveyard as if you were of evil alignment. ";
    effects[2] = "Whenever a Follower is killed, you may resurrect it and keep it as your Follower instead of allowing it to be placed on the discard pile. You may only resurrect each Follower once per turn. ";
}
Valkyrie::Valkyrie(std::string na, int li, int st, int cr, int fa, int co, int al, std::string ef1, std::string ef2, std::string ef3)
{
    name = na;
    lives = li;
    str = st;
    craft = cr;
    fate = fa;
    coins = co;
    alignment = al;
    effects[0] = ef1;
    effects[1] = ef2;
    effects[2] = ef3;
}
