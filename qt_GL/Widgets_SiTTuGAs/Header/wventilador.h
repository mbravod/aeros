#ifndef WVENTILADOR_H
#define WVENTILADOR_H


#include "Base.h"
#include <QString>
#include <QtSvg/QSvgRenderer>
#include <QPainter>
#include <QtSvg/QtSvg>
#include <QTimer>

class wVentilador : public Base
{
    Q_OBJECT

public:
    wVentilador(QWidget *parent = 0);
    ~wVentilador();
    void setActivarV(bool opt);
    bool getActivarV()const{ return bolAnimado;}
    void setTransicionV(bool bolT);
    void initV();

    void cambioCapaV(int capa);
    void iniciaAnimacionV();
    void iniciaTransicionV();

public slots:
    void realizarAnimacionV();
    void realizarTransicionV();

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
