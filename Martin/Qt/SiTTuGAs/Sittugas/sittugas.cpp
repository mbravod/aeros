#include "sittugas.h"
#include "ui_sittugas.h"

#include <QMainWindow>
#include <QtGui>

//Se cargan todas las interfaces, dado que al parecer no se requiere un Stack como historial de interface {Corroborar que esto sea cierto}
//(Debido a que se tiene una jerarquia de interfaces), es posible cargar solo la interface deseada, asi consumimos menos memoria y menos
//tiempo en la carga de todos los SVG. --- Ya no se cargan todas las interfaces al momento de la compilación, esto acelera el proceso
//además se reserva espacio en memoria para todas las interfaces y según se solicite por el usuario se van asignando la creación de interfaces
//en su respectivo "espacio".

/*

*/

SiTTuGAs::SiTTuGAs(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SiTTuGAs)
{
    ui->setupUi(this);
    this->setWindowTitle("SiTTuGas");
    setAttribute(Qt::WA_DeleteOnClose);
    //Un solo objeto para todas las interfaces, corroborar que no se requiera una instancia para cada interfaz!
    m_shrdMem = new HTTPRequest();
    //Estructura para reservar espacio en memoria de cada HMI a crear *(considerando el menu)
    for(int i=0; i<(ID_N8+1); i++)
    {
        subWindow = new QMdiSubWindow;
        subWindow->setGeometry(QRect(0, 0, 1024, 662));
        subWindow->setMinimumSize(QSize(1024, 662));
        subWindow->setMaximumSize(QSize(1024, 662));
        subWindow->setAttribute(Qt::WA_DeleteOnClose);
        ui->mdiArea->addSubWindow(subWindow,Qt::FramelessWindowHint);
    }
    //Actualizamos la lista de ventanas creadas en orden
    lst = ui->mdiArea->subWindowList(QMdiArea::CreationOrder);
    ChangeWin(0);
    Connections();
    initDateTimeTimer();
}

void SiTTuGAs::ChangeWin(int n)
{
    //Mantenemos la referencia a la ventana actualmente "activada"
    currentWin = n;
    switch(n)
    {
        case ID_A1:
                    if(lst.at(n)->widget() != NULL){
                        //Actualizamos los componentes atomicos *(los heredados por la clase "pantallas")
                        a1->cerrarVentanasEmergentes();
                        a1->setUpdateableChildrenList();
                        // *** Verificar que hace el metodo Update *(al parecer uno es implementado por la herencia a la clase "pantallas")
                        a1->update();
                        //Actualizamos los datos del encabezado
                        ui->lbTitle->setText(a1->getTitle());
                        ui->lbNum->setText(a1->getClave());
                        flagOpt = 1;
                        //Activamos la intefaz (considerandose que ya fue creada)
                        selectWindow(n, flagOpt);
                    }else{
                        //()<< "Creando A1";
                        flagOpt = 0;
                        //Generamos una instancia de A1
                        a1 = new A1(this,m_shrdMem);
                        a1->setUpdateableChildrenList();
                        //Ocultamos los "bordes" de la ventana
                        ui->mdiArea->addSubWindow(a1, Qt::FramelessWindowHint);
                        //Nos aseguramos que al cerrar el widget éste sea eliminado
                        a1->setAttribute(Qt::WA_DeleteOnClose);
                        //Fijamos los datos de la nueva interfaz en el encabezado
                        ui->lbTitle->setText(a1->getTitle());
                        ui->lbNum->setText(a1->getClave());
                        //Mostramos la interfaz
                        connect(this->a1,SIGNAL(irA(int)),this,SLOT(ChangeWin(int)));

                        a1->show();
                        //Validamos que la interfaz sea activada (respecto al histórico de todas las interfaces creadas)
                        selectWindow(n,flagOpt);
                    }
                    break;

        case ID_A2:
                    if(lst.at(n)->widget() != NULL){
                        //Actualizamos los componentes atomicos *(los heredados por la clase "pantallas")
                        a2->setUpdateableChildrenList();
                        // *** Verificar que hace el metodo Update *(al parecer uno es implementado por la herencia a la clase "pantallas")
                        a2->update();
                        //Fijamos los datos de la interfaz en el encabezado
                        ui->lbTitle->setText(a2->getTitle());
                        ui->lbNum->setText(a2->getClave());
                        flagOpt = 1;
                        selectWindow(n, flagOpt);
                    }else{
                        //()<< "Creando A2";
                        flagOpt = 0;
                        a2 = new A2(this,m_shrdMem);
                        a2->setUpdateableChildrenList();
                        //Ocultamos los "bordes" de la ventana
                        a2->setAttribute(Qt::WA_DeleteOnClose);
                        ui->mdiArea->addSubWindow(a2, Qt::FramelessWindowHint);
                        ui->lbTitle->setText(a2->getTitle());
                        ui->lbNum->setText(a2->getClave());
                        //Mostramos la interfaz
                        a2->show();
                        selectWindow(n,flagOpt);
                    }
                    break;

        case ID_A3:
                    if(lst.at(n)->widget() != NULL){
                        //Actualizamos los componentes atomicos *(los heredados por la clase "pantallas")
                        a3->setUpdateableChildrenList();
                        // *** Verificar que hace el metodo Update *(al parecer uno es implementado por la herencia a la clase "pantallas")
                        a3->update();
                        ui->lbTitle->setText(a3->getTitle());
                        ui->lbNum->setText(a3->getClave());
                        flagOpt = 1;
                        selectWindow(n, flagOpt);
                    }else{
                        //()<< "Creando A3";
                        flagOpt = 0;
                        a3 = new A3(this,m_shrdMem);
                        a3->setAttribute(Qt::WA_DeleteOnClose);
                        a3->setUpdateableChildrenList();
                        ui->mdiArea->addSubWindow(a3, Qt::FramelessWindowHint);
                        ui->lbTitle->setText(a3->getTitle());
                        ui->lbNum->setText(a3->getClave());
                        a3->show();
                        selectWindow(n,flagOpt);
                    }
                    break;

        case ID_A4:
                    if(lst.at(n)->widget() != NULL){
                        //Actualizamos los componentes atomicos *(los heredados por la clase "pantallas")
                        a4->setUpdateableChildrenList();
                        // *** Verificar que hace el metodo Update *(al parecer uno es implementado por la herencia a la clase "pantallas")
                        a4->update();
                        ui->lbTitle->setText(a4->getTitle());
                        ui->lbNum->setText(a4->getClave());
                        flagOpt = 1;
                        selectWindow(n, flagOpt);
                    }else{
                        //()<< "Creando A4";
                        flagOpt = 0;
                        a4 = new A4(this,m_shrdMem);
                        a4->setAttribute(Qt::WA_DeleteOnClose);
                        a4->setUpdateableChildrenList();
                        ui->mdiArea->addSubWindow(a4, Qt::FramelessWindowHint);
                        ui->lbTitle->setText(a4->getTitle());
                        ui->lbNum->setText(a4->getClave());
                        a4->show();
                        selectWindow(n,flagOpt);
                    }
                    break;
        case ID_A5:
                    if(lst.at(n)->widget() != NULL){
                        //Actualizamos los componentes atomicos *(los heredados por la clase "pantallas")
                        a5->setUpdateableChildrenList();
                        a5->update();
                        ui->lbTitle->setText(a5->getTitle());
                        ui->lbNum->setText(a5->getClave());
                        flagOpt = 1;
                        selectWindow(n, flagOpt);
                    }else{
                        //()<< "Creando A5";
                        flagOpt = 0;
                        a5 = new A5(this,m_shrdMem);
                        a5->setUpdateableChildrenList();
                        a5->setAttribute(Qt::WA_DeleteOnClose);
                        ui->mdiArea->addSubWindow(a5, Qt::FramelessWindowHint);
                        ui->lbTitle->setText(a5->getTitle());
                        ui->lbNum->setText(a5->getClave());
                        a5->show();
                        selectWindow(n,flagOpt);
                    }
                    break;
        case ID_A6:
                    if(lst.at(n)->widget() != NULL){
                        //Actualizamos los componentes atomicos *(los heredados por la clase "pantallas")
                        a6->setUpdateableChildrenList();
                        a6->update();
                        ui->lbTitle->setText(a6->getTitle());
                        ui->lbNum->setText(a6->getClave());
                        flagOpt = 1;
                        selectWindow(n, flagOpt);
                    }else{
                        //()<< "Creando A6";
                        flagOpt = 0;
                        a6 = new A6(this,m_shrdMem);
                        a6->setAttribute(Qt::WA_DeleteOnClose);
                        a6->setUpdateableChildrenList();
                        ui->mdiArea->addSubWindow(a6, Qt::FramelessWindowHint);
                        ui->lbTitle->setText(a6->getTitle());
                        ui->lbNum->setText(a6->getClave());
                        a6->show();
                        selectWindow(n,flagOpt);
                   }
                   break;


        case ID_B1:
                   if(lst.at(n)->widget() != NULL){
                        //Actualizamos los componentes atomicos *(los heredados por la clase "pantallas")
                        b1->setUpdateableChildrenList();
                        b1->update();
                        ui->lbTitle->setText(b1->getTitle());
                        ui->lbNum->setText(b1->getClave());
                        flagOpt = 1;
                        selectWindow(n, flagOpt);
                    }else{
                        //()<< "Creando B1";
                        flagOpt = 0;
                        b1 = new B1(this,m_shrdMem);
                        b1->setUpdateableChildrenList();
                        b1->setAttribute(Qt::WA_DeleteOnClose);
                        ui->mdiArea->addSubWindow(b1, Qt::FramelessWindowHint);
                        ui->lbTitle->setText(b1->getTitle());
                        ui->lbNum->setText(b1->getClave());
                        b1->show();
                        selectWindow(n,flagOpt);
                    }
                    break;
        case ID_B2:
                    if(lst.at(n)->widget() != NULL){
                        //()<< "Actualizando B2";
                        //Actualizamos los componentes atomicos *(los heredados por la clase "pantallas")
                        b2->setUpdateableChildrenList();
                        b2->update();
                        ui->lbTitle->setText(b2->getTitle());
                        ui->lbNum->setText(b2->getClave());
                        flagOpt = 1;
                        selectWindow(n, flagOpt);
                    }else{
                        //()<< "Creando B2";
                        flagOpt = 0;
                        b2 = new B2(this,m_shrdMem);
                        b2->setUpdateableChildrenList();
                        b2->setAttribute(Qt::WA_DeleteOnClose);
                        ui->mdiArea->addSubWindow(b2, Qt::FramelessWindowHint);
                        ui->lbTitle->setText(b2->getTitle());
                        ui->lbNum->setText(b2->getClave());
                        b2->show();
                        selectWindow(n,flagOpt);
                    }
                    break;
        case ID_B3:
                    if(lst.at(n)->widget() != NULL){
                        //Actualizamos los componentes atomicos *(los heredados por la clase "pantallas")
                        b3->setUpdateableChildrenList();
                        b3->update();
                        ui->lbTitle->setText(b3->getTitle());
                        ui->lbNum->setText(b3->getClave());
                        flagOpt = 1;
                        selectWindow(n, flagOpt);
                    }else{
                        //()<< "Creando B3";
                        flagOpt = 0;
                        b3 = new B3(this,m_shrdMem);
                        b3->setAttribute(Qt::WA_DeleteOnClose);
                        b3->setUpdateableChildrenList();
                        ui->mdiArea->addSubWindow(b3, Qt::FramelessWindowHint);
                        ui->lbTitle->setText(b3->getTitle());
                        ui->lbNum->setText(b3->getClave());
                        b3->show();
                        selectWindow(n,flagOpt);
                    }
                    break;
        case ID_B4:
                    if(lst.at(n)->widget() != NULL){
                        //Actualizamos los componentes atomicos *(los heredados por la clase "pantallas")
                        b4->setUpdateableChildrenList();
                        b4->update();
                        ui->lbTitle->setText(b4->getTitle());
                        ui->lbNum->setText(b4->getClave());
                        flagOpt = 1;
                        selectWindow(n, flagOpt);
                    }else{
                        //()<< "Creando B4";
                        flagOpt = 0;
                        b4 = new B4(this,m_shrdMem);
                        b4->setUpdateableChildrenList();
                        b4->setAttribute(Qt::WA_DeleteOnClose);
                        ui->mdiArea->addSubWindow(b4, Qt::FramelessWindowHint);
                        ui->lbTitle->setText(b4->getTitle());
                        ui->lbNum->setText(b4->getClave());
                        b4->show();
                        selectWindow(n,flagOpt);
                    }
                    break;
        case ID_B5:
                    if(lst.at(n)->widget() != NULL){
                        //Actualizamos los componentes atomicos *(los heredados por la clase "pantallas")
                        b5->setUpdateableChildrenList();
                        b5->update();
                        ui->lbTitle->setText(b5->getTitle());
                        ui->lbNum->setText(b5->getClave());
                        flagOpt = 1;
                        selectWindow(n, flagOpt);
                    }else{
                        //()<< "Creando B5";
                        flagOpt = 0;
                        b5 = new B5(this,m_shrdMem);
                        b5->setAttribute(Qt::WA_DeleteOnClose);
                        b5->setUpdateableChildrenList();
                        ui->mdiArea->addSubWindow(b5, Qt::FramelessWindowHint);
                        ui->lbTitle->setText(b5->getTitle());
                        ui->lbNum->setText(b5->getClave());
                        b5->show();
                        selectWindow(n,flagOpt);
                    }
                    break;
        case ID_B6:
                    if(lst.at(n)->widget() != NULL){
                        //Actualizamos los componentes atomicos *(los heredados por la clase "pantallas")
                        b6->setUpdateableChildrenList();
                        b6->update();
                        ui->lbTitle->setText(b6->getTitle());
                        ui->lbNum->setText(b6->getClave());
                        flagOpt = 1;
                        selectWindow(n, flagOpt);
                    }else{
                        //()<< "Creando B6";
                        flagOpt = 0;
                        b6 = new B6(this,m_shrdMem);
                        b6->setUpdateableChildrenList();
                        b6->setAttribute(Qt::WA_DeleteOnClose);
                        ui->mdiArea->addSubWindow(b6, Qt::FramelessWindowHint);
                        ui->lbTitle->setText(b6->getTitle());
                        ui->lbNum->setText(b6->getClave());
                        b6->show();
                        selectWindow(n,flagOpt);
                    }
                    break;
        case ID_B7:
                    if(lst.at(n)->widget() != NULL){
                    //Actualizamos los componentes atomicos *(los heredados por la clase "pantallas")
                        b7->setUpdateableChildrenList();
                        b7->update();
                        ui->lbTitle->setText(b7->getTitle());
                        ui->lbNum->setText(b7->getClave());
                        flagOpt = 1;
                        selectWindow(n, flagOpt);
                    }else{
                        //()<< "Creando B7";
                        flagOpt = 0;
                        b7 = new B7(this,m_shrdMem);
                        b7->setUpdateableChildrenList();
                        b7->setAttribute(Qt::WA_DeleteOnClose);
                        ui->mdiArea->addSubWindow(b7, Qt::FramelessWindowHint);
                        ui->lbTitle->setText(b7->getTitle());
                        ui->lbNum->setText(b7->getClave());
                        b7->show();
                        selectWindow(n,flagOpt);
                    }
                    break;
        case ID_B8:
                    if(lst.at(n)->widget() != NULL){
                        //Actualizamos los componentes atomicos *(los heredados por la clase "pantallas")
                        b8->setUpdateableChildrenList();
                        b8->update();
                        ui->lbTitle->setText(b8->getTitle());
                        ui->lbNum->setText(b8->getClave());
                        flagOpt = 1;
                        selectWindow(n, flagOpt);
                    }else{
                        //()<< "Creando B8";
                        flagOpt = 0;
                        b8 = new B8(this,m_shrdMem);
                        b8->setUpdateableChildrenList();
                        b8->setAttribute(Qt::WA_DeleteOnClose);
                        ui->mdiArea->addSubWindow(b8, Qt::FramelessWindowHint);
                        ui->lbTitle->setText(b8->getTitle());
                        ui->lbNum->setText(b8->getClave());
                        b8->show();
                        selectWindow(n,flagOpt);
                    }
                    break;
        case ID_B9:
                    if(lst.at(n)->widget() != NULL){
                        //Actualizamos los componentes atomicos *(los heredados por la clase "pantallas")
                        b9->setUpdateableChildrenList();
                        b9->update();
                        ui->lbTitle->setText(b9->getTitle());
                        ui->lbNum->setText(b9->getClave());
                        flagOpt = 1;
                        selectWindow(n, flagOpt);
                    }else{
                        //()<< "Creando B9";
                        flagOpt = 0;
                        b9 = new B9(this,m_shrdMem);
                        b9->setUpdateableChildrenList();
                        b9->setAttribute(Qt::WA_DeleteOnClose);
                        ui->mdiArea->addSubWindow(b9, Qt::FramelessWindowHint);
                        ui->lbTitle->setText(b9->getTitle());
                        ui->lbNum->setText(b9->getClave());
                        b9->show();
                        selectWindow(n,flagOpt);
                    }
                    break;
        case ID_B11:
                    if(lst.at(n)->widget() != NULL){
                        //Actualizamos los componentes atomicos *(los heredados por la clase "pantallas")
                        b11->setUpdateableChildrenList();
                        b11->update();
                        ui->lbTitle->setText(b11->getTitle());
                        ui->lbNum->setText(b11->getClave());
                        flagOpt = 1;
                        selectWindow(n, flagOpt);
                    }else{
                        //()<< "Creando B11";
                        flagOpt = 0;
                        b11 = new B11(this,m_shrdMem);
                        b11->setUpdateableChildrenList();
                        b11->setAttribute(Qt::WA_DeleteOnClose);
                        ui->mdiArea->addSubWindow(b11, Qt::FramelessWindowHint);
                        ui->lbTitle->setText(b11->getTitle());
                        ui->lbNum->setText(b11->getClave());
                        b11->show();
                        selectWindow(n,flagOpt);
                    }
                    break;
        case ID_B12:
                    if(lst.at(n)->widget() != NULL){
                        //Actualizamos los componentes atomicos *(los heredados por la clase "pantallas")
                        b12->setUpdateableChildrenList();
                        b12->update();
                        ui->lbTitle->setText(b12->getTitle());
                        ui->lbNum->setText(b12->getClave());
                        flagOpt = 1;
                        selectWindow(n, flagOpt);
                    }else{
                        //()<< "Creando B12";
                        flagOpt = 0;
                        b12 = new B12(this,m_shrdMem);
                        b12->setUpdateableChildrenList();
                        b12->setAttribute(Qt::WA_DeleteOnClose);
                        ui->mdiArea->addSubWindow(b12, Qt::FramelessWindowHint);
                        ui->lbTitle->setText(b12->getTitle());
                        ui->lbNum->setText(b12->getClave());
                        b12->show();
                        selectWindow(n,flagOpt);
                    }
                    break;

        case ID_B14:
                    if(lst.at(n)->widget() != NULL){
                        //Actualizamos los componentes atomicos *(los heredados por la clase "pantallas")
                        b14->setUpdateableChildrenList();
                        b14->update();
                        ui->lbTitle->setText(b14->getTitle());
                        ui->lbNum->setText(b14->getClave());
                        flagOpt = 1;
                        selectWindow(n, flagOpt);
                    }else{
                        //()<< "Creando B12";
                        flagOpt = 0;
                        b14 = new B14(this,m_shrdMem);
                        b14->setUpdateableChildrenList();
                        b14->setAttribute(Qt::WA_DeleteOnClose);
                        ui->mdiArea->addSubWindow(b14, Qt::FramelessWindowHint);
                        ui->lbTitle->setText(b14->getTitle());
                        ui->lbNum->setText(b14->getClave());
                        b14->show();
                        selectWindow(n,flagOpt);
                    }
                    break;

        case ID_C1:
                    if(lst.at(n)->widget() != NULL){
                        //Actualizamos los componentes atomicos *(los heredados por la clase "pantallas")
                        c1->setUpdateableChildrenList();
                        c1->update();
                        ui->lbTitle->setText(c1->getTitle());
                        ui->lbNum->setText(c1->getClave());
                        flagOpt = 1;
                        selectWindow(n, flagOpt);
                    }else{
                        //()<< "Creando B12";
                        flagOpt = 0;
                        c1 = new C1(this,m_shrdMem);
                        c1->setUpdateableChildrenList();
                        c1->setAttribute(Qt::WA_DeleteOnClose);
                        ui->mdiArea->addSubWindow(c1, Qt::FramelessWindowHint);
                        ui->lbTitle->setText(c1->getTitle());
                        ui->lbNum->setText(c1->getClave());
                        c1->show();
                        selectWindow(n,flagOpt);
                    }
                    break;
        case ID_C2:
                    if(lst.at(n)->widget() != NULL){
                        //Actualizamos los componentes atomicos *(los heredados por la clase "pantallas")
                        c2->setUpdateableChildrenList();
                        c2->update();
                        ui->lbTitle->setText(c2->getTitle());
                        ui->lbNum->setText(c2->getClave());
                        flagOpt = 1;
                        selectWindow(n, flagOpt);
                    }else{
                        //()<< "Creando C2";
                        flagOpt = 0;
                        c2 = new C2(this,m_shrdMem);
                        c2->setUpdateableChildrenList();
                        c2->setAttribute(Qt::WA_DeleteOnClose);
                        ui->mdiArea->addSubWindow(c2, Qt::FramelessWindowHint);
                        ui->lbTitle->setText(c2->getTitle());
                        ui->lbNum->setText(c2->getClave());
                        c2->show();
                        selectWindow(n,flagOpt);
                    }
                    break;
        case ID_C3:
                    if(lst.at(n)->widget() != NULL){
                        //Actualizamos los componentes atomicos *(los heredados por la clase "pantallas")
                        c3->setUpdateableChildrenList();
                        c3->update();
                        ui->lbTitle->setText(c3->getTitle());
                        ui->lbNum->setText(c3->getClave());
                        flagOpt = 1;
                        selectWindow(n, flagOpt);
                    }else{
                        //()<< "Creando C3";
                        flagOpt = 0;
                        c3 = new C3(this,m_shrdMem);
                        c3->setUpdateableChildrenList();
                        c3->setAttribute(Qt::WA_DeleteOnClose);
                        ui->mdiArea->addSubWindow(c3, Qt::FramelessWindowHint);
                        ui->lbTitle->setText(c3->getTitle());
                        ui->lbNum->setText(c3->getClave());
                        c3->show();
                        selectWindow(n,flagOpt);
                    }
                    break;
        case ID_C4:
                    if(lst.at(n)->widget() != NULL){
                        //Actualizamos los componentes atomicos *(los heredados por la clase "pantallas")
                        c4->setUpdateableChildrenList();
                        c4->update();
                        ui->lbTitle->setText(c4->getTitle());
                        ui->lbNum->setText(c4->getClave());
                        flagOpt = 1;
                        selectWindow(n, flagOpt);
                    }else{
                        //()<< "Creando C4";
                        flagOpt = 0;
                        c4 = new C4(this,m_shrdMem);
                        c4->setUpdateableChildrenList();
                        c4->setAttribute(Qt::WA_DeleteOnClose);
                        ui->mdiArea->addSubWindow(c4, Qt::FramelessWindowHint);
                        ui->lbTitle->setText(c4->getTitle());
                        ui->lbNum->setText(c4->getClave());
                        c4->show();
                        selectWindow(n,flagOpt);
                    }
                    break;
        case ID_C5:
                    if(lst.at(n)->widget() != NULL){
                        //Actualizamos los componentes atomicos *(los heredados por la clase "pantallas")
                        c5->setUpdateableChildrenList();
                        c5->update();
                        ui->lbTitle->setText(c5->getTitle());
                        ui->lbNum->setText(c5->getClave());
                        flagOpt = 1;
                        selectWindow(n, flagOpt);
                    }else{
                        //()<< "Creando C5";
                        flagOpt = 0;
                        c5 = new C5(this,m_shrdMem);
                        c5->setUpdateableChildrenList();
                        c5->setAttribute(Qt::WA_DeleteOnClose);
                        ui->mdiArea->addSubWindow(c5, Qt::FramelessWindowHint);
                        ui->lbTitle->setText(c5->getTitle());
                        ui->lbNum->setText(c5->getClave());
                        c5->show();
                        selectWindow(n,flagOpt);
                    }
                    break;
        case ID_D1:
                    if(lst.at(n)->widget() != NULL){
                        d1->cerrarVentanasEmergentes();
                        d1->setUpdateableChildrenList();
                        d1->update();
                        ui->lbTitle->setText(d1->getTitle());
                        ui->lbNum->setText(d1->getClave());
                        flagOpt = 1;
                        selectWindow(n, flagOpt);
                    }else{
                        //()<< "Creando D1";
                        flagOpt = 0;
                        d1 = new D1(this,m_shrdMem);
                        d1->setUpdateableChildrenList();
                        d1->setAttribute(Qt::WA_DeleteOnClose);
                        ui->mdiArea->addSubWindow(d1, Qt::FramelessWindowHint);
                        ui->lbTitle->setText(d1->getTitle());
                        ui->lbNum->setText(d1->getClave());
                        d1->show();
                        connect(this->d1,SIGNAL(irA(int)),this,SLOT(ChangeWin(int)));
                        selectWindow(n,flagOpt);
                    }
                    break;
        case ID_D2:
                    if(lst.at(n)->widget() != NULL){
                        //Actualizamos los componentes atomicos *(los heredados por la clase "pantallas")
                        d2->cerrarVentanasEmergentes();
                        d2->setUpdateableChildrenList();
                        d2->update();
                        ui->lbTitle->setText(d2->getTitle());
                        ui->lbNum->setText(d2->getClave());
                        flagOpt = 1;
                        selectWindow(n, flagOpt);
                    }else{
                        //()<< "Creando D2";
                        flagOpt = 0;
                        d2 = new D2(this,m_shrdMem);
                        d2->setUpdateableChildrenList();
                        d2->setAttribute(Qt::WA_DeleteOnClose);
                        ui->mdiArea->addSubWindow(d2, Qt::FramelessWindowHint);
                        ui->lbTitle->setText(d2->getTitle());
                        ui->lbNum->setText(d2->getClave());
                        d2->show();
                        selectWindow(n,flagOpt);
                        connect(this->d2,SIGNAL(irA(int)),this,SLOT(ChangeWin(int)));
                    }
                    break;
        case ID_D3:
                    if(lst.at(n)->widget() != NULL){
                        //Actualizamos los componentes atomicos *(los heredados por la clase "pantallas")
                        d3->cerrarVentanEmergente();
                        d3->setUpdateableChildrenList();
                        d3->update();
                        ui->lbTitle->setText(d3->getTitle());
                        ui->lbNum->setText(d3->getClave());
                        flagOpt = 1;
                        selectWindow(n, flagOpt);
                    }else{
                        //()<< "Creando D3";
                        flagOpt = 0;
                        d3 = new D3(this,m_shrdMem);
                        d3->setUpdateableChildrenList();
                        d3->setAttribute(Qt::WA_DeleteOnClose);
                        ui->mdiArea->addSubWindow(d3, Qt::FramelessWindowHint);
                        ui->lbTitle->setText(d3->getTitle());
                        ui->lbNum->setText(d3->getClave());
                        d3->show();
                        selectWindow(n,flagOpt);
                        connect(this->d3,SIGNAL(irA(int)),this,SLOT(ChangeWin(int)));
                    }
                    break;
        case ID_D4:
                    if(lst.at(n)->widget() != NULL){
                        //Actualizamos los componentes atomicos *(los heredados por la clase "pantallas")
                        d4->setUpdateableChildrenList();
                        d4->update();
                        ui->lbTitle->setText(d4->getTitle());
                        ui->lbNum->setText(d4->getClave());
                        flagOpt = 1;
                        selectWindow(n, flagOpt);
                    }else{
                        //()<< "Creando D4";
                        flagOpt = 0;
                        d4 = new D4(this,m_shrdMem);
                        d4->setUpdateableChildrenList();
                        d4->setAttribute(Qt::WA_DeleteOnClose);
                        ui->mdiArea->addSubWindow(d4, Qt::FramelessWindowHint);
                        ui->lbTitle->setText(d4->getTitle());
                        ui->lbNum->setText(d4->getClave());
                        d4->show();
                        selectWindow(n,flagOpt);
                    }
                    break;
        case ID_D5:
                    if(lst.at(n)->widget() != NULL){
                        //Actualizamos los componentes atomicos *(los heredados por la clase "pantallas")
                        d5->setUpdateableChildrenList();
                        d5->update();
                        ui->lbTitle->setText(d5->getTitle());
                        ui->lbNum->setText(d5->getClave());
                        flagOpt = 1;
                        selectWindow(n, flagOpt);
                    }else{
                        //()<< "Creando D5";
                        flagOpt = 0;
                        d5 = new D5(this,m_shrdMem);
                        d5->setUpdateableChildrenList();
                        d5->setAttribute(Qt::WA_DeleteOnClose);
                        ui->mdiArea->addSubWindow(d5, Qt::FramelessWindowHint);
                        ui->lbTitle->setText(d5->getTitle());
                        ui->lbNum->setText(d5->getClave());
                        d5->show();
                        selectWindow(n,flagOpt);
                    }
                    break;
        case ID_D6:
                    if(lst.at(n)->widget() != NULL){
                        //Actualizamos los componentes atomicos *(los heredados por la clase "pantallas")
                        d6->setUpdateableChildrenList();
                        d6->update();
                        ui->lbTitle->setText(d6->getTitle());
                        ui->lbNum->setText(d6->getClave());
                        flagOpt = 1;
                        selectWindow(n, flagOpt);
                    }else{
                        //()<< "Creando D6";
                        flagOpt = 0;
                        d6 = new D6(this,m_shrdMem);
                        d6->setUpdateableChildrenList();
                        d6->setAttribute(Qt::WA_DeleteOnClose);
                        ui->mdiArea->addSubWindow(d6, Qt::FramelessWindowHint);
                        ui->lbTitle->setText(d6->getTitle());
                        ui->lbNum->setText(d6->getClave());
                        d6->show();
                        selectWindow(n,flagOpt);
                    }
                    break;
        case ID_D7:
                    if(lst.at(n)->widget() != NULL){
                        //Actualizamos los componentes atomicos *(los heredados por la clase "pantallas")
                        d7->setUpdateableChildrenList();
                        d7->update();
                        ui->lbTitle->setText(d7->getTitle());
                        ui->lbNum->setText(d7->getClave());
                        flagOpt = 1;
                        selectWindow(n, flagOpt);
                    }else{
                        //()<< "Creando D7";
                        flagOpt = 0;
                        d7 = new D7(this,m_shrdMem);
                        d7->setUpdateableChildrenList();
                        d7->setAttribute(Qt::WA_DeleteOnClose);
                        ui->mdiArea->addSubWindow(d7, Qt::FramelessWindowHint);
                        ui->lbTitle->setText(d7->getTitle());
                        ui->lbNum->setText(d7->getClave());
                        d7->show();
                        selectWindow(n,flagOpt);
                    }
                    break;
        case ID_D8:
                   if(lst.at(n)->widget() != NULL){
                        //Actualizamos los componentes atomicos *(los heredados por la clase "pantallas")
                        d8->setUpdateableChildrenList();
                        d8->update();
                        ui->lbTitle->setText(d8->getTitle());
                        ui->lbNum->setText(d8->getClave());
                        flagOpt = 1;
                        selectWindow(n, flagOpt);
                    }else{
                        //()<< "Creando D8";
                        flagOpt = 0;
                        d8 = new D8(this,m_shrdMem);
                        d8->setUpdateableChildrenList();
                        d8->setAttribute(Qt::WA_DeleteOnClose);
                        ui->mdiArea->addSubWindow(d8, Qt::FramelessWindowHint);
                        ui->lbTitle->setText(d8->getTitle());
                        ui->lbNum->setText(d8->getClave());
                        d8->show();
                        selectWindow(n,flagOpt);
                    }
                    break;
        case ID_D9:
                    if(lst.at(n)->widget() != NULL){
                        //Actualizamos los componentes atomicos *(los heredados por la clase "pantallas")
                        d9->setUpdateableChildrenList();
                        d9->update();
                        ui->lbTitle->setText(d9->getTitle());
                        ui->lbNum->setText(d9->getClave());
                        flagOpt = 1;
                        selectWindow(n, flagOpt);
                    }else{
                        //()<< "Creando D9";
                        flagOpt = 0;
                        d9 = new D9(this,m_shrdMem);
                        d9->setUpdateableChildrenList();
                        d9->setAttribute(Qt::WA_DeleteOnClose);
                        ui->mdiArea->addSubWindow(d9, Qt::FramelessWindowHint);
                        ui->lbTitle->setText(d9->getTitle());
                        ui->lbNum->setText(d9->getClave());
                        d9->show();
                        selectWindow(n,flagOpt);
                    }
                    break;
        case ID_E1:
                    if(lst.at(n)->widget() != NULL){
                        //Actualizamos los componentes atomicos *(los heredados por la clase "pantallas")
                        e1->setUpdateableChildrenList();
                        e1->update();
                        ui->lbTitle->setText(e1->getTitle());
                        ui->lbNum->setText(e1->getClave());
                        flagOpt = 1;
                        selectWindow(n, flagOpt);
                    }else{
                        //()<< "Creando E1";
                        flagOpt = 0;
                        e1 = new E1(this,m_shrdMem);
                        e1->setUpdateableChildrenList();
                        e1->setAttribute(Qt::WA_DeleteOnClose);
                        ui->mdiArea->addSubWindow(e1, Qt::FramelessWindowHint);
                        ui->lbTitle->setText(e1->getTitle());
                        ui->lbNum->setText(e1->getClave());
                        e1->show();
                        selectWindow(n,flagOpt);
                    }
                    break;
        case ID_E2:
                    if(lst.at(n)->widget() != NULL){
                        //Actualizamos los componentes atomicos *(los heredados por la clase "pantallas")
                        e2->setUpdateableChildrenList();
                        e2->update();
                        ui->lbTitle->setText(e2->getTitle());
                        ui->lbNum->setText(e2->getClave());
                        flagOpt = 1;
                        selectWindow(n, flagOpt);
                    }else{
                        //()<< "Creando E2";
                        flagOpt = 0;
                        e2 = new E2(this,m_shrdMem);
                        e2->setUpdateableChildrenList();
                        e2->setAttribute(Qt::WA_DeleteOnClose);
                        ui->mdiArea->addSubWindow(e2, Qt::FramelessWindowHint);
                        ui->lbTitle->setText(e2->getTitle());
                        ui->lbNum->setText(e2->getClave());
                        e2->show();
                        selectWindow(n,flagOpt);
                    }
                    break;
        case ID_E3:
                    if(lst.at(n)->widget() != NULL){
                        //Actualizamos los componentes atomicos *(los heredados por la clase "pantallas")
                        e3->setUpdateableChildrenList();
                        e3->update();
                        ui->lbTitle->setText(e3->getTitle());
                        ui->lbNum->setText(e3->getClave());
                        flagOpt = 1;
                        selectWindow(n, flagOpt);
                    }else{
                        //()<< "Creando E3";
                        flagOpt = 0;
                        e3 = new E3(this,m_shrdMem);
                        e3->setUpdateableChildrenList();
                        e3->setAttribute(Qt::WA_DeleteOnClose);
                        ui->mdiArea->addSubWindow(e3, Qt::FramelessWindowHint);
                        ui->lbTitle->setText(e3->getTitle());
                        ui->lbNum->setText(e3->getClave());
                        e3->show();
                        selectWindow(n,flagOpt);
                    }
                    break;
        case ID_F1:
                    if(lst.at(n)->widget() != NULL){
                        //Actualizamos los componentes atomicos *(los heredados por la clase "pantallas")
                        f1->setUpdateableChildrenList();
                        f1->update();
                        ui->lbTitle->setText(f1->getTitle());
                        ui->lbNum->setText(f1->getClave());
                        flagOpt = 1;
                        selectWindow(n, flagOpt);
                    }else{
                        //()<< "Creando F1";
                        flagOpt = 0;
                        f1 = new F1(this,m_shrdMem);
                        f1->setUpdateableChildrenList();
                        f1->setAttribute(Qt::WA_DeleteOnClose);
                        ui->mdiArea->addSubWindow(f1, Qt::FramelessWindowHint);
                        ui->lbTitle->setText(f1->getTitle());
                        ui->lbNum->setText(f1->getClave());
                        f1->show();
                        selectWindow(n,flagOpt);
                    }
                    break;
        case ID_F2:
                    if(lst.at(n)->widget() != NULL){
                        //()<< "Actualizando F2";
                        //Actualizamos los componentes atomicos *(los heredados por la clase "pantallas")
                        f2->setUpdateableChildrenList();
                        f2->update();
                        ui->lbTitle->setText(f2->getTitle());
                        ui->lbNum->setText(f2->getClave());
                        flagOpt = 1;
                        selectWindow(n, flagOpt);
                    }else{
                        //()<< "Creando F2";
                        flagOpt = 0;
                        f2 = new F2(this,m_shrdMem);
                        f2->setUpdateableChildrenList();
                        f2->setAttribute(Qt::WA_DeleteOnClose);
                        ui->mdiArea->addSubWindow(f2, Qt::FramelessWindowHint);
                        ui->lbTitle->setText(f2->getTitle());
                        ui->lbNum->setText(f2->getClave());
                        f2->show();
                        selectWindow(n,flagOpt);
                    }
                    break;
        case ID_F3:
                    if(lst.at(n)->widget() != NULL){
                        //Actualizamos los componentes atomicos *(los heredados por la clase "pantallas")
                        f3->setUpdateableChildrenList();
                        f3->update();
                        ui->lbTitle->setText(f3->getTitle());
                        ui->lbNum->setText(f3->getClave());
                        flagOpt = 1;
                        selectWindow(n, flagOpt);
                    }else{
                        //()<< "Creando F3";
                        flagOpt = 0;
                        f3 = new F3(this,m_shrdMem);
                        f3->setUpdateableChildrenList();
                        f3->setAttribute(Qt::WA_DeleteOnClose);
                        ui->mdiArea->addSubWindow(f3, Qt::FramelessWindowHint);
                        ui->lbTitle->setText(f3->getTitle());
                        ui->lbNum->setText(f3->getClave());
                        f3->show();
                        selectWindow(n,flagOpt);
                    }
                    break;
        case ID_F4:
                    if(lst.at(n)->widget() != NULL){
                        //Actualizamos los componentes atomicos *(los heredados por la clase "pantallas")
                        f4->setUpdateableChildrenList();
                        f4->update();
                        ui->lbTitle->setText(f4->getTitle());
                        ui->lbNum->setText(f4->getClave());
                        flagOpt = 1;
                        selectWindow(n, flagOpt);
                    }else{
                        //()<< "Creando F4";
                        flagOpt = 0;
                        f4 = new F4(this,m_shrdMem);
                        f4->setUpdateableChildrenList();
                        f4->setAttribute(Qt::WA_DeleteOnClose);
                        ui->mdiArea->addSubWindow(f4, Qt::FramelessWindowHint);
                        ui->lbTitle->setText(f4->getTitle());
                        ui->lbNum->setText(f4->getClave());
                        f4->show();
                        selectWindow(n,flagOpt);
                    }
                    break;
        case ID_F5:
                    if(lst.at(n)->widget() != NULL){
                        //Actualizamos los componentes atomicos *(los heredados por la clase "pantallas")
                        f5->setUpdateableChildrenList();
                        f5->update();
                        ui->lbTitle->setText(f5->getTitle());
                        ui->lbNum->setText(f5->getClave());
                        flagOpt = 1;
                        selectWindow(n, flagOpt);
                    }else{
                        //()<< "Creando F5";
                        flagOpt = 0;
                        f5 = new F5(this,m_shrdMem);
                        f5->setUpdateableChildrenList();
                        f5->setAttribute(Qt::WA_DeleteOnClose);
                        ui->mdiArea->addSubWindow(f5, Qt::FramelessWindowHint);
                        ui->lbTitle->setText(f5->getTitle());
                        ui->lbNum->setText(f5->getClave());
                        f5->show();
                        selectWindow(n,flagOpt);
                    }
                    break;

        case ID_N1:
                    if(lst.at(n)->widget() != NULL){
                        //Actualizamos los componentes atomicos *(los heredados por la clase "pantallas")
                        n1->setUpdateableChildrenList();
                        // *** Verificar que hace el metodo Update *(al parecer uno es implementado por la herencia a la clase "pantallas")
                        n1->update();
                        //Actualizamos los datos del encabezado
                        //ui->lbTitle->setText(zonaAlim->getTitle());
                        //ui->lbNum->setText(zonaAlim->getClave());
                        flagOpt = 1;
                        //Activamos la intefaz (considerandose que ya fue creada)
                        selectWindow(n, flagOpt);
                    }else{
                        //()<< "Creando zonaAlim";
                        flagOpt = 0;
                        //Generamos una instancia de A1
                        n1 = new N1(this,m_shrdMem);
                        n1->setUpdateableChildrenList();
                        //Ocultamos los "bordes" de la ventana
                        ui->mdiArea->addSubWindow(n1, Qt::FramelessWindowHint);
                        //Nos aseguramos que al cerrar el widget éste sea eliminado
                        n1->setAttribute(Qt::WA_DeleteOnClose);
                        //Fijamos los datos de la nueva interfaz en el encabezado
                        //ui->lbTitle->setText(zonaAlim->getTitle());
                        //ui->lbNum->setText(zonaAlim->getClave());
                        //Mostramos la interfaz
                        n1->show();
                        //Validamos que la interfaz sea activada (respecto al histórico de todas las interfaces creadas)
                        selectWindow(n,flagOpt);
                    }
                    break;

        case ID_N2:
                    if(lst.at(n)->widget() != NULL){
                        //Actualizamos los componentes atomicos *(los heredados por la clase "pantallas")
                        n2->setUpdateableChildrenList();
                        // *** Verificar que hace el metodo Update *(al parecer uno es implementado por la herencia a la clase "pantallas")
                        n2->update();
                        //Fijamos los datos de la interfaz en el encabezado
                        //ui->lbTitle->setText(SisAguaRes->getTitle());
                        //ui->lbNum->setText(SisAguaRes->getClave());
                        flagOpt = 1;
                        selectWindow(n, flagOpt);
                    }else{
                        //()<< "Creando SisAguaRes";
                        flagOpt = 0;
                        n2 = new N2(this,m_shrdMem);
                        n2->setUpdateableChildrenList();
                        //Ocultamos los "bordes" de la ventana
                        n2->setAttribute(Qt::WA_DeleteOnClose);
                        ui->mdiArea->addSubWindow(n2, Qt::FramelessWindowHint);
                        //ui->lbTitle->setText(SisAguaRes->getTitle());
                        //ui->lbNum->setText(SisAguaRes->getClave());
                        //Mostramos la interfaz
                        n2->show();
                        selectWindow(n,flagOpt);
                    }
                    break;

        case ID_N3:
                    if(lst.at(n)->widget() != NULL){
                        //Actualizamos los componentes atomicos *(los heredados por la clase "pantallas")
                        n3->setUpdateableChildrenList();
                        // *** Verificar que hace el metodo Update *(al parecer uno es implementado por la herencia a la clase "pantallas")
                        n3->update();
                        //ui->lbTitle->setText(SisGasComb->getTitle());
                        //ui->lbNum->setText(SisGasComb->getClave());
                        flagOpt = 1;
                        selectWindow(n, flagOpt);
                    }else{
                        //()<< "Creando SisGasComb";
                        flagOpt = 0;
                        n3 = new N3(this,m_shrdMem);
                        n3->setAttribute(Qt::WA_DeleteOnClose);
                        n3->setUpdateableChildrenList();
                        ui->mdiArea->addSubWindow(n3, Qt::FramelessWindowHint);
                        //ui->lbTitle->setText(SisGasComb->getTitle());
                        //ui->lbNum->setText(SisGasComb->getClave());
                        n3->show();
                        selectWindow(n,flagOpt);
                    }
                    break;

        case ID_N4:
                   if(lst.at(n)->widget() != NULL){
                        //Actualizamos los componentes atomicos *(los heredados por la clase "pantallas")
                        n4->setUpdateableChildrenList();
                        // *** Verificar que hace el metodo Update *(al parecer uno es implementado por la herencia a la clase "pantallas")
                        n4->update();
                        //ui->lbTitle->setText(Widget->getTitle());
                        //ui->lbNum->setText(Widget->getClave());
                        flagOpt = 1;
                        selectWindow(n, flagOpt);
                    }else{
                        //()<< "Creando Widget";
                        flagOpt = 0;
                        n4 = new N4(this,m_shrdMem);
                        n4->setAttribute(Qt::WA_DeleteOnClose);
                        n4->setUpdateableChildrenList();
                        ui->mdiArea->addSubWindow(n4, Qt::FramelessWindowHint);
                        //ui->lbTitle->setText(Widget->getTitle());
                        //ui->lbNum->setText(Widget->getClave());
                        n4->show();
                        selectWindow(n,flagOpt);
                    }
                    break;
        case ID_N5:
                    if(lst.at(n)->widget() != NULL){
                        //Actualizamos los componentes atomicos *(los heredados por la clase "pantallas")
                        n5->setUpdateableChildrenList();
                        n5->update();
                        //ui->lbTitle->setText(ENFRIADOR->getTitle());
                        //ui->lbNum->setText(ENFRIADOR->getClave());
                        flagOpt = 1;
                        selectWindow(n, flagOpt);
                    }else{
                        //()<< "Creando ENFRIADOR";
                        flagOpt = 0;
                        n5 = new N5(this,m_shrdMem);
                        n5->setUpdateableChildrenList();
                        n5->setAttribute(Qt::WA_DeleteOnClose);
                        ui->mdiArea->addSubWindow(n5, Qt::FramelessWindowHint);
                        //ui->lbTitle->setText(ENFRIADOR->getTitle());
                        //ui->lbNum->setText(ENFRIADOR->getClave());
                        n5->show();
                        selectWindow(n,flagOpt);
                    }
                    break;
        case ID_N6:
                    if(lst.at(n)->widget() != NULL){
                        //Actualizamos los componentes atomicos *(los heredados por la clase "pantallas")
                        n6->setUpdateableChildrenList();
                        n6->update();
                        //ui->lbTitle->setText(CompresorGas->getTitle());
                        //ui->lbNum->setText(CompresorGas->getClave());
                        flagOpt = 1;
                        selectWindow(n, flagOpt);
                    }else{
                        //()<< "Creando CompresorGas";
                        flagOpt = 0;
                        n6 = new N6(this,m_shrdMem);
                        n6->setAttribute(Qt::WA_DeleteOnClose);
                        n6->setUpdateableChildrenList();
                        ui->mdiArea->addSubWindow(n6, Qt::FramelessWindowHint);
                        //ui->lbTitle->setText(CompresorGas->getTitle());
                        //ui->lbNum->setText(CompresorGas->getClave());
                        n6->show();
                        selectWindow(n,flagOpt);
                   }
                   break;


        case ID_N7:
                   if(lst.at(n)->widget() != NULL){
                        //Actualizamos los componentes atomicos *(los heredados por la clase "pantallas")
                        n7->setUpdateableChildrenList();
                        n7->update();
                        //ui->lbTitle->setText(filtroGas->getTitle());
                        //ui->lbNum->setText(filtroGas->getClave());
                        flagOpt = 1;
                        selectWindow(n, flagOpt);
                    }else{
                        //()<< "Creando filtroGas";
                        flagOpt = 0;
                        n7 = new N7(this,m_shrdMem);
                        n7->setUpdateableChildrenList();
                        n7->setAttribute(Qt::WA_DeleteOnClose);
                        ui->mdiArea->addSubWindow(n7, Qt::FramelessWindowHint);
                        //ui->lbTitle->setText(filtroGas->getTitle());
                        //ui->lbNum->setText(filtroGas->getClave());
                        n7->show();
                        selectWindow(n,flagOpt);
                    }
                    break;
        case ID_N8:
                    if(lst.at(n)->widget() != NULL){
                        //()<< "Actualizando SistAguaContrain";
                        //Actualizamos los componentes atomicos *(los heredados por la clase "pantallas")
                        n8->setUpdateableChildrenList();
                        n8->update();
                        //ui->lbTitle->setText(SistAguaContrain->getTitle());
                        //ui->lbNum->setText(SistAguaContrain->getClave());
                        flagOpt = 1;
                        selectWindow(n, flagOpt);
                    }else{
                        //()<< "Creando SistAguaContrain";
                        flagOpt = 0;
                        n8 = new N8(this,m_shrdMem);
                        n8->setUpdateableChildrenList();
                        n8->setAttribute(Qt::WA_DeleteOnClose);
                        ui->mdiArea->addSubWindow(n8, Qt::FramelessWindowHint);
                        //ui->lbTitle->setText(SistAguaContrain->getTitle());
                        //ui->lbNum->setText(SistAguaContrain->getClave());
                        n8->show();
                        selectWindow(n,flagOpt);
                    }
                    break;
        default:
                    if(lst.at(n)->widget() != NULL){
                        menu->setUpdateableChildrenList();
                        ui->lbTitle->setText(menu->getTitle());
                        ui->lbNum->setText(menu->getClave());
                        menu->update();
                        flagOpt = 1;
                        menu->show();
                        selectWindow(n, flagOpt);
                    }
                    else{
                        //()<<"Creando Menu";
                        flagOpt = 0;
                        menu = new Menu(this,m_shrdMem);
                        ui->mdiArea->addSubWindow(menu, Qt::FramelessWindowHint);
                        menu->setUpdateableChildrenList();
                        menu->setAttribute(Qt::WA_DeleteOnClose);
                        ui->lbTitle->setText(menu->getTitle());
                        ui->lbNum->setText(menu->getClave());
                        menu->show();
                        selectWindow(n,flagOpt);
                    }
   }

}

void SiTTuGAs::Connections()
{
    //Veificar si es necesaria esta linea de codigo
    //connect(ui->mdiArea, SIGNAL(subWindowActivated(QMdiSubWindow*)),this, SLOT(reconnectUpdateSignal()));

    connect(this->menu, SIGNAL(ActivaInterfaz(int)), this, SLOT(ChangeWin(int)));

    connect(ui->btn_Menu, SIGNAL(clicked()), this, SLOT(ViewMenu()));
    connect(ui->btn_Back, SIGNAL(clicked()), this, SLOT(PrevWin()));
    connect(ui->btn_Fwd, SIGNAL(clicked()), this, SLOT(NextWin()));

    connect(ui->btn_Main, SIGNAL(clicked()), this, SLOT(ViewMain()));
    connect(ui->btn_Systems, SIGNAL(clicked()), this, SLOT(ViewSystems()));
    connect(ui->btn_Monitor, SIGNAL(clicked()), this, SLOT(ViewMonitor()));
    connect(ui->btn_Utils, SIGNAL(clicked()), this, SLOT(ViewUtils()));
    connect(ui->btn_Tends, SIGNAL(clicked()), this, SLOT(ViewTends()));
    connect(ui->btn_Alarms, SIGNAL(clicked()), this, SLOT(ViewAlarms()));
    //Apartado de vistas BOP
    connect(this->menu,SIGNAL(ActivaVista(int)),this,SLOT(ViewBOP(int)));
    connect(ui->btn_Back_2,SIGNAL(clicked()),this,SLOT(PrevWin()));
    connect(ui->btn_Fwd_2,SIGNAL(clicked()),this,SLOT(NextWin()));
    connect(ui->btn_Ack,SIGNAL(clicked()),this,SLOT(ViewMenu()));

}

void SiTTuGAs::selectWindow(int n, int opt)
{
    lst = ui->mdiArea->subWindowList(QMdiArea::CreationOrder);
    ////()<<"Tengo al inicio en la lista: "<< lst.length();
    if(opt == 0)
        lst.at(n)->setWidget(lst.takeLast());
        //Eliminamos la ultima ventana agregada
    ////()<<"Tengo al final en la lista: "<< lst.length();
    //Activamos la GUI de acuerdo a la interfaz clickeada
    ui->mdiArea->setActiveSubWindow(lst.at(n));

}

void SiTTuGAs::PrevWin()
{   //Accedemos a la anterior ventana (considerando la actual)
    if(currentWin != ID_MENU){
        //Consideramos los casos en los que el menu debe "posicionarnos" de acuerdo a la categoria a la que pertenece
        switch(currentWin)
        {
            case ID_A1:
                        currentWin = ID_A6;
                        break;
            case ID_B1:
                        currentWin = ID_B14;
                        break;
            case ID_C1:
                        currentWin = ID_C5;
                        break;
            case ID_D1:
                        currentWin = ID_D9;
                        break;
            case ID_E1:
                        currentWin = ID_E3;
                        break;
            case ID_F1:
                        currentWin = ID_F5;
                        break;

            case ID_N1:
                        currentWin = ID_N8;
                        break;
            default:
                        currentWin--;

        }
        ChangeWin(currentWin);
    }
}

void SiTTuGAs::NextWin()
{   //Accedemos a la ventana que continua de acuerdo a la actual (orden marcado por el menú)
    if(currentWin != ID_MENU){
        //Consideramos los casos en los que el menu debe "reiniciar" de acuerdo a la categoria a la que pertenece
        switch(currentWin)
        {
            case ID_A6:
                        currentWin = ID_A1;
                        break;
            case ID_B14:
                        currentWin = ID_B1;
                        break;
            case ID_C5:
                        currentWin = ID_C1;
                        break;
            case ID_D9:
                        currentWin = ID_D1;
                        break;
            case ID_E3:
                        currentWin = ID_E1;
                        break;
            case ID_F5:
                        currentWin = ID_F1;
                        break;

            case ID_N8: currentWin = ID_N1;
                        break;
            default:
                        currentWin++;

        }
        ChangeWin(currentWin);
    }
}

void SiTTuGAs::ViewMenu()
{
    ChangeWin(ID_MENU);
    //Tambien podemos hacerlo de esta manera
    //ui->mdiArea->setActiveSubWindow(lst.first());
    //ocultamos la barra de menu de BOP y mostramos las demas
    ui->TitleBar->show();
    ui->ButtonBar->show();
    ui->ButtonBarBOP->hide();
}

void SiTTuGAs::ViewMain()
{
    ChangeWin(ID_A1);
}
void SiTTuGAs::ViewSystems()
{
    ChangeWin(ID_B1);
}
void SiTTuGAs::ViewMonitor()
{
    ChangeWin(ID_C1);
}
void SiTTuGAs::ViewUtils()
{
    ChangeWin(ID_D1);
}
void SiTTuGAs::ViewTends()
{
    ChangeWin(ID_E1);
}
void SiTTuGAs::ViewAlarms()
{
    ChangeWin(ID_F1);
}
//Funcion, inicia timer que actualiza hora,fecha y actualizacion de variables
void SiTTuGAs::initDateTimeTimer(){

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(emitUpdate()));
    timer->start(700);
}

void SiTTuGAs::emitUpdate()
{
    emit Update();
}

void SiTTuGAs::reconnectUpdateSignal()
{
    disconnect(this,SIGNAL(Update()), 0, 0);

    if(ui->mdiArea->activeSubWindow()!=0)
    {
        connect(this, SIGNAL(Update()),ui->mdiArea->activeSubWindow()->widget(),SLOT(Update()));
    }
}

void SiTTuGAs::ViewBOP(int id)
{
    ChangeWin(id);
    ui->TitleBar->hide();
    ui->ButtonBar->hide();
    ui->ButtonBarBOP->show();
}

SiTTuGAs::~SiTTuGAs()
{
    //()<< "Total en lista (al finalizar): " << lst.length() ;
    //Liberamos la lista creada para contener las GUI
    for(int x=0; x<lst.length(); x++)
    {
        if(lst.at(x)->widget() != NULL)
            lst.at(x)->widget()->close();
        lst.at(x)->close();
    }
    delete ui;
}
