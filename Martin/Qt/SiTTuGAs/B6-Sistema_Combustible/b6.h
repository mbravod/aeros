#ifndef B6_H
#define B6_H

#include <QWidget>
#include "../header.h"
#include "Abstract/pantallas.h"

namespace Ui {
class B6;
}

class B6 : public Pantallas
{
    Q_OBJECT
    
    public:
        explicit B6(SiTTuGAs *siTTuGAs,HTTPRequest *shrdMem);
        ~B6();
    
    private:
        Ui::B6 *ui;
         Header *header;

};

#endif // B6_H
