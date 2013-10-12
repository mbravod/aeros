#ifndef ZONAALIM_H
#define ZONAALIM_H

#include <QWidget>
#include "Abstract/pantallas.h"


namespace Ui {
class zonaAlim;
}

class N1 : public Pantallas
{
    Q_OBJECT
    
public:
    explicit N1(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem);
    ~N1();
    
private:
    Ui::zonaAlim *ui;
};

#endif // ZONAALIM_H
