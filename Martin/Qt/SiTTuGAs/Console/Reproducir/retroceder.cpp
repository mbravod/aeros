#include <QtGui>
#include <QtDebug>
#include "retroceder.h"
#include "ui_retroceder.h"

#define PlayPauseConst 5901
#define PlayPauseConst2 5990

Retroceder::Retroceder(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Retroceder)
{
//    shrdMem = new ShrdMem();
    cIn = new CIn ();
    cIn->login();
    ui->setupUi(this);
    connect(ui->slider,SIGNAL(sliderMoved(int)),this,SLOT(sliderValChanged(int)));
    connect(ui->Cargar, SIGNAL(clicked()), this, SLOT(loadCIback()));
    connect(ui->Iniciar,SIGNAL(clicked()),this,SLOT(rewind()));
    connect(ui->Detener,SIGNAL(clicked()),this,SLOT(stop()));
    connect(ui->Cerrar,SIGNAL(clicked()),this,SLOT(cerrar()));

    QTimer *updatetimer = new QTimer(this);
    connect(updatetimer, SIGNAL(timeout()), this, SLOT(Prueba()));
    updatetimer->start(1000);

    ui->progressBar->setValue(0);
    ui->Iniciar->setEnabled(false);
    ui->Detener->setEnabled(false);
    flag=0;
    old_k=0;
    new_k=0;
    ui->slider->setMaximum(((int)shrdMem->getF(5998))/1000/60);
}

void Retroceder::inputSeconds(int secs){
    horas=secs/3600;
    h=(float)secs/3600;
    m= (h-(float)horas)*60;
    minutos=(h-(float)horas)*60;
    segundos=(m-(float)minutos)*60;
    //display(QString("%1:%2:%3").arg(ftoa(horas)).arg(ftoa(minutos)).arg(ftoa(segundos)));
    ui->SegundosL->setText(ftoa(segundos));
    ui->MinutosL->setText(ftoa(minutos));
}


void Retroceder::cerrar()
{
flag=0;
shrdMem->setI(0,5989);

}

Retroceder::~Retroceder()
{

    delete ui;
}

void Retroceder::sliderValChanged(int ival){
    ui->slider->setSliderPosition(ival);
    QString k= ftoa(ui->slider->sliderPosition());
    ui->sliderval->setText(k);
}

void Retroceder::loadedOK(){
    QMessageBox::information(this, tr(""),tr("Fotogramas cargados exitosamente"));
}

void Retroceder::storeTimer(int segundos)
{
}



void Retroceder::loadCIback(){

    shrdMem->setI(1,PlayPauseConst);
    shrdMem->setI(1,PlayPauseConst2);
    ui->slider->setMaximum(((int)shrdMem->getF(5998))/1000/60);

    time= ui->slider->sliderPosition();
    qDebug()<<"time="<<time;
    ui->progressBar->setMaximum(time*60);


     cIn->getdirfromdisk('S');
     xu=cIn->testST();
     while(!cIn->ISREADY()){
         Sleep(1000);
     }
     int i,j;
     xu=cIn->RETRIEVEFILESVIRTUALTABLE(&cIn->FILESVIRTUALTABLE[0][0]);

     for (i=0;i<time*60;i++){
         if (cIn->FILESVIRTUALTABLE[i][0]!=0){
             cIn->FILESVIRTUALTABLE[i][31]=0;
             backupfile[i][31]=0;
         for(j=0;j<32;j++){

            backupfile[i][j]=cIn->FILESVIRTUALTABLE[i][j];

            }
             Sleep(20);
     }
         ui->progressBar->setValue(i+1);
     }

     ui->Iniciar->setEnabled(true);
     ui->Detener->setEnabled(true);
     old_k=time*60;
}

void Retroceder::stop(){
    flag=0;
    shrdMem->setI(0,5989);
}

void Retroceder::Prueba()
{
    if (old_k>0){
        if(flag){
            shrdMem->setF(old_k*1000,5998);
            shrdMem->setI(1,5989);
            cIn->loadtomemfromdisk(backupfile[old_k]);
            inputSeconds((time*60)-old_k);
            old_k--;
        }
    }
}

void Retroceder::rewind(){
    flag=1;
}

//Conversion de Flotante a cadena
QString Retroceder::ftoa(int f)
{
    QString str = QString("%0").arg(f);
    if(str.contains(".")){
        str.truncate(str.indexOf(".")+3);}
    else if (!str.contains(".")){
       // str.append(".00");
    }
    return str;
}
