#ifndef WTEMPCOMPA2_H
#define WTEMPCOMPA2_H

#include <QWidget>
#include <QString>
#include <QMouseEvent>
#define wtempcompa2 19


namespace Ui {
    class WTempCompA2;
}

class WTempCompA2 : public QWidget
{
    Q_OBJECT
    /*
    Q_PROPERTY(QString lbTemCOMA2T READ getLbTemCOMA2T WRITE setLbTemCOMA2T);
    Q_PROPERTY(QString lbCOMA2T_1 READ getLbCOMA2T_1 WRITE setLbCOMA2T_1);
    Q_PROPERTY(QString lbCOMA2T_2 READ getLbCOMA2T_2 WRITE setLbCOMA2T_2);
    Q_PROPERTY(QString lbCOMA2T_3 READ getLbCOMA2T_3 WRITE setLbCOMA2T_3);
    Q_PROPERTY(QString lbCOMA2T_4 READ getLbCOMA2T_4 WRITE setLbCOMA2T_4);
    Q_PROPERTY(QString lbCOMA2_1 READ getLbCOMA2_1 WRITE setLbCOMA2_1);
    Q_PROPERTY(QString lbCOMA2_2 READ getLbCOMA2_2 WRITE setLbCOMA2_2);
    Q_PROPERTY(QString lbCOMA2_3 READ getLbCOMA2_3 WRITE setLbCOMA2_3);
    Q_PROPERTY(QString lbCOMA2_4 READ getLbCOMA2_4 WRITE setLbCOMA2_4);
    Q_PROPERTY(QString lbCOMA2U_1 READ getLbCOMA2U_1 WRITE setLbCOMA2U_1);
    Q_PROPERTY(QString lbCOMA2U_2 READ getLbCOMA2U_2 WRITE setLbCOMA2U_2);
    Q_PROPERTY(QString lbCOMA2U_3 READ getLbCOMA2U_3 WRITE setLbCOMA2U_3);
    Q_PROPERTY(QString lbCOMA2U_4 READ getLbCOMA2U_4 WRITE setLbCOMA2U_4);
    */
public:
    explicit WTempCompA2(QWidget *parent = 0);
    ~WTempCompA2();
    void setLbTemCOMA2T(QString s);
    void setLbCOMA2T_1(QString s);
    void setLbCOMA2T_2(QString s);
    void setLbCOMA2T_3(QString s);
    void setLbCOMA2T_4(QString s);

    void setLbCOMA2_1(QString s);
    void setLbCOMA2_2(QString s);
    void setLbCOMA2_3(QString s);
    void setLbCOMA2_4(QString s);

    void setLbCOMA2U_1(QString s);
    void setLbCOMA2U_2(QString s);
    void setLbCOMA2U_3(QString s);
    void setLbCOMA2U_4(QString s);

    QString getLbCOMA2U_4();
    QString getLbCOMA2U_3();
    QString getLbCOMA2U_2();
    QString getLbCOMA2U_1();

    QString getLbCOMA2_4();
    QString getLbCOMA2_3();
    QString getLbCOMA2_2();
    QString getLbCOMA2_1();

    QString getLbCOMA2T_4();
    QString getLbCOMA2T_3();
    QString getLbCOMA2T_2();
    QString getLbCOMA2T_1();
    QString getLbTemCOMA2T();
public slots:
    void idWindow(int id);
    void cerrar();

signals:
    void clicked (int id);
protected:
    void mousePressEvent(QMouseEvent *);
private:
    Ui::WTempCompA2 *ui;
};

#endif // WTEMPCOMPA2_H
