/********************************************************************************
** Form generated from reading UI file 'd4.ui'
**
** Created: Fri 3. Jan 20:43:13 2014
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_D4_H
#define UI_D4_H

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
#include "wlabel.h"

QT_BEGIN_NAMESPACE

class Ui_D4
{
public:
    QFrame *frame;
    QFrame *frame_2;
    WLabel *lbSupT;
    WLabel *lbCtrlT;
    WLabel *lbContT;
    WLabel *lbDesaT;
    WLabel *lbDesa;
    WLabel *lbTiemT;
    WLabel *lbDetT_2;
    WLabel *lbDetT;
    WLabel *lbPaso;
    WLabel *lbPasoT;
    WLabel *lbApaSin;
    WLabel *lbApaSinT;
    WLabel *lbApaConT;
    WLabel *lbApaCon;
    WLabel *lbArra;
    WLabel *lbArraT;
    WLabel *lbInt;
    WLabel *lbIntT;
    WLabel *lbPs3;
    WLabel *lbPs3T;
    WLabel *lbt48E;
    WLabel *lbT3ET;
    WLabel *lbT3E;
    WLabel *lbt48ET;
    WLabel *lbPs3_2;
    WLabel *lbt48E_2;
    WLabel *lbT3E_2;
    WCheckBox *cbInic;
    WCheckBox *cbAlto;
    WLabel *lbColeT;
    WLabel *lbMemllT;
    WLabel *label_2;
    WLabel *label_3;
    WLabel *label;
    QFrame *frame_3;
    QFrame *frame_4;
    WLabel *lbIfixT;
    WLabel *lbifixT;
    WLabel *lbRegT;
    QPushButton *btReg;
    QPushButton *btMiss;
    QFrame *frame_5;
    WLabel *lbMicroT;
    WLabel *lbSoftT;
    WLabel *lbCtrlAssT;
    WLabel *lbLogT;
    WLabel *lbGapT;
    QPushButton *btGap;
    QPushButton *btLog;
    QPushButton *btCtrlAss;
    QPushButton *btMicro;
    WLabel *lbUtilT;
    WLabel *lbUnit3;
    QPushButton *btnIMPPant;
    QLabel *lbIMGFondo;

    void setupUi(QWidget *D4)
    {
        if (D4->objectName().isEmpty())
            D4->setObjectName(QString::fromUtf8("D4"));
        D4->resize(1024, 662);
        D4->setMinimumSize(QSize(1024, 662));
        D4->setMaximumSize(QSize(1024, 662));
        D4->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        frame = new QFrame(D4);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(71, 64, 882, 544));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Raised);
        frame->setLineWidth(2);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(0, 0, 441, 544));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        frame_2->setFont(font);
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        frame_2->setFrameShape(QFrame::Box);
        frame_2->setFrameShadow(QFrame::Sunken);
        frame_2->setLineWidth(2);
        lbSupT = new WLabel(frame_2);
        lbSupT->setObjectName(QString::fromUtf8("lbSupT"));
        lbSupT->setGeometry(QRect(0, 5, 440, 26));
        lbSupT->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        lbSupT->setFont(font1);
        lbSupT->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbSupT->setProperty("lineWidth", QVariant(1));
        lbCtrlT = new WLabel(frame_2);
        lbCtrlT->setObjectName(QString::fromUtf8("lbCtrlT"));
        lbCtrlT->setGeometry(QRect(0, 368, 440, 26));
        lbCtrlT->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        lbCtrlT->setFont(font1);
        lbCtrlT->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbContT = new WLabel(frame_2);
        lbContT->setObjectName(QString::fromUtf8("lbContT"));
        lbContT->setGeometry(QRect(13, 39, 331, 16));
        lbContT->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 0, 126);"));
        lbContT->setFont(font1);
        lbContT->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbDesaT = new WLabel(frame_2);
        lbDesaT->setObjectName(QString::fromUtf8("lbDesaT"));
        lbDesaT->setGeometry(QRect(11, 59, 331, 16));
        lbDesaT->setFont(font1);
        lbDesaT->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbDesa = new WLabel(frame_2);
        lbDesa->setObjectName(QString::fromUtf8("lbDesa"));
        lbDesa->setGeometry(QRect(363, 58, 40, 16));
        lbDesa->setFont(font1);
        lbDesa->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbTiemT = new WLabel(frame_2);
        lbTiemT->setObjectName(QString::fromUtf8("lbTiemT"));
        lbTiemT->setGeometry(QRect(13, 251, 331, 16));
        lbTiemT->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 0, 126);"));
        lbTiemT->setFont(font1);
        lbTiemT->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbDetT_2 = new WLabel(frame_2);
        lbDetT_2->setObjectName(QString::fromUtf8("lbDetT_2"));
        lbDetT_2->setGeometry(QRect(363, 82, 40, 16));
        lbDetT_2->setFont(font1);
        lbDetT_2->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbDetT = new WLabel(frame_2);
        lbDetT->setObjectName(QString::fromUtf8("lbDetT"));
        lbDetT->setGeometry(QRect(11, 82, 331, 16));
        lbDetT->setFont(font1);
        lbDetT->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbPaso = new WLabel(frame_2);
        lbPaso->setObjectName(QString::fromUtf8("lbPaso"));
        lbPaso->setGeometry(QRect(363, 106, 40, 16));
        lbPaso->setFont(font1);
        lbPaso->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbPasoT = new WLabel(frame_2);
        lbPasoT->setObjectName(QString::fromUtf8("lbPasoT"));
        lbPasoT->setGeometry(QRect(11, 106, 331, 16));
        lbPasoT->setFont(font1);
        lbPasoT->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbApaSin = new WLabel(frame_2);
        lbApaSin->setObjectName(QString::fromUtf8("lbApaSin"));
        lbApaSin->setGeometry(QRect(363, 130, 40, 16));
        lbApaSin->setFont(font1);
        lbApaSin->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbApaSinT = new WLabel(frame_2);
        lbApaSinT->setObjectName(QString::fromUtf8("lbApaSinT"));
        lbApaSinT->setGeometry(QRect(11, 130, 331, 16));
        lbApaSinT->setFont(font1);
        lbApaSinT->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbApaConT = new WLabel(frame_2);
        lbApaConT->setObjectName(QString::fromUtf8("lbApaConT"));
        lbApaConT->setGeometry(QRect(11, 155, 331, 16));
        lbApaConT->setFont(font1);
        lbApaConT->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbApaCon = new WLabel(frame_2);
        lbApaCon->setObjectName(QString::fromUtf8("lbApaCon"));
        lbApaCon->setGeometry(QRect(363, 155, 40, 16));
        lbApaCon->setFont(font1);
        lbApaCon->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbArra = new WLabel(frame_2);
        lbArra->setObjectName(QString::fromUtf8("lbArra"));
        lbArra->setGeometry(QRect(363, 179, 40, 16));
        lbArra->setFont(font1);
        lbArra->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbArraT = new WLabel(frame_2);
        lbArraT->setObjectName(QString::fromUtf8("lbArraT"));
        lbArraT->setGeometry(QRect(11, 179, 331, 16));
        lbArraT->setFont(font1);
        lbArraT->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbInt = new WLabel(frame_2);
        lbInt->setObjectName(QString::fromUtf8("lbInt"));
        lbInt->setGeometry(QRect(363, 203, 40, 16));
        lbInt->setFont(font1);
        lbInt->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbIntT = new WLabel(frame_2);
        lbIntT->setObjectName(QString::fromUtf8("lbIntT"));
        lbIntT->setGeometry(QRect(11, 203, 331, 16));
        lbIntT->setFont(font1);
        lbIntT->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbPs3 = new WLabel(frame_2);
        lbPs3->setObjectName(QString::fromUtf8("lbPs3"));
        lbPs3->setGeometry(QRect(350, 320, 40, 16));
        lbPs3->setFont(font1);
        lbPs3->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbPs3T = new WLabel(frame_2);
        lbPs3T->setObjectName(QString::fromUtf8("lbPs3T"));
        lbPs3T->setGeometry(QRect(11, 319, 331, 16));
        lbPs3T->setFont(font1);
        lbPs3T->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbt48E = new WLabel(frame_2);
        lbt48E->setObjectName(QString::fromUtf8("lbt48E"));
        lbt48E->setGeometry(QRect(350, 296, 40, 16));
        lbt48E->setFont(font1);
        lbt48E->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbT3ET = new WLabel(frame_2);
        lbT3ET->setObjectName(QString::fromUtf8("lbT3ET"));
        lbT3ET->setGeometry(QRect(11, 271, 331, 16));
        lbT3ET->setFont(font1);
        lbT3ET->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbT3E = new WLabel(frame_2);
        lbT3E->setObjectName(QString::fromUtf8("lbT3E"));
        lbT3E->setGeometry(QRect(350, 272, 40, 16));
        lbT3E->setFont(font1);
        lbT3E->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbt48ET = new WLabel(frame_2);
        lbt48ET->setObjectName(QString::fromUtf8("lbt48ET"));
        lbt48ET->setGeometry(QRect(11, 295, 331, 16));
        lbt48ET->setFont(font1);
        lbt48ET->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbPs3_2 = new WLabel(frame_2);
        lbPs3_2->setObjectName(QString::fromUtf8("lbPs3_2"));
        lbPs3_2->setGeometry(QRect(406, 320, 30, 16));
        lbPs3_2->setFont(font1);
        lbPs3_2->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbt48E_2 = new WLabel(frame_2);
        lbt48E_2->setObjectName(QString::fromUtf8("lbt48E_2"));
        lbt48E_2->setGeometry(QRect(406, 296, 30, 16));
        lbt48E_2->setFont(font1);
        lbt48E_2->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbT3E_2 = new WLabel(frame_2);
        lbT3E_2->setObjectName(QString::fromUtf8("lbT3E_2"));
        lbT3E_2->setGeometry(QRect(406, 272, 30, 16));
        lbT3E_2->setFont(font1);
        lbT3E_2->setProperty("Alineacion", QVariant(WLabel::Derecha));
        cbInic = new WCheckBox(frame_2);
        cbInic->setObjectName(QString::fromUtf8("cbInic"));
        cbInic->setGeometry(QRect(12, 411, 311, 18));
        cbInic->setFont(font1);
        cbAlto = new WCheckBox(frame_2);
        cbAlto->setObjectName(QString::fromUtf8("cbAlto"));
        cbAlto->setGeometry(QRect(12, 435, 301, 18));
        cbAlto->setFont(font1);
        lbColeT = new WLabel(frame_2);
        lbColeT->setObjectName(QString::fromUtf8("lbColeT"));
        lbColeT->setGeometry(QRect(315, 422, 91, 21));
        lbColeT->setStyleSheet(QString::fromUtf8("color: rgb(85, 255, 0);"));
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setWeight(75);
        lbColeT->setFont(font2);
        lbColeT->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbMemllT = new WLabel(frame_2);
        lbMemllT->setObjectName(QString::fromUtf8("lbMemllT"));
        lbMemllT->setGeometry(QRect(245, 451, 191, 21));
        lbMemllT->setStyleSheet(QString::fromUtf8("color: rgb(85, 255, 0);"));
        lbMemllT->setFont(font2);
        lbMemllT->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        label_2 = new WLabel(frame_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(400, 296, 12, 16));
        label_2->setFont(font1);
        label_2->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        label_3 = new WLabel(frame_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(400, 320, 12, 16));
        label_3->setFont(font1);
        label_3->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        label = new WLabel(frame_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(400, 272, 12, 16));
        label->setFont(font1);
        label->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(440, 0, 441, 544));
        frame_3->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        frame_3->setFrameShape(QFrame::Box);
        frame_3->setFrameShadow(QFrame::Raised);
        frame_3->setLineWidth(2);
        frame_4 = new QFrame(frame_3);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(65, 343, 318, 174));
        frame_4->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        frame_4->setFrameShape(QFrame::Box);
        frame_4->setFrameShadow(QFrame::Sunken);
        frame_4->setLineWidth(2);
        lbIfixT = new WLabel(frame_4);
        lbIfixT->setObjectName(QString::fromUtf8("lbIfixT"));
        lbIfixT->setGeometry(QRect(0, 0, 317, 26));
        lbIfixT->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        lbIfixT->setFont(font1);
        lbIfixT->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbifixT = new WLabel(frame_4);
        lbifixT->setObjectName(QString::fromUtf8("lbifixT"));
        lbifixT->setGeometry(QRect(3, 43, 310, 16));
        lbifixT->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 0, 126);"));
        lbifixT->setFont(font1);
        lbifixT->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbRegT = new WLabel(frame_4);
        lbRegT->setObjectName(QString::fromUtf8("lbRegT"));
        lbRegT->setGeometry(QRect(2, 107, 310, 16));
        lbRegT->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 0, 126);"));
        lbRegT->setFont(font1);
        lbRegT->setProperty("Alineacion", QVariant(WLabel::Centro));
        btReg = new QPushButton(frame_4);
        btReg->setObjectName(QString::fromUtf8("btReg"));
        btReg->setGeometry(QRect(80, 124, 154, 34));
        btReg->setFont(font1);
        btReg->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        btMiss = new QPushButton(frame_4);
        btMiss->setObjectName(QString::fromUtf8("btMiss"));
        btMiss->setGeometry(QRect(80, 61, 154, 34));
        btMiss->setFont(font1);
        btMiss->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        frame_5 = new QFrame(frame_3);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(65, 40, 318, 287));
        frame_5->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        frame_5->setFrameShape(QFrame::Box);
        frame_5->setFrameShadow(QFrame::Raised);
        frame_5->setLineWidth(2);
        lbMicroT = new WLabel(frame_5);
        lbMicroT->setObjectName(QString::fromUtf8("lbMicroT"));
        lbMicroT->setGeometry(QRect(5, 33, 310, 16));
        lbMicroT->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 0, 126);"));
        lbMicroT->setFont(font1);
        lbMicroT->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbSoftT = new WLabel(frame_5);
        lbSoftT->setObjectName(QString::fromUtf8("lbSoftT"));
        lbSoftT->setGeometry(QRect(0, 2, 317, 26));
        lbSoftT->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        lbSoftT->setFont(font1);
        lbSoftT->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbCtrlAssT = new WLabel(frame_5);
        lbCtrlAssT->setObjectName(QString::fromUtf8("lbCtrlAssT"));
        lbCtrlAssT->setGeometry(QRect(5, 95, 310, 16));
        lbCtrlAssT->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 0, 126);"));
        lbCtrlAssT->setFont(font1);
        lbCtrlAssT->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbLogT = new WLabel(frame_5);
        lbLogT->setObjectName(QString::fromUtf8("lbLogT"));
        lbLogT->setGeometry(QRect(5, 158, 310, 16));
        lbLogT->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 0, 126);"));
        lbLogT->setFont(font1);
        lbLogT->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbGapT = new WLabel(frame_5);
        lbGapT->setObjectName(QString::fromUtf8("lbGapT"));
        lbGapT->setGeometry(QRect(6, 222, 310, 16));
        lbGapT->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 0, 126);"));
        lbGapT->setFont(font1);
        lbGapT->setProperty("Alineacion", QVariant(WLabel::Centro));
        btGap = new QPushButton(frame_5);
        btGap->setObjectName(QString::fromUtf8("btGap"));
        btGap->setGeometry(QRect(80, 239, 154, 34));
        btGap->setFont(font1);
        btGap->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        btLog = new QPushButton(frame_5);
        btLog->setObjectName(QString::fromUtf8("btLog"));
        btLog->setGeometry(QRect(80, 175, 154, 34));
        btLog->setFont(font1);
        btLog->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        btCtrlAss = new QPushButton(frame_5);
        btCtrlAss->setObjectName(QString::fromUtf8("btCtrlAss"));
        btCtrlAss->setGeometry(QRect(80, 114, 154, 34));
        btCtrlAss->setFont(font1);
        btCtrlAss->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        btMicro = new QPushButton(frame_5);
        btMicro->setObjectName(QString::fromUtf8("btMicro"));
        btMicro->setGeometry(QRect(80, 50, 154, 34));
        btMicro->setFont(font1);
        btMicro->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        lbUtilT = new WLabel(frame_3);
        lbUtilT->setObjectName(QString::fromUtf8("lbUtilT"));
        lbUtilT->setGeometry(QRect(2, 5, 440, 26));
        lbUtilT->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        lbUtilT->setFont(font1);
        lbUtilT->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbUnit3 = new WLabel(D4);
        lbUnit3->setObjectName(QString::fromUtf8("lbUnit3"));
        lbUnit3->setGeometry(QRect(833, 647, 190, 15));
        lbUnit3->setStyleSheet(QString::fromUtf8("background-color: rgb(175, 175, 175);"));
        QFont font3;
        font3.setBold(true);
        font3.setWeight(75);
        lbUnit3->setFont(font3);
        lbUnit3->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        btnIMPPant = new QPushButton(D4);
        btnIMPPant->setObjectName(QString::fromUtf8("btnIMPPant"));
        btnIMPPant->setGeometry(QRect(10, 632, 134, 23));
        QFont font4;
        font4.setPointSize(8);
        font4.setBold(true);
        font4.setWeight(75);
        btnIMPPant->setFont(font4);
        btnIMPPant->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        lbIMGFondo = new QLabel(D4);
        lbIMGFondo->setObjectName(QString::fromUtf8("lbIMGFondo"));
        lbIMGFondo->setGeometry(QRect(0, 0, 1024, 662));
        lbIMGFondo->setPixmap(QPixmap(QString::fromUtf8(":/Resources/PNG/BackGround.png")));
        lbIMGFondo->raise();
        frame->raise();
        lbUnit3->raise();
        btnIMPPant->raise();

        retranslateUi(D4);

        QMetaObject::connectSlotsByName(D4);
    } // setupUi

    void retranslateUi(QWidget *D4)
    {
        D4->setWindowTitle(QApplication::translate("D4", "D4", 0, QApplication::UnicodeUTF8));
        lbSupT->setText(QApplication::translate("D4", "SUPERVISI\303\223N DE ESTADO", 0, QApplication::UnicodeUTF8));
        lbCtrlT->setText(QApplication::translate("D4", "CONTROL REGISTRO DE DATOS MICRONET", 0, QApplication::UnicodeUTF8));
        lbContT->setText(QApplication::translate("D4", "CONTADORES", 0, QApplication::UnicodeUTF8));
        lbDesaT->setText(QApplication::translate("D4", "DESACEL A CARGA MINIMA", 0, QApplication::UnicodeUTF8));
        lbDesa->setId(QApplication::translate("D4", "p_Fix32_THISNODE_DMS_F_CV", 0, QApplication::UnicodeUTF8));
        lbDesa->setText(QApplication::translate("D4", "0", 0, QApplication::UnicodeUTF8));
        lbTiemT->setText(QApplication::translate("D4", "TIEMPO", 0, QApplication::UnicodeUTF8));
        lbDetT_2->setId(QApplication::translate("D4", "p_Fix32_THISNODE_NSS_F_CV", 0, QApplication::UnicodeUTF8));
        lbDetT_2->setText(QApplication::translate("D4", "0", 0, QApplication::UnicodeUTF8));
        lbDetT->setText(QApplication::translate("D4", "DETENCIONES NORMALES ", 0, QApplication::UnicodeUTF8));
        lbPaso->setId(QApplication::translate("D4", "p_Fix32_THISNODE_STIS_F_CV", 0, QApplication::UnicodeUTF8));
        lbPaso->setText(QApplication::translate("D4", "0", 0, QApplication::UnicodeUTF8));
        lbPasoT->setText(QApplication::translate("D4", "PASOS A RALENT\303\215", 0, QApplication::UnicodeUTF8));
        lbApaSin->setId(QApplication::translate("D4", "p_Fix32_THISNODE_SDN_F_CV", 0, QApplication::UnicodeUTF8));
        lbApaSin->setText(QApplication::translate("D4", "0", 0, QApplication::UnicodeUTF8));
        lbApaSinT->setText(QApplication::translate("D4", "APAGADOS DE EMRGENCIA SIN MOTOR", 0, QApplication::UnicodeUTF8));
        lbApaConT->setText(QApplication::translate("D4", "APAGADOS DE EMRGENCIA CON MOTOR", 0, QApplication::UnicodeUTF8));
        lbApaCon->setId(QApplication::translate("D4", "p_Fix32_THISNODE_SDS_F_CV ", 0, QApplication::UnicodeUTF8));
        lbApaCon->setText(QApplication::translate("D4", "0", 0, QApplication::UnicodeUTF8));
        lbArra->setId(QApplication::translate("D4", "p_Fix32_THISNODE_STARTSG_F_CV", 0, QApplication::UnicodeUTF8));
        lbArra->setText(QApplication::translate("D4", "0", 0, QApplication::UnicodeUTF8));
        lbArraT->setText(QApplication::translate("D4", "ARRANQUES CON GAS", 0, QApplication::UnicodeUTF8));
        lbInt->setId(QApplication::translate("D4", "p_Fix32_THISNODE_STRTATTEMP_F_CV", 0, QApplication::UnicodeUTF8));
        lbInt->setText(QApplication::translate("D4", "0", 0, QApplication::UnicodeUTF8));
        lbIntT->setText(QApplication::translate("D4", "INTENTO DE ARRANQUES", 0, QApplication::UnicodeUTF8));
        lbPs3->setId(QApplication::translate("D4", "p_Fix32_THISNODE_HI_PS3_HRS_F_CV", 0, QApplication::UnicodeUTF8));
        lbPs3->setText(QApplication::translate("D4", "0", 0, QApplication::UnicodeUTF8));
        lbPs3T->setText(QApplication::translate("D4", "PS3 CONTROL DE RELLENO", 0, QApplication::UnicodeUTF8));
        lbt48E->setId(QApplication::translate("D4", "p_Fix32_THISNODE_BASET48_HR_F_CV", 0, QApplication::UnicodeUTF8));
        lbt48E->setText(QApplication::translate("D4", "3566", 0, QApplication::UnicodeUTF8));
        lbT3ET->setText(QApplication::translate("D4", "T3 ENTRADA BASE", 0, QApplication::UnicodeUTF8));
        lbT3E->setId(QApplication::translate("D4", "p_Fix32_THISNODE_BASET3_HR_F_CV", 0, QApplication::UnicodeUTF8));
        lbT3E->setText(QApplication::translate("D4", "75", 0, QApplication::UnicodeUTF8));
        lbt48ET->setText(QApplication::translate("D4", "T48 ENTRADA BASE", 0, QApplication::UnicodeUTF8));
        lbPs3_2->setId(QApplication::translate("D4", "p_Fix32_THISNODE_HI_PS3_MIN_F_CV", 0, QApplication::UnicodeUTF8));
        lbPs3_2->setText(QApplication::translate("D4", "0", 0, QApplication::UnicodeUTF8));
        lbt48E_2->setId(QApplication::translate("D4", "p_Fix32_THISNODE_BASET48MIN_F_CV", 0, QApplication::UnicodeUTF8));
        lbt48E_2->setText(QApplication::translate("D4", "0", 0, QApplication::UnicodeUTF8));
        lbT3E_2->setId(QApplication::translate("D4", "p_Fix32_THISNODE_BASET3MIN_F_CV", 0, QApplication::UnicodeUTF8));
        lbT3E_2->setText(QApplication::translate("D4", "0", 0, QApplication::UnicodeUTF8));
        cbInic->setId(QApplication::translate("D4", "p_Fix32_THISNODE_STRTLOG_F_CV ", 0, QApplication::UnicodeUTF8));
        cbInic->setText(QApplication::translate("D4", "INICIAR RECOLECCI\303\223N DATOS EN REGISTRO ", 0, QApplication::UnicodeUTF8));
        cbAlto->setId(QApplication::translate("D4", "p_Fix32_THISNODE_STPLOG_F_CV ", 0, QApplication::UnicodeUTF8));
        cbAlto->setText(QApplication::translate("D4", "ALTO RECOLECCI\303\223N DATOS EN REGISTRO ", 0, QApplication::UnicodeUTF8));
        lbColeT->setText(QApplication::translate("D4", "COLECCIONA", 0, QApplication::UnicodeUTF8));
        lbMemllT->setText(QApplication::translate("D4", "MEMORIA INTERMEDIA LLENA", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("D4", ":", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("D4", ":", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("D4", ":", 0, QApplication::UnicodeUTF8));
        lbIfixT->setText(QApplication::translate("D4", "iFIX DYNAMICS", 0, QApplication::UnicodeUTF8));
        lbifixT->setText(QApplication::translate("D4", "iFIX DYNAMICS MISSION CONTROL", 0, QApplication::UnicodeUTF8));
        lbRegT->setText(QApplication::translate("D4", "REGISTRO DE EVENTOS iFIX", 0, QApplication::UnicodeUTF8));
        btReg->setText(QApplication::translate("D4", "REGISTRO DE EVENTOS", 0, QApplication::UnicodeUTF8));
        btMiss->setText(QApplication::translate("D4", "MISSION CONTROL", 0, QApplication::UnicodeUTF8));
        lbMicroT->setText(QApplication::translate("D4", "MICROPANEL", 0, QApplication::UnicodeUTF8));
        lbSoftT->setText(QApplication::translate("D4", "SOFTWARE WOODWARD", 0, QApplication::UnicodeUTF8));
        lbCtrlAssT->setText(QApplication::translate("D4", "CONTROL ASSISTANT", 0, QApplication::UnicodeUTF8));
        lbLogT->setText(QApplication::translate("D4", "L\303\223GICA DE ESCALERA", 0, QApplication::UnicodeUTF8));
        lbGapT->setText(QApplication::translate("D4", "GAP DE S\303\223LO LECTURA", 0, QApplication::UnicodeUTF8));
        btGap->setText(QApplication::translate("D4", "GAP", 0, QApplication::UnicodeUTF8));
        btLog->setText(QApplication::translate("D4", "L\303\223GICA DE ESCALERA", 0, QApplication::UnicodeUTF8));
        btCtrlAss->setText(QApplication::translate("D4", "CONTROL ASSISTANT", 0, QApplication::UnicodeUTF8));
        btMicro->setText(QApplication::translate("D4", "MICROPANEL", 0, QApplication::UnicodeUTF8));
        lbUtilT->setText(QApplication::translate("D4", "UTILER\303\215A", 0, QApplication::UnicodeUTF8));
        lbUnit3->setText(QApplication::translate("D4", "    UNIT3", 0, QApplication::UnicodeUTF8));
        btnIMPPant->setText(QApplication::translate("D4", "IMP PANT", 0, QApplication::UnicodeUTF8));
        lbIMGFondo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class D4: public Ui_D4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_D4_H
