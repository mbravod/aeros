#ifndef LNET_AL7_H
#define LNET_AL7_H

#include <QWidget>

namespace Ui {
    class LNET_Al7;
}

class LNET_Al7 : public QWidget
{
    Q_OBJECT

public:
    explicit LNET_Al7(QWidget *parent = 0);
    ~LNET_Al7();

private:
    Ui::LNET_Al7 *ui;
};

#endif // LNET_AL7_H
