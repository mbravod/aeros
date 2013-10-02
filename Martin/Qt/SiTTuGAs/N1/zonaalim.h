#ifndef ZONAALIM_H
#define ZONAALIM_H

#include <QWidget>
#include "Abstract/pantallas.h"


namespace Ui {
class zonaAlim;
}

class zonaAlim : public Pantallas
{
    Q_OBJECT
    
public:
    explicit zonaAlim(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem);
    ~zonaAlim();
    
private:
    Ui::zonaAlim *ui;
};

#endif // ZONAALIM_H
