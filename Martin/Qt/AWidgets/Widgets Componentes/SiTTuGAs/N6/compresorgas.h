#ifndef COMPRESORGAS_H
#define COMPRESORGAS_H

#include <QWidget>

namespace Ui {
class CompresorGas;
}

class N6 : public QWidget
{
    Q_OBJECT
    
public:
    explicit N6(QWidget *parent = 0);
    ~N6();
    
private:
    Ui::CompresorGas *ui;
};

#endif // COMPRESORGAS_H
