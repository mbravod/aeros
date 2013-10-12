#ifndef INET_DI_5_H
#define INET_DI_5_H

#include <QWidget>

namespace Ui {
    class Inet_DI_5;
}

class Inet_DI_5 : public QWidget
{
    Q_OBJECT

public:
    explicit Inet_DI_5(QWidget *parent = 0);
    ~Inet_DI_5();

private:
    Ui::Inet_DI_5 *ui;
};

#endif // INET_DI_5_H
