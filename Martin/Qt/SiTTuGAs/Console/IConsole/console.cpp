#include "console.h"
#include "ui_console.h"
#include <QtGui>
#include "Sittugas/sittugas.h"
#include "Console/Login/passwdialog.h"
#include "BitaC/bitac.h"

#include "Console/PInternos/parametrosinternos.h"
#include "Console/Fallas/fallas.h"
#include "Console/Monitoreo/monitoreov.h"
#include "Console/GrupoCurvas/grupocurves.h"
#include "Console/GrupoVariables/grupovars.h"
#include "Console/BitacoraI/bitacorai.h"
#include "Console/BitacoraO/bitacorao.h"
#include "Console/CIniciales/condicionesiniciales.h"
#include "Console/CIEdit/ci_edit.h"
#include "Console/Reproducir/retroceder.h"
#include "Console/CIHistorial/ci_historial.h"
#include "Console/MConfiguracion/configuraciondemodelos.h"

Console::Console(QWidget *parent,Settings *s) :
    QMainWindow(parent),
    ui(new Ui::Console),ui2(new Ui::ParametrosSimulacion)
{
    setAttribute(Qt::WA_DeleteOnClose);
    ui->setupUi(this);

//    HTTPRequest *m_shrdMem = new HTTPRequest(this);

    settings = s;
    createMenu();
    createActions();
    createIcons();
    setActionsToMenu();
    createToolBar();

    QTimer *updatetimer = new QTimer(this);
    connect(updatetimer, SIGNAL(timeout()), this, SLOT(UpdateHMI()));
    updatetimer->start(1000);


    BitaC::escribeBTC("Consola del instructor iniciada exitosamente.");
}

void Console::createMenu()
{
    menuMando = new QMenu("Mando",this);
    menuMando->setObjectName(QString::fromUtf8("menuMando"));

    menuEstadosIniciales = new QMenu("Estados Iniciales",this);
    menuEstadosIniciales->setObjectName(QString::fromUtf8("menuEstadosIniciales"));
    menuParametrosOperacion = new QMenu("Parametros de Operacion",this);
    menuParametrosOperacion->setObjectName(QString::fromUtf8("menuParametrosOperacion"));
    menuMonitoreo = new QMenu("Monitoreo",this);
    menuMonitoreo->setObjectName(QString::fromUtf8("menuMonitoreo"));
    menuHistoriales = new QMenu("Historiales",this);
    menuHistoriales->setObjectName(QString::fromUtf8("menuHistoriales"));
    menuMantenimiento = new QMenu("Mantenimiento",this);
    menuMantenimiento->setObjectName(QString::fromUtf8("menuMantenimiento"));

    QSignalMapper *Mapper;
    volumeMenu = new QMenu("Audio",this);
    Mapper = new QSignalMapper(this);
    QStringList texts;
    texts<<"Volumen 0%"<<"Volumen 25%"<<"Volumen 50%"<<"Volumen 75%"<<"Volumen 100%";
    for (int i = 0; i < texts.size(); ++i) {
        QAction *button = new QAction(texts[i],this);
        connect(button, SIGNAL(triggered()), Mapper, SLOT(map()));
        Mapper->setMapping(button,i);
        volumeMenu->addAction(button);
    }
    connect(Mapper, SIGNAL(mapped(int)),this, SIGNAL(volumeClicked(int)));
    connect(this, SIGNAL(volumeClicked(int)),this, SLOT(volumecClicked(int)));


    viewWMenu = new QMenu("Ver",this);
    texts.clear();;
    texts<<"Barra de Mando"<<"Barra de Estados Iniciales"<<"Barra de Parametros de Operación"<<"Barra de Monitoreo"<<"Barra de Historiales"<<"Barra de Mantenimiento";

    QAction *button;
    button = new QAction(texts[0],this);
    connect(button, SIGNAL(toggled(bool)), this, SLOT(view0(bool)));
    button->setCheckable(true);
    viewWMenu->addAction(button);

    button = new QAction(texts[1],this);
    connect(button, SIGNAL(toggled(bool)), this, SLOT(view1(bool)));
    button->setCheckable(true);
    viewWMenu->addAction(button);

    button = new QAction(texts[2],this);
    connect(button, SIGNAL(toggled(bool)), this, SLOT(view2(bool)));
    button->setCheckable(true);
    viewWMenu->addAction(button);

    button = new QAction(texts[3],this);
    connect(button, SIGNAL(toggled(bool)), this, SLOT(view3(bool)));
    button->setCheckable(true);
    viewWMenu->addAction(button);

    button = new QAction(texts[4],this);
    connect(button, SIGNAL(toggled(bool)), this, SLOT(view4(bool)));
    button->setCheckable(true);
    viewWMenu->addAction(button);

    button = new QAction(texts[5],this);
    connect(button, SIGNAL(toggled(bool)), this, SLOT(view5(bool)));
    button->setCheckable(true);
    viewWMenu->addAction(button);
}

void Console::createActions()
{
    a_a_0 = new QAction(QIcon(":/Resources/Console/a_a_0.png"),tr("Crear HMI"),this);
    connect(a_a_0, SIGNAL(triggered()), this, SLOT(a_a_0_clicked()));
    a_a_1 = new QAction(QIcon(":/Resources/Console/a_a_1.png"),tr("Cambio de instructor"),this);
    connect(a_a_1, SIGNAL(triggered()), this, SLOT(a_a_1_clicked()));
    a_a_2 = new QAction(QIcon(":/Resources/Console/a_a_2.png"),tr("Nueva cuenta"),this);
    connect(a_a_2, SIGNAL(triggered()), this, SLOT(a_a_2_clicked()));
    a_a_3 = new QAction(QIcon(":/Resources/Console/a_a_3.png"),tr("Iniciar simulación"),this);
    connect(a_a_3, SIGNAL(triggered()), this, SLOT(a_a_3_clicked()));
    a_a_4 = new QAction(QIcon(":/Resources/Console/a_a_4.png"),tr("Detener simulación"),this);
    connect(a_a_4, SIGNAL(triggered()), this, SLOT(a_a_4_clicked()));
    a_a_5 = new QAction(QIcon(":/Resources/Console/a_a_5.png"),tr("Retroceder rápido"),this);
    connect(a_a_5, SIGNAL(triggered()), this, SLOT(a_a_5_clicked()));
    a_a_6 = new QAction(QIcon(":/Resources/Console/a_a_6.png"),tr("Retroceder"),this);
    connect(a_a_6, SIGNAL(triggered()), this, SLOT(a_a_6_clicked()));
    a_a_7 = new QAction(QIcon(":/Resources/Console/a_a_7.png"),tr("Reproducir"),this);
    connect(a_a_7, SIGNAL(triggered()), this, SLOT(a_a_7_clicked()));
    a_a_8 = new QAction(QIcon(":/Resources/Console/a_a_8.png"),tr("Avanzar"),this);
    connect(a_a_8, SIGNAL(triggered()), this, SLOT(a_a_8_clicked()));
    a_a_9 = new QAction(QIcon(":/Resources/Console/a_a_9.png"),tr("Avanzar rápido"),this);
    connect(a_a_9, SIGNAL(triggered()), this, SLOT(a_a_9_clicked()));
    a_a_10 = new QAction(QIcon(":/Resources/Console/a_a_10.png"),tr("Parámetros de simulación"),this);
    connect(a_a_10, SIGNAL(triggered()), this, SLOT(a_a_10_clicked()));
    a_a_11 = new QAction(QIcon(":/Resources/Console/a_a_12.png"),tr("Salir"),this);
    connect(a_a_11, SIGNAL(triggered()), this, SLOT(a_a_11_clicked()));

    a_b_1 = new QAction(QIcon("://Resources/Console/a_b_1.png"),tr("Predefinidas"),this);
    connect(a_b_1, SIGNAL(triggered()), this, SLOT(a_b_1_clicked()));
    a_b_2 = new QMenu(tr("Definidas por instructor"),this);
    a_b_2->setIcon(QIcon("://Resources/Console/a_b_2.png"));

    a_b_2_1 = new QAction(QIcon("://Resources/Console/a_b_2_1.png"),tr("Seleccionar CI"),this);
    connect(a_b_2_1, SIGNAL(triggered()), this, SLOT(a_b_2_1_clicked()));
    a_b_2_2 = new QAction(QIcon("://Resources/Console/a_b_2_2.png"),tr("Editar CI"),this);
    connect(a_b_2_2, SIGNAL(triggered()), this, SLOT(a_b_2_2_clicked()));

    a_b_3 = new QAction(QIcon("://Resources/Console/a_b_3.png"),tr("Historial"),this);
    connect(a_b_3, SIGNAL(triggered()), this, SLOT(a_b_3_clicked()));

    a_c_1 = new QAction(QIcon("://Resources/Console/a_c_1.png"),tr("Fallas"),this);
    connect(a_c_1, SIGNAL(triggered()), this, SLOT(a_c_1_clicked()));
    a_c_2 = new QAction(QIcon("://Resources/Console/a_c_2.png"),tr("Parametros internos"),this);
    connect(a_c_2, SIGNAL(triggered()), this, SLOT(a_c_2_clicked()));
    a_c_3 = new QAction(QIcon("://Resources/Console/a_c_3.png"),tr("Parametros externos"),this);
    connect(a_c_3, SIGNAL(triggered()), this, SLOT(a_c_3_clicked()));
    a_c_4 = new QAction(QIcon("://Resources/Console/a_c_4.png"),tr("Fallas Instrumentación"),this);
    connect(a_c_4, SIGNAL(triggered()), this, SLOT(a_c_4_clicked()));

    a_d_1 = new QAction(QIcon("://Resources/Console/a_d_1.png"),tr("Tablas"),this);
    connect(a_d_1, SIGNAL(triggered()), this, SLOT(a_d_1_clicked()));
    a_d_2 = new QAction(QIcon("://Resources/Console/a_d_2.png"),tr("Grupos de Curvas"),this);
    connect(a_d_2, SIGNAL(triggered()), this, SLOT(a_d_2_clicked()));
    a_d_3 = new QAction(QIcon("://Resources/Console/a_d_3.png"),tr("Grupos de variables"),this);
    connect(a_d_3, SIGNAL(triggered()), this, SLOT(a_d_3_clicked()));
    a_d_4 = new QAction(QIcon("://Resources/Console/t_a_4.png"),tr("Monitoreo"),this);
    connect(a_d_4, SIGNAL(triggered()), this, SLOT(a_d_4_clicked()));

    a_e_1 = new QAction(QIcon("://Resources/Console/a_e_1.png"),tr("Instructor"),this);
    connect(a_e_1, SIGNAL(triggered()), this, SLOT(a_e_1_clicked()));
    a_e_2 = new QAction(QIcon("://Resources/Console/a_e_2.png"),tr("Operador"),this);
    connect(a_e_2, SIGNAL(triggered()), this, SLOT(a_e_2_clicked()));

    a_f_1 = new QAction(QIcon("://Resources/Console/a_f_1.png"),tr("Configuración de modelos"),this);
    connect(a_f_1, SIGNAL(triggered()), this, SLOT(a_f_1_clicked()));
    a_f_2 = new QAction(QIcon("://Resources/Console/a_f_2.png"),tr("Audio"),this);

    a_f_2->setMenu(volumeMenu);
    a_f_3 = new QAction(QIcon("://Resources/Console/a_f_3.png"),tr("Ejercicios Automáticos"),this);
    connect(a_f_3, SIGNAL(triggered()), this, SLOT(a_f_3_clicked()));

    a_f_4 = new QAction(tr("Ver"),this);
    a_f_4->setIcon(QIcon("://Resources/Console/a_f_4.png"));
    a_f_4->setMenu(viewWMenu);
}
void Console::createToolBar(){
    TBMainToolBar = new ToolBar(this);
    TBMainToolBar->setWindowTitle("CONSOLA");
    TBMainToolBar->setMinimumSize(40,40);
    TBMainToolBar->setMaximumSize(210,210);
    TBMainToolBar->setMovable(true);
    TBMainToolBar->setColor(QColor(200,0,0));
    this->addToolBar(Qt::TopToolBarArea, TBMainToolBar);

    TBMainToolBar->addWidget(Mando);
    TBMainToolBar->addWidget(EstadosIn);
    TBMainToolBar->addWidget(ParametrosOp);
    TBMainToolBar->addWidget(Monitoreo);
    TBMainToolBar->addWidget(Historiales);
    TBMainToolBar->addWidget(Mantenimiento);
///////////////////////////////////////
    TBMando = new ToolBar(this);
    TBMando->setWindowTitle("Mando");
    TBMando->setMinimumSize(40,40);
    TBMando->setMovable(true);
    this->addToolBar(Qt::TopToolBarArea, TBMando);
    TBMando->close();
    TBMando->addWidget(createIcon(":/Resources/Console/a_a_0.png","Crear HMI",SLOT(a_a_0_clicked())));
    TBMando->addWidget(createIcon(":/Resources/Console/a_a_1.png","Crear HMI",SLOT(a_a_1_clicked())));
    TBMando->addWidget(createIcon(":/Resources/Console/a_a_2.png","Crear HMI",SLOT(a_a_2_clicked())));
    TBMando->addWidget(createIcon(":/Resources/Console/a_a_3.png","Crear HMI",SLOT(a_a_3_clicked())));
    TBMando->addWidget(createIcon(":/Resources/Console/a_a_4.png","Crear HMI",SLOT(a_a_4_clicked())));
    TBMando->addWidget(createIcon(":/Resources/Console/a_a_7.png","Crear HMI",SLOT(a_a_7_clicked())));
    TBMando->addWidget(createIcon(":/Resources/Console/a_a_10.png","Crear HMI",SLOT(a_a_10_clicked())));
////////////////////////////////////////
    TBEstadosIn = new ToolBar(this);
    TBEstadosIn->setWindowTitle("Estados Iniciales");
    TBEstadosIn->setMinimumSize(40,40);
    TBEstadosIn->setMovable(true);
    this->addToolBar(Qt::TopToolBarArea, TBEstadosIn);
    TBEstadosIn->close();
    TBEstadosIn->addWidget(createIcon(":/Resources/Console/a_b_1.png","Predefinidas",SLOT(a_b_1_clicked())));
    TBEstadosIn->addWidget(createIcon(":/Resources/Console/a_b_2_1.png","Seleccionar CI",SLOT(a_b_2_1_clicked())));
    TBEstadosIn->addWidget(createIcon(":/Resources/Console/a_b_2_2.png","Editar CI",SLOT(a_b_2_2_clicked())));
    TBEstadosIn->addWidget(createIcon(":/Resources/Console/a_b_3.png","Historial",SLOT(a_b_3_clicked())));
////////////////////////////////////////

    TBParametrosOp = new ToolBar(this);
    TBParametrosOp->setWindowTitle("Parametros de Operación");
    TBParametrosOp->setMinimumSize(40,40);
    TBParametrosOp->setMovable(true);
    this->addToolBar(Qt::TopToolBarArea, TBParametrosOp);
    TBParametrosOp->close();
    TBParametrosOp->addWidget(createIcon(":/Resources/Console/a_c_1.png","Fallas",SLOT(a_c_1_clicked())));
    TBParametrosOp->addWidget(createIcon(":/Resources/Console/a_c_2.png","Parametros internos",SLOT(a_c_2_clicked())));
    TBParametrosOp->addWidget(createIcon(":/Resources/Console/a_c_3.png","Parametros externos",SLOT(a_c_3_clicked())));
    TBParametrosOp->addWidget(createIcon(":/Resources/Console/a_c_4.png","Fallas Instrumentación",SLOT(a_c_4_clicked())));
////////////////////////////////////////
    TBMonitoreo = new ToolBar(this);
    TBMonitoreo->setWindowTitle("Monitoreo");
    TBMonitoreo->setMinimumSize(40,40);
    TBMonitoreo->setMovable(true);
    this->addToolBar(Qt::TopToolBarArea, TBMonitoreo);
    TBMonitoreo->close();
    TBMonitoreo->addWidget(createIcon(":/Resources/Console/a_d_1.png","Tablas",SLOT(a_d_1_clicked())));
    TBMonitoreo->addWidget(createIcon(":/Resources/Console/a_d_2.png","Grupos de Curvas",SLOT(a_d_2_clicked())));
    TBMonitoreo->addWidget(createIcon(":/Resources/Console/a_d_3.png","Grupos de variables",SLOT(a_d_3_clicked())));
    TBMonitoreo->addWidget(createIcon(":/Resources/Console/t_a_4.png","Monitoreo",SLOT(a_d_4_clicked())));

////////////////////////////////////////
    TBHistoriales = new ToolBar(this);
    TBHistoriales->setWindowTitle("Historiales");
    TBHistoriales->setMinimumSize(40,40);
    TBHistoriales->setMovable(true);
    this->addToolBar(Qt::TopToolBarArea, TBHistoriales);
    TBHistoriales->close();
    TBHistoriales->addWidget(createIcon(":/Resources/Console/a_e_1.png","Instructor",SLOT(a_e_1_clicked())));
    TBHistoriales->addWidget(createIcon(":/Resources/Console/a_e_2.png","Operador",SLOT(a_e_2_clicked())));
////////////////////////////////////////
    TBMantenimiento = new ToolBar(this);
    TBMantenimiento->setWindowTitle("Mantenimiento");
    TBMantenimiento->setMinimumSize(40,40);
    TBMantenimiento->setMovable(true);
    this->addToolBar(Qt::TopToolBarArea, TBMantenimiento);
    TBMantenimiento->close();
    TBMantenimiento->addWidget(createIcon(":/Resources/Console/a_f_1.png","Configuración de modelos",SLOT(a_f_1_clicked())));
    TBMantenimiento->addWidget(createIcon(":/Resources/Console/a_f_3.png","Ejercicios Automáticos",SLOT(a_f_3_clicked())));
////////////////////////////////////////
    addToolBars();
}

void Console::addToolBars()
{
    if(settings->m_firstSettings.isVisible_TBMando){TBMando->show();viewWMenu->actions().at(0)->setChecked(true);}
    if(settings->m_firstSettings.isVisible_TBEstadosIn){TBEstadosIn->show();viewWMenu->actions().at(1)->setChecked(true);}
    if(settings->m_firstSettings.isVisible_TBParametrosOp){TBParametrosOp->show();viewWMenu->actions().at(2)->setChecked(true);}
    if(settings->m_firstSettings.isVisible_TBMonitoreo){TBMonitoreo->show();viewWMenu->actions().at(3)->setChecked(true);}
    if(settings->m_firstSettings.isVisible_TBHistoriales){TBHistoriales->show();viewWMenu->actions().at(4)->setChecked(true);}
    if(settings->m_firstSettings.isVisible_TBMantenimiento){TBMantenimiento->show();viewWMenu->actions().at(5)->setChecked(true);}
}

void Console::view0(bool b){if(b){TBMando->show();}else{TBMando->close();}settings->m_firstSettings.isVisible_TBMando=b;settings->save();}
void Console::view1(bool b){if(b){TBEstadosIn->show();}else{TBEstadosIn->close();}settings->m_firstSettings.isVisible_TBEstadosIn=b;settings->save();}
void Console::view2(bool b){if(b){TBParametrosOp->show();}else{TBParametrosOp->close();}settings->m_firstSettings.isVisible_TBParametrosOp=b;settings->save();}
void Console::view3(bool b){if(b){TBMonitoreo->show();}else{TBMonitoreo->close();}settings->m_firstSettings.isVisible_TBMonitoreo=b;settings->save();}
void Console::view4(bool b){if(b){TBHistoriales->show();}else{TBHistoriales->close();}settings->m_firstSettings.isVisible_TBHistoriales=b;settings->save();}
void Console::view5(bool b){if(b){TBMantenimiento->show();}else{TBMantenimiento->close();}settings->m_firstSettings.isVisible_TBMantenimiento=b;settings->save();}

void Console::setActionsToMenu()
{
    menuMando->addAction(a_a_0);
    menuMando->addAction(a_a_1);
    menuMando->addAction(a_a_2);
    menuMando->addSeparator();
    menuMando->addAction(a_a_3);
    menuMando->addAction(a_a_4);
    menuMando->addSeparator();
    menuMando->addAction(a_a_7);
    menuMando->addSeparator();
    menuMando->addAction(a_a_10);
    menuMando->addSeparator();
    menuMando->addAction(a_a_11);

    menuEstadosIniciales->addAction(a_b_1);
    menuEstadosIniciales->addMenu(a_b_2);
        a_b_2->addAction(a_b_2_1);
        a_b_2->addAction(a_b_2_2);
    menuEstadosIniciales->addAction(a_b_3);

    menuParametrosOperacion->addAction(a_c_1);
    menuParametrosOperacion->addAction(a_c_2);
    menuParametrosOperacion->addAction(a_c_3);
    menuParametrosOperacion->addAction(a_c_4);

    menuMonitoreo->addAction(a_d_1);
    menuMonitoreo->addAction(a_d_2);
    menuMonitoreo->addAction(a_d_3);
    menuMonitoreo->addAction(a_d_4);

    menuHistoriales->addAction(a_e_1);
    menuHistoriales->addAction(a_e_2);

    menuMantenimiento->addAction(a_f_1);
    menuMantenimiento->addAction(a_f_2);
    menuMantenimiento->addAction(a_f_3);
    menuMantenimiento->addAction(a_f_4);

}

void Console::createIcons()
{
    Mando = new ToolB();
    Mando->setMinimumSize(30,30);
    Mando->setIcon(":/Resources/Console/t_a_1.png");
    Mando->setToolTip("Mando");
    Mando->setPopupMode(QToolButton::InstantPopup);
    Mando->setMenu(menuMando);

    EstadosIn = new ToolB();
    EstadosIn->setMinimumSize(30,30);
    EstadosIn->setIcon(":/Resources/Console/t_a_2.png");
    EstadosIn->setToolTip("Estados Iniciales");
    EstadosIn->setPopupMode(QToolButton::InstantPopup);
    EstadosIn->setMenu(menuEstadosIniciales);

    ParametrosOp = new ToolB();
    ParametrosOp->setMinimumSize(30,30);
    ParametrosOp->setIcon(":/Resources/Console/t_a_3.png");
    ParametrosOp->setToolTip("Parametros de Operación");
    ParametrosOp->setPopupMode(QToolButton::InstantPopup);
    ParametrosOp->setMenu(menuParametrosOperacion);

    Monitoreo = new ToolB();
    Monitoreo->setMinimumSize(30,30);
    Monitoreo->setIcon(":/Resources/Console/t_a_4.png");
    Monitoreo->setToolTip("Monitoreo");
    Monitoreo->setPopupMode(QToolButton::InstantPopup);
    Monitoreo->setMenu(menuMonitoreo);

    Historiales = new ToolB();
    Historiales->setMinimumSize(30,30);
    Historiales->setIcon(":/Resources/Console/t_a_5.png");
    Historiales->setToolTip("Historiales");
    Historiales->setPopupMode(QToolButton::InstantPopup);
    Historiales->setMenu(menuHistoriales);

    Mantenimiento = new ToolB();
    Mantenimiento->setMinimumSize(30,30);
    Mantenimiento->setIcon(":/Resources/Console/t_a_6.png");
    Mantenimiento->setToolTip("Mantenimiento");
    Mantenimiento->setPopupMode(QToolButton::InstantPopup);
    Mantenimiento->setMenu(menuMantenimiento);
}

//Funciones empleadas por las acciones creadas en "createActions"
void Console::a_a_0_clicked(){
    BitaC::escribeBTC(QString("Interface Creada"));
    SiTTuGAs *w = new SiTTuGAs();
    w->show();
}
void Console::a_a_1_clicked()
{
    BitaC::escribeBTC("Selección para el cambio de instructor.");
    PassWDialog *p = new PassWDialog(0,this->m_shrdMem);
    p->chgPes(0);
    p->show();
    p->username = this->user;
    connect(p, SIGNAL(autentificate(bool,QString)), this, SLOT(chkIns(bool, QString)));
}
void Console::chkIns(bool a, QString name)
{
    if(a)
    {
        BitaC::escribeBTC(QString("%0 cambio de usuario a %1").arg(this->user).arg(name));
        this->user = name;
        BitaC::user = this->user;
    }
    else
    {
        BitaC::escribeBTC("Falló en la validación del nuevo instructor");
    }
}

void Console::a_a_2_clicked(){
    PassWDialog *pwdDlg = new PassWDialog();
    pwdDlg->chgPes(1);
    pwdDlg->show();
    pwdDlg->username = this->user;
    connect(pwdDlg, SIGNAL(autentificate(bool,QString)), this, SLOT(chkIns(bool, QString)));
}
void Console::a_a_3_clicked(){

}
void Console::a_a_4_clicked(){
}
void Console::a_a_5_clicked(){
}
void Console::a_a_6_clicked(){
}
void Console::a_a_7_clicked(){        
    if(findChild<QDialog *>("Retroceder")==0){
        Retroceder* retroceso;
        retroceso= new Retroceder(this);
        retroceso->setWindowTitle("Retroceder");
        retroceso->show();
    }
}
void Console::a_a_8_clicked(){
}
void Console::a_a_9_clicked(){
}
void Console::a_a_10_clicked(){

    ParametrosSimulacion parametrosSimulacion;
    parametrosSimulacion.setWindowTitle("Parametros de Simulacion");

    if(parametrosSimulacion.exec()){

        switch(parametrosSimulacion.ui->slider->value()){

        case -3:
            //shrdMem->setI(997,PlayPauseConst);
            //shrdMem->setI(997,PlayPauseConst2);
            BitaC::escribeBTC("Ajustó a 1/4 la velocidad de simulación");
            break;
        case -2:
            //shrdMem->setI(998,PlayPauseConst);
            //shrdMem->setI(998,PlayPauseConst2);
            BitaC::escribeBTC("Ajustó a 1/3 la velocidad de simulación");
            break;
        case -1:
            //shrdMem->setI(999,PlayPauseConst);
            //shrdMem->setI(999,PlayPauseConst2);
            BitaC::escribeBTC("Ajustó a 1/2 la velocidad de simulación");
            break;
        case -0:
            //shrdMem->setI(3,PlayPauseConst);
            //shrdMem->setI(3,PlayPauseConst2);
            BitaC::escribeBTC("Ajustó a 1 la velocidad de simulación");
            break;
        case 1:
            //shrdMem->setI(1002,PlayPauseConst);
            //shrdMem->setI(1002,PlayPauseConst2);
            BitaC::escribeBTC("Ajustó a 2 la velocidad de simulación");
            break;
        case 2:
            //shrdMem->setI(1003,PlayPauseConst);
            //shrdMem->setI(1003,PlayPauseConst2);
            BitaC::escribeBTC("Ajustó a 3 la velocidad de simulación");
            break;
        case 3:
            //shrdMem->setI(1004,PlayPauseConst);
            //shrdMem->setI(1004,PlayPauseConst2);
            BitaC::escribeBTC("Ajustó a 4 la velocidad de simulación");
            break;
        }
    }
}
void Console::a_a_11_clicked(){
    this->close();
}
void Console::a_b_1_clicked(){
    //if(shrdMem->getI(PlayPauseConst2)==1 || shrdMem->getI(PlayPauseConst2)==0 || shrdMem->getI(PlayPauseConst2)==2){
        if(findChild<QDialog *>("CondicionesIniciales")==0){
        CondicionesIniciales *condicionesPredef;
        condicionesPredef=new CondicionesIniciales(this);
        condicionesPredef->setWindowTitle("Condiciones Iniciales Predefinidas");
        condicionesPredef->user=this->user;
        condicionesPredef->ini_pre=1;
        condicionesPredef->show();
        connect(condicionesPredef, SIGNAL(valsToCoins(QString,QString)), this, SLOT(rcbParCI(QString,QString))); //cambio aqui
        }
    //}
}
void Console::a_b_2_1_clicked(){
    //if(shrdMem->getI(PlayPauseConst2)==1 || shrdMem->getI(PlayPauseConst2)==0 || shrdMem->getI(PlayPauseConst2)==2){
        if(findChild<QDialog *>("CondicionesIniciales")==0)
        {
            CondicionesIniciales *condicionesIniciales;
            condicionesIniciales=new CondicionesIniciales(this);
            condicionesIniciales->setWindowTitle("Condiciones Iniciales de Instructor");
            condicionesIniciales->user=this->user;
            condicionesIniciales->show();
            connect(condicionesIniciales, SIGNAL(valsToCoins(QString,QString)), this, SLOT(rcbParCI(QString,QString)));
        }
    //}
}
void Console::a_b_2_2_clicked(){

  //  if(m_shrdMem->getI(PlayPauseConst2)==1 || m_shrdMem->getI(PlayPauseConst2)==0 || m_shrdMem->getI(PlayPauseConst2)==2){
        if(findChild<QDialog *>("CI_Edit")==0){
            CI_Edit *ci_Edit;
            ci_Edit=new CI_Edit(this);
            ci_Edit->setWindowTitle("Edición de Condiciones Iniciales");
            //-----------------------------------------------------------------------------------------
            ci_Edit->user = this->user;
            //-----------------------------------------------------------------------------------------
            ci_Edit->show();
        }
   // }
}
void Console::a_b_3_clicked(){
//    if(shrdMem->getI(PlayPauseConst2)==1 || shrdMem->getI(PlayPauseConst2)==0 || shrdMem->getI(PlayPauseConst2)==2){
        if(findChild<QDialog *>("CI_Historial")==0){
        CI_Historial *ci_Historial;
        ci_Historial=new CI_Historial(this);
        ci_Historial->setWindowTitle("Historial");
        ci_Historial->user = this->user;
        ci_Historial->show();
        }
  //  }
}
void Console::a_c_1_clicked(){
    if(findChild<QDialog *>("Fallas")==0){
        Fallas *fallas;
        fallas=new Fallas(this, "F");
        fallas->setWindowTitle("Fallas");
        fallas->show();
    }
}
void Console::a_c_2_clicked(){
    ParametrosInternos *parametrosInternos;
    if(findChild<QDialog *>("ParametrosInternos")==0){
    parametrosInternos=new ParametrosInternos(this, "PI");
    parametrosInternos->setWindowTitle("Parametros Internos");
    parametrosInternos->show();
    }
}
void Console::a_c_3_clicked(){
    ParametrosInternos *parametrosExternos;
    if(findChild<QDialog *>("ParametrosExternos")==0){
    parametrosExternos=new ParametrosInternos(this, "PE");
    parametrosExternos->setObjectName("ParametrosExternos");
    parametrosExternos->setWindowTitle("Parametros Externos");
    parametrosExternos->show();
    }
}
void Console::a_c_4_clicked(){
    if(findChild<QDialog *>("FallasInst")==0){
        Fallas *fallasInst;
        fallasInst =new Fallas(this, "FI");
        fallasInst->setObjectName("FallasInst");
        fallasInst->setWindowTitle("Fallas de Instrumentos");
        fallasInst->show();
    }
}
void Console::a_d_1_clicked(){
    if(findChild<QDialog *>("Tablas")==0){
     tablas = new Tablas(this);
     tablas->user=this->user;
     tablas->setWindowTitle("Tablas");
     tablas->show();
     }

    else if(!(findChild<QDialog *>("Tablas")==0)){
     tablas->show();
    }
}
void Console::a_d_2_clicked(){
    if(findChild<QDialog *>("GrupoCurves")==0){
        GrupoCurves *grupoCurves;
        grupoCurves=new GrupoCurves(this);
        grupoCurves->user=this->user;
        grupoCurves->setWindowTitle("Edición de grupos de curvas");
        grupoCurves->show();
    }
}
void Console::a_d_3_clicked(){
    if(findChild<QDialog *>("GrupoVars")==0){
        GrupoVars *grupoVars;
        grupoVars=new GrupoVars(this);
        grupoVars->user=this->user;
        grupoVars->setWindowTitle("Edición de grupos de variables");
        grupoVars->show();
    }
}
void Console::a_d_4_clicked(){    
    if(findChild<QDialog *>("MonitoreoV")==0){
        MonitoreoV *monitoreoV;
        monitoreoV=new MonitoreoV(this);
        monitoreoV->user=this->user;
        monitoreoV->setWindowTitle("Monitoreo de Variables");
        monitoreoV->show();
    }
}
void Console::a_e_1_clicked(){
    if(findChild<QDialog *>("BitacoraI")==0)
    {
        BitacoraI *bitacoraI;
        bitacoraI=new BitacoraI(this, this->user);
        bitacoraI->setWindowTitle("Bitacora de Instructor");
        bitacoraI->show();
    }
}
void Console::a_e_2_clicked(){
    if(findChild<QDialog *>("BitacoraO")==0)
    {
        BitacoraO *bitacoraO;
        bitacoraO = new BitacoraO(this, this->user);
        bitacoraO->setWindowTitle("Bitacora de Operador");
        bitacoraO->show();
    }
}
void Console::a_f_1_clicked(){
    if(findChild<QDialog *>("ConfiguracionDeModelos")==0){
    ConfiguracionDeModelos* configuracionDeModelos;
    configuracionDeModelos=new ConfiguracionDeModelos(this);
    configuracionDeModelos->setWindowTitle("Configuracion de Modelos");
    configuracionDeModelos->show();
    }
}
void Console::a_f_3_clicked(){
}
//Funcion empleada por el mapper
void Console::mapFunc(int i)
{
}

void Console::volumecClicked(int v){

}
void Console::viewWMenucClicked(int v){

}
ToolB *Console::createIcon(const QString &icon,const QString &toolTip,const char *method){
    icons=new ToolB();
    icons->setMinimumSize(30,30);
    icons->setIcon(icon);
    icons->setToolTip(toolTip);
    icons->setObjectName(toolTip);
    connect(icons, SIGNAL(clicked()),this, method);
    return icons;
}

void Console::rcbParCI(QString foto, QString coment)
{
    this->foto = foto;
    this->coment = coment;
    BitaC::foto = QString("Nombre: %0 - Descripción: %1").arg(foto).arg(coment);
    encodeFString();
}
void Console::encodeFString(){
/*
        QString BigString;
        BigString.clear();
        BigString=user;
        m_shrdMem->setI(BigString.size(),DataSize);
        char cadena[20];
        unsigned int coders[5];
        int j;
        int i;
        for (i=0;i<20;i++){cadena[i]=0x00;}
        for(i=0;i<BigString.size();i++){
           cadena[i]= BigString.at(i).toAscii();
        }
        for (i=0;i<BigString.size();i=i+4){
            j=i/4;
            coders[j]= cadena[i+0]*256*256*256+  cadena[i+1]*256*256+  cadena[i+2]*256+cadena[i+3];
        }
        for (i=0;i<5;i++){
            shrdMem->setI(coders[i],posStartCode+i);
            if(coders[i]==0x00){break;}
        }
        */
}
void Console::UpdateHMI()
{

}

Console::~Console()
{
    delete ui;
}
