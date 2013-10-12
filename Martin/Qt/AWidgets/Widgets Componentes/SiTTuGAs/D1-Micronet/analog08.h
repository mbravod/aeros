#ifndef ANALOG08_H
#define ANALOG08_H

#include <QWidget>

namespace Ui {
    class Analog08;
}

class Analog08 : public QWidget
{
    Q_OBJECT

public:
    explicit Analog08(QWidget *parent = 0);
    ~Analog08();

private:
    Ui::Analog08 *ui;
};

#endif // ANALOG08_H
