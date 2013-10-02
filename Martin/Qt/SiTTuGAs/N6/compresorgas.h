#ifndef COMPRESORGAS_H
#define COMPRESORGAS_H

#include <QWidget>

namespace Ui {
class CompresorGas;
}

class CompresorGas : public QWidget
{
    Q_OBJECT
    
public:
    explicit CompresorGas(QWidget *parent = 0);
    ~CompresorGas();
    
private:
    Ui::CompresorGas *ui;
};

#endif // COMPRESORGAS_H
