#ifndef CONSOLE_H
#define CONSOLE_H

#include <QMainWindow>
#include <QToolBar>
#include <QAction>
#include <QKeySequence>

class Console : public QWidget
{
    Q_OBJECT

    public:
        explicit Console(QWidget *parent = 0);
        ~Console();

    private:
        // Variables
        QToolBar *qBar;
        QAction *actPlay;
        QAction *actStop;
        QAction *actPause;
        QAction *actRwd;
        QAction *actHMI;
        QAction *actExit;
        QAction *actConsole;
        QAction *actAdmin;
        QAction *actAbout;

        // Funciones
        QToolBar * CreaToolBar();

};

#endif // CONSOLE_H
