#ifndef AWIDGET_H
#define AWIDGET_H

#include <QWidget>

#include "../SharedMemory/shrdmem.h"
//#include "SharedMemory/shrdmem.h"   //or "shrdmem.h"
//#include "shrdmem.h"

class AWidget : public QWidget
{
    Q_OBJECT
    Q_PROPERTY (int intID READ intID WRITE setIntID)
    Q_PROPERTY (QString strID READ strID WRITE setStrID)
    Q_PROPERTY (bool isUpdateable READ isUpdateable WRITE setUpdateable)
    //Propiedades para la interaccion con la memoria compartida distribuida
    Q_PROPERTY(QString id READ getId WRITE setId )
    Q_PROPERTY(int tipo READ getTipo WRITE setTipo)
    Q_PROPERTY(int indice READ getIndice WRITE setIndice)
    Q_PROPERTY(int value READ getValue WRITE setValue)


public:
    AWidget(QWidget *parent = 0);

    int intID()const{return m_intid;}
    void setIntID(int id);
    QString strID()const{return m_strid;}
    void setStrID(QString id);

    bool isUpdateable()const{return m_isUpdateable;}
    void setUpdateable(bool u);
    //Metodo para hacer referencia a la memoria compartida
    void setShrdMem(ShrdMem *s){m_ShrdMem=s;}
    //Metodos setters y getters de las las propiedades definidas
    QString getId();
    int getTipo();
    int getIndice();
    int getValue();
    void setId(QString id);
    void setIndice(int indice);
    void setTipo(int tipo);
    void setValue(int value);
    virtual void Update(); //Este metodo podria ser publico


protected:
        //Variables protegidas para gestion de memoria compartida
        QString id;
        int tipo;
        int indice;
        int value;

        int m_intid;
        QString m_strid;
        ShrdMem *m_ShrdMem;
        bool m_isUpdateable;
        void paintEvent(QPaintEvent *);
        virtual void AWPaintEvent();
        //void mousePressEvent( QMouseEvent *);
        //virtual void AWPressEvent();


public slots:

signals:
};

#endif // AWIDGET_H
