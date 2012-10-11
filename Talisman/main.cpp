#include <QtGui/QApplication>
#include "talismangame.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TalismanGame w;
    w.show();
    
    return a.exec();
}
