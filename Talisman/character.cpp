#include "character.h"
#include <String>
#include <fstream>
using namespace std;

Character::Character()
{
}

Character::Character(String fname)
    {
        loadFile(fname);
    }

Character::Character(String na,int li,int st, int cr, int fa, int co)
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

void saveFile();
{
        ofstream savefile (name + ".tcd");
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
    void loadFile(String fname);
    {
        ifstream loadfile (fname + ".tcd");
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

