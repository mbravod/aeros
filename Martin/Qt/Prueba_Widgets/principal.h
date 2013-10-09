#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include <QMainWindow>
#include <QDebug>

namespace Ui {
class Principal;
}

class Principal : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Principal(QWidget *parent = 0);
    ~Principal();
    
private:
    Ui::Principal *ui;

public slots:
    void conectaBoton();
    void referencia(QString id);

};

#endif // PRINCIPAL_H
