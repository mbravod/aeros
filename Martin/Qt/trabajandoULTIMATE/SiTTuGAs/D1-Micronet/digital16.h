#ifndef DIGITAL16_H
#define DIGITAL16_H
#include <QMouseEvent>
#include <QWidget>
#define digital16 8
namespace Ui {
    class Digital16;
}

class Digital16 : public QWidget
{
    Q_OBJECT

public:
    explicit Digital16(QWidget *parent = 0);
    ~Digital16();
    int flag;
public slots:
    void cerrar();
    void idWindow(int);
    void siguiente();
signals:
    void clicked (int id);
    void mi_id(int id);
protected:
    void mousePressEvent(QMouseEvent *);

private:
    Ui::Digital16 *ui;
};

#endif // DIGITAL16_H
