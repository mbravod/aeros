#ifndef C1_H
#define C1_H

#include <QWidget>
#include "Abstract/pantallas.h"
#include "../header.h"

namespace Ui {
class C1;
}

class C1 : public Pantallas
{
    Q_OBJECT
    
public:
    explicit C1(SiTTuGAs *siTTuGAs,HTTPRequest *shrdMem);
    ~C1();
    
private:
    Ui::C1 *ui;
    Header *header;
};

#endif // C1_H
