#ifndef ENFRIADOR_H
#define ENFRIADOR_H

#include <QWidget>

namespace Ui {
class ENFRIADOR;
}

class ENFRIADOR : public QWidget
{
    Q_OBJECT
    
public:
    explicit ENFRIADOR(QWidget *parent = 0);
    ~ENFRIADOR();
    
private:
    Ui::ENFRIADOR *ui;
};

#endif // ENFRIADOR_H
