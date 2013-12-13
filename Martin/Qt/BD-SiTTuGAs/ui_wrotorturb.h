/********************************************************************************
** Form generated from reading UI file 'wrotorturb.ui'
**
** Created: Thu 12. Dec 21:16:43 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WROTORTURB_H
#define UI_WROTORTURB_H

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
#include "wlabel.h"

QT_BEGIN_NAMESPACE

class Ui_WRotorTurb
{
public:
    QFrame *frame;
    QLabel *lbVelRotorT;
    QPushButton *btCerrar;
    QPushButton *btElevar;
    QPushButton *btBajar;
    QLabel *lbDemandaT;
    QProgressBar *progressBar;
    QLabel *lbNum5;
    QLabel *lbg;
    QLabel *lbNum4;
    QLabel *lbg_2;
    QLabel *lbg_3;
    QLabel *lbNum2;
    QLabel *lbg_4;
    QLabel *lbNum3;
    QLabel *lbg_5;
    QLabel *lbNum1;
    QLabel *lbNum0;
    QLabel *lbg_6;
    QLabel *lbOperacionT;
    QLabel *lbCntrlT;
    QLabel *lbVelT;
    QLabel *lbRefT;
    QLabel *lbEmicionT;
    QFrame *frame_2;
    WLabel *lbVel;
    QLabel *lbVelU;
    QFrame *frame_3;
    WLabel *lbRef;
    QLabel *lbRefU;
    QFrame *frame_4;
    WLabel *lbEmicion;
    QLabel *lbEmicionU;
    QFrame *frame_5;
    QLabel *lbIP;
    WLabel *leOper;
    WLabel *leCntr;
    QLabel *lbFondo;

    void setupUi(QWidget *WRotorTurb)
    {
        if (WRotorTurb->objectName().isEmpty())
            WRotorTurb->setObjectName(QString::fromUtf8("WRotorTurb"));
        WRotorTurb->resize(200, 330);
        WRotorTurb->setMinimumSize(QSize(200, 330));
        WRotorTurb->setMaximumSize(QSize(200, 330));
        WRotorTurb->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        frame = new QFrame(WRotorTurb);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(1, 17, 198, 31));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Sunken);
        frame->setLineWidth(2);
        lbVelRotorT = new QLabel(frame);
        lbVelRotorT->setObjectName(QString::fromUtf8("lbVelRotorT"));
        lbVelRotorT->setGeometry(QRect(4, 7, 198, 20));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        lbVelRotorT->setFont(font);
        lbVelRotorT->setFrameShape(QFrame::NoFrame);
        lbVelRotorT->setFrameShadow(QFrame::Plain);
        lbVelRotorT->setLineWidth(1);
        lbVelRotorT->setAlignment(Qt::AlignCenter);
        btCerrar = new QPushButton(WRotorTurb);
        btCerrar->setObjectName(QString::fromUtf8("btCerrar"));
        btCerrar->setGeometry(QRect(59, 288, 83, 33));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setBold(true);
        font1.setWeight(75);
        font1.setKerning(true);
        btCerrar->setFont(font1);
        btCerrar->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        btCerrar->setAutoDefault(false);
        btCerrar->setDefault(false);
        btCerrar->setFlat(false);
        btElevar = new QPushButton(WRotorTurb);
        btElevar->setObjectName(QString::fromUtf8("btElevar"));
        btElevar->setGeometry(QRect(100, 75, 83, 33));
        btElevar->setFont(font1);
        btElevar->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        btElevar->setAutoDefault(false);
        btElevar->setDefault(false);
        btElevar->setFlat(false);
        btBajar = new QPushButton(WRotorTurb);
        btBajar->setObjectName(QString::fromUtf8("btBajar"));
        btBajar->setGeometry(QRect(100, 120, 83, 33));
        btBajar->setFont(font1);
        btBajar->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        btBajar->setAutoDefault(false);
        btBajar->setDefault(false);
        btBajar->setFlat(false);
        lbDemandaT = new QLabel(WRotorTurb);
        lbDemandaT->setObjectName(QString::fromUtf8("lbDemandaT"));
        lbDemandaT->setGeometry(QRect(10, 55, 171, 15));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Verdana"));
        font2.setBold(true);
        font2.setWeight(75);
        lbDemandaT->setFont(font2);
        lbDemandaT->setFrameShape(QFrame::NoFrame);
        lbDemandaT->setFrameShadow(QFrame::Plain);
        lbDemandaT->setLineWidth(1);
        lbDemandaT->setAlignment(Qt::AlignCenter);
        progressBar = new QProgressBar(WRotorTurb);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(70, 75, 15, 83));
        QFont font3;
        font3.setKerning(true);
        progressBar->setFont(font3);
        progressBar->setLayoutDirection(Qt::LeftToRight);
        progressBar->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
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
        progressBar->setValue(20);
        progressBar->setTextVisible(false);
        progressBar->setOrientation(Qt::Vertical);
        progressBar->setInvertedAppearance(false);
        lbNum5 = new QLabel(WRotorTurb);
        lbNum5->setObjectName(QString::fromUtf8("lbNum5"));
        lbNum5->setGeometry(QRect(10, 72, 31, 16));
        lbg = new QLabel(WRotorTurb);
        lbg->setObjectName(QString::fromUtf8("lbg"));
        lbg->setGeometry(QRect(50, 71, 16, 16));
        lbNum4 = new QLabel(WRotorTurb);
        lbNum4->setObjectName(QString::fromUtf8("lbNum4"));
        lbNum4->setGeometry(QRect(10, 87, 31, 16));
        lbg_2 = new QLabel(WRotorTurb);
        lbg_2->setObjectName(QString::fromUtf8("lbg_2"));
        lbg_2->setGeometry(QRect(50, 87, 16, 16));
        lbg_3 = new QLabel(WRotorTurb);
        lbg_3->setObjectName(QString::fromUtf8("lbg_3"));
        lbg_3->setGeometry(QRect(50, 103, 16, 16));
        lbNum2 = new QLabel(WRotorTurb);
        lbNum2->setObjectName(QString::fromUtf8("lbNum2"));
        lbNum2->setGeometry(QRect(10, 117, 31, 16));
        lbg_4 = new QLabel(WRotorTurb);
        lbg_4->setObjectName(QString::fromUtf8("lbg_4"));
        lbg_4->setGeometry(QRect(50, 117, 16, 16));
        lbNum3 = new QLabel(WRotorTurb);
        lbNum3->setObjectName(QString::fromUtf8("lbNum3"));
        lbNum3->setGeometry(QRect(10, 102, 31, 16));
        lbg_5 = new QLabel(WRotorTurb);
        lbg_5->setObjectName(QString::fromUtf8("lbg_5"));
        lbg_5->setGeometry(QRect(50, 132, 16, 16));
        lbNum1 = new QLabel(WRotorTurb);
        lbNum1->setObjectName(QString::fromUtf8("lbNum1"));
        lbNum1->setGeometry(QRect(10, 132, 31, 16));
        lbNum0 = new QLabel(WRotorTurb);
        lbNum0->setObjectName(QString::fromUtf8("lbNum0"));
        lbNum0->setGeometry(QRect(10, 147, 31, 16));
        lbg_6 = new QLabel(WRotorTurb);
        lbg_6->setObjectName(QString::fromUtf8("lbg_6"));
        lbg_6->setGeometry(QRect(50, 147, 16, 16));
        lbOperacionT = new QLabel(WRotorTurb);
        lbOperacionT->setObjectName(QString::fromUtf8("lbOperacionT"));
        lbOperacionT->setGeometry(QRect(10, 169, 71, 16));
        lbOperacionT->setFont(font);
        lbOperacionT->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbCntrlT = new QLabel(WRotorTurb);
        lbCntrlT->setObjectName(QString::fromUtf8("lbCntrlT"));
        lbCntrlT->setGeometry(QRect(10, 190, 71, 16));
        lbCntrlT->setFont(font);
        lbCntrlT->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbVelT = new QLabel(WRotorTurb);
        lbVelT->setObjectName(QString::fromUtf8("lbVelT"));
        lbVelT->setGeometry(QRect(10, 210, 71, 16));
        lbVelT->setFont(font);
        lbVelT->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbRefT = new QLabel(WRotorTurb);
        lbRefT->setObjectName(QString::fromUtf8("lbRefT"));
        lbRefT->setGeometry(QRect(10, 230, 71, 16));
        lbRefT->setFont(font);
        lbRefT->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbEmicionT = new QLabel(WRotorTurb);
        lbEmicionT->setObjectName(QString::fromUtf8("lbEmicionT"));
        lbEmicionT->setGeometry(QRect(10, 250, 71, 16));
        lbEmicionT->setFont(font);
        lbEmicionT->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        frame_2 = new QFrame(WRotorTurb);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(100, 210, 81, 16));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        lbVel = new WLabel(frame_2);
        lbVel->setObjectName(QString::fromUtf8("lbVel"));
        lbVel->setGeometry(QRect(0, 0, 41, 16));
        lbVel->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbVelU = new QLabel(frame_2);
        lbVelU->setObjectName(QString::fromUtf8("lbVelU"));
        lbVelU->setGeometry(QRect(50, 0, 31, 14));
        lbVelU->setAlignment(Qt::AlignCenter);
        frame_3 = new QFrame(WRotorTurb);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(100, 230, 81, 16));
        frame_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        lbRef = new WLabel(frame_3);
        lbRef->setObjectName(QString::fromUtf8("lbRef"));
        lbRef->setGeometry(QRect(0, 0, 41, 16));
        lbRef->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbRefU = new QLabel(frame_3);
        lbRefU->setObjectName(QString::fromUtf8("lbRefU"));
        lbRefU->setGeometry(QRect(50, 0, 31, 14));
        lbRefU->setAlignment(Qt::AlignCenter);
        frame_4 = new QFrame(WRotorTurb);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(100, 250, 81, 16));
        frame_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        lbEmicion = new WLabel(frame_4);
        lbEmicion->setObjectName(QString::fromUtf8("lbEmicion"));
        lbEmicion->setGeometry(QRect(0, 0, 41, 16));
        lbEmicion->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbEmicionU = new QLabel(frame_4);
        lbEmicionU->setObjectName(QString::fromUtf8("lbEmicionU"));
        lbEmicionU->setGeometry(QRect(50, 0, 31, 14));
        lbEmicionU->setAlignment(Qt::AlignCenter);
        frame_5 = new QFrame(WRotorTurb);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(0, 0, 241, 16));
        frame_5->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(43, 71, 134, 255), stop:1 rgba(255, 255, 255, 255));"));
        frame_5->setFrameShape(QFrame::Panel);
        frame_5->setFrameShadow(QFrame::Raised);
        frame_5->setLineWidth(0);
        lbIP = new QLabel(frame_5);
        lbIP->setObjectName(QString::fromUtf8("lbIP"));
        lbIP->setGeometry(QRect(0, 0, 91, 16));
        QFont font4;
        font4.setPointSize(5);
        lbIP->setFont(font4);
        lbIP->setStyleSheet(QString::fromUtf8("background-color: rgb(74, 110, 195);"));
        leOper = new WLabel(WRotorTurb);
        leOper->setObjectName(QString::fromUtf8("leOper"));
        leOper->setGeometry(QRect(100, 170, 81, 16));
        leOper->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 0);"));
        leOper->setProperty("Alineacion", QVariant(WLabel::Centro));
        leCntr = new WLabel(WRotorTurb);
        leCntr->setObjectName(QString::fromUtf8("leCntr"));
        leCntr->setGeometry(QRect(100, 190, 81, 16));
        leCntr->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(85, 255, 0);"));
        leCntr->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbFondo = new QLabel(WRotorTurb);
        lbFondo->setObjectName(QString::fromUtf8("lbFondo"));
        lbFondo->setGeometry(QRect(0, 0, 200, 330));
        lbFondo->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbFondo->setFrameShape(QFrame::Box);
        lbFondo->setFrameShadow(QFrame::Sunken);
        lbFondo->raise();
        frame->raise();
        btCerrar->raise();
        btElevar->raise();
        btBajar->raise();
        lbDemandaT->raise();
        progressBar->raise();
        lbNum5->raise();
        lbg->raise();
        lbNum4->raise();
        lbg_2->raise();
        lbg_3->raise();
        lbNum2->raise();
        lbg_4->raise();
        lbNum3->raise();
        lbg_5->raise();
        lbNum1->raise();
        lbNum0->raise();
        lbg_6->raise();
        lbOperacionT->raise();
        lbCntrlT->raise();
        lbVelT->raise();
        lbRefT->raise();
        lbEmicionT->raise();
        frame_2->raise();
        frame_3->raise();
        frame_4->raise();
        frame_5->raise();
        leOper->raise();
        leCntr->raise();

        retranslateUi(WRotorTurb);

        QMetaObject::connectSlotsByName(WRotorTurb);
    } // setupUi

    void retranslateUi(QWidget *WRotorTurb)
    {
        WRotorTurb->setWindowTitle(QApplication::translate("WRotorTurb", "Dialog", 0, QApplication::UnicodeUTF8));
        lbVelRotorT->setText(QApplication::translate("WRotorTurb", "VEL ROTOR TURB PRESI\303\223N BAJA", 0, QApplication::UnicodeUTF8));
        btCerrar->setText(QApplication::translate("WRotorTurb", "CERRAR", 0, QApplication::UnicodeUTF8));
        btCerrar->setShortcut(QString());
        btElevar->setText(QApplication::translate("WRotorTurb", "ELEVAR", 0, QApplication::UnicodeUTF8));
        btElevar->setShortcut(QString());
        btBajar->setText(QApplication::translate("WRotorTurb", "BAJAR", 0, QApplication::UnicodeUTF8));
        btBajar->setShortcut(QString());
        lbDemandaT->setText(QApplication::translate("WRotorTurb", "DEMENDA REF NSD", 0, QApplication::UnicodeUTF8));
        lbNum5->setText(QApplication::translate("WRotorTurb", "5000", 0, QApplication::UnicodeUTF8));
        lbg->setText(QApplication::translate("WRotorTurb", "-", 0, QApplication::UnicodeUTF8));
        lbNum4->setText(QApplication::translate("WRotorTurb", "4000", 0, QApplication::UnicodeUTF8));
        lbg_2->setText(QApplication::translate("WRotorTurb", "-", 0, QApplication::UnicodeUTF8));
        lbg_3->setText(QApplication::translate("WRotorTurb", "-", 0, QApplication::UnicodeUTF8));
        lbNum2->setText(QApplication::translate("WRotorTurb", "2000", 0, QApplication::UnicodeUTF8));
        lbg_4->setText(QApplication::translate("WRotorTurb", "-", 0, QApplication::UnicodeUTF8));
        lbNum3->setText(QApplication::translate("WRotorTurb", "3000", 0, QApplication::UnicodeUTF8));
        lbg_5->setText(QApplication::translate("WRotorTurb", "-", 0, QApplication::UnicodeUTF8));
        lbNum1->setText(QApplication::translate("WRotorTurb", "1000", 0, QApplication::UnicodeUTF8));
        lbNum0->setText(QApplication::translate("WRotorTurb", "0000", 0, QApplication::UnicodeUTF8));
        lbg_6->setText(QApplication::translate("WRotorTurb", "-", 0, QApplication::UnicodeUTF8));
        lbOperacionT->setText(QApplication::translate("WRotorTurb", "OPERACION", 0, QApplication::UnicodeUTF8));
        lbCntrlT->setText(QApplication::translate("WRotorTurb", "CNTRL NTP", 0, QApplication::UnicodeUTF8));
        lbVelT->setText(QApplication::translate("WRotorTurb", "VEL PT", 0, QApplication::UnicodeUTF8));
        lbRefT->setText(QApplication::translate("WRotorTurb", "REFERENCIA", 0, QApplication::UnicodeUTF8));
        lbEmicionT->setText(QApplication::translate("WRotorTurb", "EMICION", 0, QApplication::UnicodeUTF8));
        lbVel->setId(QApplication::translate("WRotorTurb", "p_Fix32_NODENAME_NSDSEL_F_CV", 0, QApplication::UnicodeUTF8));
        lbVel->setText(QApplication::translate("WRotorTurb", "0000", 0, QApplication::UnicodeUTF8));
        lbVelU->setText(QString());
        lbRef->setId(QApplication::translate("WRotorTurb", "p_Fix32_THISNODE_NSD_2ND_REF_F_CV", 0, QApplication::UnicodeUTF8));
        lbRef->setText(QApplication::translate("WRotorTurb", "0000", 0, QApplication::UnicodeUTF8));
        lbRefU->setText(QString());
        lbEmicion->setId(QApplication::translate("WRotorTurb", "p_Fix32_NODENAME_NSDPRX_F_CV", 0, QApplication::UnicodeUTF8));
        lbEmicion->setText(QApplication::translate("WRotorTurb", "0000", 0, QApplication::UnicodeUTF8));
        lbEmicionU->setText(QString());
        lbIP->setText(QApplication::translate("WRotorTurb", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:5pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; color:#ffffff;\">FP_LPSPD.grf</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        leOper->setId(QApplication::translate("WRotorTurb", "p_Fix32_NODENAME_ISOCH_F_CV", 0, QApplication::UnicodeUTF8));
        leOper->setText(QString());
        leCntr->setId(QApplication::translate("WRotorTurb", "p_Fix32_NODENAME_CNTRL_REG_F_CV", 0, QApplication::UnicodeUTF8));
        leCntr->setText(QString());
        lbFondo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WRotorTurb: public Ui_WRotorTurb {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WROTORTURB_H
