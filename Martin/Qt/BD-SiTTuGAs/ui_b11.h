/********************************************************************************
** Form generated from reading UI file 'b11.ui'
**
** Created: Thu 12. Dec 21:16:37 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_B11_H
#define UI_B11_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCommandLinkButton>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>
#include "ainstrumentindicator.h"
#include "awanalogiclevel.h"
#include "awmultiobject.h"
#include "wlabel.h"

QT_BEGIN_NAMESPACE

class Ui_B11
{
public:
    QLabel *lbIMGFondo;
    AWMultiObject *WAgitadorMOT_1;
    AWMultiObject *WAgitadorMOT_2;
    AWAnalogicLevel *WMarco;
    AInstrumentIndicator *WIndicatorTE_24;
    AInstrumentIndicator *WIndicatorTE_23;
    AInstrumentIndicator *WIndicatorTE_22;
    AInstrumentIndicator *WIndicatorTE_21;
    AInstrumentIndicator *WIndicatorTE_25;
    AInstrumentIndicator *WIndicatorTE_26;
    AInstrumentIndicator *WIndicatorTE_30;
    AInstrumentIndicator *WIndicadorMOT_13;
    AInstrumentIndicator *WIndicadorMOT_16;
    AInstrumentIndicator *WIndicadorFSL_10;
    AInstrumentIndicator *WIndicadorFSL_09;
    QPushButton *btnVenGEN;
    WLabel *lbVenGEN;
    WLabel *lbVenESP_1;
    WLabel *lbVenSER_1;
    WLabel *lbVen_1;
    WLabel *lbSER_1;
    WLabel *lbVenU_2;
    WLabel *lbSERU_1;
    AInstrumentIndicator *WIndicatorPDSL_07;
    AInstrumentIndicator *WIndicadorHE_50;
    AInstrumentIndicator *WIndicadorHE_3;
    AInstrumentIndicator *WIndicatorTE_31;
    AInstrumentIndicator *WIndicadorHE_51;
    AInstrumentIndicator *WIndicatorTE_2;
    WLabel *lbGen_1;
    WLabel *lbGenT;
    WLabel *lbGen_2;
    WLabel *lbGen_3;
    WLabel *lbGenU_1;
    WLabel *lbGenU_2;
    WLabel *lbGenU_3;
    AWMultiObject *WResorte;
    AWMultiObject *WResorte_2;
    WLabel *lbGenT_2;
    AWMultiObject *WResorte_3;
    WLabel *lbTem_1;
    WLabel *lbTem_2;
    WLabel *lbTem_3;
    WLabel *lbTem_4;
    WLabel *lbTem_5;
    WLabel *lbTem_6;
    WLabel *lbTem_7;
    WLabel *lbTem_8;
    WLabel *lbTem_9;
    WLabel *lbTem_10;
    QPushButton *btnImpPANT;
    WLabel *lbUniT3;
    WLabel *lbGenT_3;
    QCommandLinkButton *commandLinkButton;

    void setupUi(QWidget *B11)
    {
        if (B11->objectName().isEmpty())
            B11->setObjectName(QString::fromUtf8("B11"));
        B11->resize(1024, 662);
        B11->setMinimumSize(QSize(1024, 662));
        B11->setMaximumSize(QSize(1024, 662));
        B11->setStyleSheet(QString::fromUtf8(""));
        lbIMGFondo = new QLabel(B11);
        lbIMGFondo->setObjectName(QString::fromUtf8("lbIMGFondo"));
        lbIMGFondo->setGeometry(QRect(0, 0, 1024, 662));
        lbIMGFondo->setPixmap(QPixmap(QString::fromUtf8(":/Resources/PNG/B11.png")));
        lbIMGFondo->setScaledContents(false);
        WAgitadorMOT_1 = new AWMultiObject(B11);
        WAgitadorMOT_1->setObjectName(QString::fromUtf8("WAgitadorMOT_1"));
        WAgitadorMOT_1->setGeometry(QRect(705, 66, 61, 91));
        WAgitadorMOT_1->setElementType(AWMultiObject::AGITADOR);
        WAgitadorMOT_1->setOffColor(AWMultiObject::Green);
        WAgitadorMOT_2 = new AWMultiObject(B11);
        WAgitadorMOT_2->setObjectName(QString::fromUtf8("WAgitadorMOT_2"));
        WAgitadorMOT_2->setGeometry(QRect(775, 66, 61, 91));
        WAgitadorMOT_2->setElementType(AWMultiObject::AGITADOR);
        WAgitadorMOT_2->setOffColor(AWMultiObject::Green);
        WMarco = new AWAnalogicLevel(B11);
        WMarco->setObjectName(QString::fromUtf8("WMarco"));
        WMarco->setGeometry(QRect(305, 70, 331, 58));
        WIndicatorTE_24 = new AInstrumentIndicator(B11);
        WIndicatorTE_24->setObjectName(QString::fromUtf8("WIndicatorTE_24"));
        WIndicatorTE_24->setGeometry(QRect(325, 240, 70, 70));
        WIndicatorTE_24->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 0);"));
        WIndicatorTE_24->setOrientation(AWMultEstateWidget::Degree90);
        WIndicatorTE_24->setProperty("LineAngle", QVariant(0));
        WIndicatorTE_24->setProperty("Value", QVariant(2));
        WIndicatorTE_23 = new AInstrumentIndicator(B11);
        WIndicatorTE_23->setObjectName(QString::fromUtf8("WIndicatorTE_23"));
        WIndicatorTE_23->setGeometry(QRect(450, 240, 70, 70));
        WIndicatorTE_23->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 0);"));
        WIndicatorTE_23->setOrientation(AWMultEstateWidget::Degree90);
        WIndicatorTE_23->setProperty("LineAngle", QVariant(0));
        WIndicatorTE_23->setProperty("Value", QVariant(2));
        WIndicatorTE_22 = new AInstrumentIndicator(B11);
        WIndicatorTE_22->setObjectName(QString::fromUtf8("WIndicatorTE_22"));
        WIndicatorTE_22->setGeometry(QRect(500, 240, 70, 70));
        WIndicatorTE_22->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 0);"));
        WIndicatorTE_22->setProperty("isUpdateable", QVariant(false));
        WIndicatorTE_22->setOrientation(AWMultEstateWidget::Degree90);
        WIndicatorTE_22->setProperty("LineAngle", QVariant(0));
        WIndicatorTE_22->setProperty("Value", QVariant(2));
        WIndicatorTE_21 = new AInstrumentIndicator(B11);
        WIndicatorTE_21->setObjectName(QString::fromUtf8("WIndicatorTE_21"));
        WIndicatorTE_21->setGeometry(QRect(555, 240, 70, 70));
        WIndicatorTE_21->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 0);"));
        WIndicatorTE_21->setOrientation(AWMultEstateWidget::Degree90);
        WIndicatorTE_21->setProperty("LineAngle", QVariant(0));
        WIndicatorTE_21->setProperty("Value", QVariant(2));
        WIndicatorTE_25 = new AInstrumentIndicator(B11);
        WIndicatorTE_25->setObjectName(QString::fromUtf8("WIndicatorTE_25"));
        WIndicatorTE_25->setGeometry(QRect(274, 240, 70, 70));
        WIndicatorTE_25->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 0);"));
        WIndicatorTE_25->setOrientation(AWMultEstateWidget::Degree90);
        WIndicatorTE_25->setProperty("LineAngle", QVariant(0));
        WIndicatorTE_25->setProperty("Value", QVariant(2));
        WIndicatorTE_26 = new AInstrumentIndicator(B11);
        WIndicatorTE_26->setObjectName(QString::fromUtf8("WIndicatorTE_26"));
        WIndicatorTE_26->setGeometry(QRect(223, 240, 70, 70));
        WIndicatorTE_26->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 0);"));
        WIndicatorTE_26->setOrientation(AWMultEstateWidget::Degree90);
        WIndicatorTE_26->setProperty("LineAngle", QVariant(0));
        WIndicatorTE_26->setProperty("Value", QVariant(2));
        WIndicatorTE_30 = new AInstrumentIndicator(B11);
        WIndicatorTE_30->setObjectName(QString::fromUtf8("WIndicatorTE_30"));
        WIndicatorTE_30->setGeometry(QRect(638, 205, 70, 70));
        WIndicatorTE_30->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 0);"));
        WIndicatorTE_30->setOrientation(AWMultEstateWidget::Degree180);
        WIndicatorTE_30->setProperty("LineAngle", QVariant(0));
        WIndicatorTE_30->setProperty("Value", QVariant(2));
        WIndicadorMOT_13 = new AInstrumentIndicator(B11);
        WIndicadorMOT_13->setObjectName(QString::fromUtf8("WIndicadorMOT_13"));
        WIndicadorMOT_13->setGeometry(QRect(640, 75, 71, 61));
        WIndicadorMOT_13->setProperty("Value", QVariant(3));
        WIndicadorMOT_16 = new AInstrumentIndicator(B11);
        WIndicadorMOT_16->setObjectName(QString::fromUtf8("WIndicadorMOT_16"));
        WIndicadorMOT_16->setGeometry(QRect(825, 74, 71, 61));
        WIndicadorMOT_16->setOrientation(AWMultEstateWidget::Degree180);
        WIndicadorMOT_16->setProperty("Value", QVariant(3));
        WIndicadorFSL_10 = new AInstrumentIndicator(B11);
        WIndicadorFSL_10->setObjectName(QString::fromUtf8("WIndicadorFSL_10"));
        WIndicadorFSL_10->setGeometry(QRect(825, 118, 71, 61));
        WIndicadorFSL_10->setOrientation(AWMultEstateWidget::Degree180);
        WIndicadorFSL_10->setProperty("Value", QVariant(2));
        WIndicadorFSL_09 = new AInstrumentIndicator(B11);
        WIndicadorFSL_09->setObjectName(QString::fromUtf8("WIndicadorFSL_09"));
        WIndicadorFSL_09->setGeometry(QRect(640, 118, 71, 61));
        WIndicadorFSL_09->setOrientation(AWMultEstateWidget::Degree0);
        WIndicadorFSL_09->setProperty("Value", QVariant(2));
        btnVenGEN = new QPushButton(B11);
        btnVenGEN->setObjectName(QString::fromUtf8("btnVenGEN"));
        btnVenGEN->setGeometry(QRect(312, 72, 19, 19));
        lbVenGEN = new WLabel(B11);
        lbVenGEN->setObjectName(QString::fromUtf8("lbVenGEN"));
        lbVenGEN->setGeometry(QRect(335, 72, 270, 17));
        lbVenGEN->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);"));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(8);
        font.setBold(true);
        font.setWeight(75);
        lbVenGEN->setFont(font);
        lbVenESP_1 = new WLabel(B11);
        lbVenESP_1->setObjectName(QString::fromUtf8("lbVenESP_1"));
        lbVenESP_1->setGeometry(QRect(315, 93, 175, 17));
        lbVenESP_1->setStyleSheet(QString::fromUtf8("color: rgba(0, 0, 0, 0);\n"
"background-color: rgba(255, 255, 255, 0);"));
        lbVenESP_1->setFont(font);
        lbVenSER_1 = new WLabel(B11);
        lbVenSER_1->setObjectName(QString::fromUtf8("lbVenSER_1"));
        lbVenSER_1->setGeometry(QRect(315, 106, 181, 17));
        lbVenSER_1->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        lbVenSER_1->setFont(font);
        lbVen_1 = new WLabel(B11);
        lbVen_1->setObjectName(QString::fromUtf8("lbVen_1"));
        lbVen_1->setGeometry(QRect(504, 93, 50, 17));
        lbVen_1->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        lbVen_1->setFont(font);
        lbSER_1 = new WLabel(B11);
        lbSER_1->setObjectName(QString::fromUtf8("lbSER_1"));
        lbSER_1->setGeometry(QRect(504, 106, 50, 17));
        lbSER_1->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        lbSER_1->setFont(font);
        lbVenU_2 = new WLabel(B11);
        lbVenU_2->setObjectName(QString::fromUtf8("lbVenU_2"));
        lbVenU_2->setGeometry(QRect(575, 93, 50, 17));
        lbVenU_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        lbVenU_2->setFont(font);
        lbSERU_1 = new WLabel(B11);
        lbSERU_1->setObjectName(QString::fromUtf8("lbSERU_1"));
        lbSERU_1->setGeometry(QRect(575, 106, 55, 17));
        lbSERU_1->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        lbSERU_1->setFont(font);
        WIndicatorPDSL_07 = new AInstrumentIndicator(B11);
        WIndicatorPDSL_07->setObjectName(QString::fromUtf8("WIndicatorPDSL_07"));
        WIndicatorPDSL_07->setGeometry(QRect(895, 295, 70, 70));
        WIndicatorPDSL_07->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 0);"));
        WIndicatorPDSL_07->setOrientation(AWMultEstateWidget::Degree180);
        WIndicatorPDSL_07->setProperty("LineAngle", QVariant(0));
        WIndicatorPDSL_07->setProperty("Value", QVariant(2));
        WIndicadorHE_50 = new AInstrumentIndicator(B11);
        WIndicadorHE_50->setObjectName(QString::fromUtf8("WIndicadorHE_50"));
        WIndicadorHE_50->setGeometry(QRect(670, 500, 71, 61));
        WIndicadorHE_50->setOrientation(AWMultEstateWidget::Degree180);
        WIndicadorHE_50->setProperty("Value", QVariant(3));
        WIndicadorHE_3 = new AInstrumentIndicator(B11);
        WIndicadorHE_3->setObjectName(QString::fromUtf8("WIndicadorHE_3"));
        WIndicadorHE_3->setGeometry(QRect(935, 502, 71, 61));
        WIndicadorHE_3->setOrientation(AWMultEstateWidget::Degree180);
        WIndicadorHE_3->setProperty("Value", QVariant(3));
        WIndicatorTE_31 = new AInstrumentIndicator(B11);
        WIndicatorTE_31->setObjectName(QString::fromUtf8("WIndicatorTE_31"));
        WIndicatorTE_31->setGeometry(QRect(115, 309, 63, 61));
        WIndicatorTE_31->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 0);"));
        WIndicatorTE_31->setOrientation(AWMultEstateWidget::Degree0);
        WIndicatorTE_31->setProperty("LineAngle", QVariant(0));
        WIndicatorTE_31->setProperty("Value", QVariant(2));
        WIndicadorHE_51 = new AInstrumentIndicator(B11);
        WIndicadorHE_51->setObjectName(QString::fromUtf8("WIndicadorHE_51"));
        WIndicadorHE_51->setGeometry(QRect(18, 403, 71, 61));
        WIndicadorHE_51->setProperty("Value", QVariant(3));
        WIndicatorTE_2 = new AInstrumentIndicator(B11);
        WIndicatorTE_2->setObjectName(QString::fromUtf8("WIndicatorTE_2"));
        WIndicatorTE_2->setGeometry(QRect(46, 102, 61, 61));
        WIndicatorTE_2->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 0);"));
        WIndicatorTE_2->setOrientation(AWMultEstateWidget::Degree90);
        WIndicatorTE_2->setProperty("LineAngle", QVariant(0));
        WIndicatorTE_2->setProperty("Value", QVariant(2));
        lbGen_1 = new WLabel(B11);
        lbGen_1->setObjectName(QString::fromUtf8("lbGen_1"));
        lbGen_1->setGeometry(QRect(387, 383, 31, 16));
        lbGen_1->setStyleSheet(QString::fromUtf8("background-color: rgb(221, 221, 221,0);"));
        lbGen_1->setFont(font);
        lbGenT = new WLabel(B11);
        lbGenT->setObjectName(QString::fromUtf8("lbGenT"));
        lbGenT->setGeometry(QRect(368, 365, 91, 16));
        lbGenT->setStyleSheet(QString::fromUtf8("background-color: rgb(221, 221, 0,0);"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        lbGenT->setFont(font1);
        lbGen_2 = new WLabel(B11);
        lbGen_2->setObjectName(QString::fromUtf8("lbGen_2"));
        lbGen_2->setGeometry(QRect(387, 398, 31, 16));
        lbGen_2->setStyleSheet(QString::fromUtf8("background-color: rgb(221, 221, 221,0);"));
        lbGen_2->setFont(font);
        lbGen_3 = new WLabel(B11);
        lbGen_3->setObjectName(QString::fromUtf8("lbGen_3"));
        lbGen_3->setGeometry(QRect(387, 413, 31, 16));
        lbGen_3->setStyleSheet(QString::fromUtf8("background-color: rgb(221, 221, 221,0);"));
        lbGen_3->setFont(font);
        lbGenU_1 = new WLabel(B11);
        lbGenU_1->setObjectName(QString::fromUtf8("lbGenU_1"));
        lbGenU_1->setGeometry(QRect(421, 383, 31, 16));
        lbGenU_1->setStyleSheet(QString::fromUtf8("background-color: rgb(221, 221, 221,0);"));
        lbGenU_1->setFont(font);
        lbGenU_2 = new WLabel(B11);
        lbGenU_2->setObjectName(QString::fromUtf8("lbGenU_2"));
        lbGenU_2->setGeometry(QRect(421, 398, 41, 16));
        lbGenU_2->setStyleSheet(QString::fromUtf8("background-color: rgb(221, 221, 221,0);"));
        lbGenU_2->setFont(font);
        lbGenU_3 = new WLabel(B11);
        lbGenU_3->setObjectName(QString::fromUtf8("lbGenU_3"));
        lbGenU_3->setGeometry(QRect(421, 413, 31, 16));
        lbGenU_3->setStyleSheet(QString::fromUtf8("background-color: rgb(221, 221, 221,0);"));
        lbGenU_3->setFont(font);
        WResorte = new AWMultiObject(B11);
        WResorte->setObjectName(QString::fromUtf8("WResorte"));
        WResorte->setGeometry(QRect(562, 500, 81, 61));
        WResorte->setElementType(AWMultiObject::SPRING);
        WResorte_2 = new AWMultiObject(B11);
        WResorte_2->setObjectName(QString::fromUtf8("WResorte_2"));
        WResorte_2->setGeometry(QRect(98, 424, 30, 21));
        WResorte_2->setElementType(AWMultiObject::SPRING);
        lbGenT_2 = new WLabel(B11);
        lbGenT_2->setObjectName(QString::fromUtf8("lbGenT_2"));
        lbGenT_2->setGeometry(QRect(410, 168, 101, 31));
        lbGenT_2->setStyleSheet(QString::fromUtf8("background-color: rgb(221, 221, 221);\n"
"background-color: rgba(255, 255, 255, 0);"));
        lbGenT_2->setFont(font1);
        WResorte_3 = new AWMultiObject(B11);
        WResorte_3->setObjectName(QString::fromUtf8("WResorte_3"));
        WResorte_3->setGeometry(QRect(824, 505, 101, 51));
        WResorte_3->setElementType(AWMultiObject::SPRING);
        lbTem_1 = new WLabel(B11);
        lbTem_1->setObjectName(QString::fromUtf8("lbTem_1"));
        lbTem_1->setGeometry(QRect(143, 300, 31, 16));
        lbTem_1->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Verdana"));
        font2.setPointSize(8);
        lbTem_1->setFont(font2);
        lbTem_2 = new WLabel(B11);
        lbTem_2->setObjectName(QString::fromUtf8("lbTem_2"));
        lbTem_2->setGeometry(QRect(243, 238, 41, 16));
        lbTem_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        lbTem_2->setFont(font2);
        lbTem_3 = new WLabel(B11);
        lbTem_3->setObjectName(QString::fromUtf8("lbTem_3"));
        lbTem_3->setGeometry(QRect(290, 238, 41, 16));
        lbTem_3->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        lbTem_3->setFont(font2);
        lbTem_4 = new WLabel(B11);
        lbTem_4->setObjectName(QString::fromUtf8("lbTem_4"));
        lbTem_4->setGeometry(QRect(345, 238, 41, 16));
        lbTem_4->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        lbTem_4->setFont(font2);
        lbTem_5 = new WLabel(B11);
        lbTem_5->setObjectName(QString::fromUtf8("lbTem_5"));
        lbTem_5->setGeometry(QRect(465, 238, 41, 16));
        lbTem_5->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        lbTem_5->setFont(font2);
        lbTem_6 = new WLabel(B11);
        lbTem_6->setObjectName(QString::fromUtf8("lbTem_6"));
        lbTem_6->setGeometry(QRect(520, 238, 41, 16));
        lbTem_6->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        lbTem_6->setFont(font2);
        lbTem_7 = new WLabel(B11);
        lbTem_7->setObjectName(QString::fromUtf8("lbTem_7"));
        lbTem_7->setGeometry(QRect(572, 240, 41, 16));
        lbTem_7->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        lbTem_7->setFont(font2);
        lbTem_8 = new WLabel(B11);
        lbTem_8->setObjectName(QString::fromUtf8("lbTem_8"));
        lbTem_8->setGeometry(QRect(660, 202, 31, 16));
        lbTem_8->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        lbTem_8->setFont(font2);
        lbTem_9 = new WLabel(B11);
        lbTem_9->setObjectName(QString::fromUtf8("lbTem_9"));
        lbTem_9->setGeometry(QRect(65, 95, 31, 16));
        lbTem_9->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        lbTem_9->setFont(font2);
        lbTem_10 = new WLabel(B11);
        lbTem_10->setObjectName(QString::fromUtf8("lbTem_10"));
        lbTem_10->setGeometry(QRect(960, 300, 81, 61));
        lbTem_10->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        lbTem_10->setFont(font2);
        btnImpPANT = new QPushButton(B11);
        btnImpPANT->setObjectName(QString::fromUtf8("btnImpPANT"));
        btnImpPANT->setGeometry(QRect(0, 630, 135, 23));
        btnImpPANT->setFont(font);
        btnImpPANT->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        lbUniT3 = new WLabel(B11);
        lbUniT3->setObjectName(QString::fromUtf8("lbUniT3"));
        lbUniT3->setGeometry(QRect(832, 645, 191, 16));
        lbUniT3->setStyleSheet(QString::fromUtf8("background-color: rgb(175, 175, 175);"));
        lbUniT3->setFont(font);
        lbGenT_3 = new WLabel(B11);
        lbGenT_3->setObjectName(QString::fromUtf8("lbGenT_3"));
        lbGenT_3->setGeometry(QRect(80, 405, 65, 16));
        lbGenT_3->setStyleSheet(QString::fromUtf8("background-color: rgb(221, 221, 0,0);"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Verdana"));
        font3.setPointSize(7);
        font3.setBold(true);
        font3.setWeight(75);
        lbGenT_3->setFont(font3);
        commandLinkButton = new QCommandLinkButton(B11);
        commandLinkButton->setObjectName(QString::fromUtf8("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(270, 349, 301, 139));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/PNG/Extras/transparente.svg"), QSize(), QIcon::Normal, QIcon::Off);
        commandLinkButton->setIcon(icon);

        retranslateUi(B11);

        QMetaObject::connectSlotsByName(B11);
    } // setupUi

    void retranslateUi(QWidget *B11)
    {
        B11->setWindowTitle(QApplication::translate("B11", "B11", 0, QApplication::UnicodeUTF8));
        lbIMGFondo->setText(QString());
        WIndicatorTE_24->setId(QApplication::translate("B11", "p_Fix32_THISNODE_ALM_MSTR352_F_CV", 0, QApplication::UnicodeUTF8));
        WIndicatorTE_24->setProperty("UpLabel", QVariant(QApplication::translate("B11", "TE", 0, QApplication::UnicodeUTF8)));
        WIndicatorTE_24->setProperty("DownLabel", QVariant(QApplication::translate("B11", "64 24", 0, QApplication::UnicodeUTF8)));
        WIndicatorTE_23->setId(QApplication::translate("B11", "p_Fix32_THISNODE_ALM_MSTR351_F_CV", 0, QApplication::UnicodeUTF8));
        WIndicatorTE_23->setProperty("UpLabel", QVariant(QApplication::translate("B11", "TE", 0, QApplication::UnicodeUTF8)));
        WIndicatorTE_23->setProperty("DownLabel", QVariant(QApplication::translate("B11", "64 23", 0, QApplication::UnicodeUTF8)));
        WIndicatorTE_22->setId(QApplication::translate("B11", "p_Fix32_THISNODE_ALM_MSTR369_F_CV", 0, QApplication::UnicodeUTF8));
        WIndicatorTE_22->setProperty("UpLabel", QVariant(QApplication::translate("B11", "TE", 0, QApplication::UnicodeUTF8)));
        WIndicatorTE_22->setProperty("DownLabel", QVariant(QApplication::translate("B11", "64 22", 0, QApplication::UnicodeUTF8)));
        WIndicatorTE_21->setId(QApplication::translate("B11", "p_Fix32_THISNODE_ALM_MSTR350_F_CV", 0, QApplication::UnicodeUTF8));
        WIndicatorTE_21->setProperty("UpLabel", QVariant(QApplication::translate("B11", "TE", 0, QApplication::UnicodeUTF8)));
        WIndicatorTE_21->setProperty("DownLabel", QVariant(QApplication::translate("B11", "64 21", 0, QApplication::UnicodeUTF8)));
        WIndicatorTE_25->setId(QApplication::translate("B11", "p_Fix32_THISNODE_ALM_MSTR364_F_CV", 0, QApplication::UnicodeUTF8));
        WIndicatorTE_25->setProperty("UpLabel", QVariant(QApplication::translate("B11", "TE", 0, QApplication::UnicodeUTF8)));
        WIndicatorTE_25->setProperty("DownLabel", QVariant(QApplication::translate("B11", "64 25", 0, QApplication::UnicodeUTF8)));
        WIndicatorTE_26->setId(QApplication::translate("B11", "p_Fix32_THISNODE_ALM_MSTR354_F_CV", 0, QApplication::UnicodeUTF8));
        WIndicatorTE_26->setProperty("UpLabel", QVariant(QApplication::translate("B11", "TE", 0, QApplication::UnicodeUTF8)));
        WIndicatorTE_26->setProperty("DownLabel", QVariant(QApplication::translate("B11", "64 26", 0, QApplication::UnicodeUTF8)));
        WIndicatorTE_30->setId(QApplication::translate("B11", "p_Fix32_THISNODE_ALM_MSTR345_F_CV", 0, QApplication::UnicodeUTF8));
        WIndicatorTE_30->setProperty("UpLabel", QVariant(QApplication::translate("B11", "TE", 0, QApplication::UnicodeUTF8)));
        WIndicatorTE_30->setProperty("DownLabel", QVariant(QApplication::translate("B11", "64 30", 0, QApplication::UnicodeUTF8)));
        WIndicadorMOT_13->setProperty("UpLabel", QVariant(QApplication::translate("B11", "MOT", 0, QApplication::UnicodeUTF8)));
        WIndicadorMOT_13->setProperty("DownLabel", QVariant(QApplication::translate("B11", "64 13", 0, QApplication::UnicodeUTF8)));
        WIndicadorMOT_16->setProperty("UpLabel", QVariant(QApplication::translate("B11", "MOT", 0, QApplication::UnicodeUTF8)));
        WIndicadorMOT_16->setProperty("DownLabel", QVariant(QApplication::translate("B11", "64 16", 0, QApplication::UnicodeUTF8)));
        WIndicadorFSL_10->setId(QApplication::translate("B11", "p_Fix32_THISNODE_ALM_MSTR062_F_CV", 0, QApplication::UnicodeUTF8));
        WIndicadorFSL_10->setProperty("UpLabel", QVariant(QApplication::translate("B11", "FSL", 0, QApplication::UnicodeUTF8)));
        WIndicadorFSL_10->setProperty("DownLabel", QVariant(QApplication::translate("B11", "64 10", 0, QApplication::UnicodeUTF8)));
        WIndicadorFSL_09->setId(QApplication::translate("B11", "p_Fix32_THISNODE_ALM_MSTR059_F_CV", 0, QApplication::UnicodeUTF8));
        WIndicadorFSL_09->setProperty("UpLabel", QVariant(QApplication::translate("B11", "FSL", 0, QApplication::UnicodeUTF8)));
        WIndicadorFSL_09->setProperty("DownLabel", QVariant(QApplication::translate("B11", "6409", 0, QApplication::UnicodeUTF8)));
        btnVenGEN->setText(QString());
        lbVenGEN->setText(QApplication::translate("B11", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Verdana'; font-size:8pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ffffff;\">SELECCI\303\223N DEL VENTILADOR DEL GEN</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lbVenESP_1->setText(QApplication::translate("B11", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Verdana'; font-size:8pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ffffff;\">VENTILADOR A EN ESPERA</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lbVenSER_1->setText(QApplication::translate("B11", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Verdana'; font-size:8pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#e2e21a;\">VENTILADOR B EN SERVICIO</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lbVen_1->setText(QApplication::translate("B11", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Verdana'; font-size:8pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ffffff;\">HRS OP</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lbSER_1->setText(QApplication::translate("B11", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Verdana'; font-size:8pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ffffff;\">HRS OP</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lbVenU_2->setText(QApplication::translate("B11", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Verdana'; font-size:8pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ffffff;\">5717 :5</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lbSERU_1->setText(QApplication::translate("B11", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Verdana'; font-size:8pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ffffff;\">5671 :5</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        WIndicatorPDSL_07->setId(QApplication::translate("B11", "p_Fix32_THISNODE_ALM_MSTR142_F_CV", 0, QApplication::UnicodeUTF8));
        WIndicatorPDSL_07->setProperty("UpLabel", QVariant(QApplication::translate("B11", "PDSL", 0, QApplication::UnicodeUTF8)));
        WIndicatorPDSL_07->setProperty("DownLabel", QVariant(QApplication::translate("B11", "64 07", 0, QApplication::UnicodeUTF8)));
        WIndicadorHE_50->setProperty("UpLabel", QVariant(QApplication::translate("B11", "HE", 0, QApplication::UnicodeUTF8)));
        WIndicadorHE_50->setProperty("DownLabel", QVariant(QApplication::translate("B11", "64050", 0, QApplication::UnicodeUTF8)));
        WIndicadorHE_3->setProperty("UpLabel", QVariant(QApplication::translate("B11", "HE", 0, QApplication::UnicodeUTF8)));
        WIndicadorHE_3->setProperty("DownLabel", QVariant(QApplication::translate("B11", "6892/3", 0, QApplication::UnicodeUTF8)));
        WIndicatorTE_31->setId(QApplication::translate("B11", "p_Fix32_THISNODE_ALM_MSTR356_F_CV", 0, QApplication::UnicodeUTF8));
        WIndicatorTE_31->setProperty("UpLabel", QVariant(QApplication::translate("B11", "TE", 0, QApplication::UnicodeUTF8)));
        WIndicatorTE_31->setProperty("DownLabel", QVariant(QApplication::translate("B11", "6431", 0, QApplication::UnicodeUTF8)));
        WIndicadorHE_51->setProperty("UpLabel", QVariant(QApplication::translate("B11", "HE", 0, QApplication::UnicodeUTF8)));
        WIndicadorHE_51->setProperty("DownLabel", QVariant(QApplication::translate("B11", "64051", 0, QApplication::UnicodeUTF8)));
        WIndicatorTE_2->setId(QApplication::translate("B11", "p_Fix32_THISNODE_ALM_MSTR324_F_CV", 0, QApplication::UnicodeUTF8));
        WIndicatorTE_2->setProperty("UpLabel", QVariant(QApplication::translate("B11", "TE", 0, QApplication::UnicodeUTF8)));
        WIndicatorTE_2->setProperty("DownLabel", QVariant(QApplication::translate("B11", "6402", 0, QApplication::UnicodeUTF8)));
        lbGen_1->setText(QApplication::translate("B11", "0.00", 0, QApplication::UnicodeUTF8));
        lbGenT->setText(QApplication::translate("B11", "GENERADOR", 0, QApplication::UnicodeUTF8));
        lbGen_2->setText(QApplication::translate("B11", "0.00", 0, QApplication::UnicodeUTF8));
        lbGen_3->setText(QApplication::translate("B11", "0.00", 0, QApplication::UnicodeUTF8));
        lbGenU_1->setText(QApplication::translate("B11", "MW", 0, QApplication::UnicodeUTF8));
        lbGenU_2->setText(QApplication::translate("B11", "MVAR", 0, QApplication::UnicodeUTF8));
        lbGenU_3->setText(QApplication::translate("B11", "FP", 0, QApplication::UnicodeUTF8));
        lbGenT_2->setText(QApplication::translate("B11", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Verdana'; font-size:9pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">  SALIDA DE </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">VENTILACI\303\223N</p></body></html>", 0, QApplication::UnicodeUTF8));
        lbTem_1->setText(QApplication::translate("B11", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Verdana'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ffffff;\">99 \302\272F</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lbTem_2->setText(QApplication::translate("B11", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Verdana'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ffffff;\">125 \302\272F</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lbTem_3->setText(QApplication::translate("B11", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Verdana'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ffffff;\">125 \302\272F</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lbTem_4->setText(QApplication::translate("B11", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Verdana'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ffffff;\">125 \302\272F</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lbTem_5->setText(QApplication::translate("B11", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Verdana'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ffffff;\">125 \302\272F</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lbTem_6->setText(QApplication::translate("B11", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Verdana'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ffffff;\">127 \302\272F</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lbTem_7->setText(QApplication::translate("B11", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Verdana'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ffffff;\">125 \302\272F</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lbTem_8->setText(QApplication::translate("B11", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Verdana'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ffffff;\">90 \302\272F</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lbTem_9->setText(QApplication::translate("B11", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Verdana'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ffffff;\">82 \302\272F</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lbTem_10->setText(QApplication::translate("B11", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Verdana'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; color:#ffffff;\">SALA DE</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; color:#ffffff;\">LA TURB</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        btnImpPANT->setText(QApplication::translate("B11", "IMP PANT", 0, QApplication::UnicodeUTF8));
        lbUniT3->setText(QApplication::translate("B11", "UNIT3", 0, QApplication::UnicodeUTF8));
        lbGenT_3->setText(QApplication::translate("B11", "EXCITADOR", 0, QApplication::UnicodeUTF8));
        commandLinkButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class B11: public Ui_B11 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_B11_H
