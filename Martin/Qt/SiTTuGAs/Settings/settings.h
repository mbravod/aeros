#ifndef SETTINGS_H
#define SETTINGS_H

#include <QString>
#include <QObject>

class Settings : public QObject
{
public:

    enum Mode{Consola, Operador};
    typedef struct
    {
        Mode mode;
        char ip_ci[16];
        char ip_op1[16];
        char ip_op2[16];
        char ip_op3[16];
        char ip_op4[16];
        char valido[15];

        bool isVisible_TBMando;
        bool isVisible_TBEstadosIn;
        bool isVisible_TBParametrosOp;
        bool isVisible_TBMonitoreo;
        bool isVisible_TBHistoriales;
        bool isVisible_TBMantenimiento;

    } FirstSettings;

    Settings(QObject *parent = 0);

    bool save();
    bool loadFirstSettings();
    bool saveFirstSettings(const QString &s,const FirstSettings &fs);
    FirstSettings m_firstSettings;
private:
    int ShowMessageOKCancel(const QString &s,const QString &t);
    void ShowMessage(const QString &s);



};

#endif // SETTINGS_H
