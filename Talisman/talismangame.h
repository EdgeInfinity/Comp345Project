#ifndef TALISMANGAME_H
#define TALISMANGAME_H

#include <QMainWindow>

namespace Ui {
class TalismanGame;
}

class TalismanGame : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit TalismanGame(QWidget *parent = 0);
    ~TalismanGame();
    
private:
    Ui::TalismanGame *ui;
};

#endif // TALISMANGAME_H
