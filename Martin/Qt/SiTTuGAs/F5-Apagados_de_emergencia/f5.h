#ifndef F5_H
#define F5_H

#include <QWidget>
#include "Abstract/pantallas.h"
#include "../header.h"
namespace Ui {
class F5;
}

class F5 : public Pantallas
{
    Q_OBJECT
    
public:
    explicit F5(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem);
    ~F5();
    
private:
    Ui::F5 *ui;
    Header *header;
};

#endif // F5_H
