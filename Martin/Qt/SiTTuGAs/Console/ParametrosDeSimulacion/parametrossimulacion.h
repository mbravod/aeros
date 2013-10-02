#ifndef PARAMETROSSIMULACION_H
#define PARAMETROSSIMULACION_H

#include <QDialog>
#include "SharedMemory/shrdmem.h"
class ShrdMem;

namespace Ui {
    class ParametrosSimulacion;
}

class ParametrosSimulacion : public QDialog {
    Q_OBJECT
public:
    ParametrosSimulacion(QWidget *parent = 0,ShrdMem *s=NULL);
    ~ParametrosSimulacion();
    QString ftoa(float f);
    Ui::ParametrosSimulacion *ui;
private slots:
    void sliderValChanged(int ival);
protected:
    void changeEvent(QEvent *e);

private:
    ShrdMem *m_shrdMem;
    void updateSlider(int pos);
};

#endif // PARAMETROSSIMULACION_H
