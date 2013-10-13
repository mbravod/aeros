#include "a1.h"
#include "ui_a1.h"

//#include "Sittugas/sittugas.h"
//#include "SharedMemory/shrdmem.h"

A1::A1(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem) :
    Pantallas(siTTuGAs,shrdMem),
    ui(new Ui::A1)
{
    //Inicializamos el arreglo que se encargara de gestionar la creacion de las ventanas emergentes
    for(int i=0; i<26; i++){
        ctrVen[i] = false;
    }
    //Inicializamos la variable para evitar conflictos
    Id = -1;
    ui->setupUi(this);
    qDebug()<< "Ultima posicion de ctrVen: "<<ctrVen[25];
    //Evitamos que se de seguimiento al raton, solo interesan los eventos al dar click izquierdo
    setMouseTracking( false );
    this->title = "GENERAL TURBINA PRINCIPAL";
    this->clave= "A1";


    /*10/10/13*/
    connect(ui->btnGEN_N25,SIGNAL(clicked()),this,SLOT(sltWVelN25()));
    connect(ui->btn_GEN_AVR,SIGNAL(clicked()),this,SLOT(sltWVelNSD()));
    connect(ui->btn_GEN_T2,SIGNAL(clicked()),this,SLOT(sltWTempADM()));
    connect(ui->btn_GEN_T48,SIGNAL(clicked()),this,SLOT(sltWTempCompA2()));
    connect(ui->btn_GEN_PTB,SIGNAL(clicked()),this,SLOT(sltWPresBalance()));
    connect(ui->btn_GEN_AVR_T25,SIGNAL(clicked()),this,SLOT(sltWTempCompA1()));
    connect(ui->btn_GEN_AVR_T3S,SIGNAL(clicked()),this,SLOT(sltWTempCompA1()));
    connect(ui->btn_leGEN_AVR_PS3,SIGNAL(clicked()),this,SLOT(sltWPresDescC()));
    connect(ui->btn_GEN_AVR_P25,SIGNAL(clicked()),this,SLOT(sltWPresCompB()));

    connect(ui->btnCT01,SIGNAL(clicked()),this,SLOT(sltWCtrlArranque()));
    connect(ui->btnCT02,SIGNAL(clicked()),this,SLOT(sltWCtrlApagado()));
    connect(ui->btnCT03,SIGNAL(clicked()),this,SLOT(sltWRotorTurb()));
    connect(ui->btnCT04,SIGNAL(clicked()),this,SLOT(sltWCtrlCarga()));
    connect(ui->btnCT05,SIGNAL(clicked()),this,SLOT(sltWVelN25()));//VERIFICAR CUAL ES
    connect(ui->btnCT06,SIGNAL(clicked()),this,SLOT(sltWCtrlLavAgua()));//VERIFICAR CUAL ES
    connect(ui->btnCT07,SIGNAL(clicked()),this,SLOT(sltWVoltCtrl()));//VERIFICAR CUAL ES
    connect(ui->btnCT08,SIGNAL(clicked()),this,SLOT(sltWApagEmer()));//VERIFICAR CUAL ES
    connect(ui->btnCT09,SIGNAL(clicked()),this,SLOT(sltWVelN25()));//VERIFICAR CUAL ES
    connect(ui->btnCT10,SIGNAL(clicked()),this,SLOT(sltWDiarioDatos()));//VERIFICAR CUAL ES
    connect(ui->btnCT11,SIGNAL(clicked()),this,SLOT(sltWVelN25()));//VERIFICAR CUAL ES
    connect(ui->btIGV,SIGNAL(clicked()),this,SLOT(sltWVIGB()));
    connect(ui->btVBV,SIGNAL(clicked()),this,SLOT(sltWPurgaV()));
    connect(ui->btVSV,SIGNAL(clicked()),this,SLOT(sltWEstatorV()));
    connect(ui->btST8,SIGNAL(clicked()),this,SLOT(sltWSTG8BLD()));
    connect(ui->btCDP,SIGNAL(clicked()),this,SLOT(sltWCDPBLD()));
    connect(ui->btTBV,SIGNAL(clicked()),this,SLOT(sltWBalanceI()));
    connect(ui->btCroSec,SIGNAL(clicked()),this,SLOT(sltIrA3()));
    connect(ui->btnMOPA,SIGNAL(clicked()),this,SLOT(sltIrF1()));
    connect(ui->btArraHid,SIGNAL(clicked()),this,SLOT(sltIrB4()));
    connect(ui->btGenerador,SIGNAL(clicked()),this,SLOT(sltIrB11()));




    //Falta conectar la señal que permita cerrar cada ventana emergente
    //Cuando se implemente esta conexion es ahi donde se deshabilita la bandera "active"

}

A1::~A1()
{
    delete ui;
    //Implementar los botones en cada GUI emergente para cerrarla
    //Asignar a ctrVen[ <position> ] = false, despues de destruir la ventana emergente
    //de acuerdo a su "position" en el contenedor
    //Por ahora esto es valido
    for(int i=0; i<26; i++){
        if(ctrVen[i] == true){
            //Si es una ventana creada y es la ventana activa 'rescatamos' su id
            switch(i){
                case wapagemer:
                                eWApagEmer->~WApagEmer();
                                break;
                case wbalancei:
                                eWBalanceI->~WBalanceI();
                                break;
                case wcdpbld:
                                eWCDPBLD->~WCDPBLD();
                                break;
                case wcrakctrl:
                                eWCrakCtrl->~WCrakCtrl();
                                break;
                case wctrlapagado:
                                eWCtrlApagado->~WCtrlApagado();
                                break;
                case wctrlarranque:
                                eWCtrlArranque->~WCtrlArranque();
                                break;
                case wctrlcarga:
                                eWCtrlCarga->~WCtrlCarga();
                                break;
                case wctrllavagua:
                                eWCtrlLavAgua->~WCtrlLavAgua();
                                break;
                case wdiariodatos:
                                eWDiarioDatos->~WDiarioDatos();
                                break;
                case westatorv:
                                eWEstatorV->~WEstatorV();
                                break;
                case wnivel2:
                                eWNivel2->~WNivel2();
                                break;
                case wpresbalance:
                                eWPresBalance->~WPresBalance();
                                break;
                case wprescompb:
                                eWPresCompB->~WPresCompB();
                                break;
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
                                break;
            }
        }
    }
}



void A1::sltWVoltCtrl(){
    //Validamos que no se genere mas de una instancia de la sub-ventana
    if(ctrVen[wvoltctrl] == false){
        eWVoltCtrl = new WVoltCtrl(this);
        eWVoltCtrl->setGeometry(293,2,175,150);
        eWVoltCtrl->show();
        ctrVen[wvoltctrl] = true;
    }// Indicamos que ventana se ha seleccionado

}

void A1::sltWVelNSD_Select(int id)
{
    Id = id;
    moving = true;
}

void A1::sltWApagEmer_Select(int name)
{

}

void A1::sltWBalanceI_Select(int name)
{
}

void A1::sltWCDPBLD_Select(int name)
{
}

void A1::sltWCrakCtrl_Select(int name)
{
}

void A1::sltWCtrlApagado_Select(int name)
{
}

void A1::sltWCtrlArranque_Select(int name)
{
}

void A1::sltWCtrlCarga_Select(int name)
{
}

void A1::sltWCtrlLavAgua_Select(int name)
{
}

void A1::sltWDiarioDatos_Select(int name)
{
}

void A1::sltWEstatorV_Select(int name)
{
}

void A1::sltWNivel2_Select(int name)
{
}

void A1::sltWPresBalance_Select(int name)
{
}

void A1::sltWPresCompB_Select(int name)
{
}

void A1::sltWPresDescC_Select(int name)
{
}

void A1::sltWPurgaV_Select(int name)
{
}

void A1::sltWRotorTurb_Select(int name)
{
}

void A1::sltWSTG8BLD_Select(int name)
{
}

void A1::sltWTempADM_Select(int name)
{
}

void A1::sltWTempCompA1_Select(int name)
{
}

void A1::sltWTempCompA2_Select(int name)
{
}

void A1::sltWTempCompB_Select(int name)
{
}

void A1::sltWTempEspera_Select(int name)
{
}

void A1::sltWVelN25_Select(int name)
{
}

void A1::sltWVIGB_Select(int name)
{
}

void A1::sltWVoltCtrl_Select(int name)
{
}

void A1::sltWVIGB(){
    if(ctrVen[wvoltctrl] == false){
        eWVIGB = new WVIGB(this);
        eWVIGB->setGeometry(293,2,175,150);
        eWVIGB->show();
        ctrVen[wvigb] = true;
    }
}


void A1::sltWVelNSD(){
    if(ctrVen[wvelnsd] == false){
        eWVelNSD = new WVelNSD(this);
        eWVelNSD->setGeometry(293,2,175,150);
        eWVelNSD->show();
        ctrVen[wvelnsd] = true;
        connect(eWVelNSD,SIGNAL(clicked(int)),this,SLOT(sltWVelNSD_Select(int)));
    }

}


void A1::sltWVelN25(){
    if(ctrVen[wveln25] == false){
        eWVelN25 = new WVelN25(this);
        eWVelN25->setGeometry(293,2,175,150);
        eWVelN25->show();
        ctrVen[wveln25] = true;
        connect(eWVelN25,SIGNAL(clicked(int)),this,SLOT(sltWVelNSD_Select(int)));
    }

}

void A1::sltWTempEspera(){
    if(ctrVen[wtempespera] == false){
        eWTempEspera = new WTempEspera(this);
        eWTempEspera->setGeometry(293,2,175,150);
        eWTempEspera->show();
        ctrVen[wtempespera] = true;
        connect(eWTempEspera,SIGNAL(clicked(int)),this,SLOT(sltWTempEspera_Select(int)));

    }
}

void A1::sltWTempCompA2(){
    if(ctrVen[wtempcompa2] == false){
        eWTempCompA2 = new WTempCompA2(this);
        eWTempCompA2->setGeometry(293,2,175,150);
        eWTempCompA2->show();
        ctrVen[wtempcompa2] = true;
    }
}

void A1::sltWTempCompB(){
    if(ctrVen [wtempcompb] == false){
        eWTempCompB = new WTempCompB(this);
        eWTempCompB->setGeometry(293,2,175,150);
        eWTempCompB->show();
        ctrVen[wtempcompb] = true;
    }
}

void A1::sltWTempCompA1(){
    if(ctrVen[wtempcompa1] == false){
        eWTempCompA1 = new WTempCompA1(this);
        eWTempCompA1->setGeometry(293,2,175,150);
        eWTempCompA1->show();
        ctrVen[wtempcompa1] = true;
    }
}


void A1::sltWTempADM(){
    if(ctrVen[wtempadm] == false){
        eWTempADM = new WTempADM(this);
        eWTempADM->setGeometry(293,2,175,150);
        eWTempADM->show();
        ctrVen[wtempadm] = true;
    }
}


void A1::sltWSTG8BLD(){
    if(ctrVen[wstg8bld] == false){
        eWSTG8BLD = new WSTG8BLD(this);
        eWSTG8BLD->setGeometry(293,2,175,150);
        eWSTG8BLD->show();
        ctrVen[wstg8bld] = true;
    }
}


void A1::sltWRotorTurb(){
    if(ctrVen[wstg8bld] == false){
        eWRotorTurb = new WRotorTurb(this);
        eWRotorTurb->setGeometry(293,2,175,150);
        eWRotorTurb->show();
        ctrVen[wstg8bld] = true;
    }
}

void A1::sltWPurgaV(){
    if(ctrVen[wpurgav] == false){
        eWPurgaV = new WPurgaV(this);
        eWPurgaV->setGeometry(293,2,175,150);
        eWPurgaV->show();
        ctrVen[wpurgav] = true;
    }
}


void A1::sltWPresDescC(){
    if(ctrVen[wpresdescc] == false){
        eWPresDescC = new WPresDescC(this);
        eWPresDescC->setGeometry(293,2,175,150);
        eWPresDescC->show();
        ctrVen[wpresdescc] = true;
    }
}


void A1::sltWPresCompB(){
    if(ctrVen[wprescompb] == false){
        eWPresCompB = new WPresCompB(this);
        eWPresCompB->setGeometry(293,2,175,150);
        eWPresCompB->show();
        ctrVen[wprescompb] = true;
    }

}


void A1::sltWPresBalance(){
    if(ctrVen[wpresbalance] == false){
        eWPresBalance = new WPresBalance(this);
        eWPresBalance->setGeometry(293,2,175,150);
        eWPresBalance->show();
        ctrVen[wpresbalance] = true;
    }
}


void A1::sltWNivel2(){
    if(ctrVen[wnivel2] == false){
        eWNivel2 = new WNivel2(this);
        eWNivel2->setGeometry(293,2,175,150);
        eWNivel2->show();
        ctrVen[wnivel2] = true;
    }
}

void A1::sltWEstatorV(){
    if(ctrVen[westatorv] == false){
        eWEstatorV = new WEstatorV(this);
        eWEstatorV->setGeometry(293,2,175,150);
        eWEstatorV->show();
        ctrVen[westatorv] = true;
    }
}

void A1::sltWDiarioDatos(){
    if(ctrVen[wdiariodatos] == false){
        eWDiarioDatos = new WDiarioDatos(this);
        eWDiarioDatos->setGeometry(293,2,175,150);
        eWDiarioDatos->show();
        ctrVen[wdiariodatos] = true;
    }
}


void A1::sltWCtrlLavAgua(){
    if(ctrVen[wctrllavagua] == false){
        eWCtrlLavAgua = new WCtrlLavAgua(this);
        eWCtrlLavAgua->setGeometry(293,2,175,150);
        eWCtrlLavAgua->show();
        ctrVen[wctrllavagua] = true;
    }
}


void A1::sltWCtrlCarga(){
    if(ctrVen[wctrlcarga] == false){
        eWCtrlCarga = new WCtrlCarga(this);
        eWCtrlCarga->setGeometry(293,2,175,150);
        eWCtrlCarga->show();
        ctrVen[wctrlcarga] = true;
    }
}

void A1::sltWCtrlArranque(){
    if(ctrVen[wctrlarranque] == false){
        eWCtrlArranque = new WCtrlArranque(this);
        eWCtrlArranque->setGeometry(293,2,175,150);
        eWCtrlArranque->show();
        ctrVen[wctrlarranque] = true;
    }
}

void A1::sltWCtrlApagado(){
    if(ctrVen[wctrlapagado] == false){
        eWCtrlApagado = new WCtrlApagado(this);
        eWCtrlApagado->setGeometry(293,2,175,150);
        eWCtrlApagado->show();
        ctrVen[wctrlapagado] = true;
    }
}

void A1::sltWCrakCtrl(){
    if(ctrVen[wcrakctrl] == false){
        eWCrakCtrl = new WCrakCtrl(this);
        eWCrakCtrl->setGeometry(293,2,175,150);
        eWCrakCtrl->show();
        ctrVen[wcrakctrl] = true;
    }
}

void A1::sltWCDPBLD(){
    if(ctrVen[wcdpbld] == false){
        eWCDPBLD = new WCDPBLD(this);
        eWCDPBLD->setGeometry(293,2,175,150);
        eWCDPBLD->show();
        ctrVen[wcdpbld] = true;
    }
}


void A1::sltWBalanceI(){
    if(ctrVen[wbalancei] == false){
        eWBalanceI = new WBalanceI(this);
        eWBalanceI->setGeometry(293,2,175,150);
        eWBalanceI->show();
        ctrVen[wbalancei] = true;
    }
}

void A1::sltWApagEmer(){
    if(ctrVen[wapagemer] == false){
        eWApagEmer = new WApagEmer(this);
        eWApagEmer->setGeometry(293,2,175,150);
        eWApagEmer->show();
        ctrVen[wapagemer] = true;
    }
}void A1::sltIrA3()
{
    qDebug()<<"ir a a3";
    emit (irA(3));//el 3 es el nuemero definido para la A3
}
void A1::sltIrB4()
{
    qDebug()<<"ir a b4";
    emit (irA(10));//el 10 es el nuemero definido para la B4
}
void A1::sltIrB11()
{
    qDebug()<<"ir a b11";
    emit (irA(16));//el 16 es el nuemero definido para la B11
}
void A1::sltIrF1()
{
    qDebug()<<"ir a f1";
    emit (irA(36));//el 36 es el nuemero definido para la F1
}



void A1::mouseMoveEvent(QMouseEvent *e)
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
                    case wapagemer:
                                    eWApagEmer->move((posX- (eWApagEmer->width()/2)),posY);
                                    break;
                    case wbalancei:
                                    eWBalanceI->move((posX- (eWBalanceI->width()/2)),posY);
                                    break;
                    case wcdpbld:
                                    eWCDPBLD->move((posX- (eWCDPBLD->width()/2)),posY);
                                    break;
                    case wcrakctrl:
                                    eWCrakCtrl->move((posX- (eWCrakCtrl->width()/2)),posY);
                                    break;
                    case wctrlapagado:
                                    eWCtrlApagado->move((posX- (eWCtrlApagado->width()/2)),posY);
                                    break;
                    case wctrlarranque:
                                    eWCtrlArranque->move((posX- (eWCtrlArranque->width()/2)),posY);
                                    break;
                    case wctrlcarga:
                                    eWCtrlCarga->move((posX- (eWCtrlCarga->width()/2)),posY);
                                    break;
                    case wctrllavagua:
                                    eWCtrlLavAgua->move((posX- (eWCtrlLavAgua->width()/2)),posY);
                                    break;
                    case wdiariodatos:
                                    eWDiarioDatos->move((posX- (eWDiarioDatos->width()/2)),posY);
                                    break;
                    case westatorv:
                                    eWEstatorV->move((posX- (eWEstatorV->width()/2)),posY);
                                    break;
                    case wnivel2:
                                    eWNivel2->move((posX- (eWNivel2->width()/2)),posY);
                                    break;
                    case wpresbalance:
                                    eWPresBalance->move((posX- (eWPresBalance->width()/2)),posY);
                                    break;
                    case wprescompb:
                                    eWPresCompB->move((posX- (eWPresCompB->width()/2)),posY);
                                    break;
                    case wpresdescc:
                                    eWPresDescC->move((posX- (eWPresDescC->width()/2)),posY);
                                    break;
                    case wpurgav:
                                    eWPurgaV->move((posX- (eWPurgaV->width()/2)),posY);
                                    break;
                    case wrotorturb:
                                    eWRotorTurb->move((posX- (eWRotorTurb->width()/2)),posY);
                                    break;
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
                                    break;
                }
            //update(); No es necesario implentar este metodo, funciona igual
            } //if - Move -
        }//if - Position-
    } //if -Id-

}

void A1::mouseReleaseEvent(QMouseEvent *e)
{
    if(e->button() == Qt::LeftButton) {
        moving = false;
        //Fijamos el identificador como no seleccionado
        Id = -1;
    }
}


