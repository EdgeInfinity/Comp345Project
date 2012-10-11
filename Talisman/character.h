#ifndef CHARACTER_H
#define CHARACTER_H

#include<String>

class Character
{
public:
    Character();

    //saving or opening files for characters
    void saveFile();
    void loadFile();

    //getters and setters
    String getName();
    void setName();
    int getLives();
    void setLives();
    int getStr();
    void setStr();
    int getCraft();
    void setCraft();
    int getFate();
    void setFate();
    int getCoins();
    void setCoins();

private:

    String name;
    int lives;
    int str;
    int craft;
    int fate;
    int coins;
};



#endif // CHARACTER_H
