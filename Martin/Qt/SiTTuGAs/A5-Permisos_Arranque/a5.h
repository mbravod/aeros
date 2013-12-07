#ifndef A5_H
#define A5_H

#include <QWidget>
#include "Abstract/pantallas.h"
#include "../header.h"


namespace Ui {
class A5;
}

class A5 : public Pantallas
{
    Q_OBJECT
    
public:
    explicit A5(SiTTuGAs *siTTuGAs,HTTPRequest *shrdMem);
    ~A5();
    
private:
    Ui::A5 *ui;
    Header *header;
};

#endif // A5_H
