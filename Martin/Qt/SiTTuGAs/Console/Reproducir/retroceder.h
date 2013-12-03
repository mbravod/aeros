#ifndef RETROCEDER_H
#define RETROCEDER_H
#include <QWidget>
#include <QDialog>
#include <QMainWindow>
//#include "coins.h"

#include "SharedMemory/shrdmem.h"
#include "Console/CIClass/cin.h"


namespace Ui {
    class Retroceder;
}

class Retroceder : public QMainWindow
{
    Q_OBJECT

public:
    explicit Retroceder(QWidget *parent = 0);
    ~Retroceder();
    Ui::Retroceder *ui;
private:
     ShrdMem *shrdMem;
     CIn *cIn;
     char FILESVIRTUALTABLE[1024*20][32];
     QList<char*> backs;
     char backupfile[1024][32];
     // START Indicadores para el tiempo de retroceso-- this values are gonna be assigned to QLabel
     int horas;
     float h;
     float m;
     int minutos;
     float seconds;
     void inputSeconds(int secs);
     //END Indicadores para el tiempo de retroceso
     int xu;
     int time;
     int new_k;
     int old_k;
     int flag;
     int segundos;
     int time_sim;
     QString ftoa(int f);

 private slots:
     void sliderValChanged(int ival);
     void loadCIback();
     void loadedOK();
     void rewind();
      void stop();
  public slots:
      void storeTimer(int segundos);
      void Prueba();
      void cerrar();
};

#endif // RETROCEDER_H
