#include "fighter.h"

Fighter::Fighter()
{
    name = "warrior";
    lives = 5;
    str = 4;
    craft = 2;
    fate = 1;
    coins = 0;
    alignment = 1;
    effects[0] = "You may roll two dice in battle and use the higher attack roll to determine your attack score. ";
    effects[1] = "You may use two Weapons at the same time. ";
    effects[2] = "";
}
Fighter::Fighter(std::string na, int li, int st, int cr, int fa, int co, int al, std::string ef1, std::string ef2, std::string ef3)
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

