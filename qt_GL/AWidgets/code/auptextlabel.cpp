#include "auptextlabel.h"

AUpTextLabel::AUpTextLabel(QWidget *parent) :
    AWAnalogicWidget(parent)
{
    init();
}
void AUpTextLabel::init(){
    m_Label = new QLabel(this);
    m_Label->setText("????");
    this->m_StringText.clear();
    this->m_value=0;
    m_presicion = 0;

    m_strOnState = "";
    m_strOffState = "";
    strList<<m_strOffState<<m_strOnState;
}

void AUpTextLabel::AWPaintEvent(){
    m_Label->resize(this->width(),this->height());

    m_Label->setText(QString::number(this->m_value,'f',m_presicion));
//    if(m_StringText.isEmpty())
//    {
/*        if((int)m_value>=0 && (int)m_value<=1)
        {
            if(strList[(int)m_value]=="")
                m_Label->setText(QString::number(this->m_value,'f',m_presicion));
            else
                m_Label->setText(strList[(int)m_value]);
        }
        else{*/
        //}
//    }
}

void AUpTextLabel::setText(const QString &s){
    this->m_StringText=s;
    m_Label->setText(m_StringText);
}

void AUpTextLabel::setFrameShape(QFrame::Shape f){
    m_Label->setFrameShape(f);
    update();
}
void AUpTextLabel::setFrameShadow(QFrame::Shadow f){
    m_Label->setFrameShadow(f);
    update();
}

void AUpTextLabel::setLineWidth(int i){
    this->m_Label->setLineWidth(i);
    update();
}

void AUpTextLabel::setFont(QFont f){
    this->m_font = f;
    m_Label->setFont(f);;
    this->update();
}

void AUpTextLabel::setStrOnState(QString s){
    this->m_strOnState = s;
    this->strList[1]=s;
    this->update();
}

void AUpTextLabel::setStrOffState(QString s){
    this->m_strOffState = s;
    this->strList[0]=s;
    this->update();
}

void AUpTextLabel::setPresicion(int i){
    this->m_presicion=i;
    this->update();
}

void AUpTextLabel::setAlignment(AWAlignment i){
    switch (i){
    case 0:
        this->flagAlign = i;
        this->m_Label->setAlignment(Qt::AlignLeft);
        break;
    case 1:
        this->flagAlign = i;
        this->m_Label->setAlignment(Qt::AlignCenter);
        break;
    case 2:
        this->flagAlign = i;
        this->m_Label->setAlignment(Qt::AlignRight);
        break;
    }
    this->update();
}

void AUpTextLabel::Update()
{
    if(m_ShrdMem == NULL)
        return;
    if(!isUpdateable())  //Verificar metodo para saber si
        return;                // la ventana que contiene el widget es "visible" (para el usuario)
    if(indice< 0){
        indice = m_ShrdMem->getVar(id);
        if(indice < 0){
            return;
        }
    }
    //Logica para definir atributos y comportamiento del widget
    m_value = m_ShrdMem->getF(indice);

}
