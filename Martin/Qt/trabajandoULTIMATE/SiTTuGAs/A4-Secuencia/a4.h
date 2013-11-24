#ifndef A4_H
#define A4_H

#include <QWidget>

#include "Abstract/pantallas.h"
#include "../header.h"

namespace Ui {
class A4;
}

class A4 : public Pantallas
{
    Q_OBJECT
    
public:
    explicit A4(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem);
    ~A4();
    
private:
    Ui::A4 *ui;
    Header *header;

};

#endif // A4_H
