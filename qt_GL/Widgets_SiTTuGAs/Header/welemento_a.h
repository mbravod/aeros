#ifndef WELEMENTO_A_H
#define WELEMENTO_A_H

#include "Base.h"
#include <QString>
#include <QtSvg/QSvgRenderer>
#include <QPainter>
#include <QtSvg/QtSvg>
#include <QTimer>

class wElemento_A : public Base
{
    Q_OBJECT
    
public:
    wElemento_A(QWidget *parent = 0);
    ~wElemento_A();
    void setActivarTriangulo(bool opt);
    bool getActivarTriangulo()const{ return bolAnimado;}
    void setTransicionTriangulo(bool bolT);
    void initTriangulo();

    void cambioCapaTriangulo(int capa);
    void iniciaAnimacionTriangulo();
    void iniciaTransicionTriangulo();


public slots:
    void realizarAnimacionTriangulo();
    void realizarTransicionTriangulo();

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
