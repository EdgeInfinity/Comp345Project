#ifndef CHARACTER_H
#define CHARACTER_H


#include<string>

//the character will track it's own location on the map

class Character
{
public:
    Character();
    //Character(std::string fname);
    Character(std::string na,int li,int st, int cr, int fa, int co);

    //saving or opening files for characters
    //void saveFile();
    //void loadFile();


    //getters and setters
    std::string getName();
    void setName(std::string);
    int getLives();
    void setLives(int);
    int getStr();
    void setStr(int);
    int getCraft();
    void setCraft(int);
    int getFate();
    void setFate(int);
    int getCoins();
    void setCoins(int);

    void setEffects(std::string,std::string,std::string);
    std::string getEffects(int); //returns effect of the passed int

    void setLocation(int, int);
    int getRegion();
    int getPlace();

    //print for consol

    void display();



    std::string name;
    int lives;
    int str;
    int craft;
    int fate;
    int coins;

    int alignment; //0= evil, 1= neutral, 2 = good

    std::string effects [3];

    int locRegion;//region
    int locPlace;//map piece

};



#endif // CHARACTER_H
