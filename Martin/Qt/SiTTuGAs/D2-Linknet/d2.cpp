#include "d2.h"
#include "ui_d2.h"

D2::D2(SiTTuGAs *siTTuGAs, HTTPRequest *shrdMem) :
    Pantallas(siTTuGAs,shrdMem),
    ui(new Ui::D2)
{
    //Elementos caracteristicos de la interfaz D2
    ui->setupUi(this);
    header = new Header(this);
    this->title = "LINKNET I/O";
    this->clave= "D2";

    //Inicializamos el arreglo que se encargara de gestionar la creacion de las ventanas emergentes
    for(int i=0; i<25; i++){
        ctrVen[i] = false;
    }

    //Inicializamos la variable para evitar conflictos
    Id = -1;
    venActual = -1;

    //Conexiones para responder a las peticiones del usuario
    connect(ui->btind1,SIGNAL(clicked()),this,SLOT(sltCrearVentanaAI_10()));
    connect(ui->btind1_2,SIGNAL(clicked()),this,SLOT(sltCrearVentanaAI_11()));
    connect(ui->btind1_3,SIGNAL(clicked()),this,SLOT(sltCrearVentanaAI_12()));
    connect(ui->btind1_4,SIGNAL(clicked()),this,SLOT(sltCrearVentanaAI_13()));
    connect(ui->btind1_5,SIGNAL(clicked()),this,SLOT(sltCrearVentanaAI_14()));
    connect(ui->btind1_6,SIGNAL(clicked()),this,SLOT(sltCrearVentanaAI_15()));
    connect(ui->btind1_7,SIGNAL(clicked()),this,SLOT(sltCrearVentanaAI_16()));

    connect(ui->btind1_8,SIGNAL(clicked()),this,SLOT(sltCrearVentanaAI_17()));
    connect(ui->btind1_9,SIGNAL(clicked()),this,SLOT(sltCrearVentanaAI_18()));
    connect(ui->btind1_10,SIGNAL(clicked()),this,SLOT(sltCrearVentanaAI_19()));
    connect(ui->btind1_10,SIGNAL(clicked()),this,SLOT(sltCrearVentanaAI_19()));

    connect(ui->btind1_11,SIGNAL(clicked()),this,SLOT(sltCrearVentanaAI_6()));
    connect(ui->btind1_12,SIGNAL(clicked()),this,SLOT(sltCrearVentanaDI_4()));
    connect(ui->btind1_13,SIGNAL(clicked()),this,SLOT(sltCrearVentanaDI_5()));
    connect(ui->btind1_14,SIGNAL(clicked()),this,SLOT(sltCrearVentanaAI_4()));

    connect(ui->btind1_15,SIGNAL(clicked()),this,SLOT(sltCrearVentanaAI_8()));
    connect(ui->btind1_17,SIGNAL(clicked()),this,SLOT(sltCrearVentanaAI_9()));
    connect(ui->btnMicron,SIGNAL(clicked()),this,SLOT(sltirA()));



}

D2::~D2()
{
    delete ui;
}

void D2::ctlVenActivacion(int id)
{
    ctrVen[id] = false;
    venActual = -1;
}

void D2::sltSeleccionarVentana(int id)
{
    Id = id;
    moving = true;
}

void D2::sltCrearVentanaAI_10()
{
    if(ctrVen[_AI_10] == false){
        v_inet_AI_10 = new Inet_AI_10(this);
        v_inet_AI_10->setGeometry(293,2,175,150);
        v_inet_AI_10->show();
        ctrVen[_AI_10] = true;
        connect(v_inet_AI_10,SIGNAL(clicked(int)),this,SLOT(sltSeleccionarVentana(int)));
        connect(v_inet_AI_10,SIGNAL(mi_id(int)),this,SLOT(ctlVenActivacion(int)));
        if(!(venActual == -1)){
            cerrarVentana(venActual);
        }
        venActual = _AI_10;
    }
}

void D2::sltCrearVentanaAI_11()
{
    if(ctrVen[_AI_11] == false){
        v_inet_AI_11 = new Inet_AI_11(this);
        v_inet_AI_11->setGeometry(293,2,175,150);
        v_inet_AI_11->show();
        ctrVen[_AI_11] = true;
        connect(v_inet_AI_11,SIGNAL(clicked(int)),this,SLOT(sltSeleccionarVentana(int)));
        connect(v_inet_AI_11,SIGNAL(mi_id(int)),this,SLOT(ctlVenActivacion(int)));
        if(!(venActual == -1)){
            cerrarVentana(venActual);
        }
        venActual = _AI_11;
    }
}

void D2::sltCrearVentanaAI_12()
{
    if(ctrVen[_AI_12] == false){
        v_inet_AI_12 = new Inet_AI_12(this);
        v_inet_AI_12->setGeometry(293,2,175,150);
        v_inet_AI_12->show();
        ctrVen[_AI_12] = true;
        connect(v_inet_AI_12,SIGNAL(clicked(int)),this,SLOT(sltSeleccionarVentana(int)));
        connect(v_inet_AI_12,SIGNAL(mi_id(int)),this,SLOT(ctlVenActivacion(int)));
        if(!(venActual == -1)){
            cerrarVentana(venActual);
        }
        venActual = _AI_12;
    }
}

void D2::sltCrearVentanaAI_13()
{
    if(ctrVen[_AI_13] == false){
        v_inet_AI_13 = new Inet_AI_13(this);
        v_inet_AI_13->setGeometry(293,2,175,150);
        v_inet_AI_13->show();
        ctrVen[_AI_13] = true;
        connect(v_inet_AI_13,SIGNAL(clicked(int)),this,SLOT(sltSeleccionarVentana(int)));
        connect(v_inet_AI_13,SIGNAL(mi_id(int)),this,SLOT(ctlVenActivacion(int)));
        if(!(venActual == -1)){
            cerrarVentana(venActual);
        }
        venActual = _AI_13;
    }
}

void D2::sltCrearVentanaAI_14()
{
    if(ctrVen[_AI_14] == false){
        v_inet_AI_14 = new Inet_AI_14(this);
        v_inet_AI_14->setGeometry(293,2,175,150);
        v_inet_AI_14->show();
        ctrVen[_AI_14] = true;
        connect(v_inet_AI_14,SIGNAL(clicked(int)),this,SLOT(sltSeleccionarVentana(int)));
        connect(v_inet_AI_14,SIGNAL(mi_id(int)),this,SLOT(ctlVenActivacion(int)));
        if(!(venActual == -1)){
            cerrarVentana(venActual);
        }
        venActual = _AI_14;
    }
}

void D2::sltCrearVentanaAI_15()
{
    if(ctrVen[_AI_15] == false){
        v_inet_AI_15 = new Inet_AI_15(this);
        v_inet_AI_15->setGeometry(293,2,175,150);
        v_inet_AI_15->show();
        ctrVen[_AI_15] = true;
        connect(v_inet_AI_15,SIGNAL(clicked(int)),this,SLOT(sltSeleccionarVentana(int)));
        connect(v_inet_AI_15,SIGNAL(mi_id(int)),this,SLOT(ctlVenActivacion(int)));
        if(!(venActual == -1)){
            cerrarVentana(venActual);
        }
        venActual = _AI_15;
    }
}

void D2::sltCrearVentanaAI_16()
{
    if(ctrVen[_AI_16] == false){
        v_inet_AI_16 = new Inet_AI_16(this);
        v_inet_AI_16->setGeometry(293,2,175,150);
        v_inet_AI_16->show();
        ctrVen[_AI_16] = true;
        connect(v_inet_AI_16,SIGNAL(clicked(int)),this,SLOT(sltSeleccionarVentana(int)));
        connect(v_inet_AI_16,SIGNAL(mi_id(int)),this,SLOT(ctlVenActivacion(int)));
        if(!(venActual == -1)){
            cerrarVentana(venActual);
        }
        venActual = _AI_16;
    }
}

void D2::sltCrearVentanaAI_17()
{
    if(ctrVen[_AI_17] == false){
        v_inet_AI_17 = new Inet_AI_17(this);
        v_inet_AI_17->setGeometry(293,2,175,150);
        v_inet_AI_17->show();
        ctrVen[_AI_17] = true;
        connect(v_inet_AI_17,SIGNAL(clicked(int)),this,SLOT(sltSeleccionarVentana(int)));
        connect(v_inet_AI_17,SIGNAL(mi_id(int)),this,SLOT(ctlVenActivacion(int)));
        if(!(venActual == -1)){
            cerrarVentana(venActual);
        }
        venActual = _AI_17;
    }
}

void D2::sltCrearVentanaAI_18()
{
    if(ctrVen[_AI_18] == false){
        v_inet_AI_18 = new Inet_AI_18(this);
        v_inet_AI_18->setGeometry(293,2,175,150);
        v_inet_AI_18->show();
        ctrVen[_AI_18] = true;
        connect(v_inet_AI_18,SIGNAL(clicked(int)),this,SLOT(sltSeleccionarVentana(int)));
        connect(v_inet_AI_18,SIGNAL(mi_id(int)),this,SLOT(ctlVenActivacion(int)));
        if(!(venActual == -1)){
            cerrarVentana(venActual);
        }
        venActual = _AI_18;
    }
}

void D2::sltCrearVentanaAI_19()
{
    if(ctrVen[_AI_19] == false){
        v_inet_AI_19 = new Inet_AI_19(this);
        v_inet_AI_19->setGeometry(293,2,175,150);
        v_inet_AI_19->show();
        ctrVen[_AI_19] = true;
        connect(v_inet_AI_19,SIGNAL(clicked(int)),this,SLOT(sltSeleccionarVentana(int)));
        connect(v_inet_AI_19,SIGNAL(mi_id(int)),this,SLOT(ctlVenActivacion(int)));
        if(!(venActual == -1)){
            cerrarVentana(venActual);
        }
        venActual = _AI_19;
    }

}

void D2::sltCrearVentanaAI_6()
{
    if(ctrVen[_AI_6] == false){
        v_inet_AI_6 = new Inet_AI_6(this);
        v_inet_AI_6->setGeometry(293,2,175,150);
        v_inet_AI_6->show();
        ctrVen[_AI_6] = true;
        connect(v_inet_AI_6,SIGNAL(clicked(int)),this,SLOT(sltSeleccionarVentana(int)));
        connect(v_inet_AI_6,SIGNAL(mi_id(int)),this,SLOT(ctlVenActivacion(int)));
        if(!(venActual == -1)){
            cerrarVentana(venActual);
        }
        venActual = _AI_6;
    }
}

void D2::sltCrearVentanaDI_4()
{
    if(ctrVen[_DI_4] == false){
        v_inet_DI_4 = new Inet_DI_4(this);
        v_inet_DI_4->setGeometry(293,2,175,150);
        v_inet_DI_4->show();
        ctrVen[_DI_4] = true;
        connect(v_inet_DI_4,SIGNAL(clicked(int)),this,SLOT(sltSeleccionarVentana(int)));
        connect(v_inet_DI_4,SIGNAL(mi_id(int)),this,SLOT(ctlVenActivacion(int)));
        if(!(venActual == -1)){
            cerrarVentana(venActual);
        }
        venActual = _DI_4;
    }
}

void D2::sltCrearVentanaDI_5()
{
    if(ctrVen[_DI_5] == false){
        v_inet_DI_5 = new Inet_DI_5(this);
        v_inet_DI_5->setGeometry(293,2,175,150);
        v_inet_DI_5->show();
        ctrVen[_DI_5] = true;
        connect(v_inet_DI_5,SIGNAL(clicked(int)),this,SLOT(sltSeleccionarVentana(int)));
        connect(v_inet_DI_5,SIGNAL(mi_id(int)),this,SLOT(ctlVenActivacion(int)));
        if(!(venActual == -1)){
            cerrarVentana(venActual);
        }
        venActual = _DI_5;
    }
}

void D2::sltCrearVentanaAI_4()
{
    if(ctrVen[_AI4] == false){
        v_lnet_AI4 = new LNET_AI4(this);
        v_lnet_AI4->setGeometry(293,2,175,150);
        v_lnet_AI4->show();
        ctrVen[_AI4] = true;
        connect(v_lnet_AI4,SIGNAL(clicked(int)),this,SLOT(sltSeleccionarVentana(int)));
        connect(v_lnet_AI4,SIGNAL(mi_id(int)),this,SLOT(ctlVenActivacion(int)));
        if(!(venActual == -1)){
            cerrarVentana(venActual);
        }
        venActual = _AI4;
    }
}

void D2::sltCrearVentanaAI_8()
{
    if(ctrVen[_AI8] == false){
        v_lnet_AI8 = new LNET_AI8(this);
        v_lnet_AI8->setGeometry(293,2,175,150);
        v_lnet_AI8->show();
        ctrVen[_AI8] = true;
        connect(v_lnet_AI8,SIGNAL(clicked(int)),this,SLOT(sltSeleccionarVentana(int)));
        connect(v_lnet_AI8,SIGNAL(mi_id(int)),this,SLOT(ctlVenActivacion(int)));
        if(!(venActual == -1)){
            cerrarVentana(venActual);
        }
        venActual = _AI8;
    }
}

void D2::sltCrearVentanaAI_9()
{
    if(ctrVen[_AI9] == false){
        v_lnet_AI9 = new LNET_AI9(this);
        v_lnet_AI9->setGeometry(293,2,175,150);
        v_lnet_AI9->show();
        ctrVen[_AI9] = true;
        connect(v_lnet_AI9,SIGNAL(clicked(int)),this,SLOT(sltSeleccionarVentana(int)));
        connect(v_lnet_AI9,SIGNAL(mi_id(int)),this,SLOT(ctlVenActivacion(int)));
        if(!(venActual == -1)){
            cerrarVentana(venActual);
        }
        venActual = _AI9;
    }
}

void D2::sltCrearVentanaA1()
{
}

void D2::sltCrearVentanaA12()
{
}

void D2::sltCrearVentanaA13()
{
}

void D2::sltCrearVentanaA15()
{
}

void D2::sltCrearVentanaA16()
{
}

void D2::sltCrearVentanaA17()
{
}

void D2::sltCrearVentanaDI()
{
}

void D2::sltCrearVentanaD3()
{
}

void D2::sltCrearVentanaD12()
{
}




void D2::mouseMoveEvent(QMouseEvent *e)
{
    if(Id != -1){
        //Dimensiones de la ventana
        posX = e->x();
        posY = e->y();
        //Validamos que la ventana no se salga fuera de un rango preestablecido (de acuerdo a la usabilidad del sistema)
        if(80 <= posX && posX <= 940 && 0 <= posY  && posY <= 520)
        {
            if(moving){
                switch(Id){
                    case _AI_10:
                                    v_inet_AI_10->move((posX- (v_inet_AI_10->width()/2)),posY);
                                    break;
                    case _AI_11:
                                    v_inet_AI_11->move((posX- (v_inet_AI_11->width()/2)),posY);
                                    break;
                    case _AI_12:
                                    v_inet_AI_12->move((posX- (v_inet_AI_12->width()/2)),posY);
                                    break;
                    case _AI_13:
                                    v_inet_AI_13->move((posX- (v_inet_AI_13->width()/2)),posY);
                                    break;
                    case _AI_14:
                                    v_inet_AI_14->move((posX- (v_inet_AI_14->width()/2)),posY);
                                    break;
                    case _AI_15:
                                    v_inet_AI_15->move((posX- (v_inet_AI_15->width()/2)),posY);
                                    break;
                    case _AI_16:
                                    v_inet_AI_16->move((posX- (v_inet_AI_16->width()/2)),posY);
                                    break;
                    case _AI_17:
                                    v_inet_AI_17->move((posX- (v_inet_AI_17->width()/2)),posY);
                                    break;
                    case _AI_18:
                                    v_inet_AI_18->move((posX- (v_inet_AI_18->width()/2)),posY);
                                    break;
                    case _AI_19:
                                    v_inet_AI_19->move((posX- (v_inet_AI_19->width()/2)),posY);
                                    break;
                    case _AI_6:
                                    v_inet_AI_6->move((posX- (v_inet_AI_6->width()/2)),posY);
                                    break;
                    case _DI_4:
                                    v_inet_DI_4->move((posX- (v_inet_DI_4->width()/2)),posY);
                                    break;
                    case _DI_5:
                                    v_inet_DI_5->move((posX- (v_inet_DI_5->width()/2)),posY);
                                    break;
                    case _AI4:
                                    v_lnet_AI4->move((posX- (v_lnet_AI4->width()/2)),posY);
                                    break;
                    case _AI8:
                                    v_lnet_AI8->move((posX- (v_lnet_AI8->width()/2)),posY);
                                    break;
                    case _AI9:
                                    v_lnet_AI9->move((posX- (v_lnet_AI9->width()/2)),posY);
                                    break;/*
                    case wstg8bld:
                                    eWSTG8BLD->move((posX- (eWSTG8BLD->width()/2)),posY);
                                    break;
                    case wtempadm:
                                    eWTempADM->move((posX- (eWTempADM->width()/2)),posY);
                                    break;
                    case wtempcompa1:
                                    eWTempCompA1->move((posX- (eWTempCompA1->width()/2)),posY);
                                    break;
                    case wtempcompa2:
                                    eWTempCompA2->move((posX- (eWTempCompA2->width()/2)),posY);
                                    break;
                    case wtempcompb:
                                    eWTempCompB->move((posX- (eWTempCompB->width()/2)),posY);
                                    break;
                    case wtempespera:
                                    eWTempEspera->move((posX- (eWTempEspera->width()/2)),posY);
                                    break;
                    case wveln25:
                                    eWVelN25->move((posX- (eWVelN25->width()/2)),posY);
                                    break;
                    case wvelnsd:
                                    eWVelNSD->move((posX- (eWVelNSD->width()/2)),posY);
                                    break;
                    case wvigb:
                                    eWVIGB->move((posX- (eWVIGB->width()/2)),posY);
                                    break;
                    case wvoltctrl:
                                    eWVoltCtrl->move((posX- (eWVoltCtrl->width()/2)),posY);
                                    break;*/
                }
            //update(); No es necesario implentar este metodo, funciona igual
            } //if - Move -
        }//if - Position-
    } //if -Id-

}

void D2::cerrarVentana(int i)
{

    switch(i){
        case _AI_10:
                        v_inet_AI_10->~Inet_AI_10();
                        break;
        case _AI_11:
                        v_inet_AI_11->~Inet_AI_11();
                        break;
        case _AI_12:
                        v_inet_AI_12->~Inet_AI_12();
                        break;
        case _AI_13:
                        v_inet_AI_13->~Inet_AI_13();
                        break;
        case _AI_14:
                        v_inet_AI_14->~Inet_AI_14();
                        break;
        case _AI_15:
                        v_inet_AI_15->~Inet_AI_15();
                        break;
        case _AI_16:
                        v_inet_AI_16->~Inet_AI_16();
                        break;
        case _AI_17:
                        v_inet_AI_17->~Inet_AI_17();
                        break;
        case _AI_18:
                        v_inet_AI_18->~Inet_AI_18();
                        break;
        case _AI_19:
                        v_inet_AI_19->~Inet_AI_19();
                        break;
        case _AI_6:
                        v_inet_AI_6->~Inet_AI_6();
                        break;
        case _DI_4:
                        v_inet_DI_4->~Inet_DI_4();
                        break;
        case _DI_5:
                        v_inet_DI_5->~Inet_DI_5();
                        break;
        case _AI8:
                        v_lnet_AI8->~LNET_AI8();
                        break;
        case _AI9:
                        v_lnet_AI9->~LNET_AI9();
                        break;/*
        case wpresdescc:
                        eWPresDescC->~WPresDescC();
                        break;
        case wpurgav:
                        eWPurgaV->~WPurgaV();
                        break;
        case wrotorturb:
                        eWRotorTurb->~WRotorTurb();
                        break;
        case wstg8bld:
                        eWSTG8BLD->~WSTG8BLD();
                        break;
        case wtempadm:
                        eWTempADM->~WTempADM();
                        break;
        case wtempcompa1:
                        eWTempCompA1->~WTempCompA1();
                        break;
        case wtempcompa2:
                        eWTempCompA2->~WTempCompA2();
                        break;
        case wtempcompb:
                        eWTempCompB->~WTempCompB();
                        break;
        case wtempespera:
                        eWTempEspera->~WTempEspera();
                        break;
        case wveln25:
                        eWVelN25->~WVelN25();
                        break;
        case wvelnsd:
                        eWVelNSD->~WVelNSD();
                        break;
        case wvigb:
                        eWVIGB->~WVIGB();
                        break;
        case wvoltctrl:
                        eWVoltCtrl->~WVoltCtrl();
                        break;*/
    }
    ctrVen[i] = false;
    venActual = -1;

}

void D2::sltirA()
{
    emit(irA(24));
}



void D2::mouseReleaseEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton) {
        //Fijamos el identificador como no seleccionado
        moving = false;
        Id = -1;
    }
}



