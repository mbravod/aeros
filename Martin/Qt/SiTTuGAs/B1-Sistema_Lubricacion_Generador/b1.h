#ifndef B1_H
#define B1_H

#include <QWidget>
#include "../header.h"
#include "Abstract/pantallas.h"
#include "QDebug"

namespace Ui {
class B1;
}

class B1 : public Pantallas
{
    Q_OBJECT
    
public:
    explicit B1(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem);
    ~B1();
    
private:
    Ui::B1 *ui;
    Header *header;
};

#endif // B1_H
