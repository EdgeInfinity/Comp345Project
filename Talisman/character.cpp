#include "character.h"
#include <String>

Character::Character()
{
Private:

    //Stats that appear on sheet
    String name;
    int lives;
    int str;
    int craft;
    int fate;
    int coins;

    //todo: special abilities

Public:

    //getters and setters
    String getName();
    {
        return name;
    }
    void setName(String n);
    {
        name = n;
    }
    int getLives();
    {
        return lives;
    }
    void setLives(int l);
    {
        lives = l;
    }
    int getStr();
    {
        return Str;
    }
    void setStr(int s);
    {
        str = s;
    }
    int getCraft();
    {
        return craft;
    }
    void setCraft(int c);
    {
        craft = c;
    }
    int getFate();
    {
        return fate;
    }
    void setFate(int fa);
    {
        fate = fa;
    }
    int getCoins();
    {
        return coins;
    }
    void setCoins(int coi);
    {
        coi = coins;
    }
}
