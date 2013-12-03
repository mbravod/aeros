#ifndef C5_H
#define C5_H

#include <QWidget>
#include "Abstract/pantallas.h"
#include "../header.h"

namespace Ui {
class C5;
}

class C5 : public Pantallas
{
    Q_OBJECT
    
public:
    explicit C5(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem);
    ~C5();
    
private:
    Ui::C5 *ui;
    Header *header;
};

#endif // C5_H
