#ifndef FILTROGAS_H
#define FILTROGAS_H

#include <QWidget>

namespace Ui {
class filtroGas;
}

class N7 : public QWidget
{
    Q_OBJECT
    
public:
    explicit N7(QWidget *parent = 0);
    ~N7();
    
private:
    Ui::filtroGas *ui;
};

#endif // FILTROGAS_H
