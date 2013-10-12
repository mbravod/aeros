#ifndef LNET_DI3_H
#define LNET_DI3_H

#include <QWidget>

namespace Ui {
    class LNET_DI3;
}

class LNET_DI3 : public QWidget
{
    Q_OBJECT

public:
    explicit LNET_DI3(QWidget *parent = 0);
    ~LNET_DI3();

private:
    Ui::LNET_DI3 *ui;
};

#endif // LNET_DI3_H
