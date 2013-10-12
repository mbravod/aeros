#ifndef ANALOG24_H
#define ANALOG24_H

#include <QWidget>

namespace Ui {
    class Analog24;
}

class Analog24 : public QWidget
{
    Q_OBJECT

public:
    explicit Analog24(QWidget *parent = 0);
    ~Analog24();

private:
    Ui::Analog24 *ui;
};

#endif // ANALOG24_H
