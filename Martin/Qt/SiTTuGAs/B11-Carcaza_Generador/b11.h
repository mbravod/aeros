#ifndef B11_H
#define B11_H

#include <QWidget>
#include <QString>
#include "Abstract/pantallas.h"
#include "../header.h"

namespace Ui {
    class B11;
}

class B11 : public Pantallas
{
    Q_OBJECT

public:
    explicit B11(SiTTuGAs *siTTuGAs,HTTPRequest *shrdMem);
    ~B11();
    void setLbTem_9(QString s);
    void setLbTem_1(QString s);
    void setLbTem_2(QString s);
    void setLbTem_3(QString s);
    void setLbTem_4(QString s);
    void setLbTem_5(QString s);
    void setLbTem_6(QString s);
    void setLbTem_7(QString s);
    void setLbTem_8(QString s);
    void setLbTem_10(QString s);
    void setLbUniT3(QString s);
    void setLbGenT(QString s);
    void setLbGen_1(QString s);
    void setLbGenU_1(QString s);
    void setLbGen_2(QString s);
    void setLbGenU_2(QString s);
    void setLbGen_3(QString s);
    void setLbGenU_3(QString s);
    void setLbVenGEN(QString s);
    void setLbVenESP_1(QString s);
    void setLbVenSER_1(QString s);
    void setLbVen_1(QString s);
    void setLbSER_1(QString s);
    void setLbVEnU_2(QString s);
    void setLbSERU_1(QString s);
    void setLbGenT_3(QString s);
private:
    Ui::B11 *ui;
    Header *header;
};

#endif // B11_H
