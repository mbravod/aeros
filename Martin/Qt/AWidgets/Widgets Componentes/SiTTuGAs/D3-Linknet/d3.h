#ifndef D3_H
#define D3_H

#include <QWidget>
#include "Abstract/pantallas.h"
#include "../header.h"


namespace Ui {
class D3;
}

class D3 : public Pantallas
{
    Q_OBJECT
    
public:
    explicit D3(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem);
    ~D3();
    
private:
    Ui::D3 *ui;
    Header *header;
};

#endif // D3_H
