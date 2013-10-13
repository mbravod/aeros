/********************************************************************************
** Form generated from reading UI file 'a3.ui'
**
** Created: Sat 12. Oct 21:51:16 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_A3_H
#define UI_A3_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>
#include "wcheckbox.h"

QT_BEGIN_NAMESPACE

class Ui_A3
{
public:
    QFrame *frame;
    QPushButton *pushButton_15;
    QFrame *frame_7;
    QFrame *frame_8;
    QLabel *lbSecT;
    QLabel *lbPasT;
    QLabel *lbEdoT;
    WCheckBox *cbUniFue;
    WCheckBox *cbPurga;
    WCheckBox *cbVrif;
    WCheckBox *cbActAHidr;
    WCheckBox *cbSelAltArr;
    WCheckBox *cbActCron;
    WCheckBox *cbActALue;
    WCheckBox *cbLuzApg;
    WCheckBox *cbVelMax;
    WCheckBox *cbAcel;
    WCheckBox *cbInicCro;
    WCheckBox *cbEsp;
    WCheckBox *cbList;
    WCheckBox *cbUniLin;
    QLabel *lbPurgaEdo;
    QLabel *label_2;
    QLabel *lbInicCroHrs;
    QLabel *lbInicCroMin;
    QLabel *label_3;
    QLabel *lbActCronMin;
    QLabel *label_4;
    QLabel *lbActCronHrs;
    QFrame *frame_9;
    QFrame *frame_10;
    QLabel *lbRotT;
    QLabel *lbPasT_2;
    QLabel *lbEdoT_2;
    WCheckBox *cbActBom;
    WCheckBox *cbActSis;
    WCheckBox *cbActAHid;
    WCheckBox *cbSelAltVel;
    QLabel *lbMin;
    QLabel *lhHrs;
    QLabel *label_5;
    QFrame *frame_11;
    QFrame *frame_12;
    QLabel *label_13;
    QLabel *lbBack;
    QLabel *lbUnit3;
    QPushButton *btnIMPPant;

    void setupUi(QWidget *A3)
    {
        if (A3->objectName().isEmpty())
            A3->setObjectName(QString::fromUtf8("A3"));
        A3->resize(1024, 662);
        A3->setMinimumSize(QSize(1024, 662));
        A3->setMaximumSize(QSize(1024, 662));
        frame = new QFrame(A3);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 1024, 662));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(154, 154, 154);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton_15 = new QPushButton(frame);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        pushButton_15->setGeometry(QRect(15, 639, 132, 21));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        pushButton_15->setFont(font);
        pushButton_15->setStyleSheet(QString::fromUtf8("background-color: none;"));
        frame_7 = new QFrame(frame);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setGeometry(QRect(5, 50, 340, 541));
        frame_7->setStyleSheet(QString::fromUtf8("background-color: none;"));
        frame_7->setFrameShape(QFrame::Box);
        frame_7->setFrameShadow(QFrame::Sunken);
        frame_8 = new QFrame(frame_7);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setGeometry(QRect(5, 5, 332, 22));
        frame_8->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        frame_8->setFrameShape(QFrame::Box);
        frame_8->setFrameShadow(QFrame::Raised);
        lbSecT = new QLabel(frame_8);
        lbSecT->setObjectName(QString::fromUtf8("lbSecT"));
        lbSecT->setGeometry(QRect(5, 2, 318, 17));
        lbSecT->setFont(font);
        lbSecT->setAlignment(Qt::AlignCenter);
        lbPasT = new QLabel(frame_7);
        lbPasT->setObjectName(QString::fromUtf8("lbPasT"));
        lbPasT->setGeometry(QRect(40, 30, 171, 21));
        QPalette palette;
        QBrush brush(QColor(0, 0, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        lbPasT->setPalette(palette);
        lbPasT->setFont(font);
        lbEdoT = new QLabel(frame_7);
        lbEdoT->setObjectName(QString::fromUtf8("lbEdoT"));
        lbEdoT->setGeometry(QRect(280, 30, 53, 20));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        lbEdoT->setPalette(palette1);
        lbEdoT->setFont(font);
        cbUniFue = new WCheckBox(frame_7);
        cbUniFue->setObjectName(QString::fromUtf8("cbUniFue"));
        cbUniFue->setGeometry(QRect(20, 50, 211, 16));
        QFont font1;
        font1.setPointSize(8);
        font1.setBold(true);
        font1.setWeight(75);
        cbUniFue->setFont(font1);
        cbUniFue->setProperty("iconSize", QVariant(QSize(24, 24)));
        cbPurga = new WCheckBox(frame_7);
        cbPurga->setObjectName(QString::fromUtf8("cbPurga"));
        cbPurga->setGeometry(QRect(20, 70, 201, 16));
        cbPurga->setFont(font1);
        cbPurga->setProperty("iconSize", QVariant(QSize(24, 24)));
        cbVrif = new WCheckBox(frame_7);
        cbVrif->setObjectName(QString::fromUtf8("cbVrif"));
        cbVrif->setGeometry(QRect(20, 90, 306, 16));
        cbVrif->setFont(font1);
        cbVrif->setProperty("iconSize", QVariant(QSize(24, 24)));
        cbActAHidr = new WCheckBox(frame_7);
        cbActAHidr->setObjectName(QString::fromUtf8("cbActAHidr"));
        cbActAHidr->setGeometry(QRect(20, 110, 233, 16));
        cbActAHidr->setFont(font1);
        cbActAHidr->setProperty("iconSize", QVariant(QSize(24, 24)));
        cbSelAltArr = new WCheckBox(frame_7);
        cbSelAltArr->setObjectName(QString::fromUtf8("cbSelAltArr"));
        cbSelAltArr->setGeometry(QRect(20, 130, 272, 16));
        cbSelAltArr->setFont(font1);
        cbSelAltArr->setProperty("iconSize", QVariant(QSize(24, 24)));
        cbActCron = new WCheckBox(frame_7);
        cbActCron->setObjectName(QString::fromUtf8("cbActCron"));
        cbActCron->setGeometry(QRect(20, 150, 231, 16));
        cbActCron->setFont(font1);
        cbActCron->setProperty("iconSize", QVariant(QSize(24, 24)));
        cbActALue = new WCheckBox(frame_7);
        cbActALue->setObjectName(QString::fromUtf8("cbActALue"));
        cbActALue->setGeometry(QRect(20, 170, 301, 16));
        cbActALue->setFont(font1);
        cbActALue->setProperty("iconSize", QVariant(QSize(24, 24)));
        cbLuzApg = new WCheckBox(frame_7);
        cbLuzApg->setObjectName(QString::fromUtf8("cbLuzApg"));
        cbLuzApg->setGeometry(QRect(20, 190, 303, 16));
        cbLuzApg->setFont(font1);
        cbLuzApg->setProperty("iconSize", QVariant(QSize(24, 24)));
        cbVelMax = new WCheckBox(frame_7);
        cbVelMax->setObjectName(QString::fromUtf8("cbVelMax"));
        cbVelMax->setGeometry(QRect(20, 270, 225, 16));
        cbVelMax->setFont(font1);
        cbVelMax->setProperty("iconSize", QVariant(QSize(24, 24)));
        cbAcel = new WCheckBox(frame_7);
        cbAcel->setObjectName(QString::fromUtf8("cbAcel"));
        cbAcel->setGeometry(QRect(20, 230, 192, 16));
        cbAcel->setFont(font1);
        cbAcel->setProperty("iconSize", QVariant(QSize(24, 24)));
        cbInicCro = new WCheckBox(frame_7);
        cbInicCro->setObjectName(QString::fromUtf8("cbInicCro"));
        cbInicCro->setGeometry(QRect(20, 249, 246, 16));
        cbInicCro->setFont(font1);
        cbInicCro->setProperty("iconSize", QVariant(QSize(24, 24)));
        cbEsp = new WCheckBox(frame_7);
        cbEsp->setObjectName(QString::fromUtf8("cbEsp"));
        cbEsp->setGeometry(QRect(20, 210, 278, 16));
        cbEsp->setFont(font1);
        cbEsp->setProperty("iconSize", QVariant(QSize(24, 24)));
        cbList = new WCheckBox(frame_7);
        cbList->setObjectName(QString::fromUtf8("cbList"));
        cbList->setGeometry(QRect(20, 290, 245, 16));
        cbList->setFont(font1);
        cbList->setProperty("iconSize", QVariant(QSize(24, 24)));
        cbUniLin = new WCheckBox(frame_7);
        cbUniLin->setObjectName(QString::fromUtf8("cbUniLin"));
        cbUniLin->setGeometry(QRect(20, 310, 141, 16));
        cbUniLin->setFont(font1);
        cbUniLin->setProperty("iconSize", QVariant(QSize(24, 24)));
        lbPurgaEdo = new QLabel(frame_7);
        lbPurgaEdo->setObjectName(QString::fromUtf8("lbPurgaEdo"));
        lbPurgaEdo->setGeometry(QRect(297, 60, 26, 31));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        lbPurgaEdo->setFont(font2);
        lbPurgaEdo->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(frame_7);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(287, 60, 12, 31));
        label_2->setFont(font2);
        label_2->setAlignment(Qt::AlignCenter);
        lbInicCroHrs = new QLabel(frame_7);
        lbInicCroHrs->setObjectName(QString::fromUtf8("lbInicCroHrs"));
        lbInicCroHrs->setGeometry(QRect(265, 239, 26, 31));
        lbInicCroHrs->setFont(font2);
        lbInicCroHrs->setAlignment(Qt::AlignCenter);
        lbInicCroMin = new QLabel(frame_7);
        lbInicCroMin->setObjectName(QString::fromUtf8("lbInicCroMin"));
        lbInicCroMin->setGeometry(QRect(310, 239, 26, 31));
        lbInicCroMin->setFont(font2);
        lbInicCroMin->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(frame_7);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(294, 239, 12, 31));
        label_3->setFont(font2);
        label_3->setAlignment(Qt::AlignCenter);
        lbActCronMin = new QLabel(frame_7);
        lbActCronMin->setObjectName(QString::fromUtf8("lbActCronMin"));
        lbActCronMin->setGeometry(QRect(311, 140, 26, 31));
        lbActCronMin->setFont(font2);
        lbActCronMin->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(frame_7);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(295, 140, 12, 31));
        label_4->setFont(font2);
        label_4->setAlignment(Qt::AlignCenter);
        lbActCronHrs = new QLabel(frame_7);
        lbActCronHrs->setObjectName(QString::fromUtf8("lbActCronHrs"));
        lbActCronHrs->setGeometry(QRect(266, 140, 26, 31));
        lbActCronHrs->setFont(font2);
        lbActCronHrs->setAlignment(Qt::AlignCenter);
        frame_9 = new QFrame(frame);
        frame_9->setObjectName(QString::fromUtf8("frame_9"));
        frame_9->setGeometry(QRect(344, 50, 340, 541));
        frame_9->setStyleSheet(QString::fromUtf8("background-color: none;"));
        frame_9->setFrameShape(QFrame::Box);
        frame_9->setFrameShadow(QFrame::Sunken);
        frame_10 = new QFrame(frame_9);
        frame_10->setObjectName(QString::fromUtf8("frame_10"));
        frame_10->setGeometry(QRect(5, 5, 331, 22));
        frame_10->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        frame_10->setFrameShape(QFrame::Box);
        frame_10->setFrameShadow(QFrame::Raised);
        lbRotT = new QLabel(frame_10);
        lbRotT->setObjectName(QString::fromUtf8("lbRotT"));
        lbRotT->setGeometry(QRect(5, 2, 322, 17));
        lbRotT->setFont(font);
        lbRotT->setAlignment(Qt::AlignCenter);
        lbPasT_2 = new QLabel(frame_9);
        lbPasT_2->setObjectName(QString::fromUtf8("lbPasT_2"));
        lbPasT_2->setGeometry(QRect(40, 30, 171, 21));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        lbPasT_2->setPalette(palette2);
        lbPasT_2->setFont(font);
        lbEdoT_2 = new QLabel(frame_9);
        lbEdoT_2->setObjectName(QString::fromUtf8("lbEdoT_2"));
        lbEdoT_2->setGeometry(QRect(280, 30, 56, 20));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        lbEdoT_2->setPalette(palette3);
        lbEdoT_2->setFont(font);
        cbActBom = new WCheckBox(frame_9);
        cbActBom->setObjectName(QString::fromUtf8("cbActBom"));
        cbActBom->setGeometry(QRect(20, 90, 226, 16));
        cbActBom->setFont(font1);
        cbActBom->setProperty("iconSize", QVariant(QSize(24, 24)));
        cbActSis = new WCheckBox(frame_9);
        cbActSis->setObjectName(QString::fromUtf8("cbActSis"));
        cbActSis->setGeometry(QRect(20, 50, 301, 16));
        cbActSis->setFont(font1);
        cbActSis->setProperty("iconSize", QVariant(QSize(24, 24)));
        cbActAHid = new WCheckBox(frame_9);
        cbActAHid->setObjectName(QString::fromUtf8("cbActAHid"));
        cbActAHid->setGeometry(QRect(20, 70, 237, 16));
        cbActAHid->setFont(font1);
        cbActAHid->setProperty("iconSize", QVariant(QSize(24, 24)));
        cbSelAltVel = new WCheckBox(frame_9);
        cbSelAltVel->setObjectName(QString::fromUtf8("cbSelAltVel"));
        cbSelAltVel->setGeometry(QRect(20, 110, 223, 16));
        cbSelAltVel->setFont(font1);
        cbSelAltVel->setProperty("iconSize", QVariant(QSize(24, 24)));
        lbMin = new QLabel(frame_9);
        lbMin->setObjectName(QString::fromUtf8("lbMin"));
        lbMin->setGeometry(QRect(305, 120, 26, 31));
        lbMin->setFont(font2);
        lbMin->setAlignment(Qt::AlignCenter);
        lhHrs = new QLabel(frame_9);
        lhHrs->setObjectName(QString::fromUtf8("lhHrs"));
        lhHrs->setGeometry(QRect(260, 120, 26, 31));
        lhHrs->setFont(font2);
        lhHrs->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(frame_9);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(289, 120, 12, 31));
        label_5->setFont(font2);
        label_5->setAlignment(Qt::AlignCenter);
        frame_11 = new QFrame(frame);
        frame_11->setObjectName(QString::fromUtf8("frame_11"));
        frame_11->setGeometry(QRect(683, 50, 337, 541));
        frame_11->setStyleSheet(QString::fromUtf8("background-color: none;"));
        frame_11->setFrameShape(QFrame::Box);
        frame_11->setFrameShadow(QFrame::Sunken);
        frame_12 = new QFrame(frame_11);
        frame_12->setObjectName(QString::fromUtf8("frame_12"));
        frame_12->setGeometry(QRect(5, 5, 329, 22));
        frame_12->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        frame_12->setFrameShape(QFrame::Box);
        frame_12->setFrameShadow(QFrame::Raised);
        label_13 = new QLabel(frame_12);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(7, 7, 270, 9));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        label_13->setFont(font3);
        label_13->setAlignment(Qt::AlignCenter);
        lbBack = new QLabel(frame);
        lbBack->setObjectName(QString::fromUtf8("lbBack"));
        lbBack->setGeometry(QRect(0, 0, 1024, 662));
        lbBack->setPixmap(QPixmap(QString::fromUtf8(":/Resources/PNG/A3.png")));
        lbBack->setScaledContents(true);
        lbUnit3 = new QLabel(frame);
        lbUnit3->setObjectName(QString::fromUtf8("lbUnit3"));
        lbUnit3->setGeometry(QRect(834, 647, 190, 15));
        lbUnit3->setFont(font2);
        lbUnit3->setStyleSheet(QString::fromUtf8("background-color: rgb(175, 175, 175);"));
        btnIMPPant = new QPushButton(frame);
        btnIMPPant->setObjectName(QString::fromUtf8("btnIMPPant"));
        btnIMPPant->setGeometry(QRect(14, 637, 134, 23));
        btnIMPPant->setFont(font1);
        btnIMPPant->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        lbBack->raise();
        pushButton_15->raise();
        frame_7->raise();
        frame_9->raise();
        frame_11->raise();
        lbUnit3->raise();
        btnIMPPant->raise();

        retranslateUi(A3);

        QMetaObject::connectSlotsByName(A3);
    } // setupUi

    void retranslateUi(QWidget *A3)
    {
        A3->setWindowTitle(QApplication::translate("A3", "Form", 0, QApplication::UnicodeUTF8));
        pushButton_15->setText(QApplication::translate("A3", "IMP. PANTALLA", 0, QApplication::UnicodeUTF8));
        lbSecT->setText(QApplication::translate("A3", "SECUENCIA DE ARRANQUE", 0, QApplication::UnicodeUTF8));
        lbPasT->setText(QApplication::translate("A3", "PASO DE SECUENCIA", 0, QApplication::UnicodeUTF8));
        lbEdoT->setText(QApplication::translate("A3", "ESTADO", 0, QApplication::UnicodeUTF8));
        cbUniFue->setText(QApplication::translate("A3", "UNIDAD FUERA DE OPERACI\303\223N", 0, QApplication::UnicodeUTF8));
        cbPurga->setText(QApplication::translate("A3", "PURGA DE CARCAZA ACTIVA", 0, QApplication::UnicodeUTF8));
        cbVrif->setText(QApplication::translate("A3", "VERIFICAR SISTEMA LUBRICACION GENERADOR", 0, QApplication::UnicodeUTF8));
        cbActAHidr->setText(QApplication::translate("A3", "ACTIVAR ARRANQUE HIDR\303\201ULICO", 0, QApplication::UnicodeUTF8));
        cbSelAltArr->setText(QApplication::translate("A3", "SELEC ALTA VELOCIDAD EN ARRANCADOR", 0, QApplication::UnicodeUTF8));
        cbActCron->setText(QApplication::translate("A3", "ACTIVAR CRONO PURGA TURBINA", 0, QApplication::UnicodeUTF8));
        cbActALue->setText(QApplication::translate("A3", "ACTIVAR ARRANCADOR LUEGO ENCENDEDORES", 0, QApplication::UnicodeUTF8));
        cbLuzApg->setText(QApplication::translate("A3", "LUZ APAG DETEC ACEL CORTE D/ARRANCADOR", 0, QApplication::UnicodeUTF8));
        cbVelMax->setText(QApplication::translate("A3", "VELOCIDAD M\303\201XIMA SIN CARGA", 0, QApplication::UnicodeUTF8));
        cbAcel->setText(QApplication::translate("A3", "ACELERAR A SINC RELENTI", 0, QApplication::UnicodeUTF8));
        cbInicCro->setText(QApplication::translate("A3", "INICIAR CRONO DE CALENTAMIENTO", 0, QApplication::UnicodeUTF8));
        cbEsp->setText(QApplication::translate("A3", "ESPERA CONTROL N25 Y NSD GT 1200 RPM", 0, QApplication::UnicodeUTF8));
        cbList->setText(QApplication::translate("A3", "LISTO PARA CERRAR INTERRUPTOR", 0, QApplication::UnicodeUTF8));
        cbUniLin->setText(QApplication::translate("A3", "UNIDAD EN L\303\215NEA", 0, QApplication::UnicodeUTF8));
        lbPurgaEdo->setText(QApplication::translate("A3", "0", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("A3", ":", 0, QApplication::UnicodeUTF8));
        lbInicCroHrs->setText(QApplication::translate("A3", "60", 0, QApplication::UnicodeUTF8));
        lbInicCroMin->setText(QApplication::translate("A3", "60", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("A3", ":", 0, QApplication::UnicodeUTF8));
        lbActCronMin->setText(QApplication::translate("A3", "60", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("A3", ":", 0, QApplication::UnicodeUTF8));
        lbActCronHrs->setText(QApplication::translate("A3", "60", 0, QApplication::UnicodeUTF8));
        lbRotT->setText(QApplication::translate("A3", "ROTACION DE ALTA VELOCIDAD", 0, QApplication::UnicodeUTF8));
        lbPasT_2->setText(QApplication::translate("A3", "PASO DE SECUENCIA", 0, QApplication::UnicodeUTF8));
        lbEdoT_2->setText(QApplication::translate("A3", "ESTADO", 0, QApplication::UnicodeUTF8));
        cbActBom->setText(QApplication::translate("A3", "ACTIVAR BOMBA ALJIBE ACEITE", 0, QApplication::UnicodeUTF8));
        cbActSis->setText(QApplication::translate("A3", "ACTIVAR SISTEMA LUBRICACI\303\223N GENERADOR", 0, QApplication::UnicodeUTF8));
        cbActAHid->setText(QApplication::translate("A3", "ACTIVAR ARRANQUE HIDR\303\201ULICO", 0, QApplication::UnicodeUTF8));
        cbSelAltVel->setText(QApplication::translate("A3", "SELECCIONAR ALTA VELOCIDAD", 0, QApplication::UnicodeUTF8));
        lbMin->setText(QApplication::translate("A3", "60", 0, QApplication::UnicodeUTF8));
        lhHrs->setText(QApplication::translate("A3", "60", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("A3", ":", 0, QApplication::UnicodeUTF8));
        label_13->setText(QString());
        lbBack->setText(QString());
        lbUnit3->setText(QApplication::translate("A3", "    UNIT3", 0, QApplication::UnicodeUTF8));
        btnIMPPant->setText(QApplication::translate("A3", "IMP PANT", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class A3: public Ui_A3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_A3_H
