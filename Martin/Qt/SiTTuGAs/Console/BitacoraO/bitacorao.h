#ifndef BITACORAO_H
#define BITACORAO_H

#include <QDialog>
#include <QString>

#include "Console/IConsole/console.h"

namespace Ui
{
    class BitacoraO;
}

class BitacoraO : public QDialog
{
    Q_OBJECT

    public:
        BitacoraO(Console *parent, QString user);
        ~BitacoraO();
        QString user;
        static QString ruta;
    private:
        Ui::BitacoraO *ui;
        //-------------------
        int indexOP;
        int indexBTC;
        QString ipSRV;
        QString ipIns;
        QString ipAct;
        QStringList ipsOp;
        //-------------------
        bool opOK;
        bool histOK;
        //-------------------
        void showOperadores();
        QStringList rFrStringList(QString file);
        Console *c;
    private slots:
        void selectOperador();
        void selectBitacora();
        void evtHst(int i);
        void evtOpr(int i);
};

#endif // BITACORAO_H
