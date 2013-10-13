/********************************************************************************
** Form generated from reading UI file 'b2.ui'
**
** Created: Sat 12. Oct 21:51:18 2013
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
    QLabel *lbSumAceT;
    QLabel *lbPsigT;
    QLabel *lb77fT;
    QLabel *lb0_4psigT;
    QLabel *lb1_0PsigT;
    QLabel *lb1_7psigT;
    QLabel *lbCierGraIT;
    QLabel *lbCierGraDT;
    QLabel *lb95FT;
    QLabel *lbDesFluT;
    QLabel *lbDesAceT;
    QLabel *lbBomAljT;
    QLabel *lbExtImp95fT;
    QLabel *lb87fT;
    QLabel *lb93fT;
    QLabel *lb97f;
    QLabel *lbExtExc101fT;
    QLabel *lbGenT;
    QLabel *lbGenU;
    QLabel *lbGen;
    QLabel *lbFlech_1;
    QLabel *lbFlech_2;
    QLabel *lbUnit3;
    QPushButton *btnIMPPant;
    QProgressBar *pgr_2;
    QProgressBar *pgr_1;

    void setupUi(QWidget *B2)
    {
        if (B2->objectName().isEmpty())
            B2->setObjectName(QString::fromUtf8("B2"));
        B2->resize(1024, 662);
        B2->setMinimumSize(QSize(1024, 662));
        B2->setMaximumSize(QSize(1024, 662));
        lbBack = new QLabel(B2);
        lbBack->setObjectName(QString::fromUtf8("lbBack"));
        lbBack->setGeometry(QRect(0, 0, 1024, 662));
        lbBack->setMinimumSize(QSize(1024, 662));
        lbBack->setMaximumSize(QSize(1024, 662));
        lbBack->setPixmap(QPixmap(QString::fromUtf8(":/Resources/PNG/B2.png")));
        bombaAlj = new AWMultiObject(B2);
        bombaAlj->setObjectName(QString::fromUtf8("bombaAlj"));
        bombaAlj->setGeometry(QRect(217, 450, 101, 81));
        bombaAlj->setValue(1);
        bombaAlj->setElementType(AWMultiObject::BOMBATD);
        bombaAlj->setOnColor(AWMultiObject::Green);
        indBomAlj = new AInstrumentIndicator(B2);
        indBomAlj->setObjectName(QString::fromUtf8("indBomAlj"));
        indBomAlj->setGeometry(QRect(240, 413, 61, 61));
        indBomAlj->setValue(2);
        indBomAlj->setOrientation(AWMultEstateWidget::Degree90);
        ind95F = new AInstrumentIndicator(B2);
        ind95F->setObjectName(QString::fromUtf8("ind95F"));
        ind95F->setGeometry(QRect(466, 330, 61, 61));
        ind95F->setIntID(-1);
        ind95F->setProperty("isUpdateable", QVariant(false));
        ind95F->setValue(2);
        ind95F->setOrientation(AWMultEstateWidget::Degree0);
        ind95F->setProperty("LineAngle", QVariant(118));
        ind20Psig = new AInstrumentIndicator(B2);
        ind20Psig->setObjectName(QString::fromUtf8("ind20Psig"));
        ind20Psig->setGeometry(QRect(205, 138, 61, 61));
        ind20Psig->setValue(2);
        ind20Psig->setOrientation(AWMultEstateWidget::Degree180);
        ind77f = new AInstrumentIndicator(B2);
        ind77f->setObjectName(QString::fromUtf8("ind77f"));
        ind77f->setGeometry(QRect(442, 119, 61, 61));
        ind77f->setValue(2);
        ind77f->setOrientation(AWMultEstateWidget::Degree0);
        ind93f = new AInstrumentIndicator(B2);
        ind93f->setObjectName(QString::fromUtf8("ind93f"));
        ind93f->setGeometry(QRect(472, 510, 61, 61));
        ind93f->setIntID(-1);
        ind93f->setProperty("isUpdateable", QVariant(false));
        ind93f->setValue(2);
        ind93f->setOrientation(AWMultEstateWidget::Degree0);
        ind93f->setProperty("LineAngle", QVariant(-111));
        ind0_4psig = new AInstrumentIndicator(B2);
        ind0_4psig->setObjectName(QString::fromUtf8("ind0_4psig"));
        ind0_4psig->setGeometry(QRect(618, 60, 61, 61));
        ind0_4psig->setValue(2);
        ind0_4psig->setOrientation(AWMultEstateWidget::Degree90);
        ind1_7psig = new AInstrumentIndicator(B2);
        ind1_7psig->setObjectName(QString::fromUtf8("ind1_7psig"));
        ind1_7psig->setGeometry(QRect(698, 60, 61, 61));
        ind1_7psig->setValue(2);
        ind1_7psig->setOrientation(AWMultEstateWidget::Degree90);
        indCierGraD = new AInstrumentIndicator(B2);
        indCierGraD->setObjectName(QString::fromUtf8("indCierGraD"));
        indCierGraD->setGeometry(QRect(687, 193, 61, 61));
        indCierGraD->setValue(2);
        indCierGraD->setOrientation(AWMultEstateWidget::Degree90);
        ind97f = new AInstrumentIndicator(B2);
        ind97f->setObjectName(QString::fromUtf8("ind97f"));
        ind97f->setGeometry(QRect(637, 510, 61, 61));
        ind97f->setIntID(-1);
        ind97f->setProperty("isUpdateable", QVariant(false));
        ind97f->setValue(2);
        ind97f->setOrientation(AWMultEstateWidget::Degree180);
        ind97f->setProperty("LineAngle", QVariant(0));
        indExtImp101f = new AInstrumentIndicator(B2);
        indExtImp101f->setObjectName(QString::fromUtf8("indExtImp101f"));
        indExtImp101f->setGeometry(QRect(668, 423, 61, 61));
        indExtImp101f->setIntID(-1);
        indExtImp101f->setProperty("isUpdateable", QVariant(false));
        indExtImp101f->setValue(2);
        indExtImp101f->setOrientation(AWMultEstateWidget::Degree180);
        indExtImp101f->setProperty("LineAngle", QVariant(1));
        indExtImp95f = new AInstrumentIndicator(B2);
        indExtImp95f->setObjectName(QString::fromUtf8("indExtImp95f"));
        indExtImp95f->setGeometry(QRect(355, 423, 61, 61));
        indExtImp95f->setIntID(-1);
        indExtImp95f->setProperty("isUpdateable", QVariant(false));
        indExtImp95f->setValue(2);
        indExtImp95f->setOrientation(AWMultEstateWidget::Degree0);
        indExtImp95f->setProperty("LineAngle", QVariant(1));
        ind87f = new AInstrumentIndicator(B2);
        ind87f->setObjectName(QString::fromUtf8("ind87f"));
        ind87f->setGeometry(QRect(375, 511, 61, 61));
        ind87f->setIntID(-1);
        ind87f->setProperty("isUpdateable", QVariant(false));
        ind87f->setValue(2);
        ind87f->setOrientation(AWMultEstateWidget::Degree0);
        ind87f->setProperty("LineAngle", QVariant(0));
        indCierGraI = new AInstrumentIndicator(B2);
        indCierGraI->setObjectName(QString::fromUtf8("indCierGraI"));
        indCierGraI->setGeometry(QRect(385, 194, 61, 61));
        indCierGraI->setValue(2);
        indCierGraI->setOrientation(AWMultEstateWidget::Degree90);
        lbSumAceT = new QLabel(B2);
        lbSumAceT->setObjectName(QString::fromUtf8("lbSumAceT"));
        lbSumAceT->setGeometry(QRect(115, 51, 191, 16));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        lbSumAceT->setFont(font);
        lbSumAceT->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lbPsigT = new QLabel(B2);
        lbPsigT->setObjectName(QString::fromUtf8("lbPsigT"));
        lbPsigT->setGeometry(QRect(220, 133, 101, 16));
        lbPsigT->setFont(font);
        lbPsigT->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lb77fT = new QLabel(B2);
        lb77fT->setObjectName(QString::fromUtf8("lb77fT"));
        lb77fT->setGeometry(QRect(449, 112, 51, 16));
        lb77fT->setFont(font);
        lb77fT->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lb77fT->setAlignment(Qt::AlignCenter);
        lb0_4psigT = new QLabel(B2);
        lb0_4psigT->setObjectName(QString::fromUtf8("lb0_4psigT"));
        lb0_4psigT->setGeometry(QRect(637, 55, 61, 16));
        lb0_4psigT->setFont(font);
        lb0_4psigT->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lb1_0PsigT = new QLabel(B2);
        lb1_0PsigT->setObjectName(QString::fromUtf8("lb1_0PsigT"));
        lb1_0PsigT->setGeometry(QRect(686, 35, 61, 16));
        lb1_0PsigT->setFont(font);
        lb1_0PsigT->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lb1_7psigT = new QLabel(B2);
        lb1_7psigT->setObjectName(QString::fromUtf8("lb1_7psigT"));
        lb1_7psigT->setGeometry(QRect(718, 55, 61, 16));
        lb1_7psigT->setFont(font);
        lb1_7psigT->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lbCierGraIT = new QLabel(B2);
        lbCierGraIT->setObjectName(QString::fromUtf8("lbCierGraIT"));
        lbCierGraIT->setGeometry(QRect(289, 209, 111, 41));
        lbCierGraIT->setFont(font);
        lbCierGraIT->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lbCierGraIT->setAlignment(Qt::AlignCenter);
        lbCierGraDT = new QLabel(B2);
        lbCierGraDT->setObjectName(QString::fromUtf8("lbCierGraDT"));
        lbCierGraDT->setGeometry(QRect(737, 209, 111, 41));
        lbCierGraDT->setFont(font);
        lbCierGraDT->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lbCierGraDT->setAlignment(Qt::AlignCenter);
        lb95FT = new QLabel(B2);
        lb95FT->setObjectName(QString::fromUtf8("lb95FT"));
        lb95FT->setGeometry(QRect(475, 322, 51, 16));
        lb95FT->setFont(font);
        lb95FT->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lb95FT->setAlignment(Qt::AlignCenter);
        lbDesFluT = new QLabel(B2);
        lbDesFluT->setObjectName(QString::fromUtf8("lbDesFluT"));
        lbDesFluT->setGeometry(QRect(115, 504, 161, 41));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        lbDesFluT->setFont(font1);
        lbDesFluT->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lbDesFluT->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lbDesAceT = new QLabel(B2);
        lbDesAceT->setObjectName(QString::fromUtf8("lbDesAceT"));
        lbDesAceT->setGeometry(QRect(114, 565, 221, 21));
        lbDesAceT->setFont(font1);
        lbDesAceT->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lbDesAceT->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lbBomAljT = new QLabel(B2);
        lbBomAljT->setObjectName(QString::fromUtf8("lbBomAljT"));
        lbBomAljT->setGeometry(QRect(209, 412, 111, 16));
        lbBomAljT->setFont(font);
        lbBomAljT->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lbBomAljT->setAlignment(Qt::AlignCenter);
        lbExtImp95fT = new QLabel(B2);
        lbExtImp95fT->setObjectName(QString::fromUtf8("lbExtImp95fT"));
        lbExtImp95fT->setGeometry(QRect(300, 400, 121, 31));
        lbExtImp95fT->setFont(font);
        lbExtImp95fT->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lbExtImp95fT->setAlignment(Qt::AlignCenter);
        lb87fT = new QLabel(B2);
        lb87fT->setObjectName(QString::fromUtf8("lb87fT"));
        lb87fT->setGeometry(QRect(386, 506, 51, 16));
        lb87fT->setFont(font);
        lb87fT->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lb87fT->setAlignment(Qt::AlignCenter);
        lb93fT = new QLabel(B2);
        lb93fT->setObjectName(QString::fromUtf8("lb93fT"));
        lb93fT->setGeometry(QRect(521, 531, 51, 16));
        lb93fT->setFont(font);
        lb93fT->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lb93fT->setAlignment(Qt::AlignCenter);
        lb97f = new QLabel(B2);
        lb97f->setObjectName(QString::fromUtf8("lb97f"));
        lb97f->setGeometry(QRect(649, 502, 51, 16));
        lb97f->setFont(font);
        lb97f->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lb97f->setAlignment(Qt::AlignCenter);
        lbExtExc101fT = new QLabel(B2);
        lbExtExc101fT->setObjectName(QString::fromUtf8("lbExtExc101fT"));
        lbExtExc101fT->setGeometry(QRect(646, 394, 121, 41));
        lbExtExc101fT->setFont(font);
        lbExtExc101fT->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lbExtExc101fT->setAlignment(Qt::AlignCenter);
        lbGenT = new QLabel(B2);
        lbGenT->setObjectName(QString::fromUtf8("lbGenT"));
        lbGenT->setGeometry(QRect(489, 440, 91, 16));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        lbGenT->setFont(font2);
        lbGenT->setAlignment(Qt::AlignCenter);
        lbGenU = new QLabel(B2);
        lbGenU->setObjectName(QString::fromUtf8("lbGenU"));
        lbGenU->setGeometry(QRect(536, 458, 31, 16));
        lbGenU->setFont(font2);
        lbGenU->setAlignment(Qt::AlignCenter);
        lbGen = new QLabel(B2);
        lbGen->setObjectName(QString::fromUtf8("lbGen"));
        lbGen->setGeometry(QRect(486, 457, 51, 16));
        lbGen->setFont(font2);
        lbGen->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbFlech_1 = new QLabel(B2);
        lbFlech_1->setObjectName(QString::fromUtf8("lbFlech_1"));
        lbFlech_1->setGeometry(QRect(490, 180, 21, 21));
        lbFlech_1->setPixmap(QPixmap(QString::fromUtf8(":/Resources/PNG/B1/flechadiagonal_abajo.png")));
        lbFlech_1->setScaledContents(true);
        lbFlech_2 = new QLabel(B2);
        lbFlech_2->setObjectName(QString::fromUtf8("lbFlech_2"));
        lbFlech_2->setGeometry(QRect(570, 180, 21, 21));
        lbFlech_2->setPixmap(QPixmap(QString::fromUtf8(":/Resources/PNG/B1/flechadiagonal_derecha.png")));
        lbFlech_2->setScaledContents(true);
        lbUnit3 = new QLabel(B2);
        lbUnit3->setObjectName(QString::fromUtf8("lbUnit3"));
        lbUnit3->setGeometry(QRect(833, 647, 190, 15));
        lbUnit3->setFont(font);
        lbUnit3->setStyleSheet(QString::fromUtf8("background-color: rgb(175, 175, 175);"));
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

        retranslateUi(B2);

        QMetaObject::connectSlotsByName(B2);
    } // setupUi

    void retranslateUi(QWidget *B2)
    {
        B2->setWindowTitle(QApplication::translate("B2", "Form", 0, QApplication::UnicodeUTF8));
        lbBack->setText(QString());
        indBomAlj->setProperty("UpLabel", QVariant(QApplication::translate("B2", "MOT", 0, QApplication::UnicodeUTF8)));
        indBomAlj->setProperty("DownLabel", QVariant(QApplication::translate("B2", "6031", 0, QApplication::UnicodeUTF8)));
        ind95F->setProperty("UpLabel", QVariant(QApplication::translate("B2", "TE", 0, QApplication::UnicodeUTF8)));
        ind95F->setProperty("DownLabel", QVariant(QApplication::translate("B2", "6056", 0, QApplication::UnicodeUTF8)));
        ind20Psig->setProperty("UpLabel", QVariant(QApplication::translate("B2", "PT", 0, QApplication::UnicodeUTF8)));
        ind20Psig->setProperty("DownLabel", QVariant(QApplication::translate("B2", "60021", 0, QApplication::UnicodeUTF8)));
        ind77f->setProperty("UpLabel", QVariant(QApplication::translate("B2", "TE", 0, QApplication::UnicodeUTF8)));
        ind77f->setProperty("DownLabel", QVariant(QApplication::translate("B2", "6025", 0, QApplication::UnicodeUTF8)));
        ind93f->setProperty("UpLabel", QVariant(QApplication::translate("B2", "TE", 0, QApplication::UnicodeUTF8)));
        ind93f->setProperty("DownLabel", QVariant(QApplication::translate("B2", "6057", 0, QApplication::UnicodeUTF8)));
        ind0_4psig->setProperty("UpLabel", QVariant(QApplication::translate("B2", "PT", 0, QApplication::UnicodeUTF8)));
        ind0_4psig->setProperty("DownLabel", QVariant(QApplication::translate("B2", "6026A", 0, QApplication::UnicodeUTF8)));
        ind1_7psig->setProperty("UpLabel", QVariant(QApplication::translate("B2", "PT", 0, QApplication::UnicodeUTF8)));
        ind1_7psig->setProperty("DownLabel", QVariant(QApplication::translate("B2", "6026B", 0, QApplication::UnicodeUTF8)));
        indCierGraD->setProperty("UpLabel", QVariant(QApplication::translate("B2", "LS", 0, QApplication::UnicodeUTF8)));
        indCierGraD->setProperty("DownLabel", QVariant(QApplication::translate("B2", "6042", 0, QApplication::UnicodeUTF8)));
        ind97f->setProperty("UpLabel", QVariant(QApplication::translate("B2", "TE", 0, QApplication::UnicodeUTF8)));
        ind97f->setProperty("DownLabel", QVariant(QApplication::translate("B2", "6035", 0, QApplication::UnicodeUTF8)));
        indExtImp101f->setProperty("UpLabel", QVariant(QApplication::translate("B2", "TE", 0, QApplication::UnicodeUTF8)));
        indExtImp101f->setProperty("DownLabel", QVariant(QApplication::translate("B2", "6023", 0, QApplication::UnicodeUTF8)));
        indExtImp95f->setProperty("UpLabel", QVariant(QApplication::translate("B2", "TE", 0, QApplication::UnicodeUTF8)));
        indExtImp95f->setProperty("DownLabel", QVariant(QApplication::translate("B2", "6021", 0, QApplication::UnicodeUTF8)));
        ind87f->setProperty("UpLabel", QVariant(QApplication::translate("B2", "TE", 0, QApplication::UnicodeUTF8)));
        ind87f->setProperty("DownLabel", QVariant(QApplication::translate("B2", "6036", 0, QApplication::UnicodeUTF8)));
        indCierGraI->setProperty("UpLabel", QVariant(QApplication::translate("B2", "LS", 0, QApplication::UnicodeUTF8)));
        indCierGraI->setProperty("DownLabel", QVariant(QApplication::translate("B2", "6041", 0, QApplication::UnicodeUTF8)));
        lbSumAceT->setText(QApplication::translate("B2", "SUMINISTRO ACEITE  LUB", 0, QApplication::UnicodeUTF8));
        lbPsigT->setText(QApplication::translate("B2", "20PSIG", 0, QApplication::UnicodeUTF8));
        lb77fT->setText(QApplication::translate("B2", "77\302\260F", 0, QApplication::UnicodeUTF8));
        lb0_4psigT->setText(QApplication::translate("B2", "0.4PSIG", 0, QApplication::UnicodeUTF8));
        lb1_0PsigT->setText(QApplication::translate("B2", "1.0PSIG", 0, QApplication::UnicodeUTF8));
        lb1_7psigT->setText(QApplication::translate("B2", "1.7PSIG", 0, QApplication::UnicodeUTF8));
        lbCierGraIT->setText(QApplication::translate("B2", "CIERRE GRADUAL \n"
" TANQUES", 0, QApplication::UnicodeUTF8));
        lbCierGraDT->setText(QApplication::translate("B2", "CIERRE GRADUAL \n"
" TANQUES", 0, QApplication::UnicodeUTF8));
        lb95FT->setText(QApplication::translate("B2", "95\302\260F", 0, QApplication::UnicodeUTF8));
        lbDesFluT->setText(QApplication::translate("B2", "DESAG\303\234ES\n"
"P/FLUIDO DE ELEVACI\303\223N", 0, QApplication::UnicodeUTF8));
        lbDesAceT->setText(QApplication::translate("B2", "DESAG\303\234E ACEITE DEL GENERADOR", 0, QApplication::UnicodeUTF8));
        lbBomAljT->setText(QApplication::translate("B2", "BOMBA DE ALJIBE", 0, QApplication::UnicodeUTF8));
        lbExtImp95fT->setText(QApplication::translate("B2", "EXTREMO IMPULSOR\n"
"                       95\302\260F", 0, QApplication::UnicodeUTF8));
        lb87fT->setText(QApplication::translate("B2", "87\302\260F", 0, QApplication::UnicodeUTF8));
        lb93fT->setText(QApplication::translate("B2", "93\302\260F", 0, QApplication::UnicodeUTF8));
        lb97f->setText(QApplication::translate("B2", "97\302\260F", 0, QApplication::UnicodeUTF8));
        lbExtExc101fT->setText(QApplication::translate("B2", "EXTREMO  EXCITADOR\n"
"101\302\260F", 0, QApplication::UnicodeUTF8));
        lbGenT->setText(QApplication::translate("B2", "GENERADOR", 0, QApplication::UnicodeUTF8));
        lbGenU->setText(QApplication::translate("B2", "MW", 0, QApplication::UnicodeUTF8));
        lbGen->setText(QApplication::translate("B2", "0.0", 0, QApplication::UnicodeUTF8));
        lbFlech_1->setText(QString());
        lbFlech_2->setText(QString());
        lbUnit3->setText(QApplication::translate("B2", "    UNIT3", 0, QApplication::UnicodeUTF8));
        btnIMPPant->setText(QApplication::translate("B2", "IMP PANT", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class B2: public Ui_B2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_B2_H
