#ifndef CONSOLE_H
#define CONSOLE_H

#include <QMainWindow>
#include "Console/Base/toolbar.h"
#include "Console/Base/toolb.h"
#include "Settings/settings.h"
#include "SharedMemory/shrdmem.h"

#include "Console/ParametrosDeSimulacion/parametrossimulacion.h"
#include "Console/Tablas/tablas.h"
#include "ui_parametrossimulacion.h"

namespace Ui {
    class Console;
}

namespace Ui {
    class ParametrosSimulacion;
}

class Console : public QMainWindow
{
    Q_OBJECT

public:
    Console(QWidget *parent, Settings *s);
    ~Console();

    QString user;
    Settings *settings;
    QString foto;
    QString coment;

signals:
    void createHMI();
    void Destroyed();
    void volumeClicked(int v);
    void viewWMenuClicked(int v);
private slots:
    //Volume
    void volumecClicked(int v);
    void viewWMenucClicked(int v);
    void addToolBars();
    void view0(bool b);
    void view1(bool b);
    void view2(bool b);
    void view3(bool b);
    void view4(bool b);
    void view5(bool b);

    void UpdateHMI();
public slots:
    void mapFunc(int i);

    void a_a_0_clicked();
    void a_a_1_clicked();
    void a_a_2_clicked();
    void a_a_3_clicked();
    void a_a_4_clicked();
    void a_a_5_clicked();
    void a_a_6_clicked();
    void a_a_7_clicked();
    void a_a_8_clicked();
    void a_a_9_clicked();
    void a_a_10_clicked();
    void a_a_11_clicked();
    void a_b_1_clicked();
    void a_b_2_1_clicked();
    void a_b_2_2_clicked();
    void a_b_3_clicked();
    void a_c_1_clicked();
    void a_c_2_clicked();
    void a_c_3_clicked();
    void a_c_4_clicked();
    void a_d_1_clicked();
    void a_d_2_clicked();
    void a_d_3_clicked();
    void a_d_4_clicked();

    void a_e_1_clicked();
    void a_e_2_clicked();

    void a_f_1_clicked();
    void a_f_3_clicked();

    void chkIns(bool a, QString name);
    void rcbParCI(QString foto, QString coment);
private:
    Ui::Console *ui;
    Ui::ParametrosSimulacion *ui2;

    QMenu *menuMando;
    QMenu *menuEstadosIniciales;
    QMenu *menuParametrosOperacion;
    QMenu *menuMonitoreo;
    QMenu *menuHistoriales;
    QMenu *menuMantenimiento;
    QMenu *volumeMenu;

    QMenu *viewWMenu;

    QAction *a_a_0;
    QAction *a_a_1;
    QAction *a_a_2;
    QAction *a_a_3;
    QAction *a_a_4;
    QAction *a_a_5;
    QAction *a_a_6;
    QAction *a_a_7;
    QAction *a_a_8;
    QAction *a_a_9;
    QAction *a_a_10;
    QAction *a_a_11;
    QAction *a_b_1;

    QMenu *a_b_2;
    QAction *a_b_2_1;
    QAction *a_b_2_2;
    QAction *a_b_3;

    QAction *a_c_1;
    QAction *a_c_2;
    QAction *a_c_3;
    QAction *a_c_4;

    QAction *a_d_1;
    QAction *a_d_2;
    QAction *a_d_3;
    QAction *a_d_4;

    QAction *a_e_1;
    QAction *a_e_2;

    QAction *a_f_1;
    QAction *a_f_2;
    QAction *a_f_3;

    QAction *a_f_4;

    ToolBar *TBMainToolBar;
    ToolBar *TBMando;
    ToolBar *TBEstadosIn;
    ToolBar *TBParametrosOp;
    ToolBar *TBMonitoreo;
    ToolBar *TBHistoriales;
    ToolBar *TBMantenimiento;

    ToolB *Mando;
    ToolB *EstadosIn;
    ToolB *ParametrosOp;
    ToolB *Monitoreo;
    ToolB *Historiales;
    ToolB *Mantenimiento;
    ToolB *icons;

    Tablas *tablas;

    ToolB *createIcon(const QString &icon,const QString &toolTip,const char * method);
    void createIcons();
    void createActions();
    void createMenu();
    void createToolBar();
    void setActionsToMenu();
    void encodeFString();

    ShrdMem *m_shrdMem;

};

#endif // CONSOLE_H
