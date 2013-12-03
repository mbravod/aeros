#ifndef PASSWDIALOG_H
#define PASSWDIALOG_H

#include <QDialog>
#include "Console/Login/login.h"
#include "SharedMemory/shrdmem.h"
namespace Ui {
    class PassWDialog;
}

class PassWDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PassWDialog(QWidget *parent=0,ShrdMem *s= NULL);
    ~PassWDialog();

    bool verificar(QString pass1, QString pass2);
    QString username;
    void chgPes(int idx);

private:
    Ui::PassWDialog *ui;

    QString name_usr;
    QStringList usuarios_lst;
    Login *login;
    bool acceder;
    void actualizaSys();
    void limpia_campos();
    void sndUserToShared(QString user);
    ShrdMem *m_shrdMem;

private slots:
    // Slots de PassDialog
    void validate();
    void addUser();
    void selecUSR(QString usr);
    void borrarCta();
    void cambiarPWD();

signals:
    void autentificate(bool a, QString name);
};

#endif // PASSWDIALOG_H
