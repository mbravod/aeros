#ifndef WNIVEL2_H
#define WNIVEL2_H

#include <QWidget>
#include <QString>
#include <QMouseEvent>
#define wnivel2 10


namespace Ui {
    class WNivel2;
}

class WNivel2 : public QWidget
{
    Q_OBJECT
/*
    Q_PROPERTY(QString lbIP READ getLbIP WRITE setLbIP);
    Q_PROPERTY(QString lbNivGTGT READ getLbNivGTGT WRITE setLbNivGTGT);
    Q_PROPERTY(QString lbAceCT READ getLbAceCT WRITE setLbAceCT);
    Q_PROPERTY(QString lbPerA READ getLbPerA WRITE setLbPerA);
    Q_PROPERTY(QString lbTodP READ getLbTodP WRITE setLbTodP);
    Q_PROPERTY(QString lbNivL READ getLbNivL WRITE setLbNivL);
    Q_PROPERTY(QString lbEthC READ getLbEthC WRITE setLbEthC);
    Q_PROPERTY(QString lbPassT READ getLbPassT WRITE setLbPassT);
    Q_PROPERTY(QString lbPasCT READ getLbPasCT WRITE setLbPasCT);
*/
public:
    explicit WNivel2(QWidget *parent = 0);
    ~WNivel2();
    void setLbIP(QString s);
    void setLbNivGTGT(QString s);
    void setLbAceCT(QString s);
    void setLbPerA(QString s);
    void setLbTodP(QString s);
    void setLbNivL(QString s);
    void setLbEthC(QString s);
    void setLbPassT(QString s);
    void setLbPasCT(QString s);
    QString getLbPasCT();
    QString getLbPassT();
    QString getLbEthC();
    QString getLbNivL();
    QString getLbTodP();
    QString getLbPerA();
    QString getLbAceCT();
    QString getLbNivGTGT();
    QString getLbIP();
public slots:
    void idWindow(int id);
    void cerrar();

signals:
    void clicked (int id);
protected:
    void mousePressEvent(QMouseEvent *);
private:
    Ui::WNivel2 *ui;
};

#endif // WNIVEL2_H
