#include <QtGui/QApplication>
#include  <QSplashScreen>
#include "Sittugas/sittugas.h"
#include <QDesktopWidget>
#include "Consola/console.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSplashScreen *splash;
    splash = new QSplashScreen;
    splash->setPixmap(QPixmap(":/Resources/cfesplash.png"));
    splash->show();
    Qt::Alignment bottomLeft = Qt::AlignLeft | Qt::AlignBottom;

    splash->showMessage(QObject::tr("Cargando Ajustes..."), bottomLeft, Qt::white);

   /*if(s.m_firstSettings.mode==Settings::Consola){
        {
            PassWDialog *pw = new PassWDialog();
            splash->finish(pw);
            if(pw->exec()){
                qDebug("Iniciando Modo Consola");
                splash->showMessage(QObject::tr("Creando Consola..."), bottomLeft, Qt::white);
                Console *c = new Console(0);
                c->user= pw->username;
                c->show();
            }
            else return a.exit();
            delete pw;
        }
    }

    else {*/
        //qDebug("Iniciando Modo Operador");
        splash->showMessage(QObject::tr("Creando Interfaces..."), bottomLeft, Qt::white);
        //Proporciona acceso a informacion de la pantalla en los sistemas multi-cabeza
        QDesktopWidget *m = QApplication::desktop();
        //Lista de instancias a las interfaces
        QList <SiTTuGAs *> list;
        //variable auxiliar para la instancia de cada interfaz
        SiTTuGAs *w;
        //Gestion de la bitacora
//        BitaC::user = "Operador";
//        BitaC::creatBTC();
//        BitaC::escribeBTC("Operador listo y conectado");
//        BitaC::foto = "Foto definida desde la Consola del Instructor.";

///Initial loading of SVG takes lot of time, Horchazke loads all interfaces, need to be changed

        //En base al numero de pantallas es como itera este lazo
        for(int i=0; i<m->screenCount(); i++)
        {
            //Creamos el gestor de las interfaces *(se cargan todas las interfaces)
            w = new SiTTuGAs();
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
        foreach(SiTTuGAs *W, list){
            //Las pantallas mantienen un tamaño de  1024 X 662 por lo que para presentar la interfaz adecuadamente la pantalla debe tener la misma resolución
            //W->showFullScreen();
            //temporalmete utilizaremos solo el desplegado normal de la pantalla para cada instancia generada
            W->show();
        }

        Console console;
        console.show();



    //}

    return a.exec();
}
