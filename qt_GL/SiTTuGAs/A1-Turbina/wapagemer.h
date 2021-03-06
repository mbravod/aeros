#ifndef WAPAGEMER_H
#define WAPAGEMER_H
#include <QWidget>
#include <QMouseEvent>
#define wapagemer 0



namespace Ui {
    class WApagEmer;
}

class WApagEmer : public QWidget
{
    Q_OBJECT

public:
    explicit WApagEmer(QWidget *parent = 0);
    ~WApagEmer();

    /*setter and getter*/
    void setLbIP(QString s);
    void setLeCde(QString s);
    QString getLeCde();
    QString getLbIP();


private:
    Ui::WApagEmer *ui;

public slots:
    void idWindow(int id);
    void cerrar();


signals:
    void clicked (int id);
    void mi_id(int id);

protected:
    void mousePressEvent(QMouseEvent *);

};

#endif // WAPAGEMER_H
