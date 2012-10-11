#include "talismangame.h"
#include "ui_talismangame.h"

TalismanGame::TalismanGame(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TalismanGame)
{
    ui->setupUi(this);
}

TalismanGame::~TalismanGame()
{
    delete ui;
}
