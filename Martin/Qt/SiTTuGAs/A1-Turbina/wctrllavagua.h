#ifndef WCTRLLAVAGUA_H
#define WCTRLLAVAGUA_H

#include <QWidget>
#include <QMouseEvent>
#define wctrllavagua 7

namespace Ui {
    class WCtrlLavAgua;
}

class WCtrlLavAgua : public QWidget
{
    Q_OBJECT

public:
    explicit WCtrlLavAgua(QWidget *parent = 0);
    ~WCtrlLavAgua();

    void setLbIP(QString s);
    void setLbPermLav(QString s);
    void setLbDeLinea(QString s);
    void setLbEnLinea(QString s);
    QString getLbIP();
    QString getLbPermLav();
    QString getLbDeLinea();
    QString getLbEnLinea();
public slots:
    void idWindow(int id);
    void cerrar();

signals:
    void clicked (int id);

    void mi_id(int id);

protected:
    void mousePressEvent(QMouseEvent *);
private:
    Ui::WCtrlLavAgua *ui;
};

#endif // WCTRLLAVAGUA_H
