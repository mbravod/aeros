#ifndef D9_H
#define D9_H

#include <QWidget>
#include "Abstract/pantallas.h"
#include "../header.h"


namespace Ui {
class D9;
}

class D9 : public Pantallas
{
    Q_OBJECT
    
public:
    explicit D9(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem);
    ~D9();
    
private:
    Ui::D9 *ui;
    Header *header;
};

#endif // D9_H
