#ifndef F2_H
#define F2_H

#include <QWidget>
#include "Abstract/pantallas.h"
#include "../header.h"
namespace Ui {
class F2;
}

class F2 : public Pantallas
{
    Q_OBJECT
    
public:
    explicit F2(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem);
    ~F2();
    
private:
    Ui::F2 *ui;
    Header *header;
};

#endif // F2_H
