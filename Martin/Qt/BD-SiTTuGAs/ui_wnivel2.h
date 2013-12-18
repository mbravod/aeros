/********************************************************************************
** Form generated from reading UI file 'wnivel2.ui'
**
** Created: Tue 17. Dec 13:46:50 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WNIVEL2_H
#define UI_WNIVEL2_H

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

class Ui_WNivel2
{
public:
    QFrame *frame;
    QFrame *frame_2;
    QLabel *lbNivGTGT;
    QLabel *lbAcceptT;
    QPushButton *btAceptar;
    QLabel *lbAceCT;
    QLabel *lbPerA;
    QLabel *lbTodP;
    QLabel *lbNivL;
    QLabel *lbEthC;
    QLabel *lbPassT;
    QLabel *lbPasCT;
    QPushButton *btPasar;
    QPushButton *btCerrar;
    QLabel *lbIP;
    AWMultiObject *ldNiv2;
    AWMultiObject *ldNiv1;
    AWMultiObject *ldComOk;
    QLabel *lbFondo;

    void setupUi(QWidget *WNivel2)
    {
        if (WNivel2->objectName().isEmpty())
            WNivel2->setObjectName(QString::fromUtf8("WNivel2"));
        WNivel2->resize(197, 321);
        WNivel2->setMinimumSize(QSize(197, 321));
        WNivel2->setMaximumSize(QSize(197, 16777215));
        WNivel2->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        frame = new QFrame(WNivel2);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(1, 18, 195, 30));
        frame->setStyleSheet(QString::fromUtf8("border: rgb(255, 255, 255);\n"
"color: none;\n"
"border-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(WNivel2);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(0, 0, 241, 16));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(43, 71, 134, 255), stop:1 rgba(255, 255, 255, 255));"));
        frame_2->setFrameShape(QFrame::Panel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_2->setLineWidth(0);
        lbNivGTGT = new QLabel(WNivel2);
        lbNivGTGT->setObjectName(QString::fromUtf8("lbNivGTGT"));
        lbNivGTGT->setGeometry(QRect(30, 20, 141, 21));
        lbNivGTGT->setBaseSize(QSize(0, 0));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        lbNivGTGT->setFont(font);
        lbAcceptT = new QLabel(WNivel2);
        lbAcceptT->setObjectName(QString::fromUtf8("lbAcceptT"));
        lbAcceptT->setGeometry(QRect(30, 55, 141, 21));
        lbAcceptT->setBaseSize(QSize(0, 0));
        lbAcceptT->setFont(font);
        btAceptar = new QPushButton(WNivel2);
        btAceptar->setObjectName(QString::fromUtf8("btAceptar"));
        btAceptar->setGeometry(QRect(47, 80, 61, 31));
        btAceptar->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);\n"
""));
        lbAceCT = new QLabel(WNivel2);
        lbAceCT->setObjectName(QString::fromUtf8("lbAceCT"));
        lbAceCT->setGeometry(QRect(118, 74, 68, 41));
        lbAceCT->setBaseSize(QSize(0, 0));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setPointSize(8);
        font1.setBold(true);
        font1.setWeight(75);
        lbAceCT->setFont(font1);
        lbPerA = new QLabel(WNivel2);
        lbPerA->setObjectName(QString::fromUtf8("lbPerA"));
        lbPerA->setGeometry(QRect(25, 125, 165, 20));
        lbPerA->setFont(font1);
        lbTodP = new QLabel(WNivel2);
        lbTodP->setObjectName(QString::fromUtf8("lbTodP"));
        lbTodP->setGeometry(QRect(32, 142, 165, 20));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Verdana"));
        font2.setPointSize(7);
        font2.setBold(true);
        font2.setWeight(75);
        lbTodP->setFont(font2);
        lbTodP->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        lbNivL = new QLabel(WNivel2);
        lbNivL->setObjectName(QString::fromUtf8("lbNivL"));
        lbNivL->setGeometry(QRect(32, 158, 121, 20));
        lbNivL->setFont(font1);
        lbEthC = new QLabel(WNivel2);
        lbEthC->setObjectName(QString::fromUtf8("lbEthC"));
        lbEthC->setGeometry(QRect(32, 175, 151, 20));
        lbEthC->setFont(font1);
        lbPassT = new QLabel(WNivel2);
        lbPassT->setObjectName(QString::fromUtf8("lbPassT"));
        lbPassT->setGeometry(QRect(35, 203, 141, 21));
        lbPassT->setBaseSize(QSize(0, 0));
        lbPassT->setFont(font);
        lbPasCT = new QLabel(WNivel2);
        lbPasCT->setObjectName(QString::fromUtf8("lbPasCT"));
        lbPasCT->setGeometry(QRect(120, 222, 68, 41));
        lbPasCT->setBaseSize(QSize(0, 0));
        lbPasCT->setFont(font1);
        btPasar = new QPushButton(WNivel2);
        btPasar->setObjectName(QString::fromUtf8("btPasar"));
        btPasar->setGeometry(QRect(45, 228, 61, 31));
        btPasar->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);\n"
""));
        btCerrar = new QPushButton(WNivel2);
        btCerrar->setObjectName(QString::fromUtf8("btCerrar"));
        btCerrar->setGeometry(QRect(65, 280, 61, 31));
        btCerrar->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        lbIP = new QLabel(WNivel2);
        lbIP->setObjectName(QString::fromUtf8("lbIP"));
        lbIP->setGeometry(QRect(1, 0, 55, 16));
        QFont font3;
        font3.setPointSize(5);
        lbIP->setFont(font3);
        lbIP->setStyleSheet(QString::fromUtf8("background-color: rgb(74, 110, 195);"));
        ldNiv2 = new AWMultiObject(WNivel2);
        ldNiv2->setObjectName(QString::fromUtf8("ldNiv2"));
        ldNiv2->setGeometry(QRect(15, 145, 21, 21));
        ldNiv2->setElementType(AWMultiObject::CIRLED);
        ldNiv2->setProperty("Value", QVariant(0));
        ldNiv1 = new AWMultiObject(WNivel2);
        ldNiv1->setObjectName(QString::fromUtf8("ldNiv1"));
        ldNiv1->setGeometry(QRect(15, 160, 21, 21));
        ldNiv1->setElementType(AWMultiObject::CIRLED);
        ldNiv1->setOnColor(AWMultiObject::Red);
        ldNiv1->setOffColor(AWMultiObject::Green);
        ldNiv1->setProperty("Value", QVariant(0));
        ldComOk = new AWMultiObject(WNivel2);
        ldComOk->setObjectName(QString::fromUtf8("ldComOk"));
        ldComOk->setGeometry(QRect(15, 175, 21, 21));
        ldComOk->setElementType(AWMultiObject::CIRLED);
        ldComOk->setOffColor(AWMultiObject::Red);
        lbFondo = new QLabel(WNivel2);
        lbFondo->setObjectName(QString::fromUtf8("lbFondo"));
        lbFondo->setGeometry(QRect(0, 0, 198, 321));
        lbFondo->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbFondo->setFrameShape(QFrame::Box);
        lbFondo->setFrameShadow(QFrame::Sunken);
        lbFondo->raise();
        frame->raise();
        frame_2->raise();
        lbNivGTGT->raise();
        lbAcceptT->raise();
        btAceptar->raise();
        lbAceCT->raise();
        lbPerA->raise();
        lbTodP->raise();
        lbNivL->raise();
        lbEthC->raise();
        lbPassT->raise();
        lbPasCT->raise();
        btPasar->raise();
        btCerrar->raise();
        lbIP->raise();
        ldNiv2->raise();
        ldNiv1->raise();
        ldComOk->raise();

        retranslateUi(WNivel2);

        QMetaObject::connectSlotsByName(WNivel2);
    } // setupUi

    void retranslateUi(QWidget *WNivel2)
    {
        WNivel2->setWindowTitle(QApplication::translate("WNivel2", "WNivel2", 0, QApplication::UnicodeUTF8));
        lbNivGTGT->setText(QApplication::translate("WNivel2", "NIVEL 2 GTG CNTRL", 0, QApplication::UnicodeUTF8));
        lbAcceptT->setText(QApplication::translate("WNivel2", "ACCEPT CONTROL", 0, QApplication::UnicodeUTF8));
        btAceptar->setText(QApplication::translate("WNivel2", "ACEPTA", 0, QApplication::UnicodeUTF8));
        lbAceCT->setText(QApplication::translate("WNivel2", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Verdana'; font-size:8pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; color:#ffffff;\">ACEPTAR</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; color:#ffffff;\">CONTROL</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lbPerA->setText(QApplication::translate("WNivel2", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Verdana'; font-size:8pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ffffff;\">PERMISO PARA ACEPTAR:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lbTodP->setText(QApplication::translate("WNivel2", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Verdana'; font-size:7pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ffffff;\">TODO NIVEL 2 PUESTO A PASAR</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lbNivL->setText(QApplication::translate("WNivel2", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Verdana'; font-size:8pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ffffff;\">NIVEL 1 EN LOCAL</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lbEthC->setText(QApplication::translate("WNivel2", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Verdana'; font-size:8pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ffffff;\">ETHRNT COMM LINK OK</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lbPassT->setText(QApplication::translate("WNivel2", "PASS CONTROL", 0, QApplication::UnicodeUTF8));
        lbPasCT->setText(QApplication::translate("WNivel2", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Verdana'; font-size:8pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; color:#ffffff;\">PASAR</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; color:#ffffff;\">CONTROL</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        btPasar->setText(QApplication::translate("WNivel2", "PASAR", 0, QApplication::UnicodeUTF8));
        btCerrar->setText(QApplication::translate("WNivel2", "CERRAR", 0, QApplication::UnicodeUTF8));
        lbIP->setText(QApplication::translate("WNivel2", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:5pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; color:#ffffff;\">FP_L2.grf</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lbFondo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WNivel2: public Ui_WNivel2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WNIVEL2_H
