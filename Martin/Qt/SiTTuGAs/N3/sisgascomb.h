#ifndef SISGASCOMB_H
#define SISGASCOMB_H

#include <QWidget>

namespace Ui {
class SisGasComb;
}

class SisGasComb : public QWidget
{
    Q_OBJECT
    
public:
    explicit SisGasComb(QWidget *parent = 0);
    ~SisGasComb();
    
private:
    Ui::SisGasComb *ui;
};

#endif // SISGASCOMB_H
