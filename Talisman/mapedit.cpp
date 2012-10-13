#include "mapedit.h"
#include "ui_mapedit.h"

MapEdit::MapEdit(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MapEdit)
{
    ui->setupUi(this);
}

MapEdit::~MapEdit()
{
    delete ui;
}
