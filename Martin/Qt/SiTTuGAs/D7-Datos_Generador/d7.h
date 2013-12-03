#ifndef D7_H
#define D7_H

#include <QWidget>

#include "Abstract/pantallas.h"

namespace Ui {
class D7;
}

class D7 : public Pantallas
{
    Q_OBJECT
    
public:
    explicit D7(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem);
    ~D7();
    
private:
    Ui::D7 *ui;
};

#endif // D7_H
