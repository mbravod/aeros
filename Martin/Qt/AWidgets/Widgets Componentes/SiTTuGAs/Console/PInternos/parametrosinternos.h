#ifndef PARAMETROSINTERNOS_H
#define PARAMETROSINTERNOS_H

#include <QtGui>
#include <QDialog>
#include "SharedMemory/shrdmem.h"

namespace Ui
{
    class ParametrosInternos;
}

class ParametrosInternos : public QDialog
{
    Q_OBJECT
    private:
        Ui::ParametrosInternos *ui;
        // Atributos privados de la clase
        int renglon;
        int Row;                                                // Renglon seleccionada
        int Column;                                             // Columba seleccionada
        int modSld;                                             // Modificador del Slider
        int index;
        //----------------------------
        QString ruta;
        QString mod;
        QString nmb_fil;
        QString ptr_name;                                       // Nombre de la variable seleccionada
        int ptr_pos;                                            // Puntero de la variable seleccionada
        QString ptr_tipo;                                       // Tipo de la variable seleccionada
        QString ptr_valNorm;                                    // Valor normal de la variable seleccionada
        QString ptr_valFail;                                    // Valor con falla de la variable seleccionada
        //----------------------------
        ShrdMem *m_shrdMem;                                       // Puntero aSharedMemory
        QStringList fallas_act;                                 // Lista de Fallas actuales
        QStringList NamesList_act;                              // Lista de los nombres de las Fallas actuales
        QStringList Descrip_act;                                // Lista de las descripciones de las Fallas Actuales
        QStringList Tipo_act;                                   // Lista de los tipos de las Fallas actuales
        QStringList ValN_act;                                   // Lista de los valores normales de las Fallas
        QStringList ValF_act;                                   // Lista de los valores de falla maxima de las Fallas
        int ptrsVars[2000];                                     // Punteros de las variables activas
        //--------------------------
        bool actualizar;                                        // Bandera para actualizar las fallas

        // Métodos privados de la clase
        void loadSyst();                                        // Carga los datos del sistema
        QStringList rFrStringList(QString file);                // Obtiene los datos de un archivo
        int buscaVars(QString name);                 // Busca los valores complementarios
        bool verificaC(QString str1, QString str2);             // Comparador de cadenas
        QString ftoa(float f);                                  // Convierte un flotante en cadena
        QString ftoa(int i);                                    // Convierte un entero en cadena
        QString getPercent(float vi, float vm, float va);       // Obtiene el porcentaje del valor
        void clearscr();                                        // Limpia los cuadros de texto
    public:
        // Atributos públicos de la clase
        ParametrosInternos(QWidget *parent, QString mod);
        ~ParametrosInternos();
    protected:
        void changeEvent(QEvent *e);
    public slots:
        void showVars(QString sistema);
        void dialValChanged(int ival);
        void textValChanged(QString sval);
        void anuncmnt(QString strings);
        void actualizaVars();                                   // Actualización de variables
        void showVartoChange(int row,int column);               // Mostrar la variable a cambiar
        void changeVal();                                       // Función para cambiar valores
        void resetVal();
        void buscarVariable();
        void selectedItem(int row, int col);
};

#endif // PARAMETROSINTERNOS_H
