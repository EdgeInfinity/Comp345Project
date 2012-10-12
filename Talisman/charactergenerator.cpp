#include "charactergenerator.h"
#include "ui_charactergenerator.h"

CharacterGenerator::CharacterGenerator(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CharacterGenerator)
{
    ui->setupUi(this);
}

CharacterGenerator::~CharacterGenerator()
{
    delete ui;
}
