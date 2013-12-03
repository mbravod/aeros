#include "passwdialog.h"
#include "ui_passwdialog.h"
#include "Settings/Paths.h"
#include "BitaC/bitac.h"

PassWDialog::PassWDialog(QWidget *parent,ShrdMem *s) :
    QDialog(parent),
    ui(new Ui::PassWDialog)
{
    ui->setupUi(this);

    if(s==NULL){
        s = new ShrdMem();
    }
    else
    this->m_shrdMem = s;

    this->setWindowFlags(Qt::SplashScreen);
    setWindowOpacity(1);
    //------------------
    connect(ui->btn_log_Acept, SIGNAL(clicked()), this, SLOT(validate()));
    connect(ui->btn_Agr_Crear, SIGNAL(clicked()), this, SLOT(addUser()));
    connect(ui->btn_Edit_Change, SIGNAL(clicked()), this, SLOT(cambiarPWD()));
    connect(ui->btn_Edit_Borrar, SIGNAL(clicked()), this, SLOT(borrarCta()));
    //-----------------
    acceder = false;
    login = new Login();
    actualizaSys();
}

void PassWDialog::actualizaSys()
{
    QString def_usr="Default User";
    QString str;
    str.resize(25);
    ui->cb_Log_users->clear();
    //------------
    if(!login->isLst_Names())
    {
        if(!login->obtenUsers())
        {
            QMessageBox::information(this, tr("Error"),
                                     tr("No se logró recuperar la información de usuarios.\nConfiguración inicial."));
            login->creaUser(def_usr, "");
        }
    }

    this->usuarios_lst.clear();

    usuarios_lst = login->getLst_Names();

    for(int it = 0; it < usuarios_lst.size(); it++)
    {
        str = usuarios_lst.at(it);
        ui->cb_Log_users->insertItem(it, str);
        ui->cb_edit_users_a->insertItem(it, str);
        ui->cb_edit_users_b->insertItem(it, str);
    }

    if(usuarios_lst.size() == 0)
    {
        qDebug()<<"Error de listas...";
    }
    connect(ui->cb_Log_users, SIGNAL(activated(QString)), this, SLOT(selecUSR(QString)));

}
void PassWDialog::selecUSR(QString usr)
{
    this->name_usr = usr;
    qDebug()<<"El usuario seleccionado es: "<<this->name_usr;
}
void PassWDialog::validate()
{
    bool correcto;
    QString user = ui->cb_Log_users->currentText();
    QString pwd = ui->le_Log_pwd->text();

    correcto = login->validaUser(user, pwd);

    if(correcto)
    {
        username = user;

        BitaC::user = username;
        BitaC::creatBTC();
        BitaC::escribeBTC("Usuario Identificado con éxito");

        emit autentificate(true, user);


        sndUserToShared(user);
        this->accept();
    }
    else
    {
        QMessageBox::information(this, tr("ERROR"),
                                 tr("La combinación Usuario/Contraseña no son válidos."));
        emit autentificate(false, "");
    }
}
void PassWDialog::addUser()
{
    if(!ui->le_agr_user->text().isEmpty())
    {
        QString name = ui->le_agr_user->text();
        QString pass1 = ui->le_agr_pwd->text();
        QString pass2 = ui->le_agr_pwd2->text();
        bool errorN = true, errorP = true, errorPN = true, pwdI = false, creado = false, perCar = true, perCar2 = true;
        //---------------------------
        // Validamos los tamaños
        if((25<name.size()) || (name.contains(" ")))
        {
            errorN = true;
            QMessageBox::information(this, tr("ERROR"),
                                     tr("El nombre de usuario no debe de exceder los 25 caracteres\ny no debe de contener espacios."));
            limpia_campos();
        }
        else
            errorN = false;

        if((25<name.size()) || (name.contains(" ")) ||
           ((QString::compare(name, "Operador", Qt::CaseInsensitive)) == 0) ||
           ((QString::compare(name, "Out", Qt::CaseInsensitive)) == 0) ||
           ((QString::compare(name, "es", Qt::CaseInsensitive)) == 0) ||
           ((QString::compare(name, "HH", Qt::CaseInsensitive)) == 0) ||
           ((QString::compare(name, "TXT", Qt::CaseInsensitive)) == 0) ||
           ((QString::compare(name, "Config", Qt::CaseInsensitive)) == 0) ||
           ((QString::compare(name, "Bin", Qt::CaseInsensitive)) == 0) ||
           ((QString::compare(name, "Logs", Qt::CaseInsensitive)) == 0) ||
           ((QString::compare(name, "Login", Qt::CaseInsensitive)) == 0) ||
           ((QString::compare(name, "STHIE", Qt::CaseInsensitive)) == 0) ||
           ((QString::compare(name, "Debug", Qt::CaseInsensitive)) == 0) ||
           ((QString::compare(name, "DB", Qt::CaseInsensitive)) == 0))
        {
            errorN = true;
            if(25<name.size())
                QMessageBox::information(this, tr("ERROR"), tr("El nombre de usuario no debe de exceder los 25 caracteres."));
            if(name.contains(" "))
                QMessageBox::information(this, tr("ERROR"), tr("El nombre de usuario no debe contener espacios."));
            if(((QString::compare(name, "Operador", Qt::CaseInsensitive)) == 0) || ((QString::compare(name, "Out", Qt::CaseInsensitive)) == 0) ||
               ((QString::compare(name, "es", Qt::CaseInsensitive)) == 0) || ((QString::compare(name, "HH", Qt::CaseInsensitive)) == 0) ||
               ((QString::compare(name, "TXT", Qt::CaseInsensitive)) == 0) || ((QString::compare(name, "Config", Qt::CaseInsensitive)) == 0) ||
               ((QString::compare(name, "Bin", Qt::CaseInsensitive)) == 0) || ((QString::compare(name, "Logs", Qt::CaseInsensitive)) == 0) ||
               ((QString::compare(name, "Login", Qt::CaseInsensitive)) == 0) || ((QString::compare(name, "STHIE", Qt::CaseInsensitive)) == 0) ||
               ((QString::compare(name, "Debug", Qt::CaseInsensitive)) == 0) || ((QString::compare(name, "DB", Qt::CaseInsensitive)) == 0))
                QMessageBox::information(this, tr("ERROR"), tr("El nombre de usuario escogido está reservado y no puede ser usado."));
            limpia_campos();
        }
        else
            errorN = false;

        if((25<pass1.size()) || (pass1.contains(" ")))
        {
            errorP = true;
            QMessageBox::information(this, tr("ERROR"),
                                     tr("El password no debe de exceder los 25 caracteres\ny no debe de contener espacios."));
            limpia_campos();
        }
        else
            errorP = false;

        if(!errorP)
        {
            pwdI = this->verificar(pass1, pass2);

            if(!pwdI)
            {
                QMessageBox::information(this, tr("ERROR"),
                                         tr("Las contreseñas introducidas no son iguales."));
                limpia_campos();
            }
        }

        perCar = login->validaCar(name);

        if(!perCar)
        {
            QMessageBox::information(this, tr("ERROR"),
                                     tr("Sólo se permiten letras o números para el nombre de usuario."));
            limpia_campos();
        }

        if(errorN || errorP)
        {
            errorPN = true;
        }
        else
        {
            errorPN = false;
            perCar2 = login->validaCar(pass1);
            if (!perCar2)
            {
                QMessageBox::information(this, tr("ERROR"),
                                         tr("Sólo se permiten letras o números para la contraseña."));
                limpia_campos();
            }
        }

        if(!errorPN && pwdI && perCar && perCar2)
        {
            creado = login->creaUser(name, pass1);
            if(creado)
            {
                QMessageBox::information(this, tr("¡HECHO!"),
                                         tr("Se ha creado un nuevo usuario."));
                limpia_campos();
                BitaC::escribeBTC(QString("Se ha creado nuevo usuario: %1").arg(name));
            }
            else
            {
                QMessageBox::information(this, tr("ERROR"),
                                         tr("No se pudo crear el nuevo usuario.\nEl usuario ya existe o contiene información erronea."));
            }
        }
    }
    else
    {
        QMessageBox::information(this, tr("ERROR"), tr("El nombre de usuario no puede estar vacio."));
        limpia_campos();
    }
}

bool PassWDialog::verificar(QString pass1, QString pass2)
{
    if((QString::compare(pass1, pass2, Qt::CaseSensitive)) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void PassWDialog::cambiarPWD()
{
    QString name = ui->cb_edit_users_a->currentText();
    QString pass = ui->le_edit_pwd->text();
    QString user_name, user_pass;
    bool pwdVal, pwdEq, pwdChg;

    if(name.size()<26 && pass.size()<26)
    {
        Usuario e1;
        e1 = login->userpass(name);
        if(strcmp(e1.nombre, "INV.USER.NM") != 0)
        {
            user_name = e1.nombre;
            user_pass = e1.password;
            pwdVal = verificar(pass, user_pass);

            if(pwdVal)
            {
                QString pwd1 = ui->le_edit_npwd1->text();
                QString pwd2 = ui->le_edit_npwd2->text();
                pwdEq = verificar(pwd1, pwd2);
                if(pwdEq)
                {
                    pwdChg = login->modificaUser(name, pwd1);
                    if(pwdChg)
                    {
                        QMessageBox::information(this, tr("HECHO"),
                                                 tr("Se ha cambiado el password de forma exitosa"));
                        e1 = login->userpass(name);
                    }
                    else
                    {
                        QMessageBox::information(this, tr("ERROR"),
                                                 tr("No se pudo cambiar el password. Intentelo otra vez."));
                    }
                    limpia_campos();
                }
                else
                {
                    QMessageBox::information(this, tr("ERROR"),
                                             tr("Las contraseñas introducidas no son iguales."));
                    limpia_campos();
                }
            }
            else
            {
                QMessageBox::information(this, tr("ERROR"),
                                         tr("La contraseña introducida no corresponde con la almacenada."));
                limpia_campos();
            }
        }
        else
        {
            QMessageBox::information(this, tr("ERROR"),
                                     tr("No se pudo localizar el nombre de usuario solicitado."));
            limpia_campos();
        }
    }
}
void PassWDialog::borrarCta()
{
    QString name = ui->cb_edit_users_b->currentText();
    QString pass = ui->le_elim_pwd->text();
    QString nmbdir;
    bool rmdirok = false;

    QString user_name, user_pass;
    bool pwdVal, ctaDel;

    if(name.size()<26 && pass.size()<26)
    {
        Usuario e1;
        e1 = login->userpass(name);
        if(strcmp(e1.nombre, "INV.USER.NM") != 0)
        {
            user_name = e1.nombre;
            user_pass = e1.password;
            pwdVal = verificar(pass, user_pass);

            if(pwdVal)
            {
                if(!verificar(this->username, user_name))
                {
                    ctaDel = login->eliminaUser(name);

                    if(ctaDel)
                    {
                        nmbdir = InstallPath;
                        nmbdir.append(name);
                        rmdirok = Login::borraDirs(nmbdir);
                        QMessageBox::information(this, tr("HECHO"),
                                                 tr("Se ha eliminado la cuenta de usuario."));
                        if(!rmdirok)
                        {
                            QMessageBox::information(this, tr("ERROR"),
                                                     tr("No se pudo eliminar la carpeta de usuario.\nEliminela manualmente."));
                        }
                    }
                    else
                    {
                        QMessageBox::information(this, tr("ERROR"),
                                                 tr("No se pudo eliminar la cuenta. Intentelo otra vez."));
                    }
                }
                else
                {
                    QMessageBox::information(this, tr("ERROR"),
                                             tr("No se puede eliminar la cuenta a la que se encuentra conectado."));
                }
                limpia_campos();
            }
            else
            {
                QMessageBox::information(this, tr("ERROR"),
                                         tr("La contraseña introducida no corresponde con la almacenada."));
                limpia_campos();
            }
        }
        else
        {
            QMessageBox::information(this, tr("ERROR"),
                                     tr("No se pudo localizar el nombre de usuario solicitado."));
            limpia_campos();
        }
    }
}
void PassWDialog::limpia_campos()
{
    ui->le_Log_pwd->setText("");
    ui->le_agr_user->setText("");
    ui->le_agr_pwd->setText("");
    ui->le_agr_pwd2->setText("");
    ui->le_edit_npwd1->setText("");
    ui->le_edit_npwd2->setText("");
    ui->le_edit_pwd->setText("");
    ui->le_elim_pwd->setText("");
    ui->cb_Log_users->clear();
    ui->cb_edit_users_a->clear();
    ui->cb_edit_users_b->clear();
    actualizaSys();
}
void PassWDialog::chgPes(int idx)
{
    ui->tabWidget->setCurrentIndex(idx);
}

void PassWDialog::sndUserToShared(QString user)
{
/*
    QString BigString;
    BigString.clear();
    BigString=user;
    m_shrdMem->setI(BigString.size(),DataSize);
    char cadena[20];
    unsigned int coders[5];
    int j;
    int i;
    for (i=0;i<20;i++){cadena[i]=0x00;}
    for(i=0;i<BigString.size();i++){
       cadena[i]= BigString.at(i).toAscii();
    }
    for (i=0;i<BigString.size();i=i+4){
        j=i/4;
        coders[j]= cadena[i+0]*256*256*256+  cadena[i+1]*256*256+  cadena[i+2]*256+cadena[i+3];
    }
    for (i=0;i<5;i++){
        m_shrdMem->setI(coders[i],posStartCode+i);
        if(coders[i]==0x00){break;}
    }*/
}

PassWDialog::~PassWDialog()
{
    delete ui;
}
