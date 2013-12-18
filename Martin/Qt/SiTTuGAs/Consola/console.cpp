#include "console.h"
#include "ui_console.h"

Console::Console(Config *conf, HTTPRequest *http, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Console)
{
    ui->setupUi(this);

    this->config = conf;
    if(http == NULL)
    {
        this->http = new HTTPRequest(this->config, this);
    }
    else
    {
        this->http = http;
    }

    setWindowTitle(tr("SiTTuGAs - Consola de instrucción"));
    this->setWindowIcon(QIcon(":/Resources/Consola/ico.png"));
    connect(this, SIGNAL(destroyed()), this, SLOT(Exit()));

    qBar = CreaToolBar();

    grid = new QGridLayout();
    grid->addWidget(qBar, 0, 0);
//    grid->addWidget(reloj, 0, 1);
//    grid->addWidget(canvas, 1, 0);
    grid->setColumnStretch( 0, 00);
    setLayout(grid);

    reproduciendo = false;

}

QToolBar * Console::CreaToolBar()
{
    QToolBar * toolbar = new QToolBar("Barra de Menues", this);

    reloj = new Clock(this->http, this);

    // Creamos las acciones
    actExit = new QAction(QIcon(":/Resources/Consola/exit.png"), tr("Salir"), this);
    actExit->setShortcut(QKeySequence::Quit);
    actExit->setToolTip(tr("Salir del Programa... (Ctrl+Q)"));
    connect(actExit, SIGNAL(triggered()), this, SLOT(Exit()));

    actRwd = new QAction(QIcon(":/Resources/Consola/rew.png"), tr("Regresar"), this);
//    actRwd->setShortcut(QKeySequence(tr("F1")));
    actRwd->setToolTip(tr("Regresar..."));
    connect(actRwd, SIGNAL(triggered()), this, SLOT(Rewind()));

    actPlay = new QAction(QIcon(":/Resources/Consola/play.png"), tr("Reproducir"), this);
//    actPlay->setShortcut(QKeySequence(tr("F1")));
    actPlay->setToolTip(tr("Reproducir/Pausar..."));
    connect(actPlay, SIGNAL(triggered()), this, SLOT(PlayPause()));

    actFwd = new QAction(QIcon(":/Resources/Consola/fwd.png"), tr("Velocidad de reproducción"), this);
//    actPlay->setShortcut(QKeySequence(tr("F1")));
    actFwd->setToolTip(tr("Velocidad de reproducción..."));
    connect(actFwd, SIGNAL(triggered()), this, SLOT(PlayPause()));

    actStop = new QAction(QIcon(":/Resources/Consola/stop.png"), tr("Detener"), this);
//    actStop->setShortcut(QKeySequence(tr("F1")));
    actStop->setToolTip(tr("Detener..."));
    connect(actStop, SIGNAL(triggered()), this, SLOT(Stop()));

    actHMI = new QAction(QIcon(":/Resources/Consola/hmi.png"), tr("Crear HMI"), this);
//    actHMI->setShortcut(QKeySequence(tr("F1")));
    actHMI->setToolTip(tr("Crear HMI..."));
    connect(actHMI, SIGNAL(triggered()), this, SLOT(CreaIHM()));

    actConsole = new QAction(QIcon(":/Resources/Consola/console.png"), tr("Consola"), this);
//    actConsole->setShortcut(QKeySequence(tr("F1")));
    actConsole->setToolTip(tr("Consola de instrucción avanzada..."));
    connect(actConsole, SIGNAL(triggered()), this, SLOT(OpenWeb()));

    actAdmin = new QAction(QIcon(":/Resources/Consola/config.png"), tr("Configuración"), this);
//    actConsole->setShortcut(QKeySequence(tr("F1")));
    actAdmin->setToolTip(tr("Configuración..."));
    connect(actAdmin, SIGNAL(triggered()), this, SLOT(Configurar()));

    actAbout = new QAction(QIcon(":/Resources/Consola/about.png"), tr("Acerca de..."), this);
//    actAbout->setShortcut(QKeySequence(tr("F1")));
    actAbout->setToolTip(tr("Acerca de..."));
    connect(actAdmin, SIGNAL(triggered()), this, SLOT(About()));

    toolbar->addSeparator();
    toolbar->addAction(actExit);
    toolbar->addSeparator();
    toolbar->addAction(actRwd);
    toolbar->addAction(actPlay);
    toolbar->addAction(actFwd);
    toolbar->addAction(actStop);
    toolbar->addSeparator();
    toolbar->addAction(actHMI);
    toolbar->addAction(actConsole);
    toolbar->addAction(actAdmin);
    toolbar->addSeparator();
    toolbar->addWidget(reloj);
    toolbar->addSeparator();
    toolbar->addAction(actAbout);
    toolbar->addSeparator();

    toolbar->setOrientation(Qt::Horizontal);

    return toolbar;
}

void Console::Rewind()
{

}

void Console::PlayPause()
{
    http->setI(1,499);
    if(reproduciendo)
    {
        // Le decimos a la memoria que pare
        http->setI(0,500);
        reloj->ActivarClock(false);
        reproduciendo = false;
        actPlay->setIcon(QIcon(":/Resources/Consola/play.png"));
    }
    else
    {
        http->setI(1,500);
        reloj->ActivarClock(true);
        reproduciendo = true;
        // Cambiamos el íco de la acción
        actPlay->setIcon(QIcon(":/Resources/Consola/pause.png"));
    }
}

void Console::Foward()
{

}

void Console::Stop()
{
    http->setI(0,499);
    reloj->ActivarClock(false);
    reproduciendo = false;
    actPlay->setIcon(QIcon(":/Resources/Consola/play.png"));
    reloj->ResetTime();
}

void Console::CreaIHM()
{
    SiTTuGAs *ihm = new SiTTuGAs(this->config, this->http);
    lst.push_front(ihm);
    ihm->show();
}

void Console::OpenWeb()
{

}

void Console::Configurar()
{

}

void Console::About()
{

}

void Console::Exit()
{
    qDebug()<<"Destruyo...";
    foreach(SiTTuGAs *w, lst)
    {
        w->close();
    }
    this->close();
}

Console::~Console()
{

    delete ui;
    delete qBar;
    delete actPlay;
    delete actStop;
    delete actFwd;
    delete actRwd;
    delete actHMI;
    delete actExit;
    delete actConsole;
    delete actAdmin;
    delete actAbout;
}
