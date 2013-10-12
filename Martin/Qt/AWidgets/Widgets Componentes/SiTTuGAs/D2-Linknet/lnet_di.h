#ifndef LNET_DI_H
#define LNET_DI_H

#include <QWidget>

namespace Ui {
    class LNET_DI;
}

class LNET_DI : public QWidget
{
    Q_OBJECT

public:
    explicit LNET_DI(QWidget *parent = 0);
    ~LNET_DI();

private:
    Ui::LNET_DI *ui;
};

#endif // LNET_DI_H
