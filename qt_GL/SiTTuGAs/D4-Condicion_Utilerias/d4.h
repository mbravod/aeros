#ifndef D4_H
#define D4_H

#include <QWidget>
#include "../Abstract/pantallas.h"
#include "../header.h"
namespace Ui {
class D4;
}

class D4 : public Pantallas
{
    Q_OBJECT
    
public:
    explicit D4(SiTTuGAs *siTTuGAs,HTTPRequest *shrdMem);
    ~D4();
    
private:
    Ui::D4 *ui;
    Header *header;

};

#endif // D4_H
