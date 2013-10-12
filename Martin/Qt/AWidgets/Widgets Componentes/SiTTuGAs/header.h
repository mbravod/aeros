#ifndef HEADER_H
#define HEADER_H

#include <QWidget>

namespace Ui {
class Header;
}

class Header : public QWidget
{
    Q_OBJECT
    
    public:
        explicit Header(QWidget *parent = 0);
        ~Header();

        static QString Regulador;
        static QString Modo_Motor;
        static QString VelN25;
        static QString VelN25U;
        static QString VelNSD;
        static QString VelNSDU;
        static QString Potencia;
        static QString PotenciaU;
        static QString Modo_Quemador;
    
    private:
        Ui::Header *ui;
};

#endif // HEADER_H
