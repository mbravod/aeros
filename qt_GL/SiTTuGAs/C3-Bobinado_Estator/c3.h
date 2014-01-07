#ifndef C3_H
#define C3_H

#include <QWidget>
#include "Abstract/pantallas.h"
#include "../header.h"
namespace Ui {
class C3;
}

class C3 :  public Pantallas
{
    Q_OBJECT
    
public:
    explicit C3(SiTTuGAs *siTTuGAs,HTTPRequest *shrdMem);
    ~C3();
    
private:
    Ui::C3 *ui;
    Header *header;
};

#endif // C3_H
