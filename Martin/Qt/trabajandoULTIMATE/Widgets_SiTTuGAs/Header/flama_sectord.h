#ifndef FLAMA_SECTORD_H
#define FLAMA_SECTORD_H


#include "../Base/Base.h"
#include <QString>
#include <QtSvg/QSvgRenderer>
#include <QPainter>
#include <QtSvg/QtSvg>
#include <QTimer>


class Flama_SectorD : public Base
{
    Q_OBJECT
    
public:
    Flama_SectorD(QWidget *parent = 0);
    ~Flama_SectorD();
    void setActivarD(bool opt);
    bool getActivarD()const{ return bolAnimado;}
    void setTransicionD(bool bolT);
    void initD();

    void cambioCapaD(int capa);
    void iniciaAnimacionD();
    void iniciaTransicionD();

public slots:
    void realizarAnimacionD();
    void realizarTransicionD();


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
