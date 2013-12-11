/********************************************************************************
** Form generated from reading UI file 'wapagemer.ui'
**
** Created: Tue 10. Dec 18:43:57 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WAPAGEMER_H
#define UI_WAPAGEMER_H

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

class Ui_WApagEmer
{
public:
    QFrame *frame;
    QLabel *lbapagemerT;
    QPushButton *btcerrar;
    QPushButton *btcde;
    QFrame *frame_2;
    QLabel *lbIP;
    WLabel *leCde;
    QLabel *lbFondo;

    void setupUi(QWidget *WApagEmer)
    {
        if (WApagEmer->objectName().isEmpty())
            WApagEmer->setObjectName(QString::fromUtf8("WApagEmer"));
        WApagEmer->resize(200, 330);
        WApagEmer->setMinimumSize(QSize(200, 330));
        WApagEmer->setMaximumSize(QSize(200, 330));
        WApagEmer->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        frame = new QFrame(WApagEmer);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(1, 17, 198, 31));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Sunken);
        frame->setLineWidth(2);
        lbapagemerT = new QLabel(frame);
        lbapagemerT->setObjectName(QString::fromUtf8("lbapagemerT"));
        lbapagemerT->setGeometry(QRect(1, 7, 194, 20));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        lbapagemerT->setFont(font);
        lbapagemerT->setFrameShape(QFrame::NoFrame);
        lbapagemerT->setFrameShadow(QFrame::Plain);
        lbapagemerT->setLineWidth(1);
        lbapagemerT->setAlignment(Qt::AlignCenter);
        btcerrar = new QPushButton(WApagEmer);
        btcerrar->setObjectName(QString::fromUtf8("btcerrar"));
        btcerrar->setGeometry(QRect(59, 290, 83, 33));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        font1.setKerning(true);
        btcerrar->setFont(font1);
        btcerrar->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        btcerrar->setAutoDefault(false);
        btcerrar->setDefault(false);
        btcerrar->setFlat(false);
        btcde = new QPushButton(WApagEmer);
        btcde->setObjectName(QString::fromUtf8("btcde"));
        btcde->setGeometry(QRect(60, 107, 80, 29));
        btcde->setFont(font1);
        btcde->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        btcde->setAutoDefault(false);
        btcde->setDefault(false);
        btcde->setFlat(false);
        frame_2 = new QFrame(WApagEmer);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(0, 0, 241, 16));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(43, 71, 134, 255), stop:1 rgba(255, 255, 255, 255));"));
        frame_2->setFrameShape(QFrame::Panel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_2->setLineWidth(0);
        lbIP = new QLabel(frame_2);
        lbIP->setObjectName(QString::fromUtf8("lbIP"));
        lbIP->setGeometry(QRect(0, 0, 101, 16));
        QFont font2;
        font2.setPointSize(5);
        lbIP->setFont(font2);
        lbIP->setStyleSheet(QString::fromUtf8("background-color: rgb(74, 110, 195);"));
        leCde = new WLabel(WApagEmer);
        leCde->setObjectName(QString::fromUtf8("leCde"));
        leCde->setGeometry(QRect(19, 142, 162, 23));
        leCde->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 0);\n"
"background-color: rgb(0, 0, 0);"));
        QFont font3;
        font3.setPointSize(9);
        font3.setBold(true);
        font3.setWeight(75);
        leCde->setFont(font3);
        leCde->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbFondo = new QLabel(WApagEmer);
        lbFondo->setObjectName(QString::fromUtf8("lbFondo"));
        lbFondo->setGeometry(QRect(0, 0, 201, 331));
        lbFondo->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbFondo->setFrameShape(QFrame::Box);
        lbFondo->setFrameShadow(QFrame::Sunken);
        lbFondo->setLineWidth(1);
        lbFondo->raise();
        frame->raise();
        btcerrar->raise();
        btcde->raise();
        frame_2->raise();
        leCde->raise();

        retranslateUi(WApagEmer);

        QMetaObject::connectSlotsByName(WApagEmer);
    } // setupUi

    void retranslateUi(QWidget *WApagEmer)
    {
        WApagEmer->setWindowTitle(QApplication::translate("WApagEmer", "Dialog", 0, QApplication::UnicodeUTF8));
        lbapagemerT->setText(QApplication::translate("WApagEmer", "APAGADO DE EMERGENCIA", 0, QApplication::UnicodeUTF8));
        btcerrar->setText(QApplication::translate("WApagEmer", "CERRAR", 0, QApplication::UnicodeUTF8));
        btcerrar->setShortcut(QString());
        btcde->setText(QApplication::translate("WApagEmer", "CDE", 0, QApplication::UnicodeUTF8));
        btcde->setShortcut(QString());
        lbIP->setText(QApplication::translate("WApagEmer", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:5pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; color:#ffffff;\">FP_ESD.grf</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        leCde->setText(QString());
        lbFondo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WApagEmer: public Ui_WApagEmer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WAPAGEMER_H
