#include <QtGui/QApplication>
#include  <QSplashScreen>
#include "Sittugas/sittugas.h"
#include <QDesktopWidget>
#include "Consola/console.h"
#include "SharedMemory/sqlite.h"
#include "SharedMemory/httprequest.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSplashScreen *splash;
    splash = new QSplashScreen;
    splash->setPixmap(QPixmap(":/Resources/cfesplash.png"));
    splash->show();
    Qt::Alignment bottomLeft = Qt::AlignLeft | Qt::AlignBottom;

    splash->showMessage(QObject::tr("Cargando Ajustes..."), bottomLeft, Qt::white);
    splash->showMessage(QObject::tr("Creando Interfaces..."), bottomLeft, Qt::white);

    // Recuperamos la configuración
    Config *config = SQLite::getConfig();
    if(config == NULL)
    {
        qDebug()<<"Ha fallado la configuración...";
    }

    //Determinamos que modo es el adecuado
    if(config->getMode() == 0)
    {
        // Creamos la consola
        Console *w = new Console(config);
        w->show();
        splash->finish(w);
    }
    else
    {
        HTTPRequest *http = new HTTPRequest(config);
        //Proporciona acceso a informacion de la pantalla en los sistemas multi-cabeza
        QDesktopWidget *m = QApplication::desktop();
        //Lista de instancias a las interfaces
        QList <SiTTuGAs *> list;
        //variable auxiliar para la instancia de cada interfaz
        SiTTuGAs *w;

        //En base al numero de pantallas es como itera este lazo
        for(int i=0; i<m->screenCount(); i++)
        {
            //Creamos el gestor de las interfaces *(se cargan todas las interfaces)
            w = new SiTTuGAs(config, http);
            //lista que contiene referencias a todos los gestores creados
            list.push_front(w);
            //Devuelve la geometria disponible por la pantalla
            QRect r1=m->availableGeometry(i);
            //Movemos la interfaz de acuerdo con los valores recabados anteriormente
            w->move(r1.x(),r1.y());
        }
        //Terminamos splash
        splash->finish(w);
        //Iteramos hasta desplegar todas las GUI de SiTTuGAs
        foreach(SiTTuGAs *W, list)
        {
            //Las pantallas mantienen un tamaño de  1024 X 662 por lo que para presentar la interfaz adecuadamente la pantalla debe tener la misma resolución
            //W->showFullScreen();
            //temporalmete utilizaremos solo el desplegado normal de la pantalla para cada instancia generada
            W->show();
        }
    }

    return a.exec();
}
