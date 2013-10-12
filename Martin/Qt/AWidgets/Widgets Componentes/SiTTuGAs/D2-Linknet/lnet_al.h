#ifndef LNET_AL_H
#define LNET_AL_H

#include <QWidget>

namespace Ui {
    class LNET_Al;
}

class LNET_Al : public QWidget
{
    Q_OBJECT

public:
    explicit LNET_Al(QWidget *parent = 0);
    ~LNET_Al();

private:
    Ui::LNET_Al *ui;
};

#endif // LNET_AL_H
