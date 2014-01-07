#include "wcheckbox.h"

WCheckBox::WCheckBox(QWidget *parent) :
    BaseComponentes(parent)
{
    //Constructor (inicializamos variables)

    text.append(NULL);
    //En este caso solo tenemos un caso: "Widget Estatico" (prendido/apagado)
    tipo = 0;

    //Utilizamos "this" para tener un apuntador a la variable de la clase base
}

WCheckBox::~WCheckBox()
{

}

void WCheckBox::setText(QString text)
{
    this->text = text;
    update();
}


void WCheckBox::setFont(QFont opt)
{
    this->estilo = opt;
    update();
}


void WCheckBox::Update()
{
    if(m_ShrdMem == NULL)
        return;
    if(!isUpdateable())  //Verificar metodo para saber si
        return;                // la ventana que contiene el widget es "visible" (para el usuario)
    if(indice< 0){
        indice = m_ShrdMem->getVar(id);
        if(indice < 0){
            return;
        }
    }
    //Logica para definir atributos y comportamiento del widget
    value = m_ShrdMem->getI(indice);
    //Solo tenemos el caso de widget estatico para este elemento
    tipo = 0;
    //Nos encontramos en el caso widget estatico
    update(); //Esta funcion invoca al metodo wPaintEvent que mostrara un escenario de acuerdo a value
    //Que pasa si indice no es menor a cero ???


}

void WCheckBox::wPaintEvent()
{
    //Para seguir consistencia validamos que el tipo sea 0
    if(tipo == 0){
        //Referencia para poder realizar el trazo sobre el lienzo del widget
        QPainter p(this);
        //Guardamos la referencia del menor valor entre el alto y ancho del widget
        //Borde del elemento que presentaremos como contenedor
        pen = p.pen();
        //Color de borde (gris)
        pen.setColor(QColor(206,205,204));
        //Ancho del borde
        pen.setWidthF(2.0);
        //Agregamos el elemento al "lienzo"
        p.setPen(pen);
        //Evaluamos si "activamos" o "desactivamos" desde la funcion setValue se toma este parametro
        switch(value){
            case 0:
                    //Color de fondo gris si esta apagado
                    p.setBrush(QColor(192,192,192));
                    //Dibujamos un cuadrado en las coordenadas (-1,-1)
                    p.drawRect(-1,-1,height(),height());
                    break;
            case 1:
                    //Color de fondo amarillo si esta activado
                    p.setBrush(QColor(255,255,0));
                    //Dibujamos un cuadrado en las coordenadas (-1,-1)
                    p.drawRect(-1,-1,height(),height());

                    //Dibujamos flecha si la "casilla" esta activada
                    pen= p.pen();
                    pen.setColor(QColor(0,0,0));
                    p.setPen(pen);
                    w = width() - height();
                    r = width() - w;
                    //Validamos como verdadero para incorporar la flecha del indicador
                    if(true){
                        QLineF lineA(height()/5, (height()/2), r/3 , height()-5);
                        QLineF lineB(r/3,height()-5, height()-5 , height()/5);
                        p.drawLine(lineA);
                        p.drawLine(lineB);
                    }

                    break;
            default:
                    //Color de fondo negro en cualquier otro caso
                    p.setBrush(QColor(0,0,0));
                    //Dibujamos un cuadrado en las coordenadas (-1,-1)
                    p.drawRect(-1,-1,height(),height());
                    tipo = 0;

        }



        //Por default definimos un estilo para la letra
        pen = p.pen();
        pen.setColor(QColor(0,0,0));
        p.setPen(pen);

        QFont auxFont("MS Shell Dlg 2",11);
        auxFont.setFamily(estilo.family());
        auxFont.setFamily(estilo.family());
        auxFont.setBold(estilo.bold());
        auxFont.setPointSize(estilo.pointSize());
        auxFont.setItalic(estilo.italic());
        auxFont.setStyle(estilo.style());
        auxFont.setWeight(estilo.weight());

        p.setFont(auxFont);
        p.drawText(QRect(0,0,width(),height()),Qt::AlignCenter,text);

    }
}

