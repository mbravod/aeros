#ifndef LNET_AL5_H
#define LNET_AL5_H

#include <QWidget>

namespace Ui {
    class LNET_Al5;
}

class LNET_Al5 : public QWidget
{
    Q_OBJECT

public:
    explicit LNET_Al5(QWidget *parent = 0);
    ~LNET_Al5();

private:
    Ui::LNET_Al5 *ui;
};

#endif // LNET_AL5_H
