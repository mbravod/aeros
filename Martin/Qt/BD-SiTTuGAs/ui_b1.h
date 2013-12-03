/********************************************************************************
** Form generated from reading UI file 'b1.ui'
**
** Created: Mon 2. Dec 19:01:08 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_B1_H
#define UI_B1_H

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

class Ui_B1
{
public:
    AInstrumentIndicator *aIndicador_1;
    AWMultiObject *aBomba_1;
    QPushButton *btnIMP;
    WLabel *label;
    QFrame *frTitulo_9;
    WLabel *lbVAL_1;
    WLabel *lbUnidad_2;
    WLabel *lbVAL_3;
    WLabel *lbVAL_5;
    AInstrumentIndicator *aIndicador_2;
    AInstrumentIndicator *aIndicador_3;
    AInstrumentIndicator *aIndicador_6;
    AInstrumentIndicator *aIndicador_8;
    AInstrumentIndicator *aIndicador_11;
    AInstrumentIndicator *aIndicador_12;
    WLabel *lbGenerador;
    AInstrumentIndicator *aIndicador_14;
    AInstrumentIndicator *aIndicador_15;
    AWMultiObject *aWMultiObject;
    WLabel *lbVAL_12;
    WLabel *lbGenerador_2;
    WLabel *lbVAL_13;
    WLabel *lbVAL_14;
    WLabel *lbVAL_15;
    AInstrumentIndicator *aIndicador_4;
    AInstrumentIndicator *aIndicador_5;
    AInstrumentIndicator *aIndicador_7;
    QFrame *frame_9;
    QFrame *frTitulo_10;
    QPushButton *btnVenGEN;
    WLabel *lbGenerador_3;
    WLabel *lbVAL_6;
    WLabel *lbVAL_7;
    WLabel *lbVAL_8;
    WLabel *lbVAL_9;
    WLabel *lbUnidad_4;
    WLabel *lbUnidad_5;
    WLabel *lbUnidad_3;
    WLabel *lbVAL_4;
    WLabel *lbVAL_18;
    AWMultiObject *aVAL_4;
    AWMultiObject *aVAL_3;
    AWMultiObject *aVAL_2;
    WLabel *lbTexto_19;
    WLabel *lbTexto_20;
    WLabel *lbTexto_21;
    QFrame *frame_10;
    WLabel *lbVAL_16;
    QFrame *frame_11;
    WLabel *lbVAL_17;
    WLabel *lbUnit3;
    QProgressBar *progressBar;
    AWMultiObject *aWMultiObject_2;
    AWMultiObject *aWMultiObject_3;
    WLabel *label_9;
    WLabel *label_10;
    WLabel *label_11;
    WLabel *label_12;
    QProgressBar *progressBar_2;
    QLabel *lbIMGFondo;
    AWMultiObject *aBomba_2;

    void setupUi(QWidget *B1)
    {
        if (B1->objectName().isEmpty())
            B1->setObjectName(QString::fromUtf8("B1"));
        B1->resize(1024, 662);
        B1->setMinimumSize(QSize(1024, 662));
        B1->setMaximumSize(QSize(1024, 662));
        B1->setStyleSheet(QString::fromUtf8("background-color: rgb(154, 154, 154);"));
        aIndicador_1 = new AInstrumentIndicator(B1);
        aIndicador_1->setObjectName(QString::fromUtf8("aIndicador_1"));
        aIndicador_1->setGeometry(QRect(183, 30, 65, 65));
        aIndicador_1->setValue(-1);
        aIndicador_1->setOrientation(AWMultEstateWidget::Degree90);
        aIndicador_1->setProperty("Value", QVariant(2));
        aBomba_1 = new AWMultiObject(B1);
        aBomba_1->setObjectName(QString::fromUtf8("aBomba_1"));
        aBomba_1->setGeometry(QRect(163, 355, 101, 101));
        aBomba_1->setElementType(AWMultiObject::BOMBATB);
        aBomba_1->setOnColor(AWMultiObject::Brown);
        aBomba_1->setOffColor(AWMultiObject::Green);
        btnIMP = new QPushButton(B1);
        btnIMP->setObjectName(QString::fromUtf8("btnIMP"));
        btnIMP->setGeometry(QRect(1, 633, 135, 23));
        QFont font;
        font.setPointSize(8);
        font.setBold(true);
        font.setWeight(75);
        btnIMP->setFont(font);
        btnIMP->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        label = new WLabel(B1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(840, 650, 161, 12));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(198, 198, 198);"));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        frTitulo_9 = new QFrame(B1);
        frTitulo_9->setObjectName(QString::fromUtf8("frTitulo_9"));
        frTitulo_9->setGeometry(QRect(835, 649, 189, 15));
        frTitulo_9->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        frTitulo_9->setFrameShape(QFrame::WinPanel);
        frTitulo_9->setFrameShadow(QFrame::Raised);
        frTitulo_9->setLineWidth(2);
        frTitulo_9->setMidLineWidth(0);
        lbVAL_1 = new WLabel(B1);
        lbVAL_1->setObjectName(QString::fromUtf8("lbVAL_1"));
        lbVAL_1->setGeometry(QRect(83, 315, 51, 21));
        lbVAL_1->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        lbVAL_1->setFont(font2);
        lbUnidad_2 = new WLabel(B1);
        lbUnidad_2->setObjectName(QString::fromUtf8("lbUnidad_2"));
        lbUnidad_2->setGeometry(QRect(370, 270, 101, 21));
        lbUnidad_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbUnidad_2->setFont(font2);
        lbVAL_3 = new WLabel(B1);
        lbVAL_3->setObjectName(QString::fromUtf8("lbVAL_3"));
        lbVAL_3->setGeometry(QRect(327, 270, 41, 21));
        lbVAL_3->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbVAL_3->setFont(font2);
        lbVAL_5 = new WLabel(B1);
        lbVAL_5->setObjectName(QString::fromUtf8("lbVAL_5"));
        lbVAL_5->setGeometry(QRect(860, 130, 111, 21));
        lbVAL_5->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(false);
        font3.setWeight(50);
        lbVAL_5->setFont(font3);
        aIndicador_2 = new AInstrumentIndicator(B1);
        aIndicador_2->setObjectName(QString::fromUtf8("aIndicador_2"));
        aIndicador_2->setGeometry(QRect(183, 310, 61, 61));
        aIndicador_2->setValue(-1);
        aIndicador_2->setOrientation(AWMultEstateWidget::Degree90);
        aIndicador_2->setProperty("Value", QVariant(3));
        aIndicador_3 = new AInstrumentIndicator(B1);
        aIndicador_3->setObjectName(QString::fromUtf8("aIndicador_3"));
        aIndicador_3->setGeometry(QRect(50, 320, 61, 61));
        aIndicador_3->setValue(-1);
        aIndicador_3->setOrientation(AWMultEstateWidget::Degree0);
        aIndicador_3->setProperty("Value", QVariant(2));
        aIndicador_6 = new AInstrumentIndicator(B1);
        aIndicador_6->setObjectName(QString::fromUtf8("aIndicador_6"));
        aIndicador_6->setGeometry(QRect(335, 280, 61, 61));
        aIndicador_6->setValue(-1);
        aIndicador_6->setOrientation(AWMultEstateWidget::Degree180);
        aIndicador_6->setProperty("Value", QVariant(2));
        aIndicador_8 = new AInstrumentIndicator(B1);
        aIndicador_8->setObjectName(QString::fromUtf8("aIndicador_8"));
        aIndicador_8->setGeometry(QRect(185, 165, 61, 61));
        aIndicador_8->setValue(-1);
        aIndicador_8->setOrientation(AWMultEstateWidget::Degree270);
        aIndicador_8->setProperty("Value", QVariant(2));
        aIndicador_11 = new AInstrumentIndicator(B1);
        aIndicador_11->setObjectName(QString::fromUtf8("aIndicador_11"));
        aIndicador_11->setGeometry(QRect(715, 207, 61, 61));
        aIndicador_11->setValue(-1);
        aIndicador_11->setOrientation(AWMultEstateWidget::Degree0);
        aIndicador_11->setProperty("Value", QVariant(2));
        aIndicador_12 = new AInstrumentIndicator(B1);
        aIndicador_12->setObjectName(QString::fromUtf8("aIndicador_12"));
        aIndicador_12->setGeometry(QRect(865, 443, 61, 61));
        aIndicador_12->setValue(-1);
        aIndicador_12->setOrientation(AWMultEstateWidget::Degree180);
        aIndicador_12->setProperty("Value", QVariant(2));
        lbGenerador = new WLabel(B1);
        lbGenerador->setObjectName(QString::fromUtf8("lbGenerador"));
        lbGenerador->setGeometry(QRect(330, 330, 141, 16));
        lbGenerador->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Verdana"));
        font4.setPointSize(10);
        font4.setBold(false);
        font4.setWeight(50);
        lbGenerador->setFont(font4);
        aIndicador_14 = new AInstrumentIndicator(B1);
        aIndicador_14->setObjectName(QString::fromUtf8("aIndicador_14"));
        aIndicador_14->setGeometry(QRect(230, 30, 65, 65));
        aIndicador_14->setValue(-1);
        aIndicador_14->setOrientation(AWMultEstateWidget::Degree90);
        aIndicador_14->setProperty("Value", QVariant(2));
        aIndicador_15 = new AInstrumentIndicator(B1);
        aIndicador_15->setObjectName(QString::fromUtf8("aIndicador_15"));
        aIndicador_15->setGeometry(QRect(230, 165, 61, 61));
        aIndicador_15->setValue(-1);
        aIndicador_15->setOrientation(AWMultEstateWidget::Degree270);
        aIndicador_15->setProperty("Value", QVariant(2));
        aWMultiObject = new AWMultiObject(B1);
        aWMultiObject->setObjectName(QString::fromUtf8("aWMultiObject"));
        aWMultiObject->setGeometry(QRect(52, 48, 331, 161));
        aWMultiObject->setElementType(AWMultiObject::INTER);
        aWMultiObject->setOnColor(AWMultiObject::Red);
        aWMultiObject->setOffColor(AWMultiObject::Green);
        lbVAL_12 = new WLabel(B1);
        lbVAL_12->setObjectName(QString::fromUtf8("lbVAL_12"));
        lbVAL_12->setGeometry(QRect(30, 315, 51, 21));
        lbVAL_12->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbVAL_12->setFont(font2);
        lbGenerador_2 = new WLabel(B1);
        lbGenerador_2->setObjectName(QString::fromUtf8("lbGenerador_2"));
        lbGenerador_2->setGeometry(QRect(170, 430, 191, 16));
        lbGenerador_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Verdana"));
        font5.setPointSize(8);
        font5.setBold(false);
        font5.setWeight(50);
        lbGenerador_2->setFont(font5);
        lbVAL_13 = new WLabel(B1);
        lbVAL_13->setObjectName(QString::fromUtf8("lbVAL_13"));
        lbVAL_13->setGeometry(QRect(780, 270, 161, 21));
        lbVAL_13->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbVAL_13->setFont(font3);
        lbVAL_14 = new WLabel(B1);
        lbVAL_14->setObjectName(QString::fromUtf8("lbVAL_14"));
        lbVAL_14->setGeometry(QRect(825, 237, 111, 21));
        lbVAL_14->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbVAL_14->setFont(font3);
        lbVAL_15 = new WLabel(B1);
        lbVAL_15->setObjectName(QString::fromUtf8("lbVAL_15"));
        lbVAL_15->setGeometry(QRect(850, 250, 111, 21));
        lbVAL_15->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbVAL_15->setFont(font3);
        aIndicador_4 = new AInstrumentIndicator(B1);
        aIndicador_4->setObjectName(QString::fromUtf8("aIndicador_4"));
        aIndicador_4->setGeometry(QRect(15, 500, 65, 65));
        aIndicador_4->setValue(-1);
        aIndicador_4->setOrientation(AWMultEstateWidget::Degree90);
        aIndicador_4->setProperty("Value", QVariant(2));
        aIndicador_5 = new AInstrumentIndicator(B1);
        aIndicador_5->setObjectName(QString::fromUtf8("aIndicador_5"));
        aIndicador_5->setGeometry(QRect(15, 540, 65, 65));
        aIndicador_5->setValue(-1);
        aIndicador_5->setOrientation(AWMultEstateWidget::Degree90);
        aIndicador_5->setProperty("Value", QVariant(2));
        aIndicador_7 = new AInstrumentIndicator(B1);
        aIndicador_7->setObjectName(QString::fromUtf8("aIndicador_7"));
        aIndicador_7->setGeometry(QRect(15, 579, 65, 65));
        aIndicador_7->setValue(-1);
        aIndicador_7->setOrientation(AWMultEstateWidget::Degree90);
        aIndicador_7->setProperty("Value", QVariant(2));
        frame_9 = new QFrame(B1);
        frame_9->setObjectName(QString::fromUtf8("frame_9"));
        frame_9->setGeometry(QRect(315, 50, 300, 65));
        frame_9->setStyleSheet(QString::fromUtf8("border-color: rgb(221, 221, 221);\n"
"background-color: none;"));
        frame_9->setFrameShape(QFrame::Box);
        frame_9->setFrameShadow(QFrame::Raised);
        frame_9->setLineWidth(1);
        frTitulo_10 = new QFrame(frame_9);
        frTitulo_10->setObjectName(QString::fromUtf8("frTitulo_10"));
        frTitulo_10->setGeometry(QRect(3, 1, 295, 25));
        frTitulo_10->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        frTitulo_10->setFrameShape(QFrame::WinPanel);
        frTitulo_10->setFrameShadow(QFrame::Raised);
        frTitulo_10->setLineWidth(2);
        frTitulo_10->setMidLineWidth(0);
        btnVenGEN = new QPushButton(frTitulo_10);
        btnVenGEN->setObjectName(QString::fromUtf8("btnVenGEN"));
        btnVenGEN->setGeometry(QRect(5, 3, 19, 19));
        lbGenerador_3 = new WLabel(frame_9);
        lbGenerador_3->setObjectName(QString::fromUtf8("lbGenerador_3"));
        lbGenerador_3->setGeometry(QRect(35, 5, 191, 16));
        lbGenerador_3->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Verdana"));
        font6.setPointSize(8);
        font6.setBold(true);
        font6.setWeight(75);
        lbGenerador_3->setFont(font6);
        lbVAL_6 = new WLabel(frame_9);
        lbVAL_6->setObjectName(QString::fromUtf8("lbVAL_6"));
        lbVAL_6->setGeometry(QRect(10, 26, 141, 21));
        lbVAL_6->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbVAL_6->setFont(font2);
        lbVAL_7 = new WLabel(frame_9);
        lbVAL_7->setObjectName(QString::fromUtf8("lbVAL_7"));
        lbVAL_7->setGeometry(QRect(10, 40, 141, 21));
        lbVAL_7->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(220, 220, 0);"));
        lbVAL_7->setFont(font2);
        lbVAL_8 = new WLabel(frame_9);
        lbVAL_8->setObjectName(QString::fromUtf8("lbVAL_8"));
        lbVAL_8->setGeometry(QRect(250, 28, 51, 21));
        lbVAL_8->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbVAL_8->setFont(font2);
        lbVAL_9 = new WLabel(frame_9);
        lbVAL_9->setObjectName(QString::fromUtf8("lbVAL_9"));
        lbVAL_9->setGeometry(QRect(250, 42, 51, 21));
        lbVAL_9->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbVAL_9->setFont(font2);
        lbUnidad_4 = new WLabel(frame_9);
        lbUnidad_4->setObjectName(QString::fromUtf8("lbUnidad_4"));
        lbUnidad_4->setGeometry(QRect(183, 27, 61, 21));
        lbUnidad_4->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbUnidad_4->setFont(font2);
        lbUnidad_5 = new WLabel(frame_9);
        lbUnidad_5->setObjectName(QString::fromUtf8("lbUnidad_5"));
        lbUnidad_5->setGeometry(QRect(183, 45, 61, 21));
        lbUnidad_5->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbUnidad_5->setFont(font2);
        lbUnidad_3 = new WLabel(B1);
        lbUnidad_3->setObjectName(QString::fromUtf8("lbUnidad_3"));
        lbUnidad_3->setGeometry(QRect(897, 488, 41, 21));
        lbUnidad_3->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbUnidad_3->setFont(font2);
        lbVAL_4 = new WLabel(B1);
        lbVAL_4->setObjectName(QString::fromUtf8("lbVAL_4"));
        lbVAL_4->setGeometry(QRect(855, 488, 41, 21));
        lbVAL_4->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbVAL_4->setFont(font2);
        lbVAL_18 = new WLabel(B1);
        lbVAL_18->setObjectName(QString::fromUtf8("lbVAL_18"));
        lbVAL_18->setGeometry(QRect(545, 270, 151, 21));
        lbVAL_18->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbVAL_18->setFont(font3);
        aVAL_4 = new AWMultiObject(B1);
        aVAL_4->setObjectName(QString::fromUtf8("aVAL_4"));
        aVAL_4->setGeometry(QRect(365, 140, 51, 41));
        aVAL_4->setOrientation(AWMultEstateWidget::Degree270);
        aVAL_4->setElementType(AWMultiObject::VALSIMP3);
        aVAL_4->setOffColor(AWMultiObject::Blue);
        aVAL_3 = new AWMultiObject(B1);
        aVAL_3->setObjectName(QString::fromUtf8("aVAL_3"));
        aVAL_3->setGeometry(QRect(755, 140, 51, 41));
        aVAL_3->setOrientation(AWMultEstateWidget::Degree270);
        aVAL_3->setElementType(AWMultiObject::VALSIMP3);
        aVAL_3->setOffColor(AWMultiObject::Blue);
        aVAL_2 = new AWMultiObject(B1);
        aVAL_2->setObjectName(QString::fromUtf8("aVAL_2"));
        aVAL_2->setGeometry(QRect(680, 140, 51, 41));
        aVAL_2->setOrientation(AWMultEstateWidget::Degree90);
        aVAL_2->setElementType(AWMultiObject::VALSIMP3);
        aVAL_2->setOffColor(AWMultiObject::Blue);
        lbTexto_19 = new WLabel(B1);
        lbTexto_19->setObjectName(QString::fromUtf8("lbTexto_19"));
        lbTexto_19->setGeometry(QRect(655, 380, 151, 21));
        lbTexto_19->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        QFont font7;
        font7.setPointSize(7);
        font7.setBold(false);
        font7.setWeight(50);
        lbTexto_19->setFont(font7);
        lbTexto_20 = new WLabel(B1);
        lbTexto_20->setObjectName(QString::fromUtf8("lbTexto_20"));
        lbTexto_20->setGeometry(QRect(660, 390, 151, 21));
        lbTexto_20->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbTexto_20->setFont(font7);
        lbTexto_21 = new WLabel(B1);
        lbTexto_21->setObjectName(QString::fromUtf8("lbTexto_21"));
        lbTexto_21->setGeometry(QRect(640, 400, 151, 21));
        lbTexto_21->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbTexto_21->setFont(font7);
        frame_10 = new QFrame(B1);
        frame_10->setObjectName(QString::fromUtf8("frame_10"));
        frame_10->setGeometry(QRect(759, 395, 251, 25));
        frame_10->setStyleSheet(QString::fromUtf8("border-color: rgb(221, 221, 221);\n"
"background-color: none;"));
        frame_10->setFrameShape(QFrame::Box);
        frame_10->setFrameShadow(QFrame::Raised);
        frame_10->setLineWidth(1);
        lbVAL_16 = new WLabel(frame_10);
        lbVAL_16->setObjectName(QString::fromUtf8("lbVAL_16"));
        lbVAL_16->setGeometry(QRect(40, 0, 211, 21));
        lbVAL_16->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbVAL_16->setFont(font3);
        frame_11 = new QFrame(B1);
        frame_11->setObjectName(QString::fromUtf8("frame_11"));
        frame_11->setGeometry(QRect(810, 423, 201, 25));
        frame_11->setStyleSheet(QString::fromUtf8("border-color: rgb(221, 221, 221);\n"
"background-color: none;"));
        frame_11->setFrameShape(QFrame::Box);
        frame_11->setFrameShadow(QFrame::Raised);
        frame_11->setLineWidth(1);
        lbVAL_17 = new WLabel(frame_11);
        lbVAL_17->setObjectName(QString::fromUtf8("lbVAL_17"));
        lbVAL_17->setGeometry(QRect(43, 0, 151, 21));
        lbVAL_17->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbVAL_17->setFont(font3);
        lbUnit3 = new WLabel(B1);
        lbUnit3->setObjectName(QString::fromUtf8("lbUnit3"));
        lbUnit3->setGeometry(QRect(834, 647, 190, 15));
        lbUnit3->setStyleSheet(QString::fromUtf8("background-color: rgb(175, 175, 175);"));
        QFont font8;
        font8.setBold(true);
        font8.setWeight(75);
        lbUnit3->setFont(font8);
        progressBar = new QProgressBar(B1);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(80, 524, 726, 93));
        progressBar->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
" border: 1px solid black;\n"
" padding: 0px;\n"
" background: rgb(215, 215, 215);\n"
" }\n"
"\n"
"QProgressBar::chunk {\n"
" background: rgb(186,77, 13);\n"
" border: 0px solid black;\n"
" }"));
        progressBar->setValue(24);
        progressBar->setTextVisible(false);
        aWMultiObject_2 = new AWMultiObject(B1);
        aWMultiObject_2->setObjectName(QString::fromUtf8("aWMultiObject_2"));
        aWMultiObject_2->setGeometry(QRect(80, 560, 31, 31));
        aWMultiObject_2->setElementType(AWMultiObject::SPRING);
        aWMultiObject_3 = new AWMultiObject(B1);
        aWMultiObject_3->setObjectName(QString::fromUtf8("aWMultiObject_3"));
        aWMultiObject_3->setGeometry(QRect(80, 590, 31, 31));
        aWMultiObject_3->setElementType(AWMultiObject::SPRING);
        label_9 = new WLabel(B1);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(130, 270, 21, 41));
        label_9->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        label_9->setProperty("pixmap", QVariant(QPixmap(QString::fromUtf8("../Resources/PNG/B1/flechadiagonal_arriba.png"))));
        label_10 = new WLabel(B1);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(420, 423, 21, 41));
        label_10->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        label_10->setProperty("pixmap", QVariant(QPixmap(QString::fromUtf8("../Resources/PNG/B1/flechadiagonal_arriba.png"))));
        label_11 = new WLabel(B1);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(732, 182, 41, 41));
        label_11->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        label_11->setProperty("pixmap", QVariant(QPixmap(QString::fromUtf8("../Resources/PNG/B1/cuadro.png"))));
        label_12 = new WLabel(B1);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(731, 98, 41, 41));
        label_12->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        label_12->setProperty("pixmap", QVariant(QPixmap(QString::fromUtf8("../Resources/PNG/B1/cuadro.png"))));
        progressBar_2 = new QProgressBar(B1);
        progressBar_2->setObjectName(QString::fromUtf8("progressBar_2"));
        progressBar_2->setGeometry(QRect(80, 524, 726, 93));
        progressBar_2->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
" border: 1px solid black;\n"
" padding: 0px;\n"
" background: rgb(215, 215, 215);\n"
" }\n"
"\n"
"QProgressBar::chunk {\n"
" background: rgb(186,77, 13);\n"
" border: 0px solid black;\n"
" }"));
        progressBar_2->setValue(100);
        progressBar_2->setTextVisible(false);
        progressBar_2->setOrientation(Qt::Vertical);
        lbIMGFondo = new QLabel(B1);
        lbIMGFondo->setObjectName(QString::fromUtf8("lbIMGFondo"));
        lbIMGFondo->setGeometry(QRect(0, 0, 1024, 662));
        lbIMGFondo->setPixmap(QPixmap(QString::fromUtf8(":/Resources/PNG/B1.png")));
        lbIMGFondo->setScaledContents(true);
        aBomba_2 = new AWMultiObject(B1);
        aBomba_2->setObjectName(QString::fromUtf8("aBomba_2"));
        aBomba_2->setGeometry(QRect(314, 328, 101, 101));
        aBomba_2->setElementType(AWMultiObject::BOMBATB);
        aBomba_2->setOnColor(AWMultiObject::Brown);
        aBomba_2->setOffColor(AWMultiObject::Green);
        lbIMGFondo->raise();
        progressBar->raise();
        progressBar_2->raise();
        aIndicador_1->raise();
        frTitulo_9->raise();
        label->raise();
        lbVAL_1->raise();
        lbUnidad_2->raise();
        lbVAL_3->raise();
        lbVAL_5->raise();
        aIndicador_2->raise();
        aBomba_1->raise();
        aIndicador_3->raise();
        aIndicador_6->raise();
        aIndicador_8->raise();
        aIndicador_11->raise();
        aIndicador_12->raise();
        lbGenerador->raise();
        aIndicador_14->raise();
        aIndicador_15->raise();
        aWMultiObject->raise();
        lbVAL_12->raise();
        lbGenerador_2->raise();
        lbVAL_13->raise();
        lbVAL_14->raise();
        lbVAL_15->raise();
        aIndicador_4->raise();
        aIndicador_5->raise();
        aIndicador_7->raise();
        btnIMP->raise();
        frame_9->raise();
        lbUnidad_3->raise();
        lbVAL_4->raise();
        lbVAL_18->raise();
        aVAL_4->raise();
        aVAL_3->raise();
        aVAL_2->raise();
        lbTexto_19->raise();
        lbTexto_20->raise();
        lbTexto_21->raise();
        frame_10->raise();
        frame_11->raise();
        lbUnit3->raise();
        aWMultiObject_2->raise();
        aWMultiObject_3->raise();
        label_9->raise();
        label_10->raise();
        label_11->raise();
        label_12->raise();
        aBomba_2->raise();

        retranslateUi(B1);

        QMetaObject::connectSlotsByName(B1);
    } // setupUi

    void retranslateUi(QWidget *B1)
    {
        B1->setWindowTitle(QApplication::translate("B1", "Form", 0, QApplication::UnicodeUTF8));
        aIndicador_1->setProperty("UpLabel", QVariant(QApplication::translate("B1", "MOT", 0, QApplication::UnicodeUTF8)));
        aIndicador_1->setProperty("DownLabel", QVariant(QApplication::translate("B1", "68326B", 0, QApplication::UnicodeUTF8)));
        btnIMP->setText(QApplication::translate("B1", "IMP PANT", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("B1", "UNIT3", 0, QApplication::UnicodeUTF8));
        lbVAL_1->setText(QApplication::translate("B1", "PSIG", 0, QApplication::UnicodeUTF8));
        lbUnidad_2->setText(QApplication::translate("B1", "PSIG", 0, QApplication::UnicodeUTF8));
        lbVAL_3->setText(QApplication::translate("B1", "0.0", 0, QApplication::UnicodeUTF8));
        lbVAL_5->setText(QApplication::translate("B1", "SUMINISTRO LUB", 0, QApplication::UnicodeUTF8));
        aIndicador_2->setId(QApplication::translate("B1", "p_NOT Fix32_THISNODE_MOT6033_F_CV", 0, QApplication::UnicodeUTF8));
        aIndicador_2->setProperty("UpLabel", QVariant(QApplication::translate("B1", "MOT", 0, QApplication::UnicodeUTF8)));
        aIndicador_2->setProperty("DownLabel", QVariant(QApplication::translate("B1", "6033", 0, QApplication::UnicodeUTF8)));
        aIndicador_3->setId(QApplication::translate("B1", "p_Fix32_THISNODE_ALM_MSTR282_F_CV", 0, QApplication::UnicodeUTF8));
        aIndicador_3->setProperty("UpLabel", QVariant(QApplication::translate("B1", "PT", 0, QApplication::UnicodeUTF8)));
        aIndicador_3->setProperty("DownLabel", QVariant(QApplication::translate("B1", "6016", 0, QApplication::UnicodeUTF8)));
        aIndicador_6->setId(QApplication::translate("B1", "p_Fix32_THISNODE_ALM_MSTR278_F_CV OR Fix32_THISNODE_ALM_MSTR284_F_CV", 0, QApplication::UnicodeUTF8));
        aIndicador_6->setProperty("UpLabel", QVariant(QApplication::translate("B1", "PT", 0, QApplication::UnicodeUTF8)));
        aIndicador_6->setProperty("DownLabel", QVariant(QApplication::translate("B1", "6017", 0, QApplication::UnicodeUTF8)));
        aIndicador_8->setProperty("UpLabel", QVariant(QApplication::translate("B1", "MOT", 0, QApplication::UnicodeUTF8)));
        aIndicador_8->setProperty("DownLabel", QVariant(QApplication::translate("B1", "68326A", 0, QApplication::UnicodeUTF8)));
        aIndicador_11->setId(QApplication::translate("B1", "p_Fix32_UNIT1_PS3EST_F_CV", 0, QApplication::UnicodeUTF8));
        aIndicador_11->setProperty("UpLabel", QVariant(QApplication::translate("B1", "PDSH", 0, QApplication::UnicodeUTF8)));
        aIndicador_11->setProperty("DownLabel", QVariant(QApplication::translate("B1", "6015", 0, QApplication::UnicodeUTF8)));
        aIndicador_12->setId(QApplication::translate("B1", "p_Fix32_THISNODE_ALM_MSTR219_F_CV", 0, QApplication::UnicodeUTF8));
        aIndicador_12->setProperty("UpLabel", QVariant(QApplication::translate("B1", "LT", 0, QApplication::UnicodeUTF8)));
        aIndicador_12->setProperty("DownLabel", QVariant(QApplication::translate("B1", "6045", 0, QApplication::UnicodeUTF8)));
        lbGenerador->setText(QApplication::translate("B1", "BOMBA MEC\303\201NICA", 0, QApplication::UnicodeUTF8));
        aIndicador_14->setId(QApplication::translate("B1", "p_Fix32_THISNODE_ALM_MSTR033_F_CV", 0, QApplication::UnicodeUTF8));
        aIndicador_14->setProperty("UpLabel", QVariant(QApplication::translate("B1", "XSH", 0, QApplication::UnicodeUTF8)));
        aIndicador_14->setProperty("DownLabel", QVariant(QApplication::translate("B1", "68327B", 0, QApplication::UnicodeUTF8)));
        aIndicador_15->setId(QApplication::translate("B1", "p_Fix32_THISNODE_ALM_MSTR032_F_CV", 0, QApplication::UnicodeUTF8));
        aIndicador_15->setProperty("UpLabel", QVariant(QApplication::translate("B1", "XSH", 0, QApplication::UnicodeUTF8)));
        aIndicador_15->setProperty("DownLabel", QVariant(QApplication::translate("B1", "68327A", 0, QApplication::UnicodeUTF8)));
        lbVAL_12->setText(QApplication::translate("B1", "0.0", 0, QApplication::UnicodeUTF8));
        lbGenerador_2->setText(QApplication::translate("B1", "BOMBA PRINCIPAL DE LA CA", 0, QApplication::UnicodeUTF8));
        lbVAL_13->setText(QApplication::translate("B1", "DESAG\303\234E ACEITE DEL GEN", 0, QApplication::UnicodeUTF8));
        lbVAL_14->setText(QApplication::translate("B1", "DESAG\303\234E P/FLUIDO", 0, QApplication::UnicodeUTF8));
        lbVAL_15->setText(QApplication::translate("B1", "DE ELEVACI\303\223N", 0, QApplication::UnicodeUTF8));
        aIndicador_4->setId(QApplication::translate("B1", "p_Fix32_THISNODE_ALM_MSTR015_F_CV", 0, QApplication::UnicodeUTF8));
        aIndicador_4->setProperty("UpLabel", QVariant(QApplication::translate("B1", "TSL", 0, QApplication::UnicodeUTF8)));
        aIndicador_4->setProperty("DownLabel", QVariant(QApplication::translate("B1", "6020", 0, QApplication::UnicodeUTF8)));
        aIndicador_5->setProperty("UpLabel", QVariant(QApplication::translate("B1", "HE", 0, QApplication::UnicodeUTF8)));
        aIndicador_5->setProperty("DownLabel", QVariant(QApplication::translate("B1", "6043", 0, QApplication::UnicodeUTF8)));
        aIndicador_7->setProperty("UpLabel", QVariant(QApplication::translate("B1", "HE", 0, QApplication::UnicodeUTF8)));
        aIndicador_7->setProperty("DownLabel", QVariant(QApplication::translate("B1", "6005", 0, QApplication::UnicodeUTF8)));
        btnVenGEN->setText(QString());
        lbGenerador_3->setText(QApplication::translate("B1", "SELECCI\303\223N VENT REFRIG", 0, QApplication::UnicodeUTF8));
        lbVAL_6->setText(QApplication::translate("B1", "VENT B EN ESPERA", 0, QApplication::UnicodeUTF8));
        lbVAL_7->setText(QApplication::translate("B1", "VENT A EN SERVICIO", 0, QApplication::UnicodeUTF8));
        lbVAL_8->setText(QApplication::translate("B1", "6495.5", 0, QApplication::UnicodeUTF8));
        lbVAL_9->setText(QApplication::translate("B1", "5082.1", 0, QApplication::UnicodeUTF8));
        lbUnidad_4->setText(QApplication::translate("B1", "HRS OP", 0, QApplication::UnicodeUTF8));
        lbUnidad_5->setText(QApplication::translate("B1", "HRS OP", 0, QApplication::UnicodeUTF8));
        lbUnidad_3->setText(QApplication::translate("B1", "%", 0, QApplication::UnicodeUTF8));
        lbVAL_4->setText(QApplication::translate("B1", "81.9", 0, QApplication::UnicodeUTF8));
        lbVAL_18->setText(QApplication::translate("B1", "SEPARADOR AIRE/ACEITE", 0, QApplication::UnicodeUTF8));
        lbTexto_19->setText(QApplication::translate("B1", "RESPIRADERO", 0, QApplication::UnicodeUTF8));
        lbTexto_20->setText(QApplication::translate("B1", "DE TANQUE", 0, QApplication::UnicodeUTF8));
        lbTexto_21->setText(QApplication::translate("B1", "A LA ATM\303\223SFERA", 0, QApplication::UnicodeUTF8));
        lbVAL_16->setText(QApplication::translate("B1", "VERIF CRON\303\223 BOM PRINCIPAL : 0", 0, QApplication::UnicodeUTF8));
        lbVAL_17->setText(QApplication::translate("B1", "MOT6033 HRS OP 150.9", 0, QApplication::UnicodeUTF8));
        lbUnit3->setText(QApplication::translate("B1", "    UNIT3", 0, QApplication::UnicodeUTF8));
        label_9->setText(QString());
        label_10->setText(QString());
        label_11->setText(QString());
        label_12->setText(QString());
        lbIMGFondo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class B1: public Ui_B1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_B1_H
