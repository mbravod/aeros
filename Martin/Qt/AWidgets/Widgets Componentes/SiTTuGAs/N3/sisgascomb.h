#ifndef SISGASCOMB_H
#define SISGASCOMB_H

#include <QWidget>

namespace Ui {
class SisGasComb;
}

class N3 : public QWidget
{
    Q_OBJECT
    
public:
    explicit N3(QWidget *parent = 0);
    ~N3();
    
private:
    Ui::SisGasComb *ui;
};

#endif // SISGASCOMB_H
