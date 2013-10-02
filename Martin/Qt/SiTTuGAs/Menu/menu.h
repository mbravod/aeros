#ifndef MENU_H
#define MENU_H

#include <QWidget>
#include <QString>
//Se eliminaron las directivas de los modelos a los que se hacia referencia con los botones del lado superior izquierdo
//del menú (que también se retiraron)
#include "Abstract/pantallas.h"
namespace Ui {
class Menu;
}

class Menu : public Pantallas
{
    Q_OBJECT

    public:
        explicit Menu(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem);
        ~Menu();

    signals:
        void ActivaInterfaz(int nmb);

    private slots:
        void ActivaLabel(QString n);


    private:
        Ui::Menu *ui;
};

#endif // MENU_H
