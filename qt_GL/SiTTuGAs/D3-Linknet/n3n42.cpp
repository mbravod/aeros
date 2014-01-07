#include "n3n42.h"
#include "ui_n3n42.h"

N3N42::N3N42(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::N3N42)
{
    ui->setupUi(this);
    //Activamos el seguimiento del raton, solo interesan los eventos al dar click izquierdo
        setMouseTracking( false );
        //Emitimos una señal para identificar a cada widget cuando este sea clickeado por el usuario
        connect(this,SIGNAL(clicked(int )),this,SLOT(idWindow(int)));
        connect(ui->btCerrar,SIGNAL(clicked()),this,SLOT(cerrar()));

    }



    void N3N42::cerrar(){
        this->close();
        emit(mi_id(analog16_2));
    }

    void N3N42::idWindow(int id)
    {
        emit(id);
    }
    void N3N42::mousePressEvent(QMouseEvent *event)
    {
        //Validamos click izquierdo
        if(event->button() == Qt::LeftButton){
            emit clicked(analog16_2);
        }
    }
N3N42::~N3N42()
{
    delete ui;
}
