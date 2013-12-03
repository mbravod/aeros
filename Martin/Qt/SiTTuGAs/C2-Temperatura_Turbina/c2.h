#ifndef C2_H
#define C2_H

#include <QWidget>
#include "Abstract/pantallas.h"
#include "../header.h"

namespace Ui {
class C2;
}

class C2 : public Pantallas
{
    Q_OBJECT
    
public:
    explicit C2(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem);
    ~C2();
    
private:
    Ui::C2 *ui;
    Header *header;
};

#endif // C2_H
