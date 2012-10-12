#ifndef CHARACTERGENERATOR_H
#define CHARACTERGENERATOR_H

#include <QWidget>
#include "character.h"

namespace Ui {
class CharacterGenerator;
}

class CharacterGenerator : public QWidget
{
    Q_OBJECT
    
public:
    explicit CharacterGenerator(QWidget *parent = 0);
    ~CharacterGenerator();
    
private:
    Ui::CharacterGenerator *ui;
};

#endif // CHARACTERGENERATOR_H
