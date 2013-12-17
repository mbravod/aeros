#include "console.h"

Console::Console(QWidget *parent)
    : QWidget(parent)
{
    // Ajustamos el tamaÃ±o
    setMinimumSize(300, 80);
    this->setMaximumSize(300, 80);
//    this->adjustSize();
    setWindowTitle(tr("SiTTuGAs - Consola de instrucción"));
    this->setWindowIcon(QIcon(":/Resources/Consola/ico.png"));

}

QToolBar * Console::CreaToolBar()
{
    QToolBar * toolbar = new QToolBar("Barra de Menues", this);

    // Creamos las acciones
//    new QAction();
    actPlay = new QAction(QIcon(":/Resources/Consola/play.png"), tr("Reproducir"), this);
//    actPlay->setShortcut(QKeySequence(tr("F1")));
    actPlay->setToolTip(tr("Reproducir..."));

    actStop = new QAction(QIcon(":/Resources/Consola/stop.png"), tr("Detener"), this);
//    actStop->setShortcut(QKeySequence(tr("F1")));
    actStop->setToolTip(tr("Detener..."));

    actPause = new QAction(QIcon(":/Resources/Consola/pause.png"), tr("Pausar"), this);
//    actPause->setShortcut(QKeySequence(tr("F1")));
    actPause->setToolTip(tr("Pausar..."));

    actRwd = new QAction(QIcon(":/Resources/Consola/rew.png"), tr("Regresar"), this);
//    actRwd->setShortcut(QKeySequence(tr("F1")));
    actRwd->setToolTip(tr("Regresar..."));

    actHMI = new QAction(QIcon(":/Resources/Consola/hmi.png"), tr("Crear HMI"), this);
//    actHMI->setShortcut(QKeySequence(tr("F1")));
    actHMI->setToolTip(tr("Crear HMI..."));

    actExit = new QAction(QIcon(":/Resources/Consola/exit.png"), tr("Salir"), this);
    actExit->setShortcut(QKeySequence::Quit);
    actExit->setToolTip(tr("Salir del Programa... (Ctrl+Q)"));

    /*

    toolbar->addSeparator();
    toolbar->addAction(actHelp);
    toolbar->addSeparator();
    toolbar->addAction(actUp);
    toolbar->addAction(actLeft);
    toolbar->addAction(actRight);
    toolbar->addAction(actDown);
    toolbar->addSeparator();
    toolbar->addAction(actRAX);
    toolbar->addAction(actRHX);
    toolbar->addSeparator();
    toolbar->addAction(actRAY);
    toolbar->addAction(actRHY);
    toolbar->addSeparator();
    toolbar->addAction(actRAZ);
    toolbar->addAction(actRHZ);
    toolbar->addSeparator();
    toolbar->addAction(actOrtho1);
    toolbar->addAction(actOrtho2);
    toolbar->addAction(actPersp);
    toolbar->addSeparator();
    toolbar->addAction(actMenos);
    toolbar->addAction(actRest);
    toolbar->addAction(actMas);
    toolbar->addSeparator();
    toolbar->addAction(actRelo);
    toolbar->addAction(actExit);
    toolbar->addSeparator();

    toolbar->setOrientation(Qt::Horizontal);*/

    return toolbar;

}

Console::~Console()
{
    delete qBar;
    delete actPlay;
    delete actStop;
    delete actPause;
    delete actRwd;
    delete actHMI;
    delete actExit;
    delete actConsole;
    delete actAdmin;
    delete actAbout;
}
