#ifndef B12_H
#define B12_H

#include <QWidget>
#include "../header.h"
#include "Abstract/pantallas.h"

namespace Ui {
class B12;
}

class B12 : public Pantallas
{
    Q_OBJECT
    
public:
    explicit B12(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem);
    ~B12();
    
private:
    Ui::B12 *ui;
    Header *header;
};

#endif // B12_H
