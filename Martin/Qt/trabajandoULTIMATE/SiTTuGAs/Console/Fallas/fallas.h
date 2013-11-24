#ifndef FALLAS_H
#define FALLAS_H

#include <QtGui>
#include <QDialog>
#include "SharedMemory/shrdmem.h"

namespace Ui
{
    class Fallas;
}

class Fallas : public QDialog
{
    Q_OBJECT
    private:
        Ui::Fallas *ui;
        // Atributos privados de la clase
        int renglon;
        int Row;                                                // Renglon seleccionada
        int Column;                                             // Columba seleccionada
        int desp;                                               // Tab desplegada en pantalla
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
        ShrdMem *shrdMem;                                       // Puntero aSharedMemory
        QStringList fallas_act;                                 // Lista de Fallas actuales
        QStringList NamesList_act;                              // Lista de los nombres de las Fallas actuales
        QStringList Descrip_act;                                // Lista de las descripciones de las Fallas Actuales
        QStringList Tipo_act;                                   // Lista de los tipos de las Fallas actuales
        QStringList ValN_act;                                   // Lista de los valores normales de las Fallas
        QStringList ValF_act;                                   // Lista de los valores de falla maxima de las Fallas
        int ptrsVars[2000];                                     // Punteros de las variables activas
        //-----
        QStringList fallas_all;                                 // Lista de todas las Fallas
        QStringList NamesList_all;                              // Lista de los nombres de todas las Fallas
        QStringList Descrip_all;                                // Lista de las descripciones de tods las Fallas
        QStringList Tipo_all;                                   // Lista de los tipos de todas las Fallas actuales
        QStringList ValN_all;                                   // Lista de los valores normales de todas las Fallas
        QStringList ValF_all;                                   // Lista de los valores de falla maxima de todas las Fallas
        QStringList Sistem_all;                                 // Lista de los sistemas de todas las fallas
        int ptrsArr[2000];                                      // Punteros de todas las variables
        //--------------------------
        bool actualizar;                                        // Bandera para actualizar las fallas
        bool actualizar_all;

        // Métodos privados de la clase
        void loadSyst();                                        // Carga los datos del sistema
        QStringList rFrStringList(QString file);                // Obtiene los datos de un archivo
        int buscaVars(QString name, int lista);           // Busca los valores complementarios
        bool verificaC(QString str1, QString str2);             // Comparador de cadenas
        QString ftoa(float f);                                  // Convierte un flotante en cadena
        QString ftoa(int i);                                    // Convierte un entero en cadena
        QString getPercent(float vi, float vm, float va);       // Obtiene el porcentaje del valor
        void clearscr();                                        // Limpia los cuadros de texto
        void showAll();                                         // Mostar todas las fallas
        bool existeVar(QString name);
        void reset();
    public:
        // Atributos públicos de la clase
        Fallas(QWidget *parent, QString mod);                   // Constructor de la clase
        ~Fallas();                                              // Destructor de la clase
    protected:
        void changeEvent(QEvent *e);
    public slots:
        void showVars(QString sistema);
        void dialValChanged(int ival);
        void textValChanged(QString sval);
        void selTab(int desp);
        void anuncmnt(QString strings);
        void actualizaVars();                                   // Actualización de variables
        void actualizaVarsAll();                                // Actualización de variables
        void showVartoChange(int row,int column);               // Mostrar la variable a cambiar
        void showVartoReset(int row,int column);                // Mostrar la variable a cambiar
        void changeVal();                                       // Función para cambiar valores
        void resetVal();                                        // Función para resetear valores
        void buscarVariable();                                  // Función para resetear las variables
        void selectedItem(int row, int col);                    // Función para seleccionar elementos
        void resetAllVars();                                    // Función para resetear todas las fallas
};

#endif // FALLAS_H
