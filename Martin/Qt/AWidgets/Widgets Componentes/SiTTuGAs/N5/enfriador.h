#ifndef ENFRIADOR_H
#define ENFRIADOR_H

#include <QWidget>

namespace Ui {
class ENFRIADOR;
}

class N5 : public QWidget
{
    Q_OBJECT
    
public:
    explicit N5(QWidget *parent = 0);
    ~N5();
    
private:
    Ui::ENFRIADOR *ui;
};

#endif // ENFRIADOR_H
