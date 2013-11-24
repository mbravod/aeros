#ifndef WTEMPADM_H
#define WTEMPADM_H

#include <QWidget>
#include <QString>
#include <QMouseEvent>
#define wtempadm 17

namespace Ui {
    class WTempADM;
}

class WTempADM : public QWidget
{
    Q_OBJECT
 /*  Setters y getters
    Q_PROPERTY(QString lbTemADMT READ getLbTemADMT WRITE setLbTemADMT);
    Q_PROPERTY(QString lbADMT_1 READ getLbADMT_1 WRITE setLbADMT_1);
    Q_PROPERTY(QString lbADMT_2 READ getLbADMT_2 WRITE setLbADMT_2);
    Q_PROPERTY(QString lbADM_1 READ getLbADM_1 WRITE setLbADM_1);
    Q_PROPERTY(QString lbADM_2 READ getLbADM_2 WRITE setLbADM_2);
    Q_PROPERTY(QString lbADMU_1 READ getLbADMU_1 WRITE setLbADMU_1);
    Q_PROPERTY(QString lbADMU_2 READ getLbADMU_2 WRITE setLbADMU_2);
 */
public:
    explicit WTempADM(QWidget *parent = 0);
    ~WTempADM();
    void setLbTemADMT(QString s);
    void setLbADMT_1(QString s);
    void setLbADMT_2(QString s);
    void setLbADM_1(QString s);
    void setLbADM_2(QString s);
    void setLbADMU_1(QString s);
    void setLbADMU_2(QString s);
    QString getLbADMU_2();
    QString getLbADMU_1();
    QString getLbADM_2();
    QString getLbADM_1();
    QString getLbADMT_2();
    QString getLbADMT_1();
    QString getLbTemADMT();
public slots:
    void idWindow(int id);
    void cerrar();

signals:
    void clicked (int id);

    void mi_id(int id);

protected:
    void mousePressEvent(QMouseEvent *);
private:
    Ui::WTempADM *ui;
};

#endif // WTEMPADM_H
