#ifndef B5_H
#define B5_H

#include <QWidget>
#include "Abstract/pantallas.h"
#include "../header.h"

namespace Ui {
class B5;
}

class B5 : public Pantallas
{
    Q_OBJECT
    
public:
    explicit B5(SiTTuGAs *siTTuGAs,HTTPRequest *shrdMem);
    ~B5();
    
private:
    Ui::B5 *ui;
    Header *header;
};

#endif // B5_H
