#ifndef FLAMA_SECTORF_H
#define FLAMA_SECTORF_H

#include "../Base/Base.h"
#include <QString>
#include <QtSvg/QSvgRenderer>
#include <QPainter>
#include <QtSvg/QtSvg>
#include <QTimer>


class Flama_SectorF : public Base
{
    Q_OBJECT
    
public:
    Flama_SectorF(QWidget *parent = 0);
    ~Flama_SectorF();
    void setActivarF(bool opt);
    bool getActivarF()const{ return bolAnimado;}
    void setTransicionF(bool bolT);
    void initF();

    void cambioCapaF(int capa);
    void iniciaAnimacionF();
    void iniciaTransicionF();

public slots:
    void realizarAnimacionF();
    void realizarTransicionF();

private:
       QTimer *timerAnimado;
       QTimer *timerTransicion;
       bool cambio;
       bool cambioT;
       bool inicio;
       QString capaActual;
       bool bolAnimado;
       bool bolTransicion;
       int contadorAnimado;
       int contadorTransicion;
       //Variables para la presentacion del widget en pantalla
       QSvgRenderer * m_SvGrenderer;
       bool flag;
       void loadSvgFile(QString filePath);

protected:
    void Update();
    void wPaintEvent();

};

#endif
