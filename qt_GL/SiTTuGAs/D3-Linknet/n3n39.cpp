#include "n3n39.h"
#include "ui_n3n39.h"

N3N39::N3N39(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::N3N39)
{
    ui->setupUi(this);
    //Activamos el seguimiento del raton, solo interesan los eventos al dar click izquierdo
        setMouseTracking( false );
        //Emitimos una señal para identificar a cada widget cuando este sea clickeado por el usuario
        connect(this,SIGNAL(clicked(int )),this,SLOT(idWindow(int)));
        connect(ui->btCerrar,SIGNAL(clicked()),this,SLOT(cerrar()));

    }



    void N3N39::cerrar(){
        this->close();
        emit(mi_id(analog08));
    }

    void N3N39::idWindow(int id)
    {
        emit(id);
    }
    void N3N39::mousePressEvent(QMouseEvent *event)
    {
        //Validamos click izquierdo
        if(event->button() == Qt::LeftButton){
            emit clicked(analog08);
        }
    }

N3N39::~N3N39()
{
    delete ui;
}
