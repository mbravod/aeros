#ifndef SISTEMA_AIRE_INSTRUMENTOS_H
#define SISTEMA_AIRE_INSTRUMENTOS_H

#include <QWidget>
#include <QTimer>
#include <QFile>
#include <QtCore/qmath.h>

namespace Ui {
    class Sistema_Aire_Instrumentos;
}

class Sistema_Aire_Instrumentos : public QWidget
{
    Q_OBJECT

public:
    explicit Sistema_Aire_Instrumentos(QWidget *parent = 0);
    ~Sistema_Aire_Instrumentos();

    QTimer *Timer;

    double PotCompresor(int Segnal,double ValMax, double CI, double Tao, int Falla);
    double TempOutAire(double WComp, double FCp, double Tin, double FCvTao, double CI, int Falla);
    double MasaTanque(double qinAire, double qoutAire, double DensidadAire, double CI);


public slots:
    int Encendido();
    int Apagado();
    int On_Off_Compresor();
    void Modelo();

private:
    Ui::Sistema_Aire_Instrumentos *ui;
    FILE *Instrumentos;

    int OnOffCompresor;
    double PotenciaCompresor;
    double PotMaxCompresor;
    double TempAireCompresor;
    double TempAireTanque;
    double PresionTanque;
    double NivelSecador;
    double FlujoInAire;
    double FlujoOutAire;
    double FlujoCompresor;
    double FlujoOutSecador;
    double R_Aire;
    double Masa_Tanque;
    double VolumenTanque;
    double HumedadEspecifica;
    double EficienciaSecador;
    double DensidadAgua;
    double DensidadAire;
    double TaoCompresor;
    double TempAmbiente;
    double CpAire;
    double CvAire;
    double PresionAmbiente;
    double MasaCompresor;
    double VolCompresor;
    double PresionOutComp;
    double PresionOutCompC;
    double CIPotComp;
    double CITempAireComp;
    double CIMasaTanque;
    double CIPresionTanque;
    double CIDensidadAire;
    double Tiempo;

    int FallaCompresor;
};

#endif // SISTEMA_AIRE_INSTRUMENTOS_H
