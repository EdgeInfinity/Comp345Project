#ifndef CHARACTER_H
#define CHARACTER_H

#include<QString>

class Character
{
public:
    Character();
    Character(QString fname);
    Character(QString na,int li,int st, int cr, int fa, int co);

    //saving or opening files for characters
    void saveFile();
    void loadFile();

    //getters and setters
    QString getName();
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

    QString name;
    int lives;
    int str;
    int craft;
    int fate;
    int coins;
};



#endif // CHARACTER_H
