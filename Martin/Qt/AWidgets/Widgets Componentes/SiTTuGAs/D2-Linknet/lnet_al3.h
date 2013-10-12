#ifndef LNET_AL3_H
#define LNET_AL3_H

#include <QWidget>

namespace Ui {
    class LNET_Al3;
}

class LNET_Al3 : public QWidget
{
    Q_OBJECT

public:
    explicit LNET_Al3(QWidget *parent = 0);
    ~LNET_Al3();

private:
    Ui::LNET_Al3 *ui;
};

#endif // LNET_AL3_H
