#ifndef D8_H
#define D8_H

#include <QWidget>
#include "../Abstract/pantallas.h"
#include "../header.h"

namespace Ui {
    class D8;
}

class D8 : public Pantallas
{
    Q_OBJECT

public:
    explicit D8(SiTTuGAs *siTTuGAs,HTTPRequest *shrdMem);
    ~D8();

private:
    Ui::D8 *ui;
    Header *header;

};

#endif // D8_H
