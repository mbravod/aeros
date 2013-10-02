#ifndef LNET_DL2_H
#define LNET_DL2_H

#include <QWidget>

namespace Ui {
    class LNET_Dl2;
}

class LNET_Dl2 : public QWidget
{
    Q_OBJECT

public:
    explicit LNET_Dl2(QWidget *parent = 0);
    ~LNET_Dl2();

private:
    Ui::LNET_Dl2 *ui;
};

#endif // LNET_DL2_H
