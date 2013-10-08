#ifndef MI_PRUEBA_H
#define MI_PRUEBA_H

#include <QMainWindow>

namespace Ui {
class Mi_Prueba;
}

class Mi_Prueba : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Mi_Prueba(QWidget *parent = 0);
    ~Mi_Prueba();
    
private:
    Ui::Mi_Prueba *ui;
};

#endif // MI_PRUEBA_H
