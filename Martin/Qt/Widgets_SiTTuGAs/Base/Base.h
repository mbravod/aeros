#ifndef BASE_H
#define BASE_H

#include <QWidget>
//Posiblemente cambiar esta referencia una vez que se defina el nombre
#include "../SharedMemory/httprequest.h"

class Base : public QWidget
{
    Q_OBJECT
    //Macro para declarar propiedades de la clase inherentes a QOBJECT()
    Q_PROPERTY(QString id READ getId WRITE setId )
    Q_PROPERTY(int tipo READ getTipo WRITE setTipo)
    //Q_PROPERTY(int indice READ getIndice WRITE setIndice)
    Q_PROPERTY(int value READ getValue WRITE setValue)
    Q_PROPERTY (bool isUpdateable READ isUpdateable WRITE setUpdateable)


public:
    Base(QWidget *parent = 0);
    //Metodos setters y getters
    QString getId();
    int getTipo();
    int getIndice();
    int getValue();
    void setId(QString id);
    void setIndice(int indice);
    void setTipo(int tipo);
    void setValue(int value);
    //Metodo para inicializar la sharedMemory
    void setShrdMem(HTTPRequest *s);
    //Metodo para acceder a los elementos de la SharedMemory
    bool isUpdateable()const{return m_isUpdateable;}
    void setUpdateable(bool u);
signals:
    
public slots:

protected:
    //Variables protegidas para la comunicacion con la memoria compartida
    QString id;
    int tipo;
    int indice;
    bool m_isUpdateable;
    int value;
    HTTPRequest *m_ShrdMem;

    //Metodos para actualizar y presetar elementos en pantalla
    void paintEvent(QPaintEvent *);
    virtual void Update();
    virtual void wPaintEvent();

};

#endif // BASE_H
