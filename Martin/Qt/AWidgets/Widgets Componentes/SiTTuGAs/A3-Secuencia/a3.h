#ifndef A3_H
#define A3_H

#include <QWidget>

#include "Abstract/pantallas.h"
#include "../header.h"
namespace Ui {
class A3;
}

class A3 : public Pantallas
{
    Q_OBJECT
    
public:
    explicit A3(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem);
    ~A3();
    
private:
    Ui::A3 *ui;
    Header *header;

};

#endif // A3_H
