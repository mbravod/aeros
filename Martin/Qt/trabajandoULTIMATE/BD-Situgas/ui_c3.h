/********************************************************************************
** Form generated from reading UI file 'c3.ui'
**
** Created: Mon 2. Dec 16:27:59 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_C3_H
#define UI_C3_H

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
#include "qwt_scale_widget.h"
#include "wlabel.h"

QT_BEGIN_NAMESPACE

class Ui_C3
{
public:
    QLabel *label;
    QPushButton *btnIMPPant;
    WLabel *lbUnit3;
    QFrame *frTitulo_9;
    WLabel *lbTextoT;
    QFrame *frAux;
    WLabel *lbTexto_T1;
    WLabel *lbTexto_1;
    WLabel *lbTexto_U1;
    WLabel *lbTexto_U2;
    WLabel *lbTexto_T;
    WLabel *lbTexto_2;
    WLabel *lbTexto_T_2;
    WLabel *lbTexto_U2_2;
    WLabel *lbTexto_3;
    WLabel *lbTexto_T_3;
    WLabel *lbTexto_4;
    WLabel *lbTexto_U2_3;
    QFrame *frAux_2;
    WLabel *lbTexto_T_4;
    WLabel *lbTexto_U2_4;
    WLabel *lbTexto_5;
    WLabel *lbTexto_T_5;
    WLabel *lbTexto_U2_5;
    WLabel *lbTexto_6;
    WLabel *lbTexto_U2_6;
    WLabel *lbTexto_T_6;
    WLabel *lbTexto_7;
    QFrame *frAux_3;
    QFrame *frAux_4;
    WLabel *lbVal;
    QFrame *frAux_5;
    WLabel *lbVal_2;
    QFrame *frAux_6;
    WLabel *lbVal_3;
    QFrame *frAux_7;
    WLabel *lbVal_4;
    QFrame *frAux_8;
    WLabel *lbVal_5;
    QFrame *frAux_9;
    WLabel *lbVal_6;
    QFrame *frAux_10;
    WLabel *lbVal_7;
    WLabel *lbVal_U;
    WLabel *lbVal_U_2;
    WLabel *lbVal_U_3;
    WLabel *lbVal_U_4;
    WLabel *lbVal_U_5;
    WLabel *lbVal_U_6;
    WLabel *lbVal_U_7;
    WLabel *lbValTexto;
    WLabel *lbValTexto_2;
    WLabel *lbValTexto_3;
    WLabel *lbValTexto_4;
    WLabel *lbValTexto_5;
    WLabel *lbValTexto_6;
    WLabel *lbValTexto_7;
    QProgressBar *pgbar;
    QProgressBar *pgbar_2;
    QProgressBar *pgbar_3;
    QProgressBar *pgbar_4;
    QProgressBar *pgbar_5;
    QProgressBar *pgbar_6;
    QProgressBar *pgbar_7;
    WLabel *lbUniGrafica;
    WLabel *lbVal_8;
    WLabel *lbVal_9;
    WLabel *lbVal_10;
    WLabel *lbVal_11;
    WLabel *lbVal_12;
    WLabel *lbVal_13;
    WLabel *lbVal_14;
    WLabel *lbVal_15;
    WLabel *lbVal_16;
    WLabel *lbVal_17;
    WLabel *lbVal_18;
    QwtScaleWidget *ScaleWidget;
    QLabel *label_2;

    void setupUi(QWidget *C3)
    {
        if (C3->objectName().isEmpty())
            C3->setObjectName(QString::fromUtf8("C3"));
        C3->resize(1024, 662);
        C3->setMinimumSize(QSize(1024, 662));
        C3->setMaximumSize(QSize(1024, 662));
        C3->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        label = new QLabel(C3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 1024, 662));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Resources/PNG/BackGround.png")));
        label->setScaledContents(true);
        btnIMPPant = new QPushButton(C3);
        btnIMPPant->setObjectName(QString::fromUtf8("btnIMPPant"));
        btnIMPPant->setGeometry(QRect(3, 632, 134, 23));
        QFont font;
        font.setPointSize(8);
        font.setBold(true);
        font.setWeight(75);
        btnIMPPant->setFont(font);
        btnIMPPant->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        lbUnit3 = new WLabel(C3);
        lbUnit3->setObjectName(QString::fromUtf8("lbUnit3"));
        lbUnit3->setGeometry(QRect(835, 649, 190, 15));
        lbUnit3->setStyleSheet(QString::fromUtf8("background-color: rgb(175, 175, 175);"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        lbUnit3->setFont(font1);
        frTitulo_9 = new QFrame(C3);
        frTitulo_9->setObjectName(QString::fromUtf8("frTitulo_9"));
        frTitulo_9->setGeometry(QRect(298, 56, 535, 25));
        frTitulo_9->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        frTitulo_9->setFrameShape(QFrame::WinPanel);
        frTitulo_9->setFrameShadow(QFrame::Raised);
        frTitulo_9->setLineWidth(2);
        frTitulo_9->setMidLineWidth(0);
        lbTextoT = new WLabel(frTitulo_9);
        lbTextoT->setObjectName(QString::fromUtf8("lbTextoT"));
        lbTextoT->setGeometry(QRect(100, 5, 371, 16));
        lbTextoT->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(0 ,0, 0);"));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        lbTextoT->setFont(font2);
        frAux = new QFrame(C3);
        frAux->setObjectName(QString::fromUtf8("frAux"));
        frAux->setGeometry(QRect(295, 55, 265, 154));
        frAux->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(190, 190, 190);\n"
"border-top-color: rgb(213, 213, 213);"));
        frAux->setFrameShape(QFrame::Box);
        frAux->setFrameShadow(QFrame::Plain);
        frAux->setLineWidth(1);
        lbTexto_T1 = new WLabel(frAux);
        lbTexto_T1->setObjectName(QString::fromUtf8("lbTexto_T1"));
        lbTexto_T1->setGeometry(QRect(37, 35, 141, 16));
        lbTexto_T1->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(0 ,0, 0);"));
        QFont font3;
        font3.setPointSize(9);
        font3.setBold(true);
        font3.setWeight(75);
        lbTexto_T1->setFont(font3);
        lbTexto_1 = new WLabel(frAux);
        lbTexto_1->setObjectName(QString::fromUtf8("lbTexto_1"));
        lbTexto_1->setGeometry(QRect(186, 35, 31, 20));
        lbTexto_1->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(0 ,0, 0);"));
        lbTexto_1->setFont(font3);
        lbTexto_U1 = new WLabel(frAux);
        lbTexto_U1->setObjectName(QString::fromUtf8("lbTexto_U1"));
        lbTexto_U1->setGeometry(QRect(229, 35, 31, 20));
        lbTexto_U1->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(0 ,0, 0);"));
        lbTexto_U1->setFont(font3);
        lbTexto_U2 = new WLabel(frAux);
        lbTexto_U2->setObjectName(QString::fromUtf8("lbTexto_U2"));
        lbTexto_U2->setGeometry(QRect(230, 60, 31, 20));
        lbTexto_U2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(0 ,0, 0);"));
        lbTexto_U2->setFont(font3);
        lbTexto_T = new WLabel(frAux);
        lbTexto_T->setObjectName(QString::fromUtf8("lbTexto_T"));
        lbTexto_T->setGeometry(QRect(38, 60, 141, 16));
        lbTexto_T->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(0 ,0, 0);"));
        lbTexto_T->setFont(font3);
        lbTexto_2 = new WLabel(frAux);
        lbTexto_2->setObjectName(QString::fromUtf8("lbTexto_2"));
        lbTexto_2->setGeometry(QRect(187, 60, 31, 20));
        lbTexto_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(0 ,0, 0);"));
        lbTexto_2->setFont(font3);
        lbTexto_T_2 = new WLabel(frAux);
        lbTexto_T_2->setObjectName(QString::fromUtf8("lbTexto_T_2"));
        lbTexto_T_2->setGeometry(QRect(40, 85, 141, 16));
        lbTexto_T_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(0 ,0, 0);"));
        lbTexto_T_2->setFont(font3);
        lbTexto_U2_2 = new WLabel(frAux);
        lbTexto_U2_2->setObjectName(QString::fromUtf8("lbTexto_U2_2"));
        lbTexto_U2_2->setGeometry(QRect(232, 82, 31, 20));
        lbTexto_U2_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(0 ,0, 0);"));
        lbTexto_U2_2->setFont(font3);
        lbTexto_3 = new WLabel(frAux);
        lbTexto_3->setObjectName(QString::fromUtf8("lbTexto_3"));
        lbTexto_3->setGeometry(QRect(189, 82, 31, 20));
        lbTexto_3->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(0 ,0, 0);"));
        lbTexto_3->setFont(font3);
        lbTexto_T_3 = new WLabel(frAux);
        lbTexto_T_3->setObjectName(QString::fromUtf8("lbTexto_T_3"));
        lbTexto_T_3->setGeometry(QRect(40, 110, 141, 16));
        lbTexto_T_3->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(0 ,0, 0);"));
        lbTexto_T_3->setFont(font3);
        lbTexto_4 = new WLabel(frAux);
        lbTexto_4->setObjectName(QString::fromUtf8("lbTexto_4"));
        lbTexto_4->setGeometry(QRect(189, 105, 31, 20));
        lbTexto_4->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(0 ,0, 0);"));
        lbTexto_4->setFont(font3);
        lbTexto_U2_3 = new WLabel(frAux);
        lbTexto_U2_3->setObjectName(QString::fromUtf8("lbTexto_U2_3"));
        lbTexto_U2_3->setGeometry(QRect(232, 105, 31, 20));
        lbTexto_U2_3->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(0 ,0, 0);"));
        lbTexto_U2_3->setFont(font3);
        frAux_2 = new QFrame(C3);
        frAux_2->setObjectName(QString::fromUtf8("frAux_2"));
        frAux_2->setGeometry(QRect(560, 55, 275, 154));
        frAux_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(190, 190, 190);\n"
"border-top-color: rgb(213, 213, 213);"));
        frAux_2->setFrameShape(QFrame::Box);
        frAux_2->setFrameShadow(QFrame::Plain);
        frAux_2->setLineWidth(1);
        lbTexto_T_4 = new WLabel(frAux_2);
        lbTexto_T_4->setObjectName(QString::fromUtf8("lbTexto_T_4"));
        lbTexto_T_4->setGeometry(QRect(10, 35, 141, 16));
        lbTexto_T_4->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(0 ,0, 0);"));
        lbTexto_T_4->setFont(font3);
        lbTexto_U2_4 = new WLabel(frAux_2);
        lbTexto_U2_4->setObjectName(QString::fromUtf8("lbTexto_U2_4"));
        lbTexto_U2_4->setGeometry(QRect(200, 32, 31, 20));
        lbTexto_U2_4->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(0 ,0, 0);"));
        lbTexto_U2_4->setFont(font3);
        lbTexto_5 = new WLabel(frAux_2);
        lbTexto_5->setObjectName(QString::fromUtf8("lbTexto_5"));
        lbTexto_5->setGeometry(QRect(160, 34, 31, 20));
        lbTexto_5->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(0 ,0, 0);"));
        lbTexto_5->setFont(font3);
        lbTexto_T_5 = new WLabel(frAux_2);
        lbTexto_T_5->setObjectName(QString::fromUtf8("lbTexto_T_5"));
        lbTexto_T_5->setGeometry(QRect(10, 60, 141, 16));
        lbTexto_T_5->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(0 ,0, 0);"));
        lbTexto_T_5->setFont(font3);
        lbTexto_U2_5 = new WLabel(frAux_2);
        lbTexto_U2_5->setObjectName(QString::fromUtf8("lbTexto_U2_5"));
        lbTexto_U2_5->setGeometry(QRect(200, 59, 31, 20));
        lbTexto_U2_5->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(0 ,0, 0);"));
        lbTexto_U2_5->setFont(font3);
        lbTexto_6 = new WLabel(frAux_2);
        lbTexto_6->setObjectName(QString::fromUtf8("lbTexto_6"));
        lbTexto_6->setGeometry(QRect(160, 59, 31, 20));
        lbTexto_6->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(0 ,0, 0);"));
        lbTexto_6->setFont(font3);
        lbTexto_U2_6 = new WLabel(frAux_2);
        lbTexto_U2_6->setObjectName(QString::fromUtf8("lbTexto_U2_6"));
        lbTexto_U2_6->setGeometry(QRect(200, 107, 31, 20));
        lbTexto_U2_6->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(0 ,0, 0);"));
        lbTexto_U2_6->setFont(font3);
        lbTexto_T_6 = new WLabel(frAux_2);
        lbTexto_T_6->setObjectName(QString::fromUtf8("lbTexto_T_6"));
        lbTexto_T_6->setGeometry(QRect(10, 108, 141, 16));
        lbTexto_T_6->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(0 ,0, 0);"));
        lbTexto_T_6->setFont(font3);
        lbTexto_7 = new WLabel(frAux_2);
        lbTexto_7->setObjectName(QString::fromUtf8("lbTexto_7"));
        lbTexto_7->setGeometry(QRect(158, 107, 31, 20));
        lbTexto_7->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(0 ,0, 0);"));
        lbTexto_7->setFont(font3);
        frAux_3 = new QFrame(C3);
        frAux_3->setObjectName(QString::fromUtf8("frAux_3"));
        frAux_3->setGeometry(QRect(224, 208, 671, 440));
        frAux_3->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(190, 190, 190);\n"
"border-top-color: rgb(213, 213, 213);"));
        frAux_3->setFrameShape(QFrame::Box);
        frAux_3->setFrameShadow(QFrame::Plain);
        frAux_3->setLineWidth(1);
        frAux_4 = new QFrame(frAux_3);
        frAux_4->setObjectName(QString::fromUtf8("frAux_4"));
        frAux_4->setGeometry(QRect(5, 405, 55, 26));
        frAux_4->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        frAux_4->setFrameShape(QFrame::WinPanel);
        frAux_4->setFrameShadow(QFrame::Sunken);
        lbVal = new WLabel(frAux_4);
        lbVal->setObjectName(QString::fromUtf8("lbVal"));
        lbVal->setGeometry(QRect(0, 3, 41, 20));
        lbVal->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbVal->setFont(font3);
        lbVal->setProperty("Alineacion", QVariant(WLabel::Centro));
        frAux_5 = new QFrame(frAux_3);
        frAux_5->setObjectName(QString::fromUtf8("frAux_5"));
        frAux_5->setGeometry(QRect(95, 405, 55, 25));
        frAux_5->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        frAux_5->setFrameShape(QFrame::WinPanel);
        frAux_5->setFrameShadow(QFrame::Sunken);
        lbVal_2 = new WLabel(frAux_5);
        lbVal_2->setObjectName(QString::fromUtf8("lbVal_2"));
        lbVal_2->setGeometry(QRect(0, 3, 41, 20));
        lbVal_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbVal_2->setFont(font3);
        lbVal_2->setProperty("Alineacion", QVariant(WLabel::Centro));
        frAux_6 = new QFrame(frAux_3);
        frAux_6->setObjectName(QString::fromUtf8("frAux_6"));
        frAux_6->setGeometry(QRect(185, 405, 55, 25));
        frAux_6->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        frAux_6->setFrameShape(QFrame::WinPanel);
        frAux_6->setFrameShadow(QFrame::Sunken);
        lbVal_3 = new WLabel(frAux_6);
        lbVal_3->setObjectName(QString::fromUtf8("lbVal_3"));
        lbVal_3->setGeometry(QRect(0, 3, 41, 20));
        lbVal_3->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbVal_3->setFont(font3);
        lbVal_3->setProperty("Alineacion", QVariant(WLabel::Centro));
        frAux_7 = new QFrame(frAux_3);
        frAux_7->setObjectName(QString::fromUtf8("frAux_7"));
        frAux_7->setGeometry(QRect(275, 405, 55, 25));
        frAux_7->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        frAux_7->setFrameShape(QFrame::WinPanel);
        frAux_7->setFrameShadow(QFrame::Sunken);
        lbVal_4 = new WLabel(frAux_7);
        lbVal_4->setObjectName(QString::fromUtf8("lbVal_4"));
        lbVal_4->setGeometry(QRect(0, 3, 41, 20));
        lbVal_4->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbVal_4->setFont(font3);
        lbVal_4->setProperty("Alineacion", QVariant(WLabel::Centro));
        frAux_8 = new QFrame(frAux_3);
        frAux_8->setObjectName(QString::fromUtf8("frAux_8"));
        frAux_8->setGeometry(QRect(365, 405, 55, 25));
        frAux_8->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        frAux_8->setFrameShape(QFrame::WinPanel);
        frAux_8->setFrameShadow(QFrame::Sunken);
        lbVal_5 = new WLabel(frAux_8);
        lbVal_5->setObjectName(QString::fromUtf8("lbVal_5"));
        lbVal_5->setGeometry(QRect(0, 3, 41, 20));
        lbVal_5->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbVal_5->setFont(font3);
        lbVal_5->setProperty("Alineacion", QVariant(WLabel::Centro));
        frAux_9 = new QFrame(frAux_3);
        frAux_9->setObjectName(QString::fromUtf8("frAux_9"));
        frAux_9->setGeometry(QRect(457, 405, 55, 25));
        frAux_9->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        frAux_9->setFrameShape(QFrame::WinPanel);
        frAux_9->setFrameShadow(QFrame::Sunken);
        lbVal_6 = new WLabel(frAux_9);
        lbVal_6->setObjectName(QString::fromUtf8("lbVal_6"));
        lbVal_6->setGeometry(QRect(0, 3, 41, 20));
        lbVal_6->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbVal_6->setFont(font3);
        lbVal_6->setProperty("Alineacion", QVariant(WLabel::Centro));
        frAux_10 = new QFrame(frAux_3);
        frAux_10->setObjectName(QString::fromUtf8("frAux_10"));
        frAux_10->setGeometry(QRect(575, 405, 55, 25));
        frAux_10->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        frAux_10->setFrameShape(QFrame::WinPanel);
        frAux_10->setFrameShadow(QFrame::Sunken);
        lbVal_7 = new WLabel(frAux_10);
        lbVal_7->setObjectName(QString::fromUtf8("lbVal_7"));
        lbVal_7->setGeometry(QRect(0, 3, 41, 20));
        lbVal_7->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbVal_7->setFont(font3);
        lbVal_7->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbVal_U = new WLabel(frAux_3);
        lbVal_U->setObjectName(QString::fromUtf8("lbVal_U"));
        lbVal_U->setGeometry(QRect(60, 410, 41, 20));
        lbVal_U->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbVal_U->setFont(font3);
        lbVal_U_2 = new WLabel(frAux_3);
        lbVal_U_2->setObjectName(QString::fromUtf8("lbVal_U_2"));
        lbVal_U_2->setGeometry(QRect(152, 410, 41, 20));
        lbVal_U_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbVal_U_2->setFont(font3);
        lbVal_U_3 = new WLabel(frAux_3);
        lbVal_U_3->setObjectName(QString::fromUtf8("lbVal_U_3"));
        lbVal_U_3->setGeometry(QRect(243, 410, 41, 20));
        lbVal_U_3->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbVal_U_3->setFont(font3);
        lbVal_U_4 = new WLabel(frAux_3);
        lbVal_U_4->setObjectName(QString::fromUtf8("lbVal_U_4"));
        lbVal_U_4->setGeometry(QRect(333, 410, 41, 20));
        lbVal_U_4->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbVal_U_4->setFont(font3);
        lbVal_U_5 = new WLabel(frAux_3);
        lbVal_U_5->setObjectName(QString::fromUtf8("lbVal_U_5"));
        lbVal_U_5->setGeometry(QRect(423, 410, 41, 20));
        lbVal_U_5->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbVal_U_5->setFont(font3);
        lbVal_U_6 = new WLabel(frAux_3);
        lbVal_U_6->setObjectName(QString::fromUtf8("lbVal_U_6"));
        lbVal_U_6->setGeometry(QRect(515, 410, 41, 20));
        lbVal_U_6->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbVal_U_6->setFont(font3);
        lbVal_U_7 = new WLabel(frAux_3);
        lbVal_U_7->setObjectName(QString::fromUtf8("lbVal_U_7"));
        lbVal_U_7->setGeometry(QRect(633, 410, 41, 20));
        lbVal_U_7->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbVal_U_7->setFont(font3);
        lbValTexto = new WLabel(frAux_3);
        lbValTexto->setObjectName(QString::fromUtf8("lbValTexto"));
        lbValTexto->setGeometry(QRect(27, 383, 41, 20));
        lbValTexto->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        QFont font4;
        font4.setPointSize(11);
        font4.setBold(true);
        font4.setWeight(75);
        lbValTexto->setFont(font4);
        lbValTexto_2 = new WLabel(frAux_3);
        lbValTexto_2->setObjectName(QString::fromUtf8("lbValTexto_2"));
        lbValTexto_2->setGeometry(QRect(118, 383, 41, 20));
        lbValTexto_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbValTexto_2->setFont(font4);
        lbValTexto_3 = new WLabel(frAux_3);
        lbValTexto_3->setObjectName(QString::fromUtf8("lbValTexto_3"));
        lbValTexto_3->setGeometry(QRect(208, 383, 41, 20));
        lbValTexto_3->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbValTexto_3->setFont(font4);
        lbValTexto_4 = new WLabel(frAux_3);
        lbValTexto_4->setObjectName(QString::fromUtf8("lbValTexto_4"));
        lbValTexto_4->setGeometry(QRect(297, 383, 41, 20));
        lbValTexto_4->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbValTexto_4->setFont(font4);
        lbValTexto_5 = new WLabel(frAux_3);
        lbValTexto_5->setObjectName(QString::fromUtf8("lbValTexto_5"));
        lbValTexto_5->setGeometry(QRect(385, 383, 41, 20));
        lbValTexto_5->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbValTexto_5->setFont(font4);
        lbValTexto_6 = new WLabel(frAux_3);
        lbValTexto_6->setObjectName(QString::fromUtf8("lbValTexto_6"));
        lbValTexto_6->setGeometry(QRect(475, 383, 41, 20));
        lbValTexto_6->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbValTexto_6->setFont(font4);
        lbValTexto_7 = new WLabel(frAux_3);
        lbValTexto_7->setObjectName(QString::fromUtf8("lbValTexto_7"));
        lbValTexto_7->setGeometry(QRect(593, 383, 41, 20));
        lbValTexto_7->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbValTexto_7->setFont(font4);
        pgbar = new QProgressBar(frAux_3);
        pgbar->setObjectName(QString::fromUtf8("pgbar"));
        pgbar->setGeometry(QRect(29, 6, 22, 365));
        pgbar->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
" border: 1px solid black;\n"
" text-align: top;\n"
" padding: 0px;\n"
" border-bottom-right-radius: 3px;\n"
" border-bottom-left-radius: 3px;\n"
" background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0,\n"
" stop: 0 #fff,\n"
" stop: 0.4999 #eee,\n"
" stop: 0.5 #ddd,\n"
" stop: 1 #eee );\n"
" }\n"
"\n"
"QProgressBar::chunk {\n"
" background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0,\n"
" stop: 0 #ff0000,\n"
" stop: 0.6 #b50000);\n"
" border-bottom-right-radius: 3px;\n"
" border-bottom-left-radius: 3px;\n"
" border: 0px solid black;\n"
" }"));
        pgbar->setValue(24);
        pgbar->setTextVisible(false);
        pgbar->setOrientation(Qt::Vertical);
        pgbar->setInvertedAppearance(false);
        pgbar->setTextDirection(QProgressBar::TopToBottom);
        pgbar_2 = new QProgressBar(frAux_3);
        pgbar_2->setObjectName(QString::fromUtf8("pgbar_2"));
        pgbar_2->setGeometry(QRect(120, 6, 22, 365));
        pgbar_2->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
" border: 1px solid black;\n"
" text-align: top;\n"
" padding: 0px;\n"
" border-bottom-right-radius: 3px;\n"
" border-bottom-left-radius: 3px;\n"
" background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0,\n"
" stop: 0 #fff,\n"
" stop: 0.4999 #eee,\n"
" stop: 0.5 #ddd,\n"
" stop: 1 #eee );\n"
" }\n"
"\n"
"QProgressBar::chunk {\n"
" background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0,\n"
" stop: 0 #ff0000,\n"
" stop: 0.6 #b50000);\n"
" border-bottom-right-radius: 3px;\n"
" border-bottom-left-radius: 3px;\n"
" border: 0px solid black;\n"
" }"));
        pgbar_2->setValue(24);
        pgbar_2->setTextVisible(false);
        pgbar_2->setOrientation(Qt::Vertical);
        pgbar_2->setInvertedAppearance(false);
        pgbar_2->setTextDirection(QProgressBar::TopToBottom);
        pgbar_3 = new QProgressBar(frAux_3);
        pgbar_3->setObjectName(QString::fromUtf8("pgbar_3"));
        pgbar_3->setGeometry(QRect(210, 6, 22, 365));
        pgbar_3->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
" border: 1px solid black;\n"
" text-align: top;\n"
" padding: 0px;\n"
" border-bottom-right-radius: 3px;\n"
" border-bottom-left-radius: 3px;\n"
" background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0,\n"
" stop: 0 #fff,\n"
" stop: 0.4999 #eee,\n"
" stop: 0.5 #ddd,\n"
" stop: 1 #eee );\n"
" }\n"
"\n"
"QProgressBar::chunk {\n"
" background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0,\n"
" stop: 0 #ff0000,\n"
" stop: 0.6 #b50000);\n"
" border-bottom-right-radius: 3px;\n"
" border-bottom-left-radius: 3px;\n"
" border: 0px solid black;\n"
" }"));
        pgbar_3->setValue(24);
        pgbar_3->setTextVisible(false);
        pgbar_3->setOrientation(Qt::Vertical);
        pgbar_3->setInvertedAppearance(false);
        pgbar_3->setTextDirection(QProgressBar::TopToBottom);
        pgbar_4 = new QProgressBar(frAux_3);
        pgbar_4->setObjectName(QString::fromUtf8("pgbar_4"));
        pgbar_4->setGeometry(QRect(300, 6, 22, 365));
        pgbar_4->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
" border: 1px solid black;\n"
" text-align: top;\n"
" padding: 0px;\n"
" border-bottom-right-radius: 3px;\n"
" border-bottom-left-radius: 3px;\n"
" background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0,\n"
" stop: 0 #fff,\n"
" stop: 0.4999 #eee,\n"
" stop: 0.5 #ddd,\n"
" stop: 1 #eee );\n"
" }\n"
"\n"
"QProgressBar::chunk {\n"
" background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0,\n"
" stop: 0 #ff0000,\n"
" stop: 0.6 #b50000);\n"
" border-bottom-right-radius: 3px;\n"
" border-bottom-left-radius: 3px;\n"
" border: 0px solid black;\n"
" }"));
        pgbar_4->setValue(24);
        pgbar_4->setTextVisible(false);
        pgbar_4->setOrientation(Qt::Vertical);
        pgbar_4->setInvertedAppearance(false);
        pgbar_4->setTextDirection(QProgressBar::TopToBottom);
        pgbar_5 = new QProgressBar(frAux_3);
        pgbar_5->setObjectName(QString::fromUtf8("pgbar_5"));
        pgbar_5->setGeometry(QRect(390, 6, 22, 365));
        pgbar_5->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
" border: 1px solid black;\n"
" text-align: top;\n"
" padding: 0px;\n"
" border-bottom-right-radius: 3px;\n"
" border-bottom-left-radius: 3px;\n"
" background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0,\n"
" stop: 0 #fff,\n"
" stop: 0.4999 #eee,\n"
" stop: 0.5 #ddd,\n"
" stop: 1 #eee );\n"
" }\n"
"\n"
"QProgressBar::chunk {\n"
" background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0,\n"
" stop: 0 #ff0000,\n"
" stop: 0.6 #b50000);\n"
" border-bottom-right-radius: 3px;\n"
" border-bottom-left-radius: 3px;\n"
" border: 0px solid black;\n"
" }"));
        pgbar_5->setValue(24);
        pgbar_5->setTextVisible(false);
        pgbar_5->setOrientation(Qt::Vertical);
        pgbar_5->setInvertedAppearance(false);
        pgbar_5->setTextDirection(QProgressBar::TopToBottom);
        pgbar_6 = new QProgressBar(frAux_3);
        pgbar_6->setObjectName(QString::fromUtf8("pgbar_6"));
        pgbar_6->setGeometry(QRect(480, 6, 22, 365));
        pgbar_6->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
" border: 1px solid black;\n"
" text-align: top;\n"
" padding: 0px;\n"
" border-bottom-right-radius: 3px;\n"
" border-bottom-left-radius: 3px;\n"
" background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0,\n"
" stop: 0 #fff,\n"
" stop: 0.4999 #eee,\n"
" stop: 0.5 #ddd,\n"
" stop: 1 #eee );\n"
" }\n"
"\n"
"QProgressBar::chunk {\n"
" background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0,\n"
" stop: 0 #ff0000,\n"
" stop: 0.6 #b50000);\n"
" border-bottom-right-radius: 3px;\n"
" border-bottom-left-radius: 3px;\n"
" border: 0px solid black;\n"
" }"));
        pgbar_6->setValue(24);
        pgbar_6->setTextVisible(false);
        pgbar_6->setOrientation(Qt::Vertical);
        pgbar_6->setInvertedAppearance(false);
        pgbar_6->setTextDirection(QProgressBar::TopToBottom);
        pgbar_7 = new QProgressBar(frAux_3);
        pgbar_7->setObjectName(QString::fromUtf8("pgbar_7"));
        pgbar_7->setGeometry(QRect(598, 6, 22, 365));
        pgbar_7->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
" border: 1px solid black;\n"
" text-align: top;\n"
" padding: 0px;\n"
" border-bottom-right-radius: 3px;\n"
" border-bottom-left-radius: 3px;\n"
" background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0,\n"
" stop: 0 #fff,\n"
" stop: 0.4999 #eee,\n"
" stop: 0.5 #ddd,\n"
" stop: 1 #eee );\n"
" }\n"
"\n"
"QProgressBar::chunk {\n"
" background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0,\n"
" stop: 0 #ff0000,\n"
" stop: 0.6 #b50000);\n"
" border-bottom-right-radius: 3px;\n"
" border-bottom-left-radius: 3px;\n"
" border: 0px solid black;\n"
" }"));
        pgbar_7->setValue(24);
        pgbar_7->setTextVisible(false);
        pgbar_7->setOrientation(Qt::Vertical);
        pgbar_7->setInvertedAppearance(false);
        pgbar_7->setTextDirection(QProgressBar::TopToBottom);
        lbUniGrafica = new WLabel(C3);
        lbUniGrafica->setObjectName(QString::fromUtf8("lbUniGrafica"));
        lbUniGrafica->setGeometry(QRect(118, 385, 41, 20));
        lbUniGrafica->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbUniGrafica->setFont(font3);
        lbVal_8 = new WLabel(C3);
        lbVal_8->setObjectName(QString::fromUtf8("lbVal_8"));
        lbVal_8->setGeometry(QRect(155, 205, 41, 20));
        lbVal_8->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbVal_8->setFont(font3);
        lbVal_8->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbVal_9 = new WLabel(C3);
        lbVal_9->setObjectName(QString::fromUtf8("lbVal_9"));
        lbVal_9->setGeometry(QRect(155, 243, 41, 20));
        lbVal_9->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbVal_9->setFont(font3);
        lbVal_9->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbVal_10 = new WLabel(C3);
        lbVal_10->setObjectName(QString::fromUtf8("lbVal_10"));
        lbVal_10->setGeometry(QRect(155, 280, 41, 20));
        lbVal_10->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbVal_10->setFont(font3);
        lbVal_10->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbVal_11 = new WLabel(C3);
        lbVal_11->setObjectName(QString::fromUtf8("lbVal_11"));
        lbVal_11->setGeometry(QRect(155, 315, 41, 20));
        lbVal_11->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbVal_11->setFont(font3);
        lbVal_11->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbVal_12 = new WLabel(C3);
        lbVal_12->setObjectName(QString::fromUtf8("lbVal_12"));
        lbVal_12->setGeometry(QRect(155, 350, 41, 20));
        lbVal_12->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbVal_12->setFont(font3);
        lbVal_12->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbVal_13 = new WLabel(C3);
        lbVal_13->setObjectName(QString::fromUtf8("lbVal_13"));
        lbVal_13->setGeometry(QRect(155, 387, 41, 20));
        lbVal_13->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbVal_13->setFont(font3);
        lbVal_13->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbVal_14 = new WLabel(C3);
        lbVal_14->setObjectName(QString::fromUtf8("lbVal_14"));
        lbVal_14->setGeometry(QRect(155, 425, 41, 20));
        lbVal_14->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbVal_14->setFont(font3);
        lbVal_14->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbVal_15 = new WLabel(C3);
        lbVal_15->setObjectName(QString::fromUtf8("lbVal_15"));
        lbVal_15->setGeometry(QRect(155, 460, 41, 20));
        lbVal_15->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbVal_15->setFont(font3);
        lbVal_15->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbVal_16 = new WLabel(C3);
        lbVal_16->setObjectName(QString::fromUtf8("lbVal_16"));
        lbVal_16->setGeometry(QRect(155, 495, 41, 20));
        lbVal_16->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbVal_16->setFont(font3);
        lbVal_16->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbVal_17 = new WLabel(C3);
        lbVal_17->setObjectName(QString::fromUtf8("lbVal_17"));
        lbVal_17->setGeometry(QRect(150, 533, 41, 20));
        lbVal_17->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbVal_17->setFont(font3);
        lbVal_17->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbVal_18 = new WLabel(C3);
        lbVal_18->setObjectName(QString::fromUtf8("lbVal_18"));
        lbVal_18->setGeometry(QRect(148, 570, 41, 20));
        lbVal_18->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbVal_18->setFont(font3);
        lbVal_18->setProperty("Alineacion", QVariant(WLabel::Derecha));
        ScaleWidget = new QwtScaleWidget(C3);
        ScaleWidget->setObjectName(QString::fromUtf8("ScaleWidget"));
        ScaleWidget->setGeometry(QRect(160, 210, 60, 381));
        label_2 = new QLabel(C3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(186, 200, 21, 391));
        label->raise();
        ScaleWidget->raise();
        label_2->raise();
        btnIMPPant->raise();
        lbUnit3->raise();
        frAux->raise();
        frAux_2->raise();
        frTitulo_9->raise();
        frAux_3->raise();
        lbUniGrafica->raise();
        lbVal_8->raise();
        lbVal_9->raise();
        lbVal_10->raise();
        lbVal_11->raise();
        lbVal_12->raise();
        lbVal_13->raise();
        lbVal_14->raise();
        lbVal_15->raise();
        lbVal_16->raise();
        lbVal_17->raise();
        lbVal_18->raise();

        retranslateUi(C3);

        QMetaObject::connectSlotsByName(C3);
    } // setupUi

    void retranslateUi(QWidget *C3)
    {
        C3->setWindowTitle(QApplication::translate("C3", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        btnIMPPant->setText(QApplication::translate("C3", "IMP PANT", 0, QApplication::UnicodeUTF8));
        lbUnit3->setText(QApplication::translate("C3", "    UNIT3", 0, QApplication::UnicodeUTF8));
        lbTextoT->setText(QApplication::translate("C3", "TEMPERATURAS BOBINADO ESTATOR DEL GENERADOR", 0, QApplication::UnicodeUTF8));
        lbTexto_T1->setText(QApplication::translate("C3", "TE-6421 PHASE", 0, QApplication::UnicodeUTF8));
        lbTexto_1->setText(QApplication::translate("C3", "126", 0, QApplication::UnicodeUTF8));
        lbTexto_U1->setText(QApplication::translate("C3", "\302\272F", 0, QApplication::UnicodeUTF8));
        lbTexto_U2->setText(QApplication::translate("C3", "\302\272F", 0, QApplication::UnicodeUTF8));
        lbTexto_T->setText(QApplication::translate("C3", "TE-6424 PHASE", 0, QApplication::UnicodeUTF8));
        lbTexto_2->setText(QApplication::translate("C3", "126", 0, QApplication::UnicodeUTF8));
        lbTexto_T_2->setText(QApplication::translate("C3", "TE-6422 PHASE", 0, QApplication::UnicodeUTF8));
        lbTexto_U2_2->setText(QApplication::translate("C3", "\302\272F", 0, QApplication::UnicodeUTF8));
        lbTexto_3->setText(QApplication::translate("C3", "126", 0, QApplication::UnicodeUTF8));
        lbTexto_T_3->setText(QApplication::translate("C3", "TE-6425 PHASE", 0, QApplication::UnicodeUTF8));
        lbTexto_4->setText(QApplication::translate("C3", "126", 0, QApplication::UnicodeUTF8));
        lbTexto_U2_3->setText(QApplication::translate("C3", "\302\272F", 0, QApplication::UnicodeUTF8));
        lbTexto_T_4->setText(QApplication::translate("C3", "TE-6423 PHASE", 0, QApplication::UnicodeUTF8));
        lbTexto_U2_4->setText(QApplication::translate("C3", "\302\272F", 0, QApplication::UnicodeUTF8));
        lbTexto_5->setText(QApplication::translate("C3", "126", 0, QApplication::UnicodeUTF8));
        lbTexto_T_5->setText(QApplication::translate("C3", "TE-6426 PHASE", 0, QApplication::UnicodeUTF8));
        lbTexto_U2_5->setText(QApplication::translate("C3", "\302\272F", 0, QApplication::UnicodeUTF8));
        lbTexto_6->setText(QApplication::translate("C3", "126", 0, QApplication::UnicodeUTF8));
        lbTexto_U2_6->setText(QApplication::translate("C3", "\302\272F", 0, QApplication::UnicodeUTF8));
        lbTexto_T_6->setText(QApplication::translate("C3", "PROMEDIO ESTATOR", 0, QApplication::UnicodeUTF8));
        lbTexto_7->setText(QApplication::translate("C3", "126", 0, QApplication::UnicodeUTF8));
        lbVal->setText(QApplication::translate("C3", "126", 0, QApplication::UnicodeUTF8));
        lbVal_2->setText(QApplication::translate("C3", "126", 0, QApplication::UnicodeUTF8));
        lbVal_3->setText(QApplication::translate("C3", "126", 0, QApplication::UnicodeUTF8));
        lbVal_4->setText(QApplication::translate("C3", "126", 0, QApplication::UnicodeUTF8));
        lbVal_5->setText(QApplication::translate("C3", "126", 0, QApplication::UnicodeUTF8));
        lbVal_6->setText(QApplication::translate("C3", "126", 0, QApplication::UnicodeUTF8));
        lbVal_7->setText(QApplication::translate("C3", "126", 0, QApplication::UnicodeUTF8));
        lbVal_U->setText(QApplication::translate("C3", "\302\272F", 0, QApplication::UnicodeUTF8));
        lbVal_U_2->setText(QApplication::translate("C3", "\302\272F", 0, QApplication::UnicodeUTF8));
        lbVal_U_3->setText(QApplication::translate("C3", "\302\272F", 0, QApplication::UnicodeUTF8));
        lbVal_U_4->setText(QApplication::translate("C3", "\302\272F", 0, QApplication::UnicodeUTF8));
        lbVal_U_5->setText(QApplication::translate("C3", "\302\272F", 0, QApplication::UnicodeUTF8));
        lbVal_U_6->setText(QApplication::translate("C3", "\302\272F", 0, QApplication::UnicodeUTF8));
        lbVal_U_7->setText(QApplication::translate("C3", "\302\272F", 0, QApplication::UnicodeUTF8));
        lbValTexto->setText(QApplication::translate("C3", "U 1", 0, QApplication::UnicodeUTF8));
        lbValTexto_2->setText(QApplication::translate("C3", "U 2", 0, QApplication::UnicodeUTF8));
        lbValTexto_3->setText(QApplication::translate("C3", "V 1", 0, QApplication::UnicodeUTF8));
        lbValTexto_4->setText(QApplication::translate("C3", "V 2", 0, QApplication::UnicodeUTF8));
        lbValTexto_5->setText(QApplication::translate("C3", "W 1", 0, QApplication::UnicodeUTF8));
        lbValTexto_6->setText(QApplication::translate("C3", "W 2", 0, QApplication::UnicodeUTF8));
        lbValTexto_7->setText(QApplication::translate("C3", "AVG", 0, QApplication::UnicodeUTF8));
        lbUniGrafica->setText(QApplication::translate("C3", "\302\272F", 0, QApplication::UnicodeUTF8));
        lbVal_8->setText(QApplication::translate("C3", "500", 0, QApplication::UnicodeUTF8));
        lbVal_9->setText(QApplication::translate("C3", "450", 0, QApplication::UnicodeUTF8));
        lbVal_10->setText(QApplication::translate("C3", "400", 0, QApplication::UnicodeUTF8));
        lbVal_11->setText(QApplication::translate("C3", "350", 0, QApplication::UnicodeUTF8));
        lbVal_12->setText(QApplication::translate("C3", "300", 0, QApplication::UnicodeUTF8));
        lbVal_13->setText(QApplication::translate("C3", "250", 0, QApplication::UnicodeUTF8));
        lbVal_14->setText(QApplication::translate("C3", "200", 0, QApplication::UnicodeUTF8));
        lbVal_15->setText(QApplication::translate("C3", "150", 0, QApplication::UnicodeUTF8));
        lbVal_16->setText(QApplication::translate("C3", "100", 0, QApplication::UnicodeUTF8));
        lbVal_17->setText(QApplication::translate("C3", "50", 0, QApplication::UnicodeUTF8));
        lbVal_18->setText(QApplication::translate("C3", "0", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class C3: public Ui_C3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_C3_H
