#include "character.h"
#include <QString>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


//todo:
//change map location of character to be in the map itself
//possibly by having a pointer to a mapPiece

Character::Character()
{    

}

//Character::Character(QString fname)
//    {
//        loadFile(fname);
//    }

Character::Character(string na,int li,int st, int cr, int fa, int co)
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

//todo: fix file io


/*
void Character::saveFile()
{

        string fname = name + ".txt";
        ofstream savefile;
        savefile.open(fname.c_str());
        //tcd will stand for Talisman Character Data
        if(!savefile)
        {
            //error
        }


            savefile << name << endl;
            savefile << lives << endl;
            savefile << str << endl;
            savefile << craft << endl;
            savefile << fate << endl;
            savefile << coins << endl;
            savefile.close();


 }

    //this will load a character

    void Character::loadFile(string fname)
    {
        ifstream loadfile(fname.c_str());

        if (!loadfile)
        {
            //error handle
        }

            loadfile >> name;
            loadfile >> lives;
            loadfile >> str;
            loadfile >> craft;
            loadfile >> fate;
            loadfile >> coins;
            loadfile.close();


    }

    */

    //getters and setters
    string Character::getName()
    {
        return name;
    }
    void Character::setName(string n)
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
        return str;
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


    // for effects

    void Character::setEffects(string s1, string s2, string s3)
    {
        effects[0] = s1;
        effects[1] = s2;
        effects[2] = s3;
    }

    string Character::getEffects(int i) //return effect i
    {
        return effects[i];
    }

    //location on map

    void Character::setLocation(int r, int p)
    {
        locRegion = r;
        locPlace = p;
    }

    int Character::getRegion()
    {
        return locRegion;
    }
    int Character::getPlace()
    {
        return locPlace;
    }

    void Character::move(int re, int loc)
    {
        locRegion =re;
        locPlace = loc;
    }


    //print

    void Character::display()
    {
        cout << "character: " << name <<endl;
        cout << "life " << lives <<endl;
        cout << "strength " << str <<endl;
        cout << "craft " << craft <<endl;
        cout << "fate " << fate <<endl;
        cout << "coins" << coins <<endl;

        for(int i=0; i<=2; i++)
        {
            cout << "effect " << i+1 << " "<< effects[i]<<endl;
        }

    }

    void Character::whereIam()
    {
        cout << name << " is located at:" <<endl;
        cout << "region: ";
        if (locRegion = 1)
        {
            cout << "outer"<<endl;
        }
        if (locRegion = 2)
        {
            cout << "inner"<<endl;
        }
        if (locRegion = 3)
        {
            cout << "center"<<endl;
        }
        cout << "tile: " << locPlace<<endl;
    }
