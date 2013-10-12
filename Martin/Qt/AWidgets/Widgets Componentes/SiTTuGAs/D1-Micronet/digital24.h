#ifndef DIGITAL24_H
#define DIGITAL24_H

#include <QWidget>

namespace Ui {
    class Digital24;
}

class Digital24 : public QWidget
{
    Q_OBJECT

public:
    explicit Digital24(QWidget *parent = 0);
    ~Digital24();

private:
    Ui::Digital24 *ui;
};

#endif // DIGITAL24_H
