#ifndef B9_H
#define B9_H

#include <QWidget>
#include "../header.h"
#include "Abstract/pantallas.h"


namespace Ui {
class B9;
}

class B9 : public Pantallas
{
    Q_OBJECT
    
public:
    explicit B9(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem);
    ~B9();
    
private:
    Ui::B9 *ui;
    Header *header;
};

#endif // B9_H
