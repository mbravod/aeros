#ifndef SISTAGUACONTRAIN_H
#define SISTAGUACONTRAIN_H

#include <QWidget>

namespace Ui {
class SistAguaContrain;
}

class SistAguaContrain : public QWidget
{
    Q_OBJECT
    
public:
    explicit SistAguaContrain(QWidget *parent = 0);
    ~SistAguaContrain();
    
private:
    Ui::SistAguaContrain *ui;
};

#endif // SISTAGUACONTRAIN_H
