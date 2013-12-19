#ifndef HMDIALOG_H
#define HMDIALOG_H

#include <QDebug>
#include <QDialog>
#include <QString>
#include <QButtonGroup>
#include "SharedMemory/httprequest.h"

/*
Local = 0
Remoto = 1;

Manual = 0
Auto = 1

Abierto/Encendido = 1
Cerrado/Apagado = 0;

Tipo 0 ->Abierto/Cerrado
Tipo 1 >>Encendio/Apagado


// Para a�adir un elemento de ventana auxiliar, seguir estos pasos

1. A�adir la cabecera del archivo en el .h donde se implementar�:
#include "HMDialog/hmdialog.cpp"

2. Crear un bot�n en la interfaz desde donde se abrir�...

3. Crear un slot en el c�digo fuente: este es donde radicar� el c�digo para abrir la ventana

4. Hacer la conexi�n del bot�n con el slot.

5. Invocar en el slot la creaci�n del dialogo de la siguiente forma:

    QString title = "Internos Motobomba X";
    // Rutina para abrir el di�logo auxiliar
    str.append(title);

    // PROTOTIPO
//    dialog = new HMDialog(
//		QWidget *parent = 0, -> Ventana padre... Por lo regular, "this"
//		QString title = "", -> Nombre de la variable principal (MOT o lo que sea)
//		QString varLocal = "", -> Puntero de la variable local/remota
//		QString varManA = "", -> Puntero de la variable manual/autom�tico
//		QString varEdo = "", -> Puntero de la variable abierto/cerrado
//		int tipo = 0, -> Tipo de variable: Tipo 0 abierto/cerrado; tipo 1 encendido/apagado
//		HTTPRequest *shrd = NULL); // instancia de la sharedMemory. Cada ventana tiene un objeto de este tip�: hay que mandarselo.
    // Se crea el dialogo
    dialog = new HMDialog(this, "MOT_6565", "p_MOT65a", "p_MOT65b", "p_MOT65c", 0, m_shrd);
    // Se le pone t�tulo al dialogo
    dialog->setWindowTitle(str);
    // Abre el dialogo
    dialog->open();

6 Y ya...

*/

namespace Ui {
class HMDialog;
}

class HMDialog : public QDialog
{
    Q_OBJECT

    public:
    explicit HMDialog(QWidget *parent = 0, QString title = "", QString varLocal = "", QString varManA = "", QString varEdo = "", int tipo = 0, HTTPRequest *shrd = NULL);
        ~HMDialog();

        // M�todos p�blicos
        void setVar(QString id);
        void SeeFrame(int n);
        void SetPaso();

    private:
        Ui::HMDialog *ui;

        // Strings de t�tulo
        QString strLR;
        QString strMA;
        QString strOP;

        // Banderas de estado
        bool paso1;
        bool paso2;
        bool paso3;

        // Variables propias
        QString varID;
        int tipo;
        HTTPRequest *shrd;
        int indexLocal;
        int indexManual;
        int indexEdo;

        // Auxiliares
        QButtonGroup *btnsLR;
        QButtonGroup *btnsMA;
        QButtonGroup *btnsEDO_1;
        QButtonGroup *btnsEDO_2;

    private slots:
        void ShowLR();
        void ShowMA();
        void ShowEDO();

        void SetLocal(bool e);
        void SetManual(bool e);
        void SetOpen(bool e);

        void SetRemoto(bool e);
        void SetAuto(bool e);
        void SetClose(bool e);
};

#endif // HMDIALOG_H
