#ifndef LNET_AI8_H
#define LNET_AI8_H

#include <QWidget>

namespace Ui {
    class LNET_AI8;
}

class LNET_AI8 : public QWidget
{
    Q_OBJECT

public:
    explicit LNET_AI8(QWidget *parent = 0);
    ~LNET_AI8();

private:
    Ui::LNET_AI8 *ui;
};

#endif // LNET_AI8_H
