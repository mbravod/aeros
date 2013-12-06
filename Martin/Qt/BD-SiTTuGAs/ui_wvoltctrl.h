/********************************************************************************
** Form generated from reading UI file 'wvoltctrl.ui'
**
** Created: Thu 5. Dec 21:01:55 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WVOLTCTRL_H
#define UI_WVOLTCTRL_H

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

class Ui_WVoltCtrl
{
public:
    QFrame *frame;
    QLabel *lbCtrlVoltajeT;
    QLabel *lbRetroaT;
    QPushButton *btAumentar;
    QPushButton *btDisminuir;
    QPushButton *btCerrar;
    WLabel *leRetroa;
    QFrame *frame_5;
    QLabel *lbIP;
    QLabel *lbFondo;

    void setupUi(QWidget *WVoltCtrl)
    {
        if (WVoltCtrl->objectName().isEmpty())
            WVoltCtrl->setObjectName(QString::fromUtf8("WVoltCtrl"));
        WVoltCtrl->resize(200, 330);
        WVoltCtrl->setMinimumSize(QSize(200, 330));
        WVoltCtrl->setMaximumSize(QSize(200, 330));
        WVoltCtrl->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        frame = new QFrame(WVoltCtrl);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(1, 17, 198, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        frame->setFont(font);
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Sunken);
        frame->setLineWidth(2);
        lbCtrlVoltajeT = new QLabel(frame);
        lbCtrlVoltajeT->setObjectName(QString::fromUtf8("lbCtrlVoltajeT"));
        lbCtrlVoltajeT->setGeometry(QRect(8, 7, 171, 20));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        lbCtrlVoltajeT->setFont(font1);
        lbCtrlVoltajeT->setFrameShape(QFrame::NoFrame);
        lbCtrlVoltajeT->setFrameShadow(QFrame::Plain);
        lbCtrlVoltajeT->setLineWidth(1);
        lbCtrlVoltajeT->setAlignment(Qt::AlignCenter);
        lbRetroaT = new QLabel(WVoltCtrl);
        lbRetroaT->setObjectName(QString::fromUtf8("lbRetroaT"));
        lbRetroaT->setGeometry(QRect(0, 60, 198, 20));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Verdana"));
        font2.setBold(true);
        font2.setWeight(75);
        lbRetroaT->setFont(font2);
        lbRetroaT->setAlignment(Qt::AlignCenter);
        btAumentar = new QPushButton(WVoltCtrl);
        btAumentar->setObjectName(QString::fromUtf8("btAumentar"));
        btAumentar->setGeometry(QRect(22, 143, 154, 26));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Verdana"));
        font3.setPointSize(9);
        font3.setBold(true);
        font3.setWeight(75);
        btAumentar->setFont(font3);
        btAumentar->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        btDisminuir = new QPushButton(WVoltCtrl);
        btDisminuir->setObjectName(QString::fromUtf8("btDisminuir"));
        btDisminuir->setGeometry(QRect(22, 172, 154, 26));
        btDisminuir->setFont(font3);
        btDisminuir->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        btCerrar = new QPushButton(WVoltCtrl);
        btCerrar->setObjectName(QString::fromUtf8("btCerrar"));
        btCerrar->setGeometry(QRect(59, 287, 83, 33));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Verdana"));
        font4.setPointSize(9);
        font4.setBold(true);
        font4.setWeight(75);
        font4.setKerning(true);
        btCerrar->setFont(font4);
        btCerrar->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        btCerrar->setAutoDefault(false);
        btCerrar->setDefault(false);
        btCerrar->setFlat(false);
        leRetroa = new WLabel(WVoltCtrl);
        leRetroa->setObjectName(QString::fromUtf8("leRetroa"));
        leRetroa->setGeometry(QRect(64, 80, 73, 25));
        leRetroa->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        leRetroa->setProperty("Alineacion", QVariant(WLabel::Centro));
        frame_5 = new QFrame(WVoltCtrl);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(0, 0, 241, 16));
        frame_5->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(43, 71, 134, 255), stop:1 rgba(255, 255, 255, 255));"));
        frame_5->setFrameShape(QFrame::Panel);
        frame_5->setFrameShadow(QFrame::Raised);
        frame_5->setLineWidth(0);
        lbIP = new QLabel(frame_5);
        lbIP->setObjectName(QString::fromUtf8("lbIP"));
        lbIP->setGeometry(QRect(2, 0, 81, 16));
        QFont font5;
        font5.setPointSize(5);
        lbIP->setFont(font5);
        lbIP->setStyleSheet(QString::fromUtf8("background-color: rgb(74, 110, 195);"));
        lbFondo = new QLabel(WVoltCtrl);
        lbFondo->setObjectName(QString::fromUtf8("lbFondo"));
        lbFondo->setGeometry(QRect(0, 0, 200, 330));
        lbFondo->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbFondo->raise();
        frame->raise();
        lbRetroaT->raise();
        btAumentar->raise();
        btDisminuir->raise();
        btCerrar->raise();
        leRetroa->raise();
        frame_5->raise();

        retranslateUi(WVoltCtrl);

        QMetaObject::connectSlotsByName(WVoltCtrl);
    } // setupUi

    void retranslateUi(QWidget *WVoltCtrl)
    {
        WVoltCtrl->setWindowTitle(QApplication::translate("WVoltCtrl", "Dialog", 0, QApplication::UnicodeUTF8));
        lbCtrlVoltajeT->setText(QApplication::translate("WVoltCtrl", "VOLTAJE CONTROL", 0, QApplication::UnicodeUTF8));
        lbRetroaT->setText(QApplication::translate("WVoltCtrl", "RETROALIMENTACI\303\223N", 0, QApplication::UnicodeUTF8));
        btAumentar->setText(QApplication::translate("WVoltCtrl", "AUMENTAR", 0, QApplication::UnicodeUTF8));
        btDisminuir->setText(QApplication::translate("WVoltCtrl", "DISMINIUIR", 0, QApplication::UnicodeUTF8));
        btCerrar->setText(QApplication::translate("WVoltCtrl", "CERRAR", 0, QApplication::UnicodeUTF8));
        btCerrar->setShortcut(QString());
        leRetroa->setText(QString());
        lbIP->setText(QApplication::translate("WVoltCtrl", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:5pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; color:#ffffff;\">FP_VOLT.grf</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lbFondo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WVoltCtrl: public Ui_WVoltCtrl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WVOLTCTRL_H
