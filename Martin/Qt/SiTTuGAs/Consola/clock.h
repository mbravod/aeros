#ifndef CLOCK_H
#define CLOCK_H

#include <QWidget>
#include <QTimer>
#include <QDebug>
#include "SharedMemory/httprequest.h"

namespace Ui {
class Clock;
}

class Clock : public QWidget
{
    Q_OBJECT

    public:
        explicit Clock(HTTPRequest *http, QWidget *parent = 0);
        ~Clock();
        void ChangeColor(int color);
        void setHour(unsigned int nsegs);
        void DrawSeg(int s);
        void DrawMin(int s);
        void DrawHor(int s);
        void ActivarClock(bool b);
        void setShrdMem(HTTPRequest *m);
        void AjustaTiempo(int ms);
        void ResetTime();


    private:
        Ui::Clock *ui;
        unsigned int segs;
        bool animado;
        QTimer *timer;
        HTTPRequest *shrdMem;

    private slots:
        void Funcionando();
};

#endif // CLOCK_H
