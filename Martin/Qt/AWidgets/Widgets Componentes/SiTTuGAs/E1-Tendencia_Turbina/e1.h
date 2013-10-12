#ifndef E1_H
#define E1_H

#include <QWidget>
#include "Abstract/pantallas.h"

namespace Ui {
class E1;
}

class E1 :  public Pantallas
{
    Q_OBJECT
    
public:
    explicit E1(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem);
    ~E1();
    
private:
    Ui::E1 *ui;
};

#endif // E1_H
