#ifndef D6_H
#define D6_H

#include <QWidget>

#include "Abstract/pantallas.h"

namespace Ui {
class D6;
}

class D6 : public Pantallas
{
    Q_OBJECT
    
public:
    explicit D6(SiTTuGAs *siTTuGAs,HTTPRequest *shrdMem);
    ~D6();
    
private:
    Ui::D6 *ui;
};

#endif // D6_H
