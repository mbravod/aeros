#ifndef FILTROGAS_H
#define FILTROGAS_H

#include <QWidget>

namespace Ui {
class filtroGas;
}

class filtroGas : public QWidget
{
    Q_OBJECT
    
public:
    explicit filtroGas(QWidget *parent = 0);
    ~filtroGas();
    
private:
    Ui::filtroGas *ui;
};

#endif // FILTROGAS_H
