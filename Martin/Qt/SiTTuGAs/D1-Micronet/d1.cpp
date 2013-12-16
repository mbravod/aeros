#include "d1.h"
#include "ui_d1.h"

D1::D1(SiTTuGAs *siTTuGAs,HTTPRequest *shrdMem) :
    Pantallas(siTTuGAs,shrdMem),
    ui(new Ui::D1)
{
    ui->setupUi(this);
    header = new Header(this);
    this->title = "MICRONET I/O";
    this->clave= "D1";
    for(int i=0; i<11; i++){
        ctrVen[i] = false;
    }
    connect(ui->btind4,SIGNAL(clicked()),this,SLOT(SLTanalog04()));
    connect(ui->btind6,SIGNAL(clicked()),this,SLOT(SLTanalog24()));
    connect(ui->btind7,SIGNAL(clicked()),this,SLOT(SLTanalog24_s2()));
    connect(ui->btnind9,SIGNAL(clicked()),this,SLOT(SLTdigital16()));
    connect(ui->btnind10,SIGNAL(clicked()),this,SLOT(SLTanalog16()));
    connect(ui->btnind12,SIGNAL(clicked()),this,SLOT(SLTdigital24()));
    connect(ui->btnind14,SIGNAL(clicked()),this,SLOT(SLTdigital24_2()));
    connect(ui->btnind15,SIGNAL(clicked()),this,SLOT(SLTanalog08()));
    connect(ui->btnind16,SIGNAL(clicked()),this,SLOT(SLTanalog08_2()));

    connect(ui->btnRed_1,SIGNAL(clicked()),this,SLOT(sltIrD2()));
    connect(ui->btnRed_2,SIGNAL(clicked()),this,SLOT(sltIrD2()));
    connect(ui->btnRed_3,SIGNAL(clicked()),this,SLOT(sltIrD3()));

    Id = -1;
    venActual = -1;
    //Evitamos que se de seguimiento al raton, solo interesan los eventos al dar click izquierdo
    setMouseTracking( false );
}

D1::~D1()
{
    delete ui;
}

void D1::cerrarVentanasEmergentes()
{
    for(int i=0; i<11; i++){
        if(ctrVen[i] == true){
            switch(i){
                case analog04:
                            eAnalog04->~Analog04();
                            break;
                case analog08:
                            eAnalog08->~Analog08();
                            break;
                case analog08_2:
                            eAnalog08_2->~Analog08_2();
                            break;
                case analog16:
                            eAnalog16->~Analog16();
                            break;
                case analog16_2:
                            eAnalog16_2->~Analog16_2();
                            break;
                case analog16_3:
                            eAnalog16_3->~Analog16_3();
                            break;
                case analog24:
                            eAnalog24->~Analog24();
                            break;
                case analog24_s2:
                            eAnalog24_s2->~Analog24_S2();
                            break;
                case digital16:
                            eDigital16->~Digital16();
                            break;
                case digital24:
                            eDigital24->~Digital24();
                            break;
                case digital24_2:
                            eDigital24_2->~Digital24_2();
                            break;

            }
            ctrVen[i] = false;
        }
    }
    Id = -1;
    venActual = -1;
}


void D1::mouseReleaseEvent(QMouseEvent *e)
{
    if(e->button() == Qt::LeftButton) {
        moving = false;
        //Fijamos el identificador como no seleccionado
        Id = -1;
    }
}
void D1::SLTanalog04(){
    //Validamos que no se genere mas de una instancia de la sub-ventana
    if(ctrVen[analog04] == false){
        eAnalog04 = new Analog04(this);
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
void D1::SLTanalog08()
{
    //Validamos que no se genere mas de una instancia de la sub-ventana
    if(ctrVen[analog08] == false){
        eAnalog08 = new Analog08(this);
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

void D1::SLTanalog08_2()
{
    //Validamos que no se genere mas de una instancia de la sub-ventana
    if(ctrVen[analog08_2] == false){
        eAnalog08_2 = new Analog08_2(this);
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

void D1::SLTanalog16()
{
    //Validamos que no se genere mas de una instancia de la sub-ventana
    if(ctrVen[analog16] == false){
        eAnalog16 = new Analog16(this);
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

void D1::SLTanalog16_2()
{
    //Validamos que no se genere mas de una instancia de la sub-ventana
    if(ctrVen[analog16_2] == false){
        eAnalog16_2 = new Analog16_2(this);
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

void D1::SLTanalog16_3()
{
    //Validamos que no se genere mas de una instancia de la sub-ventana
    if(ctrVen[analog16_3] == false){
        eAnalog16_3 = new Analog16_3(this);
        eAnalog16_3->setGeometry(493,50,100,100);
        eAnalog16_3->show();
        ctrVen[analog16_3] = true;
        connect(eAnalog16_3,SIGNAL(clicked(int)),this,SLOT(sltSeleccionarVentana(int)));
        connect(eAnalog16_3,SIGNAL(mi_id(int)),this,SLOT(ctlVenActivacion(int)));
        if(!(venActual == -1)){
            cerrarVentana(venActual);
        }
        venActual = analog16_3;
    }// Indicamos que ventana se ha seleccionado
}

void D1::SLTanalog24()
{
    //Validamos que no se genere mas de una instancia de la sub-ventana
    if(ctrVen[analog24] == false){
        eAnalog24 = new Analog24(this);
        eAnalog24->setGeometry(493,50,100,100);
        eAnalog24->show();
        ctrVen[analog24] = true;
        connect(eAnalog24,SIGNAL(clicked(int)),this,SLOT(sltSeleccionarVentana(int)));
        connect(eAnalog24,SIGNAL(mi_id(int)),this,SLOT(ctlVenActivacion(int)));
        if(!(venActual == -1)){
            cerrarVentana(venActual);
        }
        venActual = analog24;
    }// Indicamos que ventana se ha seleccionado
}

void D1::SLTanalog24_s2()
{
    //Validamos que no se genere mas de una instancia de la sub-ventana
    if(ctrVen[analog24_s2] == false){
        eAnalog24_s2 = new Analog24_S2(this);
        eAnalog24_s2->setGeometry(493,50,100,100);
        eAnalog24_s2->show();
        ctrVen[analog24_s2] = true;
        connect(eAnalog24_s2,SIGNAL(clicked(int)),this,SLOT(sltSeleccionarVentana(int)));
        connect(eAnalog24_s2,SIGNAL(mi_id(int)),this,SLOT(ctlVenActivacion(int)));
        if(!(venActual == -1)){
            cerrarVentana(venActual);
        }
        venActual = analog24_s2;
    }// Indicamos que ventana se ha seleccionado
}

void D1::SLTdigital16()
{
    //Validamos que no se genere mas de una instancia de la sub-ventana
    if(ctrVen[digital16] == false){
        eDigital16 = new Digital16(this);
        eDigital16->setGeometry(493,50,100,100);
        eDigital16->show();
        ctrVen[digital16] = true;
        connect(eDigital16,SIGNAL(clicked(int)),this,SLOT(sltSeleccionarVentana(int)));
        connect(eDigital16,SIGNAL(mi_id(int)),this,SLOT(ctlVenActivacion(int)));
        if(!(venActual == -1)){
            cerrarVentana(venActual);
        }
        venActual = digital16;
    }// Indicamos que ventana se ha seleccionado
}

void D1::SLTdigital24()
{
    //Validamos que no se genere mas de una instancia de la sub-ventana
    if(ctrVen[digital24] == false){
        eDigital24 = new Digital24(this);
        eDigital24->setGeometry(493,50,100,100);
        eDigital24->show();
        ctrVen[digital24] = true;
        connect(eDigital24,SIGNAL(clicked(int)),this,SLOT(sltSeleccionarVentana(int)));
        connect(eDigital24,SIGNAL(mi_id(int)),this,SLOT(ctlVenActivacion(int)));
        if(!(venActual == -1)){
            cerrarVentana(venActual);
        }
        venActual = digital24;
    }// Indicamos que ventana se ha seleccionado
}

void D1::SLTdigital24_2()
{
    //Validamos que no se genere mas de una instancia de la sub-ventana
    if(ctrVen[digital24_2] == false){
        eDigital24_2 = new Digital24_2(this);
        eDigital24_2->setGeometry(493,50,100,100);
        eDigital24_2->show();
        ctrVen[digital24_2] = true;
        connect(eDigital24_2,SIGNAL(clicked(int)),this,SLOT(sltSeleccionarVentana(int)));
        connect(eDigital24_2,SIGNAL(mi_id(int)),this,SLOT(ctlVenActivacion(int)));
        if(!(venActual == -1)){
            cerrarVentana(venActual);
        }
        venActual = digital24_2;
    }// Indicamos que ventana se ha seleccionado
}

void D1::sltIrD2()
{
    qDebug()<<"ir a D2";
    emit (irA(25));
}
void D1::sltIrD3()
{
    qDebug()<<"ir a D3";
    emit (irA(26));
}

void D1::ctlVenActivacion(int id)
{
    ctrVen[id] = false;
    venActual = -1;
}

void D1::mouseMoveEvent(QMouseEvent *e)
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
                    case analog16_3:

                                    eAnalog16_3->move((posX- (eAnalog16_3->width()/2)),posY);
                                    break;
                    case analog24:

                                    eAnalog24->move((posX- (eAnalog24->width()/2)),posY);
                                    break;
                    case analog24_s2:

                                    eAnalog24_s2->move((posX- (eAnalog24_s2->width()/2)),posY);
                                    break;
                    case digital16:

                                    eDigital16->move((posX- (eDigital16->width()/2)),posY);
                                    break;
                    case digital24:

                                    eDigital24->move((posX- (eDigital24->width()/2)),posY);
                                    break;
                    case digital24_2:

                                    eDigital24_2->move((posX- (eDigital24_2->width()/2)),posY);
                                    break;
                }
            }
        }
    }
}

void D1::sltSeleccionarVentana(int id)
{
    Id=id;
    moving = true;
}

void D1::cerrarVentana(int i)
{
    switch(i){
        case analog04:
                        eAnalog04->~Analog04();
                        break;
        case analog08:
                        eAnalog08->~Analog08();
                        break;
        case analog08_2:
                        eAnalog08_2->~Analog08_2();
                        break;
        case analog16:
                        eAnalog16->~Analog16();
                        break;
        case analog16_2:
                        eAnalog16_2->~Analog16_2();
                        break;
        case analog16_3:
                        eAnalog16_3->~Analog16_3();
                        break;
        case analog24:
                        eAnalog24->~Analog24();
                        break;
        case analog24_s2:
                        eAnalog24_s2->~Analog24_S2();
                        break;
        case digital16:
                        eDigital16->~Digital16();
                        break;
        case digital24:
                        eDigital24->~Digital24();
                        break;
        case digital24_2:
                        eDigital24_2->~Digital24_2();
                        break;

    }
}


/*
void D1::setLbInd_1(QString s)
{
    ui->lbInd_1->setText(s);
    update();
}

void D1::setLbInd_2(QString s)
{
    ui->lbInd_2->setText(s);
    update();
}

void D1::setLbInd_3(QString s)
{
    ui->lbInd_3->setText(s);
    update();
}

void D1::setLbInd_4(QString s)
{
    ui->lbInd_4->setText(s);
    update();
}

void D1::setLbInd_5(QString s)
{
    ui->lbInd_5->setText(s);
    update();
}

void D1::setLbInd_6(QString s)
{
    ui->lbInd_6->setText(s);
    update();
}

void D1::setLbInd_7(QString s)
{
    ui->lbInd_7->setText(s);
    update();
}

void D1::setLbInd_8(QString s)
{
    ui->lbInd_8->setText(s);
    update();
}

void D1::setLbInd_9(QString s)
{
    ui->lbInd_9->setText(s);
    update();
}

void D1::setLbInd_10(QString s)
{
    ui->lbInd_10->setText(s);
    update();
}

void D1::setLbInd_11(QString s)
{
    ui->lbInd_11->setText(s);
    update();
}

void D1::setLbInd_12(QString s)
{
    ui->lbInd_12->setText(s);
    update();
}

void D1::setLbInd_13(QString s)
{
    ui->lbInd_13->setText(s);
    update();
}
void D1::setLbInd_14(QString s)
{
    ui->lbInd_14->setText(s);
    update();
}

void D1::setLbInd_15(QString s)
{
    ui->lbInd_15->setText(s);
    update();
}

void D1::setLbInd_16(QString s)
{
    ui->lbInd_16->setText(s);
    update();
}

void D1::setLbInd_17(QString s)
{
    ui->lbInd_17->setText(s);
    update();
}

void D1::setLbInd_18(QString s)
{
    ui->lbInd_18->setText(s);
    update();
}

void D1::setLbInd_19(QString s)
{
    ui->lbInd_19->setText(s);
    update();
}

void D1::setLbInd_20(QString s)
{
    ui->lbInd_20->setText(s);
    update();
}

void D1::setLbInd_21(QString s)
{
    ui->lbInd_21->setText(s);
    update();
}

void D1::setLbInd_22(QString s)
{
    ui->lbInd_22->setText(s);
    update();
}

void D1::setLbInd_23(QString s)
{
    ui->lbInd_23->setText(s);
    update();
}

void D1::setLbInd_24(QString s)
{
    ui->lbInd_24->setText(s);
    update();
}
void D1::setLbInd_25(QString s)
{
    ui->lbInd_25->setText(s);
    update();
}

void D1::setLbInd_26(QString s)
{
    ui->lbInd_26->setText(s);
    update();
}

void D1::setLbInd_27(QString s)
{
    ui->lbInd_27->setText(s);
    update();
}

void D1::setLbInd_28(QString s)
{
    ui->lbInd_28->setText(s);
    update();
}

void D1::setLbInd_29(QString s)
{
    ui->lbInd_29->setText(s);
    update();
}

void D1::setLbInd_30(QString s)
{
    ui->lbInd_30->setText(s);
    update();
}

void D1::setLbInd_31(QString s)
{
    ui->lbInd_31->setText(s);
    update();
}

void D1::setLbInd_32(QString s)
{
    ui->lbInd_32->setText(s);
    update();
}
*/

