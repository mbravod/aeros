#ifndef WVELNSD_H
#define WVELNSD_H
#define wveln25 22

#define wvelnsd 23
#include <QWidget>
#include <QString>
#include <QMouseEvent>

namespace Ui {
    class WVelNSD;
}

class WVelNSD : public QWidget
{
    Q_OBJECT
    /*Setters y getters
    Q_PROPERTY(QString lbVelNSDT READ getLbVelNSDT WRITE setLbVelNSDT);
    Q_PROPERTY(QString lbNSDT_1 READ getLbNSDT_1 WRITE setLbNSDT_1);
    Q_PROPERTY(QString lbNSDT_2 READ getLbNSDT_2 WRITE setLbNSDT_2);
    Q_PROPERTY(QString lbNSD_1 READ getLbNSD_1 WRITE setLbNSD_1);
    Q_PROPERTY(QString lbNSD_2 READ getLbNSD_2 WRITE setLbNSD_2);
    Q_PROPERTY(QString lbNSDU_1 READ getLbNSDU_1 WRITE setLbNSDU_1);
    Q_PROPERTY(QString lbNSDU_2 READ getLbNSDU_2 WRITE setLbNSDU_2);
    */
public:
    explicit WVelNSD(QWidget *parent = 0);
    ~WVelNSD();
    void setLbVelNSDT(QString s);
    void setLbNSDT_1(QString s);
    void setLbNSDT_2(QString s);
    void setLbNSD_1(QString s);
    void setLbNSD_2(QString s);
    void setLbNSDU_1(QString s);
    void setLbNSDU_2(QString s);
    QString getLbNSDU_2();
    QString getLbNSDU_1();
    QString getLbNSD_2();
    QString getLbNSD_1();
    QString getLbNSDT_2();
    QString getLbNSDT_1();
    QString getLbVelNSDT();

private:
    Ui::WVelNSD *ui;

public slots:
    void idWindow(int id);
    void cerrar();


signals:
    void clicked (int id);


protected:
    void mousePressEvent(QMouseEvent *);
};

#endif // WVELNSD_H
