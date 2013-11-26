#include "d3.h"
#include "ui_d3.h"

D3::D3(SiTTuGAs *siTTuGAs, ShrdMem *shrdMem) :
    Pantallas(siTTuGAs,shrdMem),
    ui(new Ui::D3)
{
    ui->setupUi(this);
    header = new Header(this);

    this->title = "LINKNET I/O";
    this->clave= "D3";
    for(int i=0; i<5; i++){
        ctrVen[i] = false;
    }
    connect(ui->btind1,SIGNAL(clicked()),this,SLOT(SLTanalog04()));
    connect(ui->btind1_2,SIGNAL(clicked()),this,SLOT(SLTanalog08()));
    connect(ui->btind1_3,SIGNAL(clicked()),this,SLOT(SLTanalog08_2()));
    connect(ui->btnind1_4,SIGNAL(clicked()),this,SLOT(SLTanalog16()));
    connect(ui->btnind1_5,SIGNAL(clicked()),this,SLOT(SLTanalog16_2()));

    connect(ui->btMicroNet,SIGNAL(clicked()),this,SLOT(sltirA()));

    Id = -1;
    venActual = -1;
    qDebug()<< "Ultima posicion de ctrVen: "<<ctrVen[5];
    //Evitamos que se de seguimiento al raton, solo interesan los eventos al dar click izquierdo
    setMouseTracking( false );
}

D3::~D3()
{
    delete ui;

}
void D3::mouseReleaseEvent(QMouseEvent *e)
{
    if(e->button() == Qt::LeftButton) {
        moving = false;
        //Fijamos el identificador como no seleccionado
        Id = -1;
    }
}

void D3::mouseMoveEvent(QMouseEvent *e)
{
    qDebug()<< Id;
    if(Id != -1){
        //Dimensiones de la ventana
        posX = e->x();
        posY = e->y();
        //Validamos que la ventana no se salga fuera de un rango preestablecido (de acuerdo a la usabilidad del sistema)
        if(80 <= posX && posX <= 940 && 0 <= posY  && posY <= 520)
        {
            qDebug()<< "Bandera movimiento" << moving;
            if(moving){
                switch(Id){
                    case analog04:

                                    eAnalog04->move((posX- (eAnalog04->width()/2)),posY);
                                    break;
                    case analog08:

                                    eAnalog08->move((posX- (eAnalog08->width()/2)),posY);
                                    break;
                    case analog08_2:

                                    eAnalog08_2->move((posX- (eAnalog08_2->width()/2)),posY);
                                    break;
                    case analog16:

                                    eAnalog16->move((posX- (eAnalog16->width()/2)),posY);
                                    break;
                    case analog16_2:

                                    eAnalog16_2->move((posX- (eAnalog16_2->width()/2)),posY);
                                    break;
                }
            }
        }
    }
}
void D3::cerrarVentana(int i)
{
    switch(i){
        case analog04:
                        eAnalog04->~N3N18();
                        break;
        case analog08:
                        eAnalog08->~N3N39();
                        break;
        case analog08_2:
                        eAnalog08_2->~N3N40();
                        break;
        case analog16:
                        eAnalog16->~N3N41();
                        break;
        case analog16_2:
                        eAnalog16_2->~N3N42();
                        break;

    }
}
void D3::sltSeleccionarVentana(int id)
{
    Id=id;
    moving = true;
}


void D3::ctlVenActivacion(int id)
{
    ctrVen[id] = false;
    venActual = -1;
}
void D3::SLTanalog04(){
    //Validamos que no se genere mas de una instancia de la sub-ventana
    if(ctrVen[analog04] == false){
        eAnalog04 = new N3N18(this);
        eAnalog04->setGeometry(493,50,100,100);
        eAnalog04->show();
        ctrVen[analog04] = true;
        connect(eAnalog04,SIGNAL(clicked(int)),this,SLOT(sltSeleccionarVentana(int)));
        connect(eAnalog04,SIGNAL(mi_id(int)),this,SLOT(ctlVenActivacion(int)));
        if(!(venActual == -1)){
            cerrarVentana(venActual);
        }
        venActual = analog04;
    }// Indicamos que ventana se ha seleccionado

}
void D3::SLTanalog08()
{
    //Validamos que no se genere mas de una instancia de la sub-ventana
    if(ctrVen[analog08] == false){
        eAnalog08 = new N3N39(this);
        eAnalog08->setGeometry(493,50,100,100);
        eAnalog08->show();
        ctrVen[analog08] = true;
        connect(eAnalog08,SIGNAL(clicked(int)),this,SLOT(sltSeleccionarVentana(int)));
        connect(eAnalog08,SIGNAL(mi_id(int)),this,SLOT(ctlVenActivacion(int)));
        if(!(venActual == -1)){
            cerrarVentana(venActual);
        }
        venActual = analog08;
    }// Indicamos que ventana se ha seleccionado
}

void D3::SLTanalog08_2()
{
    //Validamos que no se genere mas de una instancia de la sub-ventana
    if(ctrVen[analog08_2] == false){
        eAnalog08_2 = new N3N40(this);
        eAnalog08_2->setGeometry(493,50,100,100);
        eAnalog08_2->show();
        ctrVen[analog08_2] = true;
        connect(eAnalog08_2,SIGNAL(clicked(int)),this,SLOT(sltSeleccionarVentana(int)));
        connect(eAnalog08_2,SIGNAL(mi_id(int)),this,SLOT(ctlVenActivacion(int)));
        if(!(venActual == -1)){
            cerrarVentana(venActual);
        }
        venActual = analog08_2;
    }// Indicamos que ventana se ha seleccionado
}

void D3::SLTanalog16()
{
    //Validamos que no se genere mas de una instancia de la sub-ventana
    if(ctrVen[analog16] == false){
        eAnalog16 = new N3N41(this);
        eAnalog16->setGeometry(493,50,100,100);
        eAnalog16->show();
        ctrVen[analog16] = true;
        connect(eAnalog16,SIGNAL(clicked(int)),this,SLOT(sltSeleccionarVentana(int)));
        connect(eAnalog16,SIGNAL(mi_id(int)),this,SLOT(ctlVenActivacion(int)));
        if(!(venActual == -1)){
            cerrarVentana(venActual);
        }
        venActual = analog16;
    }// Indicamos que ventana se ha seleccionado
}

void D3::SLTanalog16_2()
{
    //Validamos que no se genere mas de una instancia de la sub-ventana
    if(ctrVen[analog16_2] == false){
        eAnalog16_2 = new N3N42(this);
        eAnalog16_2->setGeometry(493,50,100,100);
        eAnalog16_2->show();
        ctrVen[analog16_2] = true;
        connect(eAnalog16_2,SIGNAL(clicked(int)),this,SLOT(sltSeleccionarVentana(int)));
        connect(eAnalog16_2,SIGNAL(mi_id(int)),this,SLOT(ctlVenActivacion(int)));
        if(!(venActual == -1)){
            cerrarVentana(venActual);
        }
        venActual = analog16_2;
    }// Indicamos que ventana se ha seleccionado
}

void D3::sltirA()
{
    emit(irA(24));
}
