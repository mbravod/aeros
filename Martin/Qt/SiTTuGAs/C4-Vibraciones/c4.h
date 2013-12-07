#ifndef C4_H
#define C4_H

#include <QWidget>
#include "Abstract/pantallas.h"
#include "../header.h"

namespace Ui {
class C4;
}

class C4 : public Pantallas
{
    Q_OBJECT
    
public:
    explicit C4(SiTTuGAs *siTTuGAs,HTTPRequest *shrdMem);
    ~C4();
    
private:
    Ui::C4 *ui;
    Header *header;
};

#endif // C4_H
