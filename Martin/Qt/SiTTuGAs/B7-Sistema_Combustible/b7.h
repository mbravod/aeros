#ifndef B7_H
#define B7_H

#include <QWidget>
#include "../header.h"
#include "Abstract/pantallas.h"

namespace Ui {
class B7;
}

class B7 : public Pantallas
{
    Q_OBJECT
    
public:
    explicit B7(SiTTuGAs *siTTuGAs,HTTPRequest *shrdMem);
    ~B7();
    
private:
    Ui::B7 *ui;
    Header *header;
};

#endif // B7_H
