#include "character.h"
#include <QString>
#include <iostream>
using namespace std;

Character::Character()
{    

}

//Character::Character(QString fname)
//    {
//        loadFile(fname);
//    }

Character::Character(QString na,int li,int st, int cr, int fa, int co)
{
    name = na;
    lives = li;
    str = st;
    craft = cr;
    fate = fa;
    coins = co;
}


    //file load and save

    //this will save the data stored in this character class in a file
    //with the name matching the character

void Character::saveFile()
{
        ofstream savefile;
        savefile.open(name + ".tcd");
        //tcd will stand for Talisman Character Data
        if (savefile.is_open())
        {
            savefile << name << endl;
            savefile << lives << endl;
            savefile << str << endl;
            savefile << craft << endl;
            savefile << fate << endl;
            savefile << coins << endl;
            savefile.close();
        }
        else
        {
         //error handling
        }
 }

    //this will load a character
    void Character::loadFile(String fname)
    {
        ifstream loadfile;
        loadfile.open(fname + ".tcd");
        if (loadfile.is_open())
        {
            name = getline (loadfile,line);
            lives = getline (loadfile,line);
            str = getline (loadfile,line);
            craft = getline (loadfile,line);
            fate = getline (loadfile,line);
            coins = getline (loadfile,line);
            loadfile.close();
        }
        else
        {
            //file can't be opened error
        }
    }

    //getters and setters
    QString Character::getName()
    {
        return name;
    }
    void Character::setName(QString n)
    {
        name = n;
    }
    int Character::getLives()
    {
        return lives;
    }
    void Character::setLives(int l)
    {
        lives = l;
    }
    int Character::getStr()
    {
        return Str;
    }
    void Character::setStr(int s)
    {
        str = s;
    }
    int Character::getCraft()
    {
        return craft;
    }
    void Character::setCraft(int c)
    {
        craft = c;
    }
    int Character::getFate()
    {
        return fate;
    }
    void Character::setFate(int fa)
    {
        fate = fa;
    }
    int Character::getCoins()
    {
        return coins;
    }
    void Character::setCoins(int coi)
    {
        coi = coins;
    }

