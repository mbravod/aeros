#ifndef A6_H
#define A6_H

#include <QWidget>
#include "Abstract/pantallas.h"
#include "../header.h"


namespace Ui {
class A6;
}

class A6 : public Pantallas
{
    Q_OBJECT
    
public:
    explicit A6(SiTTuGAs *siTTuGAs,HTTPRequest *shrdMem);
    ~A6();
    
private:
    Ui::A6 *ui;
    Header *header;
};

#endif // A6_H
