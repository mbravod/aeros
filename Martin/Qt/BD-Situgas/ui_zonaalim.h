/********************************************************************************
** Form generated from reading UI file 'zonaalim.ui'
**
** Created: Sat 12. Oct 11:06:28 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZONAALIM_H
#define UI_ZONAALIM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>
#include "awmultiobject.h"

QT_BEGIN_NAMESPACE

class Ui_zonaAlim
{
public:
    QLabel *lbFondo;
    AWMultiObject *ind_7;
    AWMultiObject *ind_4;
    QPushButton *btRelay1;
    AWMultiObject *ind_5;
    AWMultiObject *ind_2;
    AWMultiObject *ind_6;
    AWMultiObject *ind_3;
    AWMultiObject *ind_1;
    QPushButton *btSincA;
    QPushButton *btDesA;
    QPushButton *btSincB;
    QPushButton *btDesB;
    QPushButton *btTransDes;
    QPushButton *btTransEner;
    QLabel *lbZonaT;
    QFrame *frame;
    QLabel *lbkvan;
    QLabel *lbkvanT;
    QLabel *lbkban_2;
    QLabel *lbkvbnT;
    QLabel *lbkvbcT;
    QLabel *lbkvcn;
    QLabel *lbkvbc;
    QLabel *lbkvcnT;
    QLabel *lbHwT;
    QLabel *lbAMPScT;
    QLabel *lbampsa;
    QLabel *lbAMPSc;
    QLabel *lbampsaT;
    QLabel *lbAMPSb;
    QLabel *lbHw;
    QLabel *lbAMPSbT;
    QLabel *lbhzT;
    QLabel *lbfpT;
    QLabel *lvmvarT;
    QLabel *lvmvar;
    QLabel *lbmvaT;
    QLabel *lbhz;
    QLabel *lbmva;
    QLabel *lbfp;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *lbladoSubT;
    QLabel *lbFronT;
    QLabel *lbOperT;
    QLabel *lbLadoPlaT;
    QLabel *lbT221aT;
    QLabel *lbT221cT;
    QLabel *lbEnfriaT;
    QLabel *lbCalenT;
    QLabel *lbCompres;
    QLabel *lbResT;
    QLabel *lbBomT;
    QLabel *label_88;
    QLabel *lbServT;
    QLabel *lb928AT;
    QLabel *label_91;
    QLabel *label_92;
    QLabel *label_93;
    QLabel *label_94;
    QLabel *label_95;
    QLabel *label_96;
    QLabel *label_97;
    QLabel *label_98;
    QLabel *label_99;
    QLabel *label_100;
    QLabel *lb928CT;
    QLabel *label_102;
    QLabel *label_103;
    QLabel *label_104;
    QLabel *lbZona416T;
    QLabel *label_106;
    QLabel *label_107;
    QLabel *label_108;
    QLabel *lbMotCom;
    QLabel *label_110;
    QLabel *label_111;
    QLabel *label_112;
    QLabel *label_113;
    QLabel *label_114;
    QLabel *label_115;
    QLabel *label_116;
    QLabel *lbBarras23kvT;
    QLabel *label_118;
    QLabel *label_119;
    QPushButton *pushButton_8;
    QFrame *frame_4;
    QLabel *lbkvan_2;
    QLabel *lbkvanT_2;
    QLabel *lbkban_3;
    QLabel *lbkvbnT_2;
    QLabel *lbkvbcT_2;
    QLabel *lbkvcn_2;
    QLabel *lbkvbc_2;
    QLabel *lbkvcnT_2;
    QLabel *lbHwT_2;
    QLabel *lbAMPScT_2;
    QLabel *lbampsa_2;
    QLabel *lbAMPSc_2;
    QLabel *lbampsaT_2;
    QLabel *lbAMPSb_2;
    QLabel *lbHw_2;
    QLabel *lbAMPSbT_2;
    QLabel *lbhzT_2;
    QLabel *lbfpT_2;
    QLabel *lvmvarT_2;
    QLabel *lvmvar_2;
    QLabel *lbmvaT_2;
    QLabel *lbhz_2;
    QLabel *lbmva_2;
    QLabel *lbfp_2;

    void setupUi(QWidget *zonaAlim)
    {
        if (zonaAlim->objectName().isEmpty())
            zonaAlim->setObjectName(QString::fromUtf8("zonaAlim"));
        zonaAlim->resize(1024, 662);
        zonaAlim->setMinimumSize(QSize(1024, 662));
        zonaAlim->setMaximumSize(QSize(1024, 662));
        zonaAlim->setStyleSheet(QString::fromUtf8(""));
        lbFondo = new QLabel(zonaAlim);
        lbFondo->setObjectName(QString::fromUtf8("lbFondo"));
        lbFondo->setGeometry(QRect(0, 0, 1024, 662));
        lbFondo->setMinimumSize(QSize(1024, 662));
        lbFondo->setMaximumSize(QSize(1024, 662));
        QFont font;
        font.setBold(false);
        font.setUnderline(false);
        font.setWeight(50);
        lbFondo->setFont(font);
        lbFondo->setPixmap(QPixmap(QString::fromUtf8(":/Resources/PNG/N1.png")));
        lbFondo->setScaledContents(true);
        ind_7 = new AWMultiObject(zonaAlim);
        ind_7->setObjectName(QString::fromUtf8("ind_7"));
        ind_7->setGeometry(QRect(727, 80, 39, 36));
        ind_7->setValue(0);
        ind_7->setElementType(AWMultiObject::SQUARE);
        ind_7->setOnColor(AWMultiObject::Green);
        ind_4 = new AWMultiObject(zonaAlim);
        ind_4->setObjectName(QString::fromUtf8("ind_4"));
        ind_4->setGeometry(QRect(382, 159, 39, 36));
        ind_4->setValue(0);
        ind_4->setElementType(AWMultiObject::SQUARE);
        ind_4->setOnColor(AWMultiObject::Green);
        btRelay1 = new QPushButton(zonaAlim);
        btRelay1->setObjectName(QString::fromUtf8("btRelay1"));
        btRelay1->setGeometry(QRect(910, 270, 97, 35));
        btRelay1->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        ind_5 = new AWMultiObject(zonaAlim);
        ind_5->setObjectName(QString::fromUtf8("ind_5"));
        ind_5->setGeometry(QRect(620, 160, 39, 36));
        ind_5->setValue(0);
        ind_5->setElementType(AWMultiObject::SQUARE);
        ind_5->setOnColor(AWMultiObject::Green);
        ind_2 = new AWMultiObject(zonaAlim);
        ind_2->setObjectName(QString::fromUtf8("ind_2"));
        ind_2->setGeometry(QRect(278, 300, 39, 36));
        ind_2->setValue(0);
        ind_2->setElementType(AWMultiObject::SQUARE);
        ind_2->setOnColor(AWMultiObject::Green);
        ind_6 = new AWMultiObject(zonaAlim);
        ind_6->setObjectName(QString::fromUtf8("ind_6"));
        ind_6->setGeometry(QRect(621, 300, 39, 36));
        ind_6->setValue(0);
        ind_6->setElementType(AWMultiObject::SQUARE);
        ind_6->setOnColor(AWMultiObject::Green);
        ind_3 = new AWMultiObject(zonaAlim);
        ind_3->setObjectName(QString::fromUtf8("ind_3"));
        ind_3->setGeometry(QRect(337, 470, 39, 36));
        ind_3->setValue(0);
        ind_3->setElementType(AWMultiObject::SQUARE);
        ind_3->setOnColor(AWMultiObject::Green);
        ind_1 = new AWMultiObject(zonaAlim);
        ind_1->setObjectName(QString::fromUtf8("ind_1"));
        ind_1->setGeometry(QRect(280, 80, 39, 36));
        ind_1->setValue(0);
        ind_1->setElementType(AWMultiObject::SQUARE);
        ind_1->setOnColor(AWMultiObject::Green);
        btSincA = new QPushButton(zonaAlim);
        btSincA->setObjectName(QString::fromUtf8("btSincA"));
        btSincA->setGeometry(QRect(912, 335, 83, 32));
        QFont font1;
        font1.setPointSize(6);
        btSincA->setFont(font1);
        btSincA->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        btDesA = new QPushButton(zonaAlim);
        btDesA->setObjectName(QString::fromUtf8("btDesA"));
        btDesA->setGeometry(QRect(912, 368, 83, 32));
        btDesA->setFont(font1);
        btDesA->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        btSincB = new QPushButton(zonaAlim);
        btSincB->setObjectName(QString::fromUtf8("btSincB"));
        btSincB->setGeometry(QRect(912, 420, 83, 32));
        btSincB->setFont(font1);
        btSincB->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        btDesB = new QPushButton(zonaAlim);
        btDesB->setObjectName(QString::fromUtf8("btDesB"));
        btDesB->setGeometry(QRect(912, 453, 83, 32));
        btDesB->setFont(font1);
        btDesB->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        btTransDes = new QPushButton(zonaAlim);
        btTransDes->setObjectName(QString::fromUtf8("btTransDes"));
        btTransDes->setGeometry(QRect(912, 508, 83, 32));
        btTransDes->setFont(font1);
        btTransDes->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        btTransEner = new QPushButton(zonaAlim);
        btTransEner->setObjectName(QString::fromUtf8("btTransEner"));
        btTransEner->setGeometry(QRect(912, 541, 83, 32));
        btTransEner->setFont(font1);
        btTransEner->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        lbZonaT = new QLabel(zonaAlim);
        lbZonaT->setObjectName(QString::fromUtf8("lbZonaT"));
        lbZonaT->setGeometry(QRect(298, 8, 411, 26));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        lbZonaT->setFont(font2);
        lbZonaT->setAlignment(Qt::AlignCenter);
        frame = new QFrame(zonaAlim);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(113, 202, 385, 51));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Plain);
        lbkvan = new QLabel(frame);
        lbkvan->setObjectName(QString::fromUtf8("lbkvan"));
        lbkvan->setGeometry(QRect(20, 1, 46, 13));
        lbkvanT = new QLabel(frame);
        lbkvanT->setObjectName(QString::fromUtf8("lbkvanT"));
        lbkvanT->setGeometry(QRect(76, 1, 46, 13));
        lbkban_2 = new QLabel(frame);
        lbkban_2->setObjectName(QString::fromUtf8("lbkban_2"));
        lbkban_2->setGeometry(QRect(20, 12, 46, 13));
        lbkvbnT = new QLabel(frame);
        lbkvbnT->setObjectName(QString::fromUtf8("lbkvbnT"));
        lbkvbnT->setGeometry(QRect(76, 12, 46, 13));
        lbkvbcT = new QLabel(frame);
        lbkvbcT->setObjectName(QString::fromUtf8("lbkvbcT"));
        lbkvbcT->setGeometry(QRect(76, 35, 46, 13));
        lbkvcn = new QLabel(frame);
        lbkvcn->setObjectName(QString::fromUtf8("lbkvcn"));
        lbkvcn->setGeometry(QRect(20, 23, 46, 13));
        lbkvbc = new QLabel(frame);
        lbkvbc->setObjectName(QString::fromUtf8("lbkvbc"));
        lbkvbc->setGeometry(QRect(20, 35, 46, 13));
        lbkvcnT = new QLabel(frame);
        lbkvcnT->setObjectName(QString::fromUtf8("lbkvcnT"));
        lbkvcnT->setGeometry(QRect(76, 23, 46, 13));
        lbHwT = new QLabel(frame);
        lbHwT->setObjectName(QString::fromUtf8("lbHwT"));
        lbHwT->setGeometry(QRect(200, 35, 46, 13));
        lbAMPScT = new QLabel(frame);
        lbAMPScT->setObjectName(QString::fromUtf8("lbAMPScT"));
        lbAMPScT->setGeometry(QRect(200, 23, 46, 13));
        lbampsa = new QLabel(frame);
        lbampsa->setObjectName(QString::fromUtf8("lbampsa"));
        lbampsa->setGeometry(QRect(144, 1, 46, 13));
        lbAMPSc = new QLabel(frame);
        lbAMPSc->setObjectName(QString::fromUtf8("lbAMPSc"));
        lbAMPSc->setGeometry(QRect(144, 23, 46, 13));
        lbampsaT = new QLabel(frame);
        lbampsaT->setObjectName(QString::fromUtf8("lbampsaT"));
        lbampsaT->setGeometry(QRect(200, 1, 46, 13));
        lbAMPSb = new QLabel(frame);
        lbAMPSb->setObjectName(QString::fromUtf8("lbAMPSb"));
        lbAMPSb->setGeometry(QRect(144, 11, 46, 13));
        lbHw = new QLabel(frame);
        lbHw->setObjectName(QString::fromUtf8("lbHw"));
        lbHw->setGeometry(QRect(144, 35, 46, 13));
        lbAMPSbT = new QLabel(frame);
        lbAMPSbT->setObjectName(QString::fromUtf8("lbAMPSbT"));
        lbAMPSbT->setGeometry(QRect(200, 11, 46, 13));
        lbhzT = new QLabel(frame);
        lbhzT->setObjectName(QString::fromUtf8("lbhzT"));
        lbhzT->setGeometry(QRect(340, 34, 46, 13));
        lbfpT = new QLabel(frame);
        lbfpT->setObjectName(QString::fromUtf8("lbfpT"));
        lbfpT->setGeometry(QRect(340, 21, 46, 13));
        lvmvarT = new QLabel(frame);
        lvmvarT->setObjectName(QString::fromUtf8("lvmvarT"));
        lvmvarT->setGeometry(QRect(340, 1, 46, 13));
        lvmvar = new QLabel(frame);
        lvmvar->setObjectName(QString::fromUtf8("lvmvar"));
        lvmvar->setGeometry(QRect(284, 1, 46, 13));
        lbmvaT = new QLabel(frame);
        lbmvaT->setObjectName(QString::fromUtf8("lbmvaT"));
        lbmvaT->setGeometry(QRect(340, 12, 46, 13));
        lbhz = new QLabel(frame);
        lbhz->setObjectName(QString::fromUtf8("lbhz"));
        lbhz->setGeometry(QRect(284, 34, 46, 13));
        lbmva = new QLabel(frame);
        lbmva->setObjectName(QString::fromUtf8("lbmva"));
        lbmva->setGeometry(QRect(284, 12, 46, 13));
        lbfp = new QLabel(frame);
        lbfp->setObjectName(QString::fromUtf8("lbfp"));
        lbfp->setGeometry(QRect(284, 21, 46, 13));
        label_3 = new QLabel(zonaAlim);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(471, 60, 161, 16));
        QFont font3;
        font3.setBold(true);
        font3.setWeight(75);
        label_3->setFont(font3);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        label_4 = new QLabel(zonaAlim);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(470, 73, 161, 16));
        label_4->setFont(font3);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        lbladoSubT = new QLabel(zonaAlim);
        lbladoSubT->setObjectName(QString::fromUtf8("lbladoSubT"));
        lbladoSubT->setGeometry(QRect(20, 60, 81, 41));
        QFont font4;
        font4.setBold(true);
        font4.setItalic(false);
        font4.setUnderline(true);
        font4.setWeight(75);
        lbladoSubT->setFont(font4);
        lbFronT = new QLabel(zonaAlim);
        lbFronT->setObjectName(QString::fromUtf8("lbFronT"));
        lbFronT->setGeometry(QRect(77, 122, 81, 16));
        lbFronT->setFont(font4);
        lbOperT = new QLabel(zonaAlim);
        lbOperT->setObjectName(QString::fromUtf8("lbOperT"));
        lbOperT->setGeometry(QRect(77, 145, 81, 16));
        lbOperT->setFont(font4);
        lbLadoPlaT = new QLabel(zonaAlim);
        lbLadoPlaT->setObjectName(QString::fromUtf8("lbLadoPlaT"));
        lbLadoPlaT->setGeometry(QRect(21, 274, 81, 16));
        lbLadoPlaT->setFont(font4);
        lbT221aT = new QLabel(zonaAlim);
        lbT221aT->setObjectName(QString::fromUtf8("lbT221aT"));
        lbT221aT->setGeometry(QRect(278, 20, 46, 13));
        lbT221aT->setAlignment(Qt::AlignCenter);
        lbT221cT = new QLabel(zonaAlim);
        lbT221cT->setObjectName(QString::fromUtf8("lbT221cT"));
        lbT221cT->setGeometry(QRect(725, 20, 46, 13));
        lbT221cT->setAlignment(Qt::AlignCenter);
        lbEnfriaT = new QLabel(zonaAlim);
        lbEnfriaT->setObjectName(QString::fromUtf8("lbEnfriaT"));
        lbEnfriaT->setGeometry(QRect(10, 450, 111, 16));
        lbEnfriaT->setFont(font3);
        lbCalenT = new QLabel(zonaAlim);
        lbCalenT->setObjectName(QString::fromUtf8("lbCalenT"));
        lbCalenT->setGeometry(QRect(10, 476, 111, 31));
        lbCalenT->setFont(font3);
        lbCompres = new QLabel(zonaAlim);
        lbCompres->setObjectName(QString::fromUtf8("lbCompres"));
        lbCompres->setGeometry(QRect(10, 504, 111, 31));
        lbCompres->setFont(font3);
        lbResT = new QLabel(zonaAlim);
        lbResT->setObjectName(QString::fromUtf8("lbResT"));
        lbResT->setGeometry(QRect(10, 535, 111, 16));
        lbResT->setFont(font3);
        lbBomT = new QLabel(zonaAlim);
        lbBomT->setObjectName(QString::fromUtf8("lbBomT"));
        lbBomT->setGeometry(QRect(10, 562, 111, 31));
        lbBomT->setFont(font3);
        label_88 = new QLabel(zonaAlim);
        label_88->setObjectName(QString::fromUtf8("label_88"));
        label_88->setGeometry(QRect(115, 310, 31, 16));
        label_88->setAlignment(Qt::AlignCenter);
        lbServT = new QLabel(zonaAlim);
        lbServT->setObjectName(QString::fromUtf8("lbServT"));
        lbServT->setGeometry(QRect(89, 590, 111, 51));
        lbServT->setFont(font3);
        lbServT->setAlignment(Qt::AlignCenter);
        lb928AT = new QLabel(zonaAlim);
        lb928AT->setObjectName(QString::fromUtf8("lb928AT"));
        lb928AT->setGeometry(QRect(228, 66, 71, 16));
        lb928AT->setAlignment(Qt::AlignCenter);
        label_91 = new QLabel(zonaAlim);
        label_91->setObjectName(QString::fromUtf8("label_91"));
        label_91->setGeometry(QRect(206, 84, 71, 16));
        label_91->setAlignment(Qt::AlignCenter);
        label_92 = new QLabel(zonaAlim);
        label_92->setObjectName(QString::fromUtf8("label_92"));
        label_92->setGeometry(QRect(216, 98, 46, 13));
        label_92->setAlignment(Qt::AlignCenter);
        label_93 = new QLabel(zonaAlim);
        label_93->setObjectName(QString::fromUtf8("label_93"));
        label_93->setGeometry(QRect(227, 115, 71, 16));
        label_93->setAlignment(Qt::AlignCenter);
        label_94 = new QLabel(zonaAlim);
        label_94->setObjectName(QString::fromUtf8("label_94"));
        label_94->setGeometry(QRect(376, 60, 46, 13));
        label_94->setAlignment(Qt::AlignCenter);
        label_95 = new QLabel(zonaAlim);
        label_95->setObjectName(QString::fromUtf8("label_95"));
        label_95->setGeometry(QRect(376, 72, 46, 13));
        label_95->setAlignment(Qt::AlignCenter);
        label_96 = new QLabel(zonaAlim);
        label_96->setObjectName(QString::fromUtf8("label_96"));
        label_96->setGeometry(QRect(360, 146, 81, 16));
        label_96->setAlignment(Qt::AlignCenter);
        label_97 = new QLabel(zonaAlim);
        label_97->setObjectName(QString::fromUtf8("label_97"));
        label_97->setGeometry(QRect(600, 146, 81, 16));
        label_97->setAlignment(Qt::AlignCenter);
        label_98 = new QLabel(zonaAlim);
        label_98->setObjectName(QString::fromUtf8("label_98"));
        label_98->setGeometry(QRect(360, 189, 81, 16));
        label_98->setAlignment(Qt::AlignCenter);
        label_99 = new QLabel(zonaAlim);
        label_99->setObjectName(QString::fromUtf8("label_99"));
        label_99->setGeometry(QRect(596, 189, 81, 16));
        label_99->setAlignment(Qt::AlignCenter);
        label_100 = new QLabel(zonaAlim);
        label_100->setObjectName(QString::fromUtf8("label_100"));
        label_100->setGeometry(QRect(760, 115, 71, 16));
        label_100->setAlignment(Qt::AlignCenter);
        lb928CT = new QLabel(zonaAlim);
        lb928CT->setObjectName(QString::fromUtf8("lb928CT"));
        lb928CT->setGeometry(QRect(760, 66, 71, 16));
        lb928CT->setAlignment(Qt::AlignCenter);
        label_102 = new QLabel(zonaAlim);
        label_102->setObjectName(QString::fromUtf8("label_102"));
        label_102->setGeometry(QRect(780, 84, 71, 16));
        label_102->setAlignment(Qt::AlignCenter);
        label_103 = new QLabel(zonaAlim);
        label_103->setObjectName(QString::fromUtf8("label_103"));
        label_103->setGeometry(QRect(784, 98, 46, 13));
        label_103->setAlignment(Qt::AlignCenter);
        label_104 = new QLabel(zonaAlim);
        label_104->setObjectName(QString::fromUtf8("label_104"));
        label_104->setGeometry(QRect(324, 269, 111, 16));
        QFont font5;
        font5.setPointSize(9);
        font5.setBold(true);
        font5.setWeight(75);
        label_104->setFont(font5);
        lbZona416T = new QLabel(zonaAlim);
        lbZona416T->setObjectName(QString::fromUtf8("lbZona416T"));
        lbZona416T->setGeometry(QRect(613, 457, 111, 16));
        lbZona416T->setFont(font5);
        label_106 = new QLabel(zonaAlim);
        label_106->setObjectName(QString::fromUtf8("label_106"));
        label_106->setGeometry(QRect(171, 542, 81, 16));
        label_106->setAlignment(Qt::AlignCenter);
        label_107 = new QLabel(zonaAlim);
        label_107->setObjectName(QString::fromUtf8("label_107"));
        label_107->setGeometry(QRect(223, 462, 81, 16));
        QFont font6;
        font6.setPointSize(8);
        label_107->setFont(font6);
        label_107->setAlignment(Qt::AlignCenter);
        label_108 = new QLabel(zonaAlim);
        label_108->setObjectName(QString::fromUtf8("label_108"));
        label_108->setGeometry(QRect(841, 317, 81, 16));
        label_108->setFont(font6);
        label_108->setAlignment(Qt::AlignCenter);
        lbMotCom = new QLabel(zonaAlim);
        lbMotCom->setObjectName(QString::fromUtf8("lbMotCom"));
        lbMotCom->setGeometry(QRect(778, 592, 111, 51));
        lbMotCom->setFont(font3);
        lbMotCom->setAlignment(Qt::AlignCenter);
        label_110 = new QLabel(zonaAlim);
        label_110->setObjectName(QString::fromUtf8("label_110"));
        label_110->setGeometry(QRect(318, 458, 81, 16));
        label_110->setFont(font6);
        label_110->setAlignment(Qt::AlignCenter);
        label_111 = new QLabel(zonaAlim);
        label_111->setObjectName(QString::fromUtf8("label_111"));
        label_111->setGeometry(QRect(600, 291, 81, 16));
        label_111->setFont(font6);
        label_111->setAlignment(Qt::AlignCenter);
        label_112 = new QLabel(zonaAlim);
        label_112->setObjectName(QString::fromUtf8("label_112"));
        label_112->setGeometry(QRect(256, 290, 81, 16));
        label_112->setFont(font6);
        label_112->setAlignment(Qt::AlignCenter);
        label_113 = new QLabel(zonaAlim);
        label_113->setObjectName(QString::fromUtf8("label_113"));
        label_113->setGeometry(QRect(365, 368, 31, 16));
        label_113->setFont(font6);
        label_113->setAlignment(Qt::AlignCenter);
        label_114 = new QLabel(zonaAlim);
        label_114->setObjectName(QString::fromUtf8("label_114"));
        label_114->setGeometry(QRect(539, 349, 81, 16));
        label_114->setFont(font6);
        label_114->setAlignment(Qt::AlignCenter);
        label_115 = new QLabel(zonaAlim);
        label_115->setObjectName(QString::fromUtf8("label_115"));
        label_115->setGeometry(QRect(876, 353, 41, 16));
        label_115->setFont(font6);
        label_115->setAlignment(Qt::AlignCenter);
        label_116 = new QLabel(zonaAlim);
        label_116->setObjectName(QString::fromUtf8("label_116"));
        label_116->setGeometry(QRect(392, 295, 81, 16));
        label_116->setFont(font6);
        label_116->setAlignment(Qt::AlignCenter);
        lbBarras23kvT = new QLabel(zonaAlim);
        lbBarras23kvT->setObjectName(QString::fromUtf8("lbBarras23kvT"));
        lbBarras23kvT->setGeometry(QRect(482, 356, 81, 41));
        lbBarras23kvT->setFont(font6);
        lbBarras23kvT->setAlignment(Qt::AlignCenter);
        label_118 = new QLabel(zonaAlim);
        label_118->setObjectName(QString::fromUtf8("label_118"));
        label_118->setGeometry(QRect(190, 260, 31, 16));
        label_118->setFont(font6);
        label_118->setAlignment(Qt::AlignCenter);
        label_119 = new QLabel(zonaAlim);
        label_119->setObjectName(QString::fromUtf8("label_119"));
        label_119->setGeometry(QRect(818, 576, 31, 16));
        label_119->setAlignment(Qt::AlignCenter);
        pushButton_8 = new QPushButton(zonaAlim);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(10, 632, 135, 25));
        pushButton_8->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        frame_4 = new QFrame(zonaAlim);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(542, 202, 385, 51));
        frame_4->setFrameShape(QFrame::Box);
        frame_4->setFrameShadow(QFrame::Plain);
        lbkvan_2 = new QLabel(frame_4);
        lbkvan_2->setObjectName(QString::fromUtf8("lbkvan_2"));
        lbkvan_2->setGeometry(QRect(20, 1, 46, 13));
        lbkvanT_2 = new QLabel(frame_4);
        lbkvanT_2->setObjectName(QString::fromUtf8("lbkvanT_2"));
        lbkvanT_2->setGeometry(QRect(76, 1, 46, 13));
        lbkban_3 = new QLabel(frame_4);
        lbkban_3->setObjectName(QString::fromUtf8("lbkban_3"));
        lbkban_3->setGeometry(QRect(20, 12, 46, 13));
        lbkvbnT_2 = new QLabel(frame_4);
        lbkvbnT_2->setObjectName(QString::fromUtf8("lbkvbnT_2"));
        lbkvbnT_2->setGeometry(QRect(76, 12, 46, 13));
        lbkvbcT_2 = new QLabel(frame_4);
        lbkvbcT_2->setObjectName(QString::fromUtf8("lbkvbcT_2"));
        lbkvbcT_2->setGeometry(QRect(76, 35, 46, 13));
        lbkvcn_2 = new QLabel(frame_4);
        lbkvcn_2->setObjectName(QString::fromUtf8("lbkvcn_2"));
        lbkvcn_2->setGeometry(QRect(20, 23, 46, 13));
        lbkvbc_2 = new QLabel(frame_4);
        lbkvbc_2->setObjectName(QString::fromUtf8("lbkvbc_2"));
        lbkvbc_2->setGeometry(QRect(20, 35, 46, 13));
        lbkvcnT_2 = new QLabel(frame_4);
        lbkvcnT_2->setObjectName(QString::fromUtf8("lbkvcnT_2"));
        lbkvcnT_2->setGeometry(QRect(76, 23, 46, 13));
        lbHwT_2 = new QLabel(frame_4);
        lbHwT_2->setObjectName(QString::fromUtf8("lbHwT_2"));
        lbHwT_2->setGeometry(QRect(200, 35, 46, 13));
        lbAMPScT_2 = new QLabel(frame_4);
        lbAMPScT_2->setObjectName(QString::fromUtf8("lbAMPScT_2"));
        lbAMPScT_2->setGeometry(QRect(200, 23, 46, 13));
        lbampsa_2 = new QLabel(frame_4);
        lbampsa_2->setObjectName(QString::fromUtf8("lbampsa_2"));
        lbampsa_2->setGeometry(QRect(144, 1, 46, 13));
        lbAMPSc_2 = new QLabel(frame_4);
        lbAMPSc_2->setObjectName(QString::fromUtf8("lbAMPSc_2"));
        lbAMPSc_2->setGeometry(QRect(144, 23, 46, 13));
        lbampsaT_2 = new QLabel(frame_4);
        lbampsaT_2->setObjectName(QString::fromUtf8("lbampsaT_2"));
        lbampsaT_2->setGeometry(QRect(200, 1, 46, 13));
        lbAMPSb_2 = new QLabel(frame_4);
        lbAMPSb_2->setObjectName(QString::fromUtf8("lbAMPSb_2"));
        lbAMPSb_2->setGeometry(QRect(144, 11, 46, 13));
        lbHw_2 = new QLabel(frame_4);
        lbHw_2->setObjectName(QString::fromUtf8("lbHw_2"));
        lbHw_2->setGeometry(QRect(144, 35, 46, 13));
        lbAMPSbT_2 = new QLabel(frame_4);
        lbAMPSbT_2->setObjectName(QString::fromUtf8("lbAMPSbT_2"));
        lbAMPSbT_2->setGeometry(QRect(200, 11, 46, 13));
        lbhzT_2 = new QLabel(frame_4);
        lbhzT_2->setObjectName(QString::fromUtf8("lbhzT_2"));
        lbhzT_2->setGeometry(QRect(340, 34, 46, 13));
        lbfpT_2 = new QLabel(frame_4);
        lbfpT_2->setObjectName(QString::fromUtf8("lbfpT_2"));
        lbfpT_2->setGeometry(QRect(340, 21, 46, 13));
        lvmvarT_2 = new QLabel(frame_4);
        lvmvarT_2->setObjectName(QString::fromUtf8("lvmvarT_2"));
        lvmvarT_2->setGeometry(QRect(340, 1, 46, 13));
        lvmvar_2 = new QLabel(frame_4);
        lvmvar_2->setObjectName(QString::fromUtf8("lvmvar_2"));
        lvmvar_2->setGeometry(QRect(284, 1, 46, 13));
        lbmvaT_2 = new QLabel(frame_4);
        lbmvaT_2->setObjectName(QString::fromUtf8("lbmvaT_2"));
        lbmvaT_2->setGeometry(QRect(340, 12, 46, 13));
        lbhz_2 = new QLabel(frame_4);
        lbhz_2->setObjectName(QString::fromUtf8("lbhz_2"));
        lbhz_2->setGeometry(QRect(284, 34, 46, 13));
        lbmva_2 = new QLabel(frame_4);
        lbmva_2->setObjectName(QString::fromUtf8("lbmva_2"));
        lbmva_2->setGeometry(QRect(284, 12, 46, 13));
        lbfp_2 = new QLabel(frame_4);
        lbfp_2->setObjectName(QString::fromUtf8("lbfp_2"));
        lbfp_2->setGeometry(QRect(284, 21, 46, 13));

        retranslateUi(zonaAlim);

        QMetaObject::connectSlotsByName(zonaAlim);
    } // setupUi

    void retranslateUi(QWidget *zonaAlim)
    {
        zonaAlim->setWindowTitle(QApplication::translate("zonaAlim", "zonaAlim", 0, QApplication::UnicodeUTF8));
        lbFondo->setText(QString());
        btRelay1->setText(QApplication::translate("zonaAlim", "Relay", 0, QApplication::UnicodeUTF8));
        btSincA->setText(QApplication::translate("zonaAlim", "SINC BUS A\n"
"PERMISIVO", 0, QApplication::UnicodeUTF8));
        btDesA->setText(QApplication::translate("zonaAlim", "DESHABILITAR\n"
"BUS A SINC", 0, QApplication::UnicodeUTF8));
        btSincB->setText(QApplication::translate("zonaAlim", "SINC BUS B\n"
"PERMISIVO", 0, QApplication::UnicodeUTF8));
        btDesB->setText(QApplication::translate("zonaAlim", "DESHABILITAR\n"
"BUS B SINC", 0, QApplication::UnicodeUTF8));
        btTransDes->setText(QApplication::translate("zonaAlim", "TRANSFORMADOR\n"
"DESENERGIZAR", 0, QApplication::UnicodeUTF8));
        btTransEner->setText(QApplication::translate("zonaAlim", "TRANSFORMADOR\n"
"ENERGIZAR", 0, QApplication::UnicodeUTF8));
        lbZonaT->setText(QApplication::translate("zonaAlim", "ZONA DE ALIMENTADORES 23 KV", 0, QApplication::UnicodeUTF8));
        lbkvan->setText(QString());
        lbkvanT->setText(QApplication::translate("zonaAlim", "KV  AN", 0, QApplication::UnicodeUTF8));
        lbkban_2->setText(QString());
        lbkvbnT->setText(QApplication::translate("zonaAlim", "KV  BN", 0, QApplication::UnicodeUTF8));
        lbkvbcT->setText(QApplication::translate("zonaAlim", "KV  BC", 0, QApplication::UnicodeUTF8));
        lbkvcn->setText(QString());
        lbkvbc->setText(QString());
        lbkvcnT->setText(QApplication::translate("zonaAlim", "KV  CN", 0, QApplication::UnicodeUTF8));
        lbHwT->setText(QApplication::translate("zonaAlim", "MW", 0, QApplication::UnicodeUTF8));
        lbAMPScT->setText(QApplication::translate("zonaAlim", "AMPS C", 0, QApplication::UnicodeUTF8));
        lbampsa->setText(QString());
        lbAMPSc->setText(QString());
        lbampsaT->setText(QApplication::translate("zonaAlim", "AMPS A", 0, QApplication::UnicodeUTF8));
        lbAMPSb->setText(QString());
        lbHw->setText(QString());
        lbAMPSbT->setText(QApplication::translate("zonaAlim", "AMPS B", 0, QApplication::UnicodeUTF8));
        lbhzT->setText(QApplication::translate("zonaAlim", "HZ", 0, QApplication::UnicodeUTF8));
        lbfpT->setText(QApplication::translate("zonaAlim", "FP", 0, QApplication::UnicodeUTF8));
        lvmvarT->setText(QApplication::translate("zonaAlim", "MVAR", 0, QApplication::UnicodeUTF8));
        lvmvar->setText(QString());
        lbmvaT->setText(QApplication::translate("zonaAlim", "MVA", 0, QApplication::UnicodeUTF8));
        lbhz->setText(QString());
        lbmva->setText(QString());
        lbfp->setText(QString());
        label_3->setText(QApplication::translate("zonaAlim", "RELEVADOR 50A LISTO", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("zonaAlim", "RELEVADOR 51F LISTO", 0, QApplication::UnicodeUTF8));
        lbladoSubT->setText(QApplication::translate("zonaAlim", "LADO\n"
"SUBESTACI\303\222N", 0, QApplication::UnicodeUTF8));
        lbFronT->setText(QApplication::translate("zonaAlim", "FRONTERA", 0, QApplication::UnicodeUTF8));
        lbOperT->setText(QApplication::translate("zonaAlim", "OPERATIVA", 0, QApplication::UnicodeUTF8));
        lbLadoPlaT->setText(QApplication::translate("zonaAlim", "LADO PLANTA", 0, QApplication::UnicodeUTF8));
        lbT221aT->setText(QApplication::translate("zonaAlim", "T221A", 0, QApplication::UnicodeUTF8));
        lbT221cT->setText(QApplication::translate("zonaAlim", "T221C", 0, QApplication::UnicodeUTF8));
        lbEnfriaT->setText(QApplication::translate("zonaAlim", "ENFRIADOR", 0, QApplication::UnicodeUTF8));
        lbCalenT->setText(QApplication::translate("zonaAlim", "CLAENTADOR\n"
"(CHILLER)", 0, QApplication::UnicodeUTF8));
        lbCompres->setText(QApplication::translate("zonaAlim", "COMPRESSOR\n"
" DE AIRE", 0, QApplication::UnicodeUTF8));
        lbResT->setText(QApplication::translate("zonaAlim", "RESERVA", 0, QApplication::UnicodeUTF8));
        lbBomT->setText(QApplication::translate("zonaAlim", "B\303\222MBA CONTRA\n"
"INCENDIO", 0, QApplication::UnicodeUTF8));
        label_88->setText(QApplication::translate("zonaAlim", "G1", 0, QApplication::UnicodeUTF8));
        lbServT->setText(QApplication::translate("zonaAlim", "SERVICIOS\n"
"AUXILIARES\n"
"G1", 0, QApplication::UnicodeUTF8));
        lb928AT->setText(QApplication::translate("zonaAlim", "92B-T221A", 0, QApplication::UnicodeUTF8));
        label_91->setText(QApplication::translate("zonaAlim", "BARRAS 23 KV", 0, QApplication::UnicodeUTF8));
        label_92->setText(QApplication::translate("zonaAlim", "T221A", 0, QApplication::UnicodeUTF8));
        label_93->setText(QApplication::translate("zonaAlim", "92BA-T21A", 0, QApplication::UnicodeUTF8));
        label_94->setText(QApplication::translate("zonaAlim", "YS_50A", 0, QApplication::UnicodeUTF8));
        label_95->setText(QApplication::translate("zonaAlim", "YS_51A", 0, QApplication::UnicodeUTF8));
        label_96->setText(QApplication::translate("zonaAlim", "ACOMETIDA-1", 0, QApplication::UnicodeUTF8));
        label_97->setText(QApplication::translate("zonaAlim", "ACOMETIDA-2", 0, QApplication::UnicodeUTF8));
        label_98->setText(QApplication::translate("zonaAlim", "52-1 T21A", 0, QApplication::UnicodeUTF8));
        label_99->setText(QApplication::translate("zonaAlim", "52-2 T21A", 0, QApplication::UnicodeUTF8));
        label_100->setText(QApplication::translate("zonaAlim", "92BC-T21A", 0, QApplication::UnicodeUTF8));
        lb928CT->setText(QApplication::translate("zonaAlim", "92B-T221C", 0, QApplication::UnicodeUTF8));
        label_102->setText(QApplication::translate("zonaAlim", "BARRAS 23 KV", 0, QApplication::UnicodeUTF8));
        label_103->setText(QApplication::translate("zonaAlim", "T221C", 0, QApplication::UnicodeUTF8));
        label_104->setText(QApplication::translate("zonaAlim", "ZONA DE 13.8 KV", 0, QApplication::UnicodeUTF8));
        lbZona416T->setText(QApplication::translate("zonaAlim", "ZONA DE 4.16 KV", 0, QApplication::UnicodeUTF8));
        label_106->setText(QApplication::translate("zonaAlim", "480 V", 0, QApplication::UnicodeUTF8));
        label_107->setText(QApplication::translate("zonaAlim", "T00 AUX G1", 0, QApplication::UnicodeUTF8));
        label_108->setText(QApplication::translate("zonaAlim", "T20 AUX G1", 0, QApplication::UnicodeUTF8));
        lbMotCom->setText(QApplication::translate("zonaAlim", "MOTOR COMPRESOR\n"
"GAS 1000 H.P.", 0, QApplication::UnicodeUTF8));
        label_110->setText(QApplication::translate("zonaAlim", "50 AUX G1 ", 0, QApplication::UnicodeUTF8));
        label_111->setText(QApplication::translate("zonaAlim", "52 AUX G1 ", 0, QApplication::UnicodeUTF8));
        label_112->setText(QApplication::translate("zonaAlim", "51 G1", 0, QApplication::UnicodeUTF8));
        label_113->setText(QApplication::translate("zonaAlim", "3", 0, QApplication::UnicodeUTF8));
        label_114->setText(QApplication::translate("zonaAlim", "3 TP", 0, QApplication::UnicodeUTF8));
        label_115->setText(QApplication::translate("zonaAlim", "1", 0, QApplication::UnicodeUTF8));
        label_116->setText(QApplication::translate("zonaAlim", "T21A", 0, QApplication::UnicodeUTF8));
        lbBarras23kvT->setText(QApplication::translate("zonaAlim", "BARRAS 23 KV\n"
"T21A", 0, QApplication::UnicodeUTF8));
        label_118->setText(QApplication::translate("zonaAlim", "3", 0, QApplication::UnicodeUTF8));
        label_119->setText(QApplication::translate("zonaAlim", "M", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("zonaAlim", "IMP PANT", 0, QApplication::UnicodeUTF8));
        lbkvan_2->setText(QString());
        lbkvanT_2->setText(QApplication::translate("zonaAlim", "KV  AN", 0, QApplication::UnicodeUTF8));
        lbkban_3->setText(QString());
        lbkvbnT_2->setText(QApplication::translate("zonaAlim", "KV  BN", 0, QApplication::UnicodeUTF8));
        lbkvbcT_2->setText(QApplication::translate("zonaAlim", "KV  BC", 0, QApplication::UnicodeUTF8));
        lbkvcn_2->setText(QString());
        lbkvbc_2->setText(QString());
        lbkvcnT_2->setText(QApplication::translate("zonaAlim", "KV  CN", 0, QApplication::UnicodeUTF8));
        lbHwT_2->setText(QApplication::translate("zonaAlim", "MW", 0, QApplication::UnicodeUTF8));
        lbAMPScT_2->setText(QApplication::translate("zonaAlim", "AMPS C", 0, QApplication::UnicodeUTF8));
        lbampsa_2->setText(QString());
        lbAMPSc_2->setText(QString());
        lbampsaT_2->setText(QApplication::translate("zonaAlim", "AMPS A", 0, QApplication::UnicodeUTF8));
        lbAMPSb_2->setText(QString());
        lbHw_2->setText(QString());
        lbAMPSbT_2->setText(QApplication::translate("zonaAlim", "AMPS B", 0, QApplication::UnicodeUTF8));
        lbhzT_2->setText(QApplication::translate("zonaAlim", "HZ", 0, QApplication::UnicodeUTF8));
        lbfpT_2->setText(QApplication::translate("zonaAlim", "FP", 0, QApplication::UnicodeUTF8));
        lvmvarT_2->setText(QApplication::translate("zonaAlim", "MVAR", 0, QApplication::UnicodeUTF8));
        lvmvar_2->setText(QString());
        lbmvaT_2->setText(QApplication::translate("zonaAlim", "MVA", 0, QApplication::UnicodeUTF8));
        lbhz_2->setText(QString());
        lbmva_2->setText(QString());
        lbfp_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class zonaAlim: public Ui_zonaAlim {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZONAALIM_H
