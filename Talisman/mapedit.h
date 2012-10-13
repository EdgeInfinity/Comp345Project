#ifndef MAPEDIT_H
#define MAPEDIT_H

#include <QWidget>

namespace Ui {
class MapEdit;
}

class MapEdit : public QWidget
{
    Q_OBJECT
    
public:
    explicit MapEdit(QWidget *parent = 0);
    ~MapEdit();
    
private:
    Ui::MapEdit *ui;
};

#endif // MAPEDIT_H
