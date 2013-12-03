#include "n3n40.h"
#include "ui_n3n40.h"

N3N40::N3N40(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::N3N40)
{
    ui->setupUi(this);
    //Activamos el seguimiento del raton, solo interesan los eventos al dar click izquierdo
        setMouseTracking( false );
        //Emitimos una señal para identificar a cada widget cuando este sea clickeado por el usuario
        connect(this,SIGNAL(clicked(int )),this,SLOT(idWindow(int)));
        connect(ui->btCerrar,SIGNAL(clicked()),this,SLOT(cerrar()));

    }



    void N3N40::cerrar(){
        this->close();
        emit(mi_id(analog08_2));
    }

    void N3N40::idWindow(int id)
    {
        emit(id);
    }
    void N3N40::mousePressEvent(QMouseEvent *event)
    {
        //Validamos click izquierdo
        if(event->button() == Qt::LeftButton){
            emit clicked(analog08_2);
        }
    }
N3N40::~N3N40()
{
    delete ui;
}
