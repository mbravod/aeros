#ifndef BITACORAI_H
#define BITACORAI_H

#include <QDialog>
#include <QString>

namespace Ui
{
    class BitacoraI;
}

class BitacoraI : public QDialog
{
    Q_OBJECT

    public:
        BitacoraI(QWidget *parent, QString user);
        ~BitacoraI();
        static QString ruta;
        QString user;
    private:
        Ui::BitacoraI *ui;
        QStringList rFrStringList(QString file);

        void showHistorial();
    private slots:
        void showBitacora(QString sistema);
};

#endif // BITACORAI_H
