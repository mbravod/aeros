/********************************************************************************
** Form generated from reading UI file 'a6.ui'
**
** Created: Sat 12. Oct 21:52:10 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_A6_H
#define UI_A6_H

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

class Ui_A6
{
public:
    QLabel *label;
    QFrame *frame;
    QFrame *frame_2;
    AWMultiObject *ledApaFun;
    QLabel *lbApaFunT;
    AWMultiObject *ledArraHid;
    QLabel *lbArraHidT;
    QLabel *lbLavConADT;
    AWMultiObject *ledLavConAD;
    QLabel *lbHardMicrT;
    QLabel *lbHarLinkT;
    AWMultiObject *ledHarLink;
    AWMultiObject *ledHardMicr;
    QLabel *lbRotNET;
    AWMultiObject *ledRotNE;
    AWMultiObject *ledCtrlMD;
    QLabel *lbCtrlMDT;
    AWMultiObject *ledMen300N25_1;
    QLabel *lbMen300N25_1T;
    AWMultiObject *ledCieSinM;
    QLabel *lbCieSinMT;
    AWMultiObject *ledBloqNo;
    QLabel *lbNivTanTurT;
    AWMultiObject *ledLavAguFu;
    QLabel *lbBloqNoT;
    QLabel *lbTempEstT;
    QLabel *lbLavAguFuT;
    AWMultiObject *ledUnidFun;
    AWMultiObject *ledTempAceTur;
    QLabel *lbUnidFunT;
    AWMultiObject *ledNivTanTur;
    AWMultiObject *ledTempEst;
    QLabel *lbTempAceTurT;
    QLabel *lbValConbT;
    QLabel *lbTempAceGenT;
    AWMultiObject *ledValSumCer;
    QLabel *lbCan2T;
    AWMultiObject *ledCan2;
    QLabel *lbValSumCerT;
    AWMultiObject *ledTempAceGen;
    AWMultiObject *ledValConb;
    QFrame *frame_4;
    QLabel *lbPerRotT_2;
    QFrame *frame_5;
    QLabel *lbSisT;
    QFrame *frame_3;
    AWMultiObject *ledT2May;
    AWMultiObject *ledNivTan;
    AWMultiObject *ledLavAgua;
    QLabel *lbNivTanT;
    AWMultiObject *ledNsd;
    QLabel *lbNsdT;
    QLabel *lbLavAguaT;
    QLabel *lbT2MayT;
    AWMultiObject *ledMen300N25_2;
    AWMultiObject *ledNivTan_2;
    AWMultiObject *ledPerRot;
    QLabel *lbNivTanT_2;
    AWMultiObject *ledT48Men;
    QLabel *lbT48MenT;
    QLabel *lbPerRotT;
    QLabel *lbMen300N25_2T;
    QFrame *frame_6;
    QLabel *lbPerLavEnLinT;
    QFrame *frame_7;
    QLabel *lbPerLavDeLinT;
    QLabel *lbUniNoT;
    QLabel *label_32;
    QLabel *lbUnit3;
    QPushButton *btnIMPPant;

    void setupUi(QWidget *A6)
    {
        if (A6->objectName().isEmpty())
            A6->setObjectName(QString::fromUtf8("A6"));
        A6->resize(1024, 662);
        A6->setMinimumSize(QSize(1024, 662));
        A6->setMaximumSize(QSize(1024, 662));
        label = new QLabel(A6);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(true);
        label->setGeometry(QRect(0, 0, 1024, 662));
        label->setMinimumSize(QSize(1024, 662));
        label->setMaximumSize(QSize(1024, 662));
        label->setFrameShape(QFrame::Box);
        label->setPixmap(QPixmap(QString::fromUtf8(":/Resources/PNG/A6.png")));
        label->setScaledContents(true);
        frame = new QFrame(A6);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(170, 80, 681, 531));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(0, 0, 343, 531));
        frame_2->setFrameShape(QFrame::Box);
        frame_2->setFrameShadow(QFrame::Raised);
        ledApaFun = new AWMultiObject(frame_2);
        ledApaFun->setObjectName(QString::fromUtf8("ledApaFun"));
        ledApaFun->setGeometry(QRect(6, 347, 31, 25));
        ledApaFun->setElementType(AWMultiObject::CIRLED);
        lbApaFunT = new QLabel(frame_2);
        lbApaFunT->setObjectName(QString::fromUtf8("lbApaFunT"));
        lbApaFunT->setGeometry(QRect(36, 350, 300, 16));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        lbApaFunT->setFont(font);
        ledArraHid = new AWMultiObject(frame_2);
        ledArraHid->setObjectName(QString::fromUtf8("ledArraHid"));
        ledArraHid->setGeometry(QRect(6, 38, 31, 25));
        ledArraHid->setElementType(AWMultiObject::CIRLED);
        lbArraHidT = new QLabel(frame_2);
        lbArraHidT->setObjectName(QString::fromUtf8("lbArraHidT"));
        lbArraHidT->setGeometry(QRect(36, 38, 300, 16));
        lbArraHidT->setFont(font);
        lbLavConADT = new QLabel(frame_2);
        lbLavConADT->setObjectName(QString::fromUtf8("lbLavConADT"));
        lbLavConADT->setGeometry(QRect(36, 59, 300, 16));
        lbLavConADT->setFont(font);
        ledLavConAD = new AWMultiObject(frame_2);
        ledLavConAD->setObjectName(QString::fromUtf8("ledLavConAD"));
        ledLavConAD->setGeometry(QRect(6, 58, 31, 25));
        ledLavConAD->setElementType(AWMultiObject::CIRLED);
        lbHardMicrT = new QLabel(frame_2);
        lbHardMicrT->setObjectName(QString::fromUtf8("lbHardMicrT"));
        lbHardMicrT->setGeometry(QRect(46, 448, 251, 16));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        lbHardMicrT->setFont(font1);
        lbHarLinkT = new QLabel(frame_2);
        lbHarLinkT->setObjectName(QString::fromUtf8("lbHarLinkT"));
        lbHarLinkT->setGeometry(QRect(46, 467, 251, 16));
        lbHarLinkT->setFont(font1);
        ledHarLink = new AWMultiObject(frame_2);
        ledHarLink->setObjectName(QString::fromUtf8("ledHarLink"));
        ledHarLink->setGeometry(QRect(13, 465, 31, 25));
        ledHarLink->setElementType(AWMultiObject::CIRLED);
        ledHardMicr = new AWMultiObject(frame_2);
        ledHardMicr->setObjectName(QString::fromUtf8("ledHardMicr"));
        ledHardMicr->setGeometry(QRect(13, 445, 31, 25));
        ledHardMicr->setElementType(AWMultiObject::CIRLED);
        lbRotNET = new QLabel(frame_2);
        lbRotNET->setObjectName(QString::fromUtf8("lbRotNET"));
        lbRotNET->setGeometry(QRect(36, 79, 300, 16));
        lbRotNET->setFont(font);
        ledRotNE = new AWMultiObject(frame_2);
        ledRotNE->setObjectName(QString::fromUtf8("ledRotNE"));
        ledRotNE->setGeometry(QRect(6, 76, 31, 25));
        ledRotNE->setElementType(AWMultiObject::CIRLED);
        ledCtrlMD = new AWMultiObject(frame_2);
        ledCtrlMD->setObjectName(QString::fromUtf8("ledCtrlMD"));
        ledCtrlMD->setGeometry(QRect(6, 96, 31, 25));
        ledCtrlMD->setElementType(AWMultiObject::CIRLED);
        lbCtrlMDT = new QLabel(frame_2);
        lbCtrlMDT->setObjectName(QString::fromUtf8("lbCtrlMDT"));
        lbCtrlMDT->setGeometry(QRect(36, 98, 300, 16));
        lbCtrlMDT->setFont(font);
        ledMen300N25_1 = new AWMultiObject(frame_2);
        ledMen300N25_1->setObjectName(QString::fromUtf8("ledMen300N25_1"));
        ledMen300N25_1->setGeometry(QRect(6, 116, 31, 25));
        ledMen300N25_1->setElementType(AWMultiObject::CIRLED);
        lbMen300N25_1T = new QLabel(frame_2);
        lbMen300N25_1T->setObjectName(QString::fromUtf8("lbMen300N25_1T"));
        lbMen300N25_1T->setGeometry(QRect(36, 117, 300, 16));
        lbMen300N25_1T->setFont(font);
        ledCieSinM = new AWMultiObject(frame_2);
        ledCieSinM->setObjectName(QString::fromUtf8("ledCieSinM"));
        ledCieSinM->setGeometry(QRect(6, 135, 31, 25));
        ledCieSinM->setElementType(AWMultiObject::CIRLED);
        lbCieSinMT = new QLabel(frame_2);
        lbCieSinMT->setObjectName(QString::fromUtf8("lbCieSinMT"));
        lbCieSinMT->setGeometry(QRect(36, 137, 300, 16));
        lbCieSinMT->setFont(font);
        ledBloqNo = new AWMultiObject(frame_2);
        ledBloqNo->setObjectName(QString::fromUtf8("ledBloqNo"));
        ledBloqNo->setGeometry(QRect(6, 173, 31, 25));
        ledBloqNo->setElementType(AWMultiObject::CIRLED);
        lbNivTanTurT = new QLabel(frame_2);
        lbNivTanTurT->setObjectName(QString::fromUtf8("lbNivTanTurT"));
        lbNivTanTurT->setGeometry(QRect(36, 156, 300, 16));
        lbNivTanTurT->setFont(font);
        ledLavAguFu = new AWMultiObject(frame_2);
        ledLavAguFu->setObjectName(QString::fromUtf8("ledLavAguFu"));
        ledLavAguFu->setGeometry(QRect(6, 211, 31, 25));
        ledLavAguFu->setElementType(AWMultiObject::CIRLED);
        lbBloqNoT = new QLabel(frame_2);
        lbBloqNoT->setObjectName(QString::fromUtf8("lbBloqNoT"));
        lbBloqNoT->setGeometry(QRect(36, 175, 300, 16));
        lbBloqNoT->setFont(font);
        lbTempEstT = new QLabel(frame_2);
        lbTempEstT->setObjectName(QString::fromUtf8("lbTempEstT"));
        lbTempEstT->setGeometry(QRect(36, 233, 300, 16));
        lbTempEstT->setFont(font);
        lbLavAguFuT = new QLabel(frame_2);
        lbLavAguFuT->setObjectName(QString::fromUtf8("lbLavAguFuT"));
        lbLavAguFuT->setGeometry(QRect(36, 215, 300, 16));
        lbLavAguFuT->setFont(font);
        ledUnidFun = new AWMultiObject(frame_2);
        ledUnidFun->setObjectName(QString::fromUtf8("ledUnidFun"));
        ledUnidFun->setGeometry(QRect(6, 191, 31, 25));
        ledUnidFun->setElementType(AWMultiObject::CIRLED);
        ledTempAceTur = new AWMultiObject(frame_2);
        ledTempAceTur->setObjectName(QString::fromUtf8("ledTempAceTur"));
        ledTempAceTur->setGeometry(QRect(6, 250, 31, 25));
        ledTempAceTur->setElementType(AWMultiObject::CIRLED);
        lbUnidFunT = new QLabel(frame_2);
        lbUnidFunT->setObjectName(QString::fromUtf8("lbUnidFunT"));
        lbUnidFunT->setGeometry(QRect(36, 195, 300, 16));
        lbUnidFunT->setFont(font);
        ledNivTanTur = new AWMultiObject(frame_2);
        ledNivTanTur->setObjectName(QString::fromUtf8("ledNivTanTur"));
        ledNivTanTur->setGeometry(QRect(6, 153, 31, 25));
        ledNivTanTur->setElementType(AWMultiObject::CIRLED);
        ledTempEst = new AWMultiObject(frame_2);
        ledTempEst->setObjectName(QString::fromUtf8("ledTempEst"));
        ledTempEst->setGeometry(QRect(6, 231, 31, 25));
        ledTempEst->setElementType(AWMultiObject::CIRLED);
        lbTempAceTurT = new QLabel(frame_2);
        lbTempAceTurT->setObjectName(QString::fromUtf8("lbTempAceTurT"));
        lbTempAceTurT->setGeometry(QRect(36, 253, 300, 16));
        lbTempAceTurT->setFont(font);
        lbValConbT = new QLabel(frame_2);
        lbValConbT->setObjectName(QString::fromUtf8("lbValConbT"));
        lbValConbT->setGeometry(QRect(36, 272, 300, 16));
        lbValConbT->setFont(font);
        lbTempAceGenT = new QLabel(frame_2);
        lbTempAceGenT->setObjectName(QString::fromUtf8("lbTempAceGenT"));
        lbTempAceGenT->setGeometry(QRect(36, 292, 300, 16));
        lbTempAceGenT->setFont(font);
        ledValSumCer = new AWMultiObject(frame_2);
        ledValSumCer->setObjectName(QString::fromUtf8("ledValSumCer"));
        ledValSumCer->setGeometry(QRect(6, 328, 31, 25));
        ledValSumCer->setElementType(AWMultiObject::CIRLED);
        lbCan2T = new QLabel(frame_2);
        lbCan2T->setObjectName(QString::fromUtf8("lbCan2T"));
        lbCan2T->setGeometry(QRect(36, 312, 300, 16));
        lbCan2T->setFont(font);
        ledCan2 = new AWMultiObject(frame_2);
        ledCan2->setObjectName(QString::fromUtf8("ledCan2"));
        ledCan2->setGeometry(QRect(6, 308, 31, 25));
        ledCan2->setElementType(AWMultiObject::CIRLED);
        lbValSumCerT = new QLabel(frame_2);
        lbValSumCerT->setObjectName(QString::fromUtf8("lbValSumCerT"));
        lbValSumCerT->setGeometry(QRect(36, 331, 300, 16));
        lbValSumCerT->setFont(font);
        ledTempAceGen = new AWMultiObject(frame_2);
        ledTempAceGen->setObjectName(QString::fromUtf8("ledTempAceGen"));
        ledTempAceGen->setGeometry(QRect(6, 289, 31, 25));
        ledTempAceGen->setElementType(AWMultiObject::CIRLED);
        ledValConb = new AWMultiObject(frame_2);
        ledValConb->setObjectName(QString::fromUtf8("ledValConb"));
        ledValConb->setGeometry(QRect(6, 269, 31, 25));
        ledValConb->setElementType(AWMultiObject::CIRLED);
        frame_4 = new QFrame(frame_2);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(2, 5, 336, 27));
        frame_4->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        frame_4->setFrameShape(QFrame::Box);
        frame_4->setFrameShadow(QFrame::Sunken);
        lbPerRotT_2 = new QLabel(frame_4);
        lbPerRotT_2->setObjectName(QString::fromUtf8("lbPerRotT_2"));
        lbPerRotT_2->setGeometry(QRect(5, 3, 323, 18));
        lbPerRotT_2->setFont(font1);
        lbPerRotT_2->setAlignment(Qt::AlignCenter);
        frame_5 = new QFrame(frame_2);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(2, 420, 336, 27));
        frame_5->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        frame_5->setFrameShape(QFrame::Box);
        frame_5->setFrameShadow(QFrame::Sunken);
        lbSisT = new QLabel(frame_5);
        lbSisT->setObjectName(QString::fromUtf8("lbSisT"));
        lbSisT->setGeometry(QRect(5, 3, 323, 18));
        lbSisT->setFont(font1);
        lbSisT->setAlignment(Qt::AlignCenter);
        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(341, 0, 341, 531));
        frame_3->setFrameShape(QFrame::Box);
        frame_3->setFrameShadow(QFrame::Raised);
        ledT2May = new AWMultiObject(frame_3);
        ledT2May->setObjectName(QString::fromUtf8("ledT2May"));
        ledT2May->setGeometry(QRect(16, 77, 31, 25));
        ledT2May->setElementType(AWMultiObject::CIRLED);
        ledNivTan = new AWMultiObject(frame_3);
        ledNivTan->setObjectName(QString::fromUtf8("ledNivTan"));
        ledNivTan->setGeometry(QRect(16, 97, 31, 25));
        ledNivTan->setElementType(AWMultiObject::CIRLED);
        ledLavAgua = new AWMultiObject(frame_3);
        ledLavAgua->setObjectName(QString::fromUtf8("ledLavAgua"));
        ledLavAgua->setGeometry(QRect(16, 40, 31, 25));
        ledLavAgua->setElementType(AWMultiObject::CIRLED);
        lbNivTanT = new QLabel(frame_3);
        lbNivTanT->setObjectName(QString::fromUtf8("lbNivTanT"));
        lbNivTanT->setGeometry(QRect(48, 101, 251, 16));
        lbNivTanT->setFont(font1);
        ledNsd = new AWMultiObject(frame_3);
        ledNsd->setObjectName(QString::fromUtf8("ledNsd"));
        ledNsd->setGeometry(QRect(16, 58, 31, 25));
        ledNsd->setElementType(AWMultiObject::CIRLED);
        lbNsdT = new QLabel(frame_3);
        lbNsdT->setObjectName(QString::fromUtf8("lbNsdT"));
        lbNsdT->setGeometry(QRect(48, 63, 251, 16));
        lbNsdT->setFont(font1);
        lbLavAguaT = new QLabel(frame_3);
        lbLavAguaT->setObjectName(QString::fromUtf8("lbLavAguaT"));
        lbLavAguaT->setGeometry(QRect(48, 43, 251, 16));
        lbLavAguaT->setFont(font1);
        lbT2MayT = new QLabel(frame_3);
        lbT2MayT->setObjectName(QString::fromUtf8("lbT2MayT"));
        lbT2MayT->setGeometry(QRect(48, 82, 251, 16));
        lbT2MayT->setFont(font1);
        ledMen300N25_2 = new AWMultiObject(frame_3);
        ledMen300N25_2->setObjectName(QString::fromUtf8("ledMen300N25_2"));
        ledMen300N25_2->setGeometry(QRect(16, 369, 31, 25));
        ledMen300N25_2->setElementType(AWMultiObject::CIRLED);
        ledNivTan_2 = new AWMultiObject(frame_3);
        ledNivTan_2->setObjectName(QString::fromUtf8("ledNivTan_2"));
        ledNivTan_2->setGeometry(QRect(16, 388, 31, 25));
        ledNivTan_2->setElementType(AWMultiObject::CIRLED);
        ledPerRot = new AWMultiObject(frame_3);
        ledPerRot->setObjectName(QString::fromUtf8("ledPerRot"));
        ledPerRot->setGeometry(QRect(16, 330, 31, 25));
        ledPerRot->setElementType(AWMultiObject::CIRLED);
        lbNivTanT_2 = new QLabel(frame_3);
        lbNivTanT_2->setObjectName(QString::fromUtf8("lbNivTanT_2"));
        lbNivTanT_2->setGeometry(QRect(48, 391, 251, 16));
        lbNivTanT_2->setFont(font1);
        ledT48Men = new AWMultiObject(frame_3);
        ledT48Men->setObjectName(QString::fromUtf8("ledT48Men"));
        ledT48Men->setGeometry(QRect(16, 349, 31, 25));
        ledT48Men->setElementType(AWMultiObject::CIRLED);
        lbT48MenT = new QLabel(frame_3);
        lbT48MenT->setObjectName(QString::fromUtf8("lbT48MenT"));
        lbT48MenT->setGeometry(QRect(48, 353, 251, 16));
        lbT48MenT->setFont(font1);
        lbPerRotT = new QLabel(frame_3);
        lbPerRotT->setObjectName(QString::fromUtf8("lbPerRotT"));
        lbPerRotT->setGeometry(QRect(48, 333, 251, 16));
        lbPerRotT->setFont(font1);
        lbMen300N25_2T = new QLabel(frame_3);
        lbMen300N25_2T->setObjectName(QString::fromUtf8("lbMen300N25_2T"));
        lbMen300N25_2T->setGeometry(QRect(48, 372, 251, 16));
        lbMen300N25_2T->setFont(font1);
        frame_6 = new QFrame(frame_3);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setGeometry(QRect(3, 5, 334, 27));
        frame_6->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        frame_6->setFrameShape(QFrame::Box);
        frame_6->setFrameShadow(QFrame::Sunken);
        lbPerLavEnLinT = new QLabel(frame_6);
        lbPerLavEnLinT->setObjectName(QString::fromUtf8("lbPerLavEnLinT"));
        lbPerLavEnLinT->setGeometry(QRect(5, 3, 323, 18));
        lbPerLavEnLinT->setFont(font1);
        lbPerLavEnLinT->setFrameShadow(QFrame::Sunken);
        lbPerLavEnLinT->setAlignment(Qt::AlignCenter);
        frame_7 = new QFrame(frame_3);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setGeometry(QRect(3, 302, 334, 27));
        frame_7->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        frame_7->setFrameShape(QFrame::Box);
        frame_7->setFrameShadow(QFrame::Sunken);
        lbPerLavDeLinT = new QLabel(frame_7);
        lbPerLavDeLinT->setObjectName(QString::fromUtf8("lbPerLavDeLinT"));
        lbPerLavDeLinT->setGeometry(QRect(5, 4, 323, 18));
        lbPerLavDeLinT->setFont(font1);
        lbPerLavDeLinT->setAlignment(Qt::AlignCenter);
        lbUniNoT = new QLabel(A6);
        lbUniNoT->setObjectName(QString::fromUtf8("lbUniNoT"));
        lbUniNoT->setGeometry(QRect(163, 50, 361, 21));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        lbUniNoT->setFont(font2);
        lbUniNoT->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        label_32 = new QLabel(A6);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(528, 50, 431, 21));
        label_32->setFont(font2);
        label_32->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        lbUnit3 = new QLabel(A6);
        lbUnit3->setObjectName(QString::fromUtf8("lbUnit3"));
        lbUnit3->setGeometry(QRect(833, 648, 190, 15));
        QFont font3;
        font3.setBold(true);
        font3.setWeight(75);
        lbUnit3->setFont(font3);
        lbUnit3->setStyleSheet(QString::fromUtf8("background-color: rgb(175, 175, 175);"));
        btnIMPPant = new QPushButton(A6);
        btnIMPPant->setObjectName(QString::fromUtf8("btnIMPPant"));
        btnIMPPant->setGeometry(QRect(10, 632, 134, 23));
        QFont font4;
        font4.setPointSize(8);
        font4.setBold(true);
        font4.setWeight(75);
        btnIMPPant->setFont(font4);
        btnIMPPant->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));

        retranslateUi(A6);

        QMetaObject::connectSlotsByName(A6);
    } // setupUi

    void retranslateUi(QWidget *A6)
    {
        A6->setWindowTitle(QApplication::translate("A6", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        lbApaFunT->setText(QApplication::translate("A6", "APAGADO/FUNCIONANDO", 0, QApplication::UnicodeUTF8));
        lbArraHidT->setText(QApplication::translate("A6", "ARRANCADOR -HID OK", 0, QApplication::UnicodeUTF8));
        lbLavConADT->setText(QApplication::translate("A6", "LAVADO CON AGUA DESACTIVADO", 0, QApplication::UnicodeUTF8));
        lbHardMicrT->setText(QApplication::translate("A6", "HARDWARE MICRONET OK", 0, QApplication::UnicodeUTF8));
        lbHarLinkT->setText(QApplication::translate("A6", "HARDWARE LINKNET OK", 0, QApplication::UnicodeUTF8));
        lbRotNET->setText(QApplication::translate("A6", "ROTACI\303\223N NO ESTA EFECTU\303\201NDOSE", 0, QApplication::UnicodeUTF8));
        lbCtrlMDT->setText(QApplication::translate("A6", "CONTROL MANUAL DO DESHABILITADO", 0, QApplication::UnicodeUTF8));
        lbMen300N25_1T->setText(QApplication::translate("A6", "MENOS DE 300 RPM N25", 0, QApplication::UnicodeUTF8));
        lbCieSinMT->setText(QApplication::translate("A6", "CIERRE SIN MOTOR Y ALTO NORMAL LISTO", 0, QApplication::UnicodeUTF8));
        lbNivTanTurT->setText(QApplication::translate("A6", "NIVEL TANQUE TURBINA OK", 0, QApplication::UnicodeUTF8));
        lbBloqNoT->setText(QApplication::translate("A6", "BLOQUEO CUATRO HORAS NO ACTIVO", 0, QApplication::UnicodeUTF8));
        lbTempEstT->setText(QApplication::translate("A6", "TEMP ESTATOR OK", 0, QApplication::UnicodeUTF8));
        lbLavAguFuT->setText(QApplication::translate("A6", "LAVADO AGUA FUERA DE L\303\215NEA  NO ACTIVO", 0, QApplication::UnicodeUTF8));
        lbUnidFunT->setText(QApplication::translate("A6", "UNIDAD FUNCIONANDO", 0, QApplication::UnicodeUTF8));
        lbTempAceTurT->setText(QApplication::translate("A6", "TEMP ACEITE  LUB TURBINA OK", 0, QApplication::UnicodeUTF8));
        lbValConbT->setText(QApplication::translate("A6", "V\303\201LV CONB EN ALTO MIN", 0, QApplication::UnicodeUTF8));
        lbTempAceGenT->setText(QApplication::translate("A6", "TEMP ACEITE  LUB GEN OK", 0, QApplication::UnicodeUTF8));
        lbCan2T->setText(QApplication::translate("A6", "CANAL 2 N4N52", 0, QApplication::UnicodeUTF8));
        lbValSumCerT->setText(QApplication::translate("A6", "VALVS SUMINISTRO CERRADO VENTEO ABIERTO", 0, QApplication::UnicodeUTF8));
        lbPerRotT_2->setText(QApplication::translate("A6", "PERMISOS DE ROTACI\303\223N", 0, QApplication::UnicodeUTF8));
        lbSisT->setText(QApplication::translate("A6", "EQUIPO DEL SISYEMA DE CONTROL", 0, QApplication::UnicodeUTF8));
        lbNivTanT->setText(QApplication::translate("A6", "NIVEL TANQUE LAV AGUA", 0, QApplication::UnicodeUTF8));
        lbNsdT->setText(QApplication::translate("A6", "NSD MAYOR  A3590", 0, QApplication::UnicodeUTF8));
        lbLavAguaT->setText(QApplication::translate("A6", "LAV C/AGUA MW HABILITAR", 0, QApplication::UnicodeUTF8));
        lbT2MayT->setText(QApplication::translate("A6", "T2 MAYOR DE 50 GRAD F (10 C)", 0, QApplication::UnicodeUTF8));
        lbNivTanT_2->setText(QApplication::translate("A6", "NIVEL TANQUE LAV AGUA", 0, QApplication::UnicodeUTF8));
        lbT48MenT->setText(QApplication::translate("A6", "T48 MENOS 200", 0, QApplication::UnicodeUTF8));
        lbPerRotT->setText(QApplication::translate("A6", "PERMISOS ROTACI\303\223N CUMPLIDOS", 0, QApplication::UnicodeUTF8));
        lbMen300N25_2T->setText(QApplication::translate("A6", "MENOS 300 RPM N25\n"
"", 0, QApplication::UnicodeUTF8));
        lbPerLavEnLinT->setText(QApplication::translate("A6", "PERMISOS DE LAVADO CON AGUA EN LINEA", 0, QApplication::UnicodeUTF8));
        lbPerLavDeLinT->setText(QApplication::translate("A6", "PERMISOS LAVADO CON AGUA FUERA DE LINEA", 0, QApplication::UnicodeUTF8));
        lbUniNoT->setText(QApplication::translate("A6", "UNIDAD NO EST\303\201 LISTA PARA ROTACI\303\223N", 0, QApplication::UnicodeUTF8));
        label_32->setText(QApplication::translate("A6", "UNIDAD NO EST\303\201 LISTA PARA LAVADO CON AGUA", 0, QApplication::UnicodeUTF8));
        lbUnit3->setText(QApplication::translate("A6", "    UNIT3", 0, QApplication::UnicodeUTF8));
        btnIMPPant->setText(QApplication::translate("A6", "IMP PANT", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class A6: public Ui_A6 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_A6_H
