#ifndef MENU_H
#define MENU_H

#include <QWidget>
#include <QString>
//Se eliminaron las directivas de los modelos a los que se hacia referencia con los botones del lado superior izquierdo
//del men� (que tambi�n se retiraron)
#include "Abstract/pantallas.h"
namespace Ui {
class Menu;
}

class Menu : public Pantallas
{
    Q_OBJECT

    public:
        explicit Menu(SiTTuGAs *siTTuGAs,HTTPRequest *shrdMem);
        ~Menu();

    signals:
        void ActivaInterfaz(int nmb);
        void ActivaVista(int id);

    private slots:
        void ActivaLabel(QString n);
        void sltBoton();


    private:
        Ui::Menu *ui;
};

#endif // MENU_H
