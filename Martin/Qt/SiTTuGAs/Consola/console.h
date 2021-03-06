#ifndef CONSOLE_H
#define CONSOLE_H

#include <QWidget>
#include <QAction>
#include <QToolBar>
#include <QGridLayout>
#include "clock.h"
#include "Sittugas/sittugas.h"
#include "SharedMemory/config.h"
#include <QList>
//#include "webbrowser.h"

namespace Ui {
class Console;
}

class Console : public QWidget
{
    Q_OBJECT
    
    public:
        explicit Console(Config *conf, HTTPRequest *http = 0, QWidget *parent = 0);
        ~Console();

    private:
        Ui::Console *ui;
        // Variables
        QToolBar *qBar;
        QGridLayout *grid;
        Clock *reloj;

        QAction *actExit;
        QAction *actRwd;
        QAction *actPlay;
        QAction *actFwd;
        QAction *actStop;
        QAction *actHMI;
        QAction *actConsole;
        QAction *actAdmin;
        QAction *actAbout;
        bool reproduciendo;
        Config *config;
        HTTPRequest *http;

        // Funciones
        QToolBar * CreaToolBar();
        QList <SiTTuGAs *> lst;


    public slots:
        void Rewind();
        void PlayPause();
        void Foward();
        void Stop();
        void CreaIHM();
        void OpenWeb();
        void Configurar();
        void About();
        void Exit();
};

#endif // CONSOLE_H
