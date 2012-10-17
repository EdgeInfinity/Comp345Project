#include <QtGui/QApplication>
#include "talismangame.h"
#include "valkyrie.h"
#include "fighter.h"
#include "map.h"

int main()
{


Fighter War;
Valkyrie Lenneth;

cout << "characters generated"<<endl;

War.display();
cout << endl;
Lenneth.display();

bool inp = false;
int hor;
int ver;

//for horizontal
do
{
cout << "\nPlease input map horizontal size: ";
cin >> hor;
if ((hor<=10)||(hor<=3))
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
if ((ver<=10)||(ver<=3))
{
    inp = true;
}
else
{
    cout << "\nPlease input an integer value less than 10 and greater than 0"<<endl;
}
}while(inp == false);

//generate map

Map game = new Map(hor,ver);
War.move(1,0);
Lenneth.move(1,0);

cout << "map generated;" <<endl;


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
