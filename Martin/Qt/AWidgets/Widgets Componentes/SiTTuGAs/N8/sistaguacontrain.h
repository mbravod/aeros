#ifndef SISTAGUACONTRAIN_H
#define SISTAGUACONTRAIN_H

#include <QWidget>

namespace Ui {
class SistAguaContrain;
}

class N8 : public QWidget
{
    Q_OBJECT
    
public:
    explicit N8(QWidget *parent = 0);
    ~N8();
    
private:
    Ui::SistAguaContrain *ui;
};

#endif // SISTAGUACONTRAIN_H
