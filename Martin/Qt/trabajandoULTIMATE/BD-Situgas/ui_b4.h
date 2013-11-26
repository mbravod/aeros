/********************************************************************************
** Form generated from reading UI file 'b4.ui'
**
** Created: Mon 25. Nov 21:01:05 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_B4_H
#define UI_B4_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>
#include "ainstrumentindicator.h"
#include "awmultiobject.h"
#include "wlabel.h"

QT_BEGIN_NAMESPACE

class Ui_B4
{
public:
    QLabel *label;
    AWMultiObject *interm;
    QFrame *frame;
    QProgressBar *progressBar;
    AWMultiObject *resorte;
    QFrame *frame_2;
    AWMultiObject *ledAceiTemp;
    AWMultiObject *ledAceiNiv;
    QFrame *frame_3;
    WLabel *label_2;
    WLabel *lbAceiTempT;
    WLabel *lbAceiNivT;
    AWMultiObject *aWMultiObject_5;
    AWMultiObject *bombatc_1;
    AWMultiObject *bombatc_2;
    AWMultiObject *regta;
    AInstrumentIndicator *infCuatro;
    AInstrumentIndicator *infUno;
    AInstrumentIndicator *infDos;
    AInstrumentIndicator *infTres;
    AInstrumentIndicator *infOcho;
    AInstrumentIndicator *infCinco;
    AInstrumentIndicator *infSeis;
    AInstrumentIndicator *infSiete;
    AInstrumentIndicator *inf82f;
    AInstrumentIndicator *ind83f;
    WLabel *lbInterT;
    WLabel *lbBomRecT;
    WLabel *lbAlimT;
    WLabel *lbRetMotT;
    WLabel *lbDrenCarcaT;
    WLabel *lb83fT_2;
    WLabel *lb83fT;
    WLabel *lb82f;
    WLabel *label_13;
    WLabel *label_14;
    WLabel *label_15;
    WLabel *lbUnit3;
    QPushButton *btnIMPPant;
    WLabel *lb83fT_3;
    WLabel *lb83fT_4;
    WLabel *lb82f_2;

    void setupUi(QWidget *B4)
    {
        if (B4->objectName().isEmpty())
            B4->setObjectName(QString::fromUtf8("B4"));
        B4->resize(1024, 662);
        B4->setMinimumSize(QSize(1024, 662));
        B4->setMaximumSize(QSize(1024, 662));
        label = new QLabel(B4);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 1024, 662));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        label->setFont(font);
        label->setPixmap(QPixmap(QString::fromUtf8(":/Resources/PNG/B4.png")));
        label->setScaledContents(true);
        interm = new AWMultiObject(B4);
        interm->setObjectName(QString::fromUtf8("interm"));
        interm->setGeometry(QRect(127, 349, 89, 84));
        interm->setFont(font);
        interm->setElementType(AWMultiObject::INTERM);
        interm->setProperty("Value", QVariant(1));
        frame = new QFrame(B4);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(78, 531, 281, 81));
        frame->setFont(font);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        progressBar = new QProgressBar(frame);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(0, 17, 279, 63));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setKerning(false);
        progressBar->setFont(font1);
        progressBar->setLayoutDirection(Qt::LeftToRight);
        progressBar->setAutoFillBackground(false);
        progressBar->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
" border: 1px solid black;\n"
" padding: 0px;\n"
"background: rgb(215, 215, 215);\n"
" }\n"
"\n"
"QProgressBar::chunk {\n"
" background:rgb(170,54,0);\n"
"border:0px solidblack;\n"
" }"));
        progressBar->setValue(84);
        progressBar->setTextVisible(false);
        progressBar->setOrientation(Qt::Vertical);
        progressBar->setInvertedAppearance(false);
        resorte = new AWMultiObject(frame);
        resorte->setObjectName(QString::fromUtf8("resorte"));
        resorte->setGeometry(QRect(0, 37, 57, 54));
        resorte->setFont(font);
        resorte->setElementType(AWMultiObject::SPRING);
        resorte->setProperty("Value", QVariant(1));
        frame_2 = new QFrame(B4);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(20, 120, 231, 111));
        frame_2->setFont(font);
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        ledAceiTemp = new AWMultiObject(frame_2);
        ledAceiTemp->setObjectName(QString::fromUtf8("ledAceiTemp"));
        ledAceiTemp->setGeometry(QRect(12, 32, 25, 25));
        ledAceiTemp->setFont(font);
        ledAceiTemp->setElementType(AWMultiObject::CIRLED);
        ledAceiNiv = new AWMultiObject(frame_2);
        ledAceiNiv->setObjectName(QString::fromUtf8("ledAceiNiv"));
        ledAceiNiv->setGeometry(QRect(12, 70, 25, 25));
        ledAceiNiv->setFont(font);
        ledAceiNiv->setElementType(AWMultiObject::CIRLED);
        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(2, 2, 227, 25));
        frame_3->setFont(font);
        frame_3->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_2 = new WLabel(frame_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(2, 2, 219, 15));
        label_2->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgba(255, 255, 255, 0);\n"
""));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Verdana"));
        font2.setPointSize(8);
        font2.setBold(true);
        font2.setWeight(75);
        label_2->setFont(font2);
        lbAceiTempT = new WLabel(frame_2);
        lbAceiTempT->setObjectName(QString::fromUtf8("lbAceiTempT"));
        lbAceiTempT->setGeometry(QRect(40, 23, 181, 41));
        lbAceiTempT->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);\n"
""));
        lbAceiTempT->setFont(font2);
        lbAceiNivT = new WLabel(frame_2);
        lbAceiNivT->setObjectName(QString::fromUtf8("lbAceiNivT"));
        lbAceiNivT->setGeometry(QRect(40, 62, 181, 41));
        lbAceiNivT->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);\n"
""));
        lbAceiNivT->setFont(font2);
        aWMultiObject_5 = new AWMultiObject(B4);
        aWMultiObject_5->setObjectName(QString::fromUtf8("aWMultiObject_5"));
        aWMultiObject_5->setGeometry(QRect(507, 156, 82, 41));
        aWMultiObject_5->setFont(font);
        aWMultiObject_5->setElementType(AWMultiObject::VALSIMP4);
        bombatc_1 = new AWMultiObject(B4);
        bombatc_1->setObjectName(QString::fromUtf8("bombatc_1"));
        bombatc_1->setGeometry(QRect(383, 165, 110, 110));
        bombatc_1->setFont(font);
        bombatc_1->setElementType(AWMultiObject::BOMBATC);
        bombatc_2 = new AWMultiObject(B4);
        bombatc_2->setObjectName(QString::fromUtf8("bombatc_2"));
        bombatc_2->setGeometry(QRect(384, 229, 110, 110));
        bombatc_2->setFont(font);
        bombatc_2->setElementType(AWMultiObject::BOMBATC);
        regta = new AWMultiObject(B4);
        regta->setObjectName(QString::fromUtf8("regta"));
        regta->setGeometry(QRect(825, 236, 91, 61));
        regta->setFont(font);
        regta->setElementType(AWMultiObject::REGTA);
        infCuatro = new AInstrumentIndicator(B4);
        infCuatro->setObjectName(QString::fromUtf8("infCuatro"));
        infCuatro->setGeometry(QRect(367, 528, 61, 61));
        infCuatro->setFont(font);
        infCuatro->setOrientation(AWMultEstateWidget::Degree180);
        infCuatro->setProperty("Value", QVariant(2));
        infUno = new AInstrumentIndicator(B4);
        infUno->setObjectName(QString::fromUtf8("infUno"));
        infUno->setGeometry(QRect(9, 529, 61, 61));
        infUno->setFont(font);
        infUno->setOrientation(AWMultEstateWidget::Degree0);
        infUno->setProperty("Value", QVariant(2));
        infDos = new AInstrumentIndicator(B4);
        infDos->setObjectName(QString::fromUtf8("infDos"));
        infDos->setGeometry(QRect(9, 567, 61, 61));
        infDos->setFont(font);
        infDos->setOrientation(AWMultEstateWidget::Degree0);
        infDos->setProperty("Value", QVariant(2));
        infTres = new AInstrumentIndicator(B4);
        infTres->setObjectName(QString::fromUtf8("infTres"));
        infTres->setGeometry(QRect(229, 289, 61, 61));
        infTres->setFont(font);
        infTres->setOrientation(AWMultEstateWidget::Degree0);
        infTres->setProperty("Value", QVariant(2));
        infOcho = new AInstrumentIndicator(B4);
        infOcho->setObjectName(QString::fromUtf8("infOcho"));
        infOcho->setGeometry(QRect(578, 134, 61, 61));
        infOcho->setFont(font);
        infOcho->setIntID(0);
        infOcho->setOrientation(AWMultEstateWidget::Degree180);
        infOcho->setProperty("Value", QVariant(2));
        infCinco = new AInstrumentIndicator(B4);
        infCinco->setObjectName(QString::fromUtf8("infCinco"));
        infCinco->setGeometry(QRect(411, 136, 61, 61));
        infCinco->setFont(font);
        infCinco->setOrientation(AWMultEstateWidget::Degree90);
        infCinco->setProperty("Value", QVariant(2));
        infSeis = new AInstrumentIndicator(B4);
        infSeis->setObjectName(QString::fromUtf8("infSeis"));
        infSeis->setGeometry(QRect(501, 212, 61, 61));
        infSeis->setFont(font);
        infSeis->setOrientation(AWMultEstateWidget::Degree0);
        infSeis->setProperty("Value", QVariant(2));
        infSiete = new AInstrumentIndicator(B4);
        infSiete->setObjectName(QString::fromUtf8("infSiete"));
        infSiete->setGeometry(QRect(502, 337, 61, 61));
        infSiete->setFont(font);
        infSiete->setOrientation(AWMultEstateWidget::Degree90);
        infSiete->setProperty("Value", QVariant(2));
        inf82f = new AInstrumentIndicator(B4);
        inf82f->setObjectName(QString::fromUtf8("inf82f"));
        inf82f->setGeometry(QRect(946, 130, 61, 61));
        inf82f->setFont(font);
        inf82f->setOrientation(AWMultEstateWidget::Degree90);
        inf82f->setProperty("Value", QVariant(2));
        ind83f = new AInstrumentIndicator(B4);
        ind83f->setObjectName(QString::fromUtf8("ind83f"));
        ind83f->setGeometry(QRect(886, 129, 61, 61));
        ind83f->setFont(font);
        ind83f->setOrientation(AWMultEstateWidget::Degree90);
        ind83f->setProperty("Value", QVariant(2));
        lbInterT = new WLabel(B4);
        lbInterT->setObjectName(QString::fromUtf8("lbInterT"));
        lbInterT->setGeometry(QRect(88, 344, 191, 21));
        lbInterT->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);\n"
""));
        lbInterT->setFont(font2);
        lbBomRecT = new WLabel(B4);
        lbBomRecT->setObjectName(QString::fromUtf8("lbBomRecT"));
        lbBomRecT->setGeometry(QRect(366, 321, 191, 21));
        lbBomRecT->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);\n"
""));
        lbBomRecT->setFont(font2);
        lbAlimT = new WLabel(B4);
        lbAlimT->setObjectName(QString::fromUtf8("lbAlimT"));
        lbAlimT->setGeometry(QRect(630, 194, 191, 21));
        lbAlimT->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);\n"
""));
        lbAlimT->setFont(font2);
        lbRetMotT = new WLabel(B4);
        lbRetMotT->setObjectName(QString::fromUtf8("lbRetMotT"));
        lbRetMotT->setGeometry(QRect(665, 280, 191, 41));
        lbRetMotT->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);\n"
""));
        lbRetMotT->setFont(font2);
        lbRetMotT->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbDrenCarcaT = new WLabel(B4);
        lbDrenCarcaT->setObjectName(QString::fromUtf8("lbDrenCarcaT"));
        lbDrenCarcaT->setGeometry(QRect(590, 397, 310, 21));
        lbDrenCarcaT->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);\n"
""));
        lbDrenCarcaT->setFont(font2);
        lb83fT_2 = new WLabel(B4);
        lb83fT_2->setObjectName(QString::fromUtf8("lb83fT_2"));
        lb83fT_2->setGeometry(QRect(950, 104, 21, 21));
        lb83fT_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);\n"
""));
        lb83fT_2->setFont(font2);
        lb83fT = new WLabel(B4);
        lb83fT->setObjectName(QString::fromUtf8("lb83fT"));
        lb83fT->setGeometry(QRect(903, 120, 41, 21));
        lb83fT->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);\n"
""));
        lb83fT->setFont(font2);
        lb82f = new WLabel(B4);
        lb82f->setObjectName(QString::fromUtf8("lb82f"));
        lb82f->setGeometry(QRect(965, 120, 31, 21));
        lb82f->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);\n"
""));
        lb82f->setFont(font2);
        label_13 = new WLabel(B4);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(591, 127, 241, 21));
        label_13->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
""));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Verdana"));
        font3.setPointSize(9);
        font3.setBold(true);
        font3.setWeight(75);
        label_13->setFont(font3);
        label_14 = new WLabel(B4);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(653, 146, 41, 21));
        label_14->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
""));
        label_14->setFont(font3);
        label_15 = new WLabel(B4);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(710, 146, 41, 21));
        label_15->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
""));
        label_15->setFont(font3);
        lbUnit3 = new WLabel(B4);
        lbUnit3->setObjectName(QString::fromUtf8("lbUnit3"));
        lbUnit3->setGeometry(QRect(833, 647, 190, 15));
        lbUnit3->setStyleSheet(QString::fromUtf8("background-color: rgb(175, 175, 175);"));
        QFont font4;
        font4.setBold(true);
        font4.setWeight(75);
        lbUnit3->setFont(font4);
        btnIMPPant = new QPushButton(B4);
        btnIMPPant->setObjectName(QString::fromUtf8("btnIMPPant"));
        btnIMPPant->setGeometry(QRect(10, 632, 134, 23));
        QFont font5;
        font5.setPointSize(8);
        font5.setBold(true);
        font5.setWeight(75);
        btnIMPPant->setFont(font5);
        btnIMPPant->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        lb83fT_3 = new WLabel(B4);
        lb83fT_3->setObjectName(QString::fromUtf8("lb83fT_3"));
        lb83fT_3->setGeometry(QRect(921, 104, 31, 21));
        lb83fT_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);\n"
""));
        lb83fT_3->setFont(font2);
        lb83fT_4 = new WLabel(B4);
        lb83fT_4->setObjectName(QString::fromUtf8("lb83fT_4"));
        lb83fT_4->setGeometry(QRect(860, 120, 31, 21));
        lb83fT_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);\n"
""));
        lb83fT_4->setFont(font2);
        lb82f_2 = new WLabel(B4);
        lb82f_2->setObjectName(QString::fromUtf8("lb82f_2"));
        lb82f_2->setGeometry(QRect(930, 120, 41, 21));
        lb82f_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);\n"
""));
        lb82f_2->setFont(font2);

        retranslateUi(B4);

        QMetaObject::connectSlotsByName(B4);
    } // setupUi

    void retranslateUi(QWidget *B4)
    {
        B4->setWindowTitle(QApplication::translate("B4", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        progressBar->setFormat(QString());
        label_2->setText(QApplication::translate("B4", "ENCLAVAMIENTOS DE SISTEMA HIDR", 0, QApplication::UnicodeUTF8));
        lbAceiTempT->setText(QApplication::translate("B4", "ACEITE HIDR. DE ARRANQUE\n"
"TEMP DEL TANQUE - OK", 0, QApplication::UnicodeUTF8));
        lbAceiNivT->setText(QApplication::translate("B4", "ACEITE HIDR. DE ARRANQUE\n"
"NIVEL DEL TANQUE - OK", 0, QApplication::UnicodeUTF8));
        infCuatro->setId(QApplication::translate("B4", "p_Fix32_THISNODE_ALM_MSTR005_F_CV", 0, QApplication::UnicodeUTF8));
        infCuatro->setProperty("UpLabel", QVariant(QApplication::translate("B4", "TLS", 0, QApplication::UnicodeUTF8)));
        infCuatro->setProperty("DownLabel", QVariant(QApplication::translate("B4", "1603", 0, QApplication::UnicodeUTF8)));
        infUno->setId(QApplication::translate("B4", "p_Fix32_THISNODE_ALM_MSTR007_F_CV", 0, QApplication::UnicodeUTF8));
        infUno->setProperty("UpLabel", QVariant(QApplication::translate("B4", "LSLL", 0, QApplication::UnicodeUTF8)));
        infUno->setProperty("DownLabel", QVariant(QApplication::translate("B4", "1601", 0, QApplication::UnicodeUTF8)));
        infDos->setProperty("UpLabel", QVariant(QApplication::translate("B4", "HE", 0, QApplication::UnicodeUTF8)));
        infDos->setProperty("DownLabel", QVariant(QApplication::translate("B4", "1610", 0, QApplication::UnicodeUTF8)));
        infTres->setProperty("UpLabel", QVariant(QApplication::translate("B4", "PDSHH", 0, QApplication::UnicodeUTF8)));
        infTres->setProperty("DownLabel", QVariant(QApplication::translate("B4", "1600", 0, QApplication::UnicodeUTF8)));
        infOcho->setProperty("UpLabel", QVariant(QApplication::translate("B4", "SOV", 0, QApplication::UnicodeUTF8)));
        infOcho->setProperty("DownLabel", QVariant(QApplication::translate("B4", "1619", 0, QApplication::UnicodeUTF8)));
        infCinco->setProperty("UpLabel", QVariant(QApplication::translate("B4", "MOT", 0, QApplication::UnicodeUTF8)));
        infCinco->setProperty("DownLabel", QVariant(QApplication::translate("B4", "1615", 0, QApplication::UnicodeUTF8)));
        infSeis->setProperty("UpLabel", QVariant(QApplication::translate("B4", "PSLL", 0, QApplication::UnicodeUTF8)));
        infSeis->setProperty("DownLabel", QVariant(QApplication::translate("B4", "1605", 0, QApplication::UnicodeUTF8)));
        infSiete->setId(QApplication::translate("B4", "p_Fix32_THISNODE_ALM_MSTR006_F_CV", 0, QApplication::UnicodeUTF8));
        infSiete->setProperty("UpLabel", QVariant(QApplication::translate("B4", "TSH", 0, QApplication::UnicodeUTF8)));
        infSiete->setProperty("DownLabel", QVariant(QApplication::translate("B4", "1602", 0, QApplication::UnicodeUTF8)));
        inf82f->setId(QApplication::translate("B4", "p_Fix32_THISNODE_ALM_MSTR232_F_CV", 0, QApplication::UnicodeUTF8));
        inf82f->setProperty("UpLabel", QVariant(QApplication::translate("B4", "TE", 0, QApplication::UnicodeUTF8)));
        inf82f->setProperty("DownLabel", QVariant(QApplication::translate("B4", "1663A1", 0, QApplication::UnicodeUTF8)));
        ind83f->setId(QApplication::translate("B4", "p_Fix32_THISNODE_ALM_MSTR238_F_CV", 0, QApplication::UnicodeUTF8));
        ind83f->setProperty("UpLabel", QVariant(QApplication::translate("B4", "TE", 0, QApplication::UnicodeUTF8)));
        ind83f->setProperty("DownLabel", QVariant(QApplication::translate("B4", "1663A2", 0, QApplication::UnicodeUTF8)));
        lbInterT->setText(QApplication::translate("B4", "INTERCAMBIADOR DE CALOR", 0, QApplication::UnicodeUTF8));
        lbBomRecT->setText(QApplication::translate("B4", "BOMBA DE RECUPERACI\303\223N", 0, QApplication::UnicodeUTF8));
        lbAlimT->setText(QApplication::translate("B4", "ALIM, MOTOR HIDR. DE ARRANQUE", 0, QApplication::UnicodeUTF8));
        lbRetMotT->setText(QApplication::translate("B4", "RETORNO MOTOR\n"
"HIDR. DE ARRANQUE", 0, QApplication::UnicodeUTF8));
        lbDrenCarcaT->setText(QApplication::translate("B4", "DRENAJE CARCASA MOTOR HIDR. DE ARRANQUE", 0, QApplication::UnicodeUTF8));
        lb83fT_2->setText(QApplication::translate("B4", "\302\260F", 0, QApplication::UnicodeUTF8));
        lb83fT->setText(QApplication::translate("B4", "\302\260F", 0, QApplication::UnicodeUTF8));
        lb82f->setText(QApplication::translate("B4", "\302\260F", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("B4", "DEMANDA MOTOR DE ARRANQUE", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("B4", "0.0", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("B4", "%", 0, QApplication::UnicodeUTF8));
        lbUnit3->setText(QApplication::translate("B4", "    UNIT3", 0, QApplication::UnicodeUTF8));
        btnIMPPant->setText(QApplication::translate("B4", "IMP PANT", 0, QApplication::UnicodeUTF8));
        lb83fT_3->setText(QApplication::translate("B4", "83", 0, QApplication::UnicodeUTF8));
        lb83fT_4->setText(QApplication::translate("B4", "83 ", 0, QApplication::UnicodeUTF8));
        lb82f_2->setText(QApplication::translate("B4", "82", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class B4: public Ui_B4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_B4_H
