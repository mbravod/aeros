#ifndef D2_H
#define D2_H

#include <QWidget>

#include "Abstract/pantallas.h"
#include "../header.h"

namespace Ui {
class D2;
}

class D2 : public Pantallas
{
    Q_OBJECT
    
public:
    explicit D2(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem);
    ~D2();
    
private:
    Ui::D2 *ui;
    Header *header;
};

#endif // D2_H
