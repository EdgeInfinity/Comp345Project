//#include <QtGui/QApplication>
#include <iostream>
#include <string>

//#include "talismangame.h"
#include "valkyrie.h"
#include "fighter.h"
#include "map.h"





using namespace std;

int main()
{


Fighter War;
Valkyrie Lenneth;

cout << "characters generated"<<endl;

War.display();
cout << endl;
Lenneth.display();

bool inp = false;
int hor = 0;
int ver= 0;

//for horizontal
do
{
cout << "\nPlease input map horizontal size: ";
cin >> hor;
if ((hor <= 10)||(hor >= 3))
{
    inp = true;
}
else
{
    cout << "\nPlease input an integer value less than 10 and greater than 0"<<endl;
}
}while(inp == false);

//for vertical
do
{
cout << "\nPlease input map vertical size: ";
cin >> ver;
if ((ver <= 10)||(ver >= 3))
{
    inp = true;
}
else
{
    cout << "\nPlease input an integer value less than 10 and greater than 0"<<endl;
}
}while(inp == false);

//generate map

Map game =Map(hor,ver);
War.move(1,0);
Lenneth.move(1,0);

cout << "map generated;" <<endl;

bool vchoice1 = false;
bool vchoice2 = false;
bool vchoice3 = false;
bool menu = false;
do{
    int ch1 =0;
    int ch2 = 0;
    int ch3 =0;
    do{

        War.whereIam();
        Lenneth.whereIam();

        cout << "Select a Character to move:" << endl;
        cout << "1. " << War.getName() << endl;
        cout << "2. " << Lenneth.getName() << endl;
        cin >> ch1;
        if ((ch1==1)||(ch1==2))
        {
            vchoice1 = true;
        }
        else
        {
        cout << "invalid choice" <<endl;
        }



    }while(vchoice1==false);
    do{

        cout << "Please Select a region to move to: " << "\n"
            << "1. Outer \n"
            << "2. Inner \n"
            << "3. Center \n" <<endl;
        cin >> ch2;
        if ((ch2 != 1)||(ch2 != 2)||(ch2 != 3))
        {
            cout << "invalid choice" <<endl;
        }
        else
        {
            vchoice2 = true;
        }
    }while(vchoice2 ==false);

    do{

        cout << "Please enter a Position: " << endl;

        if (ch2==1)
        {
            cout << "1-" << (2*(hor+ver)+4)<<endl;
            cin >> ch3;
            if ((ch3>(2*(hor+ver)+4))||(ch3<1))
            {
                cout << "invalid input"<<endl;
            }
            else
            {
                vchoice3 = true;
            }

        }
        if (ch2==2)
        {
            cout << "1-" << (2*(hor+ver))<<endl;
            cin >> ch3;
            if ((ch3>(2*(hor+ver)))||(ch3<1))
            {
                cout << "invalid input"<<endl;
            }
            else
            {
                vchoice3 = true;
            }

        }
        if (ch2==3)
        {
            cout << "1-" << ((hor*ver))<<endl;
            cin >> ch3;
            if ((ch3>((hor*ver)))||(ch3<1))
            {
                cout << "invalid input"<<endl;
            }
            else
            {
                vchoice3 = true;
            }

        }

    }while(vchoice3 ==false);

    if (ch1 ==1)
    {
        War.move(ch2,ch3);
    }
    if (ch1 ==2)
    {
        Lenneth.move(ch2,ch3);
    }

}while (menu == false);


return 0;
}

/*
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TalismanGame w;
    w.show();
    
    return a.exec();
}
*/
