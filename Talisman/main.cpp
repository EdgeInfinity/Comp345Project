#include <QtGui/QApplication>
#include "talismangame.h"
#include "valkyrie.h"
#include "fighter.h"

int main()
{


Fighter War;
Valkyrie Lenneth;

War.display();
Lenneth.display();

system ("PAUSE");

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
