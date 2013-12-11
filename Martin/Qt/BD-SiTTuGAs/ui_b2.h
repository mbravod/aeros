/********************************************************************************
** Form generated from reading UI file 'b2.ui'
**
** Created: Tue 10. Dec 18:43:55 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_B2_H
#define UI_B2_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>
#include "ainstrumentindicator.h"
#include "awmultiobject.h"
#include "wlabel.h"

QT_BEGIN_NAMESPACE

class Ui_B2
{
public:
    QLabel *lbBack;
    AWMultiObject *bombaAlj;
    AInstrumentIndicator *indBomAlj;
    AInstrumentIndicator *ind95F;
    AInstrumentIndicator *ind20Psig;
    AInstrumentIndicator *ind77f;
    AInstrumentIndicator *ind93f;
    AInstrumentIndicator *ind0_4psig;
    AInstrumentIndicator *ind1_7psig;
    AInstrumentIndicator *indCierGraD;
    AInstrumentIndicator *ind97f;
    AInstrumentIndicator *indExtImp101f;
    AInstrumentIndicator *indExtImp95f;
    AInstrumentIndicator *ind87f;
    AInstrumentIndicator *indCierGraI;
    WLabel *lbSumAceT;
    WLabel *lbPsigU;
    WLabel *lbUnidad;
    WLabel *lbCierGraIT;
    WLabel *lbCierGraDT;
    WLabel *lbDesFluT;
    WLabel *lbDesAceT;
    WLabel *lbBomAljT;
    WLabel *lbExtImp95fT;
    WLabel *lbExtExc101fT;
    WLabel *lbGenT;
    WLabel *lbGenU;
    WLabel *lbGen;
    WLabel *lbUnit3;
    QPushButton *btnIMPPant;
    QProgressBar *pgr_2;
    QProgressBar *pgr_1;
    WLabel *lbPsig;
    WLabel *lbVal;
    WLabel *lbUnidad_2;
    WLabel *lbVal_2;
    WLabel *lbUnidad_3;
    WLabel *lbVal_3;
    WLabel *lbUnidad_4;
    WLabel *lbVal_4;
    WLabel *lbUnidad_5;
    WLabel *lbVal_5;
    WLabel *lbUnidad_6;
    WLabel *lbVal_6;
    WLabel *lbUnidad_7;
    WLabel *lbVal_7;
    WLabel *lbUnidad_8;
    WLabel *lbVal_8;
    WLabel *lbUnidad_9;
    WLabel *lbVal_9;
    WLabel *lbUnidad_10;
    WLabel *lbVal_10;

    void setupUi(QWidget *B2)
    {
        if (B2->objectName().isEmpty())
            B2->setObjectName(QString::fromUtf8("B2"));
        B2->resize(1024, 662);
        B2->setMinimumSize(QSize(1024, 662));
        B2->setMaximumSize(QSize(1024, 662));
        B2->setStyleSheet(QString::fromUtf8(""));
        lbBack = new QLabel(B2);
        lbBack->setObjectName(QString::fromUtf8("lbBack"));
        lbBack->setGeometry(QRect(0, 0, 1024, 662));
        lbBack->setMinimumSize(QSize(1024, 662));
        lbBack->setMaximumSize(QSize(1024, 662));
        lbBack->setPixmap(QPixmap(QString::fromUtf8(":/Resources/PNG/B2.png")));
        bombaAlj = new AWMultiObject(B2);
        bombaAlj->setObjectName(QString::fromUtf8("bombaAlj"));
        bombaAlj->setGeometry(QRect(216, 454, 111, 81));
        bombaAlj->setElementType(AWMultiObject::BOMBATD);
        bombaAlj->setOnColor(AWMultiObject::Green);
        bombaAlj->setProperty("Value", QVariant(1));
        indBomAlj = new AInstrumentIndicator(B2);
        indBomAlj->setObjectName(QString::fromUtf8("indBomAlj"));
        indBomAlj->setGeometry(QRect(240, 413, 61, 61));
        indBomAlj->setValue(-1);
        indBomAlj->setOrientation(AWMultEstateWidget::Degree90);
        indBomAlj->setProperty("Value", QVariant(2));
        ind95F = new AInstrumentIndicator(B2);
        ind95F->setObjectName(QString::fromUtf8("ind95F"));
        ind95F->setGeometry(QRect(466, 330, 61, 61));
        ind95F->setIntID(-1);
        ind95F->setProperty("isUpdateable", QVariant(false));
        ind95F->setValue(-1);
        ind95F->setOrientation(AWMultEstateWidget::Degree0);
        ind95F->setProperty("LineAngle", QVariant(118));
        ind95F->setProperty("Value", QVariant(2));
        ind20Psig = new AInstrumentIndicator(B2);
        ind20Psig->setObjectName(QString::fromUtf8("ind20Psig"));
        ind20Psig->setGeometry(QRect(205, 138, 61, 61));
        ind20Psig->setValue(-1);
        ind20Psig->setOrientation(AWMultEstateWidget::Degree180);
        ind20Psig->setProperty("Value", QVariant(2));
        ind77f = new AInstrumentIndicator(B2);
        ind77f->setObjectName(QString::fromUtf8("ind77f"));
        ind77f->setGeometry(QRect(442, 119, 61, 61));
        ind77f->setValue(-1);
        ind77f->setOrientation(AWMultEstateWidget::Degree0);
        ind77f->setProperty("Value", QVariant(2));
        ind93f = new AInstrumentIndicator(B2);
        ind93f->setObjectName(QString::fromUtf8("ind93f"));
        ind93f->setGeometry(QRect(472, 510, 61, 61));
        ind93f->setIntID(-1);
        ind93f->setProperty("isUpdateable", QVariant(false));
        ind93f->setValue(-1);
        ind93f->setOrientation(AWMultEstateWidget::Degree0);
        ind93f->setProperty("LineAngle", QVariant(-111));
        ind93f->setProperty("Value", QVariant(2));
        ind0_4psig = new AInstrumentIndicator(B2);
        ind0_4psig->setObjectName(QString::fromUtf8("ind0_4psig"));
        ind0_4psig->setGeometry(QRect(618, 60, 61, 61));
        ind0_4psig->setValue(-1);
        ind0_4psig->setOrientation(AWMultEstateWidget::Degree90);
        ind0_4psig->setProperty("Value", QVariant(2));
        ind1_7psig = new AInstrumentIndicator(B2);
        ind1_7psig->setObjectName(QString::fromUtf8("ind1_7psig"));
        ind1_7psig->setGeometry(QRect(698, 60, 61, 61));
        ind1_7psig->setValue(-1);
        ind1_7psig->setOrientation(AWMultEstateWidget::Degree90);
        ind1_7psig->setProperty("Value", QVariant(2));
        indCierGraD = new AInstrumentIndicator(B2);
        indCierGraD->setObjectName(QString::fromUtf8("indCierGraD"));
        indCierGraD->setGeometry(QRect(687, 193, 61, 61));
        indCierGraD->setValue(-1);
        indCierGraD->setOrientation(AWMultEstateWidget::Degree90);
        indCierGraD->setProperty("Value", QVariant(2));
        ind97f = new AInstrumentIndicator(B2);
        ind97f->setObjectName(QString::fromUtf8("ind97f"));
        ind97f->setGeometry(QRect(637, 510, 61, 61));
        ind97f->setIntID(-1);
        ind97f->setProperty("isUpdateable", QVariant(false));
        ind97f->setValue(-1);
        ind97f->setOrientation(AWMultEstateWidget::Degree180);
        ind97f->setProperty("LineAngle", QVariant(0));
        ind97f->setProperty("Value", QVariant(2));
        indExtImp101f = new AInstrumentIndicator(B2);
        indExtImp101f->setObjectName(QString::fromUtf8("indExtImp101f"));
        indExtImp101f->setGeometry(QRect(668, 423, 61, 61));
        indExtImp101f->setIntID(-1);
        indExtImp101f->setProperty("isUpdateable", QVariant(false));
        indExtImp101f->setValue(-1);
        indExtImp101f->setOrientation(AWMultEstateWidget::Degree180);
        indExtImp101f->setProperty("LineAngle", QVariant(1));
        indExtImp101f->setProperty("Value", QVariant(2));
        indExtImp95f = new AInstrumentIndicator(B2);
        indExtImp95f->setObjectName(QString::fromUtf8("indExtImp95f"));
        indExtImp95f->setGeometry(QRect(355, 423, 61, 61));
        indExtImp95f->setIntID(-1);
        indExtImp95f->setProperty("isUpdateable", QVariant(false));
        indExtImp95f->setValue(-1);
        indExtImp95f->setOrientation(AWMultEstateWidget::Degree0);
        indExtImp95f->setProperty("LineAngle", QVariant(1));
        indExtImp95f->setProperty("Value", QVariant(2));
        ind87f = new AInstrumentIndicator(B2);
        ind87f->setObjectName(QString::fromUtf8("ind87f"));
        ind87f->setGeometry(QRect(375, 511, 61, 61));
        ind87f->setIntID(-1);
        ind87f->setProperty("isUpdateable", QVariant(false));
        ind87f->setValue(-1);
        ind87f->setOrientation(AWMultEstateWidget::Degree0);
        ind87f->setProperty("LineAngle", QVariant(0));
        ind87f->setProperty("Value", QVariant(2));
        indCierGraI = new AInstrumentIndicator(B2);
        indCierGraI->setObjectName(QString::fromUtf8("indCierGraI"));
        indCierGraI->setGeometry(QRect(385, 194, 61, 61));
        indCierGraI->setValue(-1);
        indCierGraI->setOrientation(AWMultEstateWidget::Degree90);
        indCierGraI->setProperty("Value", QVariant(2));
        lbSumAceT = new WLabel(B2);
        lbSumAceT->setObjectName(QString::fromUtf8("lbSumAceT"));
        lbSumAceT->setGeometry(QRect(115, 51, 191, 16));
        lbSumAceT->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        lbSumAceT->setFont(font);
        lbSumAceT->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbPsigU = new WLabel(B2);
        lbPsigU->setObjectName(QString::fromUtf8("lbPsigU"));
        lbPsigU->setGeometry(QRect(220, 132, 41, 16));
        lbPsigU->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbPsigU->setFont(font);
        lbPsigU->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbUnidad = new WLabel(B2);
        lbUnidad->setObjectName(QString::fromUtf8("lbUnidad"));
        lbUnidad->setGeometry(QRect(459, 110, 31, 16));
        lbUnidad->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbUnidad->setFont(font);
        lbUnidad->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbCierGraIT = new WLabel(B2);
        lbCierGraIT->setObjectName(QString::fromUtf8("lbCierGraIT"));
        lbCierGraIT->setGeometry(QRect(289, 209, 111, 41));
        lbCierGraIT->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbCierGraIT->setFont(font);
        lbCierGraIT->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbCierGraDT = new WLabel(B2);
        lbCierGraDT->setObjectName(QString::fromUtf8("lbCierGraDT"));
        lbCierGraDT->setGeometry(QRect(737, 209, 111, 41));
        lbCierGraDT->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbCierGraDT->setFont(font);
        lbCierGraDT->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbDesFluT = new WLabel(B2);
        lbDesFluT->setObjectName(QString::fromUtf8("lbDesFluT"));
        lbDesFluT->setGeometry(QRect(115, 504, 161, 41));
        lbDesFluT->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        lbDesFluT->setFont(font1);
        lbDesFluT->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbDesAceT = new WLabel(B2);
        lbDesAceT->setObjectName(QString::fromUtf8("lbDesAceT"));
        lbDesAceT->setGeometry(QRect(114, 565, 221, 21));
        lbDesAceT->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbDesAceT->setFont(font1);
        lbDesAceT->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbBomAljT = new WLabel(B2);
        lbBomAljT->setObjectName(QString::fromUtf8("lbBomAljT"));
        lbBomAljT->setGeometry(QRect(209, 412, 111, 16));
        lbBomAljT->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbBomAljT->setFont(font);
        lbBomAljT->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbExtImp95fT = new WLabel(B2);
        lbExtImp95fT->setObjectName(QString::fromUtf8("lbExtImp95fT"));
        lbExtImp95fT->setGeometry(QRect(300, 390, 121, 31));
        lbExtImp95fT->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbExtImp95fT->setFont(font);
        lbExtImp95fT->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbExtExc101fT = new WLabel(B2);
        lbExtExc101fT->setObjectName(QString::fromUtf8("lbExtExc101fT"));
        lbExtExc101fT->setGeometry(QRect(646, 379, 121, 41));
        lbExtExc101fT->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbExtExc101fT->setFont(font);
        lbExtExc101fT->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbGenT = new WLabel(B2);
        lbGenT->setObjectName(QString::fromUtf8("lbGenT"));
        lbGenT->setGeometry(QRect(489, 440, 91, 16));
        lbGenT->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
""));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        lbGenT->setFont(font2);
        lbGenT->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbGenU = new WLabel(B2);
        lbGenU->setObjectName(QString::fromUtf8("lbGenU"));
        lbGenU->setGeometry(QRect(536, 458, 31, 16));
        lbGenU->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
""));
        lbGenU->setFont(font2);
        lbGenU->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbGen = new WLabel(B2);
        lbGen->setObjectName(QString::fromUtf8("lbGen"));
        lbGen->setGeometry(QRect(486, 457, 51, 16));
        lbGen->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
""));
        lbGen->setFont(font2);
        lbGen->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbUnit3 = new WLabel(B2);
        lbUnit3->setObjectName(QString::fromUtf8("lbUnit3"));
        lbUnit3->setGeometry(QRect(833, 647, 190, 15));
        lbUnit3->setStyleSheet(QString::fromUtf8("background-color: rgb(175, 175, 175);"));
        lbUnit3->setFont(font);
        lbUnit3->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        btnIMPPant = new QPushButton(B2);
        btnIMPPant->setObjectName(QString::fromUtf8("btnIMPPant"));
        btnIMPPant->setGeometry(QRect(10, 632, 134, 23));
        QFont font3;
        font3.setPointSize(8);
        font3.setBold(true);
        font3.setWeight(75);
        btnIMPPant->setFont(font3);
        btnIMPPant->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        pgr_2 = new QProgressBar(B2);
        pgr_2->setObjectName(QString::fromUtf8("pgr_2"));
        pgr_2->setGeometry(QRect(704, 270, 31, 61));
        pgr_2->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
" border: 1px solid black;\n"
" padding: 0px;\n"
" background: rgb(215, 215, 215);\n"
" }\n"
"\n"
"QProgressBar::chunk {\n"
" background: rgb(170, 54, 0);\n"
" border: 0px solid black;\n"
" }"));
        pgr_2->setValue(24);
        pgr_2->setTextVisible(false);
        pgr_2->setOrientation(Qt::Vertical);
        pgr_1 = new QProgressBar(B2);
        pgr_1->setObjectName(QString::fromUtf8("pgr_1"));
        pgr_1->setGeometry(QRect(400, 270, 31, 61));
        pgr_1->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
" border: 1px solid black;\n"
" padding: 0px;\n"
" background: rgb(215, 215, 215);\n"
" }\n"
"\n"
"QProgressBar::chunk {\n"
" background: rgb(170, 54, 0);\n"
" border: 0px solid black;\n"
" }"));
        pgr_1->setValue(24);
        pgr_1->setTextVisible(false);
        pgr_1->setOrientation(Qt::Vertical);
        lbPsig = new WLabel(B2);
        lbPsig->setObjectName(QString::fromUtf8("lbPsig"));
        lbPsig->setGeometry(QRect(180, 132, 31, 16));
        lbPsig->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbPsig->setFont(font);
        lbPsig->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbVal = new WLabel(B2);
        lbVal->setObjectName(QString::fromUtf8("lbVal"));
        lbVal->setGeometry(QRect(420, 110, 41, 16));
        lbVal->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbVal->setFont(font);
        lbVal->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbUnidad_2 = new WLabel(B2);
        lbUnidad_2->setObjectName(QString::fromUtf8("lbUnidad_2"));
        lbUnidad_2->setGeometry(QRect(490, 320, 31, 16));
        lbUnidad_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbUnidad_2->setFont(font);
        lbUnidad_2->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbVal_2 = new WLabel(B2);
        lbVal_2->setObjectName(QString::fromUtf8("lbVal_2"));
        lbVal_2->setGeometry(QRect(451, 320, 41, 16));
        lbVal_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbVal_2->setFont(font);
        lbVal_2->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbUnidad_3 = new WLabel(B2);
        lbUnidad_3->setObjectName(QString::fromUtf8("lbUnidad_3"));
        lbUnidad_3->setGeometry(QRect(390, 420, 31, 16));
        lbUnidad_3->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbUnidad_3->setFont(font);
        lbUnidad_3->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbVal_3 = new WLabel(B2);
        lbVal_3->setObjectName(QString::fromUtf8("lbVal_3"));
        lbVal_3->setGeometry(QRect(351, 420, 41, 16));
        lbVal_3->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbVal_3->setFont(font);
        lbVal_3->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbUnidad_4 = new WLabel(B2);
        lbUnidad_4->setObjectName(QString::fromUtf8("lbUnidad_4"));
        lbUnidad_4->setGeometry(QRect(410, 510, 31, 16));
        lbUnidad_4->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbUnidad_4->setFont(font);
        lbUnidad_4->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbVal_4 = new WLabel(B2);
        lbVal_4->setObjectName(QString::fromUtf8("lbVal_4"));
        lbVal_4->setGeometry(QRect(371, 510, 41, 16));
        lbVal_4->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbVal_4->setFont(font);
        lbVal_4->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbUnidad_5 = new WLabel(B2);
        lbUnidad_5->setObjectName(QString::fromUtf8("lbUnidad_5"));
        lbUnidad_5->setGeometry(QRect(560, 530, 31, 16));
        lbUnidad_5->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbUnidad_5->setFont(font);
        lbUnidad_5->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbVal_5 = new WLabel(B2);
        lbVal_5->setObjectName(QString::fromUtf8("lbVal_5"));
        lbVal_5->setGeometry(QRect(521, 530, 41, 16));
        lbVal_5->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbVal_5->setFont(font);
        lbVal_5->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbUnidad_6 = new WLabel(B2);
        lbUnidad_6->setObjectName(QString::fromUtf8("lbUnidad_6"));
        lbUnidad_6->setGeometry(QRect(670, 500, 31, 16));
        lbUnidad_6->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbUnidad_6->setFont(font);
        lbUnidad_6->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbVal_6 = new WLabel(B2);
        lbVal_6->setObjectName(QString::fromUtf8("lbVal_6"));
        lbVal_6->setGeometry(QRect(631, 500, 41, 16));
        lbVal_6->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbVal_6->setFont(font);
        lbVal_6->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbUnidad_7 = new WLabel(B2);
        lbUnidad_7->setObjectName(QString::fromUtf8("lbUnidad_7"));
        lbUnidad_7->setGeometry(QRect(700, 410, 31, 16));
        lbUnidad_7->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbUnidad_7->setFont(font);
        lbUnidad_7->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbVal_7 = new WLabel(B2);
        lbVal_7->setObjectName(QString::fromUtf8("lbVal_7"));
        lbVal_7->setGeometry(QRect(661, 410, 41, 16));
        lbVal_7->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbVal_7->setFont(font);
        lbVal_7->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbUnidad_8 = new WLabel(B2);
        lbUnidad_8->setObjectName(QString::fromUtf8("lbUnidad_8"));
        lbUnidad_8->setGeometry(QRect(700, 40, 31, 16));
        lbUnidad_8->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbUnidad_8->setFont(font);
        lbUnidad_8->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbVal_8 = new WLabel(B2);
        lbVal_8->setObjectName(QString::fromUtf8("lbVal_8"));
        lbVal_8->setGeometry(QRect(650, 40, 41, 16));
        lbVal_8->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbVal_8->setFont(font);
        lbVal_8->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbUnidad_9 = new WLabel(B2);
        lbUnidad_9->setObjectName(QString::fromUtf8("lbUnidad_9"));
        lbUnidad_9->setGeometry(QRect(650, 54, 31, 16));
        lbUnidad_9->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbUnidad_9->setFont(font);
        lbUnidad_9->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbVal_9 = new WLabel(B2);
        lbVal_9->setObjectName(QString::fromUtf8("lbVal_9"));
        lbVal_9->setGeometry(QRect(600, 54, 41, 16));
        lbVal_9->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbVal_9->setFont(font);
        lbVal_9->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbUnidad_10 = new WLabel(B2);
        lbUnidad_10->setObjectName(QString::fromUtf8("lbUnidad_10"));
        lbUnidad_10->setGeometry(QRect(740, 54, 31, 16));
        lbUnidad_10->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbUnidad_10->setFont(font);
        lbUnidad_10->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbVal_10 = new WLabel(B2);
        lbVal_10->setObjectName(QString::fromUtf8("lbVal_10"));
        lbVal_10->setGeometry(QRect(690, 54, 41, 16));
        lbVal_10->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbVal_10->setFont(font);
        lbVal_10->setProperty("Alineacion", QVariant(WLabel::Centro));

        retranslateUi(B2);

        QMetaObject::connectSlotsByName(B2);
    } // setupUi

    void retranslateUi(QWidget *B2)
    {
        B2->setWindowTitle(QApplication::translate("B2", "Form", 0, QApplication::UnicodeUTF8));
        lbBack->setText(QString());
        indBomAlj->setProperty("UpLabel", QVariant(QApplication::translate("B2", "MOT", 0, QApplication::UnicodeUTF8)));
        indBomAlj->setProperty("DownLabel", QVariant(QApplication::translate("B2", "6031", 0, QApplication::UnicodeUTF8)));
        ind95F->setId(QApplication::translate("B2", "p_Fix32_THISNODE_ALM_MSTR389_F_CV", 0, QApplication::UnicodeUTF8));
        ind95F->setProperty("UpLabel", QVariant(QApplication::translate("B2", "TE", 0, QApplication::UnicodeUTF8)));
        ind95F->setProperty("DownLabel", QVariant(QApplication::translate("B2", "6056", 0, QApplication::UnicodeUTF8)));
        ind20Psig->setId(QApplication::translate("B2", "p_Fix32_THISNODE_ALM_MSTR133_F_CV", 0, QApplication::UnicodeUTF8));
        ind20Psig->setProperty("UpLabel", QVariant(QApplication::translate("B2", "PT", 0, QApplication::UnicodeUTF8)));
        ind20Psig->setProperty("DownLabel", QVariant(QApplication::translate("B2", "60021", 0, QApplication::UnicodeUTF8)));
        ind77f->setId(QApplication::translate("B2", "p_Fix32_THISNODE_ALM_MSTR306_F_CV", 0, QApplication::UnicodeUTF8));
        ind77f->setProperty("UpLabel", QVariant(QApplication::translate("B2", "TE", 0, QApplication::UnicodeUTF8)));
        ind77f->setProperty("DownLabel", QVariant(QApplication::translate("B2", "6025", 0, QApplication::UnicodeUTF8)));
        ind93f->setId(QApplication::translate("B2", "p_Fix32_THISNODE_ALM_MSTR390_F_CV", 0, QApplication::UnicodeUTF8));
        ind93f->setProperty("UpLabel", QVariant(QApplication::translate("B2", "TE", 0, QApplication::UnicodeUTF8)));
        ind93f->setProperty("DownLabel", QVariant(QApplication::translate("B2", "6057", 0, QApplication::UnicodeUTF8)));
        ind0_4psig->setId(QApplication::translate("B2", "P_Fix32_THISNODE_ALM_MSTR287_F_CV", 0, QApplication::UnicodeUTF8));
        ind0_4psig->setProperty("UpLabel", QVariant(QApplication::translate("B2", "PT", 0, QApplication::UnicodeUTF8)));
        ind0_4psig->setProperty("DownLabel", QVariant(QApplication::translate("B2", "6026A", 0, QApplication::UnicodeUTF8)));
        ind1_7psig->setId(QApplication::translate("B2", "p_Fix32_THISNODE_ALM_MSTR236_F_CV", 0, QApplication::UnicodeUTF8));
        ind1_7psig->setProperty("UpLabel", QVariant(QApplication::translate("B2", "PT", 0, QApplication::UnicodeUTF8)));
        ind1_7psig->setProperty("DownLabel", QVariant(QApplication::translate("B2", "6026B", 0, QApplication::UnicodeUTF8)));
        indCierGraD->setId(QApplication::translate("B2", "p_Fix32_THISNODE_ALM_MSTR231_F_CV", 0, QApplication::UnicodeUTF8));
        indCierGraD->setProperty("UpLabel", QVariant(QApplication::translate("B2", "LS", 0, QApplication::UnicodeUTF8)));
        indCierGraD->setProperty("DownLabel", QVariant(QApplication::translate("B2", "6042", 0, QApplication::UnicodeUTF8)));
        ind97f->setId(QApplication::translate("B2", "p_Fix32_THISNODE_ALM_MSTR314_F_CV", 0, QApplication::UnicodeUTF8));
        ind97f->setProperty("UpLabel", QVariant(QApplication::translate("B2", "TE", 0, QApplication::UnicodeUTF8)));
        ind97f->setProperty("DownLabel", QVariant(QApplication::translate("B2", "6035", 0, QApplication::UnicodeUTF8)));
        indExtImp101f->setId(QApplication::translate("B2", "p_Fix32_THISNODE_ALM_MSTR020_F_CV", 0, QApplication::UnicodeUTF8));
        indExtImp101f->setProperty("UpLabel", QVariant(QApplication::translate("B2", "TE", 0, QApplication::UnicodeUTF8)));
        indExtImp101f->setProperty("DownLabel", QVariant(QApplication::translate("B2", "6023", 0, QApplication::UnicodeUTF8)));
        indExtImp95f->setId(QApplication::translate("B2", "p_Fix32_THISNODE_ALM_MSTR075_F_CV", 0, QApplication::UnicodeUTF8));
        indExtImp95f->setProperty("UpLabel", QVariant(QApplication::translate("B2", "TE", 0, QApplication::UnicodeUTF8)));
        indExtImp95f->setProperty("DownLabel", QVariant(QApplication::translate("B2", "6021", 0, QApplication::UnicodeUTF8)));
        ind87f->setId(QApplication::translate("B2", "p_Fix32_THISNODE_ALM_MSTR315_F_CV", 0, QApplication::UnicodeUTF8));
        ind87f->setProperty("UpLabel", QVariant(QApplication::translate("B2", "TE", 0, QApplication::UnicodeUTF8)));
        ind87f->setProperty("DownLabel", QVariant(QApplication::translate("B2", "6036", 0, QApplication::UnicodeUTF8)));
        indCierGraI->setId(QApplication::translate("B2", "p_Fix32_THISNODE_ALM_MSTR230_F_CV", 0, QApplication::UnicodeUTF8));
        indCierGraI->setProperty("UpLabel", QVariant(QApplication::translate("B2", "LS", 0, QApplication::UnicodeUTF8)));
        indCierGraI->setProperty("DownLabel", QVariant(QApplication::translate("B2", "6041", 0, QApplication::UnicodeUTF8)));
        lbSumAceT->setText(QApplication::translate("B2", "SUMINISTRO ACEITE  LUB", 0, QApplication::UnicodeUTF8));
        lbPsigU->setText(QApplication::translate("B2", "PSIG", 0, QApplication::UnicodeUTF8));
        lbUnidad->setText(QApplication::translate("B2", "\302\260F", 0, QApplication::UnicodeUTF8));
        lbCierGraIT->setText(QApplication::translate("B2", "CIERRE GRADUAL \n"
" TANQUES", 0, QApplication::UnicodeUTF8));
        lbCierGraDT->setText(QApplication::translate("B2", "CIERRE GRADUAL \n"
" TANQUES", 0, QApplication::UnicodeUTF8));
        lbDesFluT->setText(QApplication::translate("B2", "DESAG\303\234ES\n"
"P/FLUIDO DE ELEVACI\303\223N", 0, QApplication::UnicodeUTF8));
        lbDesAceT->setText(QApplication::translate("B2", "DESAG\303\234E ACEITE DEL GENERADOR", 0, QApplication::UnicodeUTF8));
        lbBomAljT->setText(QApplication::translate("B2", "BOMBA DE ALJIBE", 0, QApplication::UnicodeUTF8));
        lbExtImp95fT->setText(QApplication::translate("B2", "EXTREMO IMPULSOR", 0, QApplication::UnicodeUTF8));
        lbExtExc101fT->setText(QApplication::translate("B2", "EXTREMO  EXCITADOR", 0, QApplication::UnicodeUTF8));
        lbGenT->setText(QApplication::translate("B2", "GENERADOR", 0, QApplication::UnicodeUTF8));
        lbGenU->setText(QApplication::translate("B2", "MW", 0, QApplication::UnicodeUTF8));
        lbGen->setText(QApplication::translate("B2", "0.0", 0, QApplication::UnicodeUTF8));
        lbUnit3->setText(QApplication::translate("B2", "    UNIT3", 0, QApplication::UnicodeUTF8));
        btnIMPPant->setText(QApplication::translate("B2", "IMP PANT", 0, QApplication::UnicodeUTF8));
        lbPsig->setText(QApplication::translate("B2", "20", 0, QApplication::UnicodeUTF8));
        lbVal->setText(QApplication::translate("B2", "77", 0, QApplication::UnicodeUTF8));
        lbUnidad_2->setText(QApplication::translate("B2", "\302\260F", 0, QApplication::UnicodeUTF8));
        lbVal_2->setText(QApplication::translate("B2", "77", 0, QApplication::UnicodeUTF8));
        lbUnidad_3->setText(QApplication::translate("B2", "\302\260F", 0, QApplication::UnicodeUTF8));
        lbVal_3->setText(QApplication::translate("B2", "77", 0, QApplication::UnicodeUTF8));
        lbUnidad_4->setText(QApplication::translate("B2", "\302\260F", 0, QApplication::UnicodeUTF8));
        lbVal_4->setText(QApplication::translate("B2", "77", 0, QApplication::UnicodeUTF8));
        lbUnidad_5->setText(QApplication::translate("B2", "\302\260F", 0, QApplication::UnicodeUTF8));
        lbVal_5->setText(QApplication::translate("B2", "77", 0, QApplication::UnicodeUTF8));
        lbUnidad_6->setText(QApplication::translate("B2", "\302\260F", 0, QApplication::UnicodeUTF8));
        lbVal_6->setText(QApplication::translate("B2", "77", 0, QApplication::UnicodeUTF8));
        lbUnidad_7->setText(QApplication::translate("B2", "\302\260F", 0, QApplication::UnicodeUTF8));
        lbVal_7->setText(QApplication::translate("B2", "77", 0, QApplication::UnicodeUTF8));
        lbUnidad_8->setText(QApplication::translate("B2", "PSIG", 0, QApplication::UnicodeUTF8));
        lbVal_8->setText(QApplication::translate("B2", "77", 0, QApplication::UnicodeUTF8));
        lbUnidad_9->setText(QApplication::translate("B2", "PSIG", 0, QApplication::UnicodeUTF8));
        lbVal_9->setText(QApplication::translate("B2", "77", 0, QApplication::UnicodeUTF8));
        lbUnidad_10->setText(QApplication::translate("B2", "PSIG", 0, QApplication::UnicodeUTF8));
        lbVal_10->setText(QApplication::translate("B2", "77", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class B2: public Ui_B2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_B2_H
