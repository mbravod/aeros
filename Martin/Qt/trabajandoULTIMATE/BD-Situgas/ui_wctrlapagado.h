/********************************************************************************
** Form generated from reading UI file 'wctrlapagado.ui'
**
** Created: Mon 25. Nov 21:01:08 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WCTRLAPAGADO_H
#define UI_WCTRLAPAGADO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>
#include "wlabel.h"

QT_BEGIN_NAMESPACE

class Ui_WCtrlApagado
{
public:
    QFrame *frame;
    QLabel *lbctrlapagfunT;
    QPushButton *btcerrar;
    QPushButton *btapagfunc;
    WLabel *leApagFun;
    QFrame *frame_2;
    QLabel *lbIP;
    QLabel *lbFondo;

    void setupUi(QWidget *WCtrlApagado)
    {
        if (WCtrlApagado->objectName().isEmpty())
            WCtrlApagado->setObjectName(QString::fromUtf8("WCtrlApagado"));
        WCtrlApagado->resize(200, 330);
        WCtrlApagado->setMinimumSize(QSize(200, 330));
        WCtrlApagado->setMaximumSize(QSize(200, 330));
        WCtrlApagado->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        frame = new QFrame(WCtrlApagado);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(1, 17, 198, 31));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Sunken);
        frame->setLineWidth(2);
        lbctrlapagfunT = new QLabel(frame);
        lbctrlapagfunT->setObjectName(QString::fromUtf8("lbctrlapagfunT"));
        lbctrlapagfunT->setGeometry(QRect(5, 7, 191, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        lbctrlapagfunT->setFont(font);
        lbctrlapagfunT->setFrameShape(QFrame::NoFrame);
        lbctrlapagfunT->setFrameShadow(QFrame::Plain);
        lbctrlapagfunT->setLineWidth(1);
        lbctrlapagfunT->setAlignment(Qt::AlignCenter);
        btcerrar = new QPushButton(WCtrlApagado);
        btcerrar->setObjectName(QString::fromUtf8("btcerrar"));
        btcerrar->setGeometry(QRect(59, 270, 83, 33));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setBold(true);
        font1.setWeight(75);
        font1.setKerning(true);
        btcerrar->setFont(font1);
        btcerrar->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        btcerrar->setAutoDefault(false);
        btcerrar->setDefault(false);
        btcerrar->setFlat(false);
        btapagfunc = new QPushButton(WCtrlApagado);
        btapagfunc->setObjectName(QString::fromUtf8("btapagfunc"));
        btapagfunc->setGeometry(QRect(22, 81, 157, 27));
        btapagfunc->setFont(font1);
        btapagfunc->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        btapagfunc->setAutoDefault(false);
        btapagfunc->setDefault(false);
        btapagfunc->setFlat(false);
        leApagFun = new WLabel(WCtrlApagado);
        leApagFun->setObjectName(QString::fromUtf8("leApagFun"));
        leApagFun->setGeometry(QRect(48, 121, 103, 24));
        leApagFun->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 0);\n"
"background-color: rgb(0, 0, 0);"));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        leApagFun->setFont(font2);
        leApagFun->setProperty("Alineacion", QVariant(WLabel::Centro));
        frame_2 = new QFrame(WCtrlApagado);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(0, 0, 241, 16));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(43, 71, 134, 255), stop:1 rgba(255, 255, 255, 255));"));
        frame_2->setFrameShape(QFrame::Panel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_2->setLineWidth(0);
        lbIP = new QLabel(frame_2);
        lbIP->setObjectName(QString::fromUtf8("lbIP"));
        lbIP->setGeometry(QRect(0, 0, 101, 16));
        QFont font3;
        font3.setPointSize(5);
        lbIP->setFont(font3);
        lbIP->setStyleSheet(QString::fromUtf8("background-color: rgb(74, 110, 195);"));
        lbFondo = new QLabel(WCtrlApagado);
        lbFondo->setObjectName(QString::fromUtf8("lbFondo"));
        lbFondo->setGeometry(QRect(0, 0, 200, 330));
        lbFondo->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbFondo->raise();
        frame->raise();
        btcerrar->raise();
        btapagfunc->raise();
        leApagFun->raise();
        frame_2->raise();

        retranslateUi(WCtrlApagado);

        QMetaObject::connectSlotsByName(WCtrlApagado);
    } // setupUi

    void retranslateUi(QWidget *WCtrlApagado)
    {
        WCtrlApagado->setWindowTitle(QApplication::translate("WCtrlApagado", "Dialog", 0, QApplication::UnicodeUTF8));
        lbctrlapagfunT->setText(QApplication::translate("WCtrlApagado", "CTRL APAGADO / FUNCION", 0, QApplication::UnicodeUTF8));
        btcerrar->setText(QApplication::translate("WCtrlApagado", "CERRAR", 0, QApplication::UnicodeUTF8));
        btcerrar->setShortcut(QString());
        btapagfunc->setText(QApplication::translate("WCtrlApagado", "APAGADO / FUNCION", 0, QApplication::UnicodeUTF8));
        btapagfunc->setShortcut(QString());
        leApagFun->setText(QString());
        lbIP->setText(QApplication::translate("WCtrlApagado", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:5pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; color:#ffffff;\">PF_RUN.grf</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lbFondo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WCtrlApagado: public Ui_WCtrlApagado {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WCTRLAPAGADO_H
