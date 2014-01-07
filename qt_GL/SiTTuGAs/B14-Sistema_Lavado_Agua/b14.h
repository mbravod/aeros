#ifndef B14_H
#define B14_H

#include <QWidget>
#include "lavado_compresor.h"
#include "../header.h"
#include "Abstract/pantallas.h"

namespace Ui {
class B14;
}

class B14 : public Pantallas
{
    Q_OBJECT
    
    public:
        explicit B14(SiTTuGAs *siTTuGAs,HTTPRequest *shrdMem);
        ~B14();
    
    private:
        Lavado_Compresor *modelo;
        Ui::B14 *ui;
        QPixmap *mbv;
        QPixmap *mbr;
        QPixmap *val1V;
        QPixmap *val1R;
        QPixmap *val2V;
        QPixmap *val2R;
        QPixmap *val3V;
        QPixmap *val4R;
        Header *header;


    private slots:
        void NivelT(int);
        void Val01(bool);
        void Val02(bool);
        void Val03(bool);
        void Val04(bool);
        void Tiempo(double);
        void EjecutaModelo();

};

#endif // B14_H
