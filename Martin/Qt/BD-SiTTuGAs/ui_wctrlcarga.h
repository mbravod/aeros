/********************************************************************************
** Form generated from reading UI file 'wctrlcarga.ui'
**
** Created: Tue 10. Dec 18:43:57 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WCTRLCARGA_H
#define UI_WCTRLCARGA_H

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

class Ui_WCtrlCarga
{
public:
    QFrame *frame;
    QLabel *lbCtrlCargaHwT;
    QPushButton *btCerrar;
    QPushButton *btHabilitado;
    WLabel *lbHabilitado;
    QLabel *lbDemandaT;
    QLabel *lbConfT;
    QPushButton *btConfir;
    WLabel *lbRemLoc;
    QLabel *lbRealT;
    QLabel *lbRemLocT;
    QFrame *frame_2;
    WLabel *lbIP;
    WLabel *leReal;
    WLabel *leConf;
    WLabel *leDemanda;
    QLabel *lbFondo;

    void setupUi(QWidget *WCtrlCarga)
    {
        if (WCtrlCarga->objectName().isEmpty())
            WCtrlCarga->setObjectName(QString::fromUtf8("WCtrlCarga"));
        WCtrlCarga->resize(200, 330);
        WCtrlCarga->setMinimumSize(QSize(200, 330));
        WCtrlCarga->setMaximumSize(QSize(200, 330));
        WCtrlCarga->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        frame = new QFrame(WCtrlCarga);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(1, 17, 198, 31));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Sunken);
        frame->setLineWidth(2);
        lbCtrlCargaHwT = new QLabel(frame);
        lbCtrlCargaHwT->setObjectName(QString::fromUtf8("lbCtrlCargaHwT"));
        lbCtrlCargaHwT->setGeometry(QRect(8, 7, 171, 20));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        lbCtrlCargaHwT->setFont(font);
        lbCtrlCargaHwT->setFrameShape(QFrame::NoFrame);
        lbCtrlCargaHwT->setFrameShadow(QFrame::Plain);
        lbCtrlCargaHwT->setLineWidth(1);
        lbCtrlCargaHwT->setAlignment(Qt::AlignCenter);
        btCerrar = new QPushButton(WCtrlCarga);
        btCerrar->setObjectName(QString::fromUtf8("btCerrar"));
        btCerrar->setGeometry(QRect(59, 290, 83, 33));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        font1.setKerning(true);
        btCerrar->setFont(font1);
        btCerrar->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        btCerrar->setAutoDefault(false);
        btCerrar->setDefault(false);
        btCerrar->setFlat(false);
        btHabilitado = new QPushButton(WCtrlCarga);
        btHabilitado->setObjectName(QString::fromUtf8("btHabilitado"));
        btHabilitado->setGeometry(QRect(62, 60, 83, 29));
        btHabilitado->setFont(font1);
        btHabilitado->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        btHabilitado->setAutoDefault(false);
        btHabilitado->setDefault(false);
        btHabilitado->setFlat(false);
        lbHabilitado = new WLabel(WCtrlCarga);
        lbHabilitado->setObjectName(QString::fromUtf8("lbHabilitado"));
        lbHabilitado->setGeometry(QRect(38, 95, 124, 22));
        lbHabilitado->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 0, 0);"));
        lbDemandaT = new QLabel(WCtrlCarga);
        lbDemandaT->setObjectName(QString::fromUtf8("lbDemandaT"));
        lbDemandaT->setGeometry(QRect(10, 127, 91, 20));
        lbDemandaT->setFont(font);
        lbDemandaT->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbConfT = new QLabel(WCtrlCarga);
        lbConfT->setObjectName(QString::fromUtf8("lbConfT"));
        lbConfT->setGeometry(QRect(10, 157, 91, 20));
        lbConfT->setFont(font);
        lbConfT->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        btConfir = new QPushButton(WCtrlCarga);
        btConfir->setObjectName(QString::fromUtf8("btConfir"));
        btConfir->setGeometry(QRect(66, 182, 80, 32));
        btConfir->setFont(font);
        btConfir->setStyleSheet(QString::fromUtf8("background-color: rgb(152, 152, 152);"));
        lbRemLoc = new WLabel(WCtrlCarga);
        lbRemLoc->setObjectName(QString::fromUtf8("lbRemLoc"));
        lbRemLoc->setGeometry(QRect(106, 257, 74, 22));
        lbRemLoc->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 0);"));
        lbRemLoc->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbRealT = new QLabel(WCtrlCarga);
        lbRealT->setObjectName(QString::fromUtf8("lbRealT"));
        lbRealT->setGeometry(QRect(11, 227, 91, 20));
        lbRealT->setFont(font);
        lbRealT->setAlignment(Qt::AlignCenter);
        lbRemLocT = new QLabel(WCtrlCarga);
        lbRemLocT->setObjectName(QString::fromUtf8("lbRemLocT"));
        lbRemLocT->setGeometry(QRect(11, 257, 91, 20));
        lbRemLocT->setFont(font);
        lbRemLocT->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        frame_2 = new QFrame(WCtrlCarga);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(0, 0, 241, 16));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(43, 71, 134, 255), stop:1 rgba(255, 255, 255, 255));"));
        frame_2->setFrameShape(QFrame::Panel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_2->setLineWidth(0);
        lbIP = new WLabel(frame_2);
        lbIP->setObjectName(QString::fromUtf8("lbIP"));
        lbIP->setGeometry(QRect(3, 0, 55, 16));
        lbIP->setStyleSheet(QString::fromUtf8("background-color: rgb(74, 110, 195);"));
        QFont font2;
        font2.setPointSize(5);
        lbIP->setFont(font2);
        leReal = new WLabel(WCtrlCarga);
        leReal->setObjectName(QString::fromUtf8("leReal"));
        leReal->setGeometry(QRect(107, 227, 74, 22));
        leReal->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        leConf = new WLabel(WCtrlCarga);
        leConf->setObjectName(QString::fromUtf8("leConf"));
        leConf->setGeometry(QRect(107, 157, 74, 22));
        leConf->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        leDemanda = new WLabel(WCtrlCarga);
        leDemanda->setObjectName(QString::fromUtf8("leDemanda"));
        leDemanda->setGeometry(QRect(107, 127, 74, 22));
        leDemanda->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lbFondo = new QLabel(WCtrlCarga);
        lbFondo->setObjectName(QString::fromUtf8("lbFondo"));
        lbFondo->setGeometry(QRect(0, 0, 201, 331));
        lbFondo->setStyleSheet(QString::fromUtf8(""));
        lbFondo->setFrameShape(QFrame::Box);
        lbFondo->setFrameShadow(QFrame::Sunken);
        lbFondo->raise();
        frame->raise();
        btCerrar->raise();
        btHabilitado->raise();
        lbHabilitado->raise();
        lbDemandaT->raise();
        lbConfT->raise();
        btConfir->raise();
        lbRemLoc->raise();
        lbRealT->raise();
        lbRemLocT->raise();
        frame_2->raise();
        leReal->raise();
        leConf->raise();
        leDemanda->raise();

        retranslateUi(WCtrlCarga);

        QMetaObject::connectSlotsByName(WCtrlCarga);
    } // setupUi

    void retranslateUi(QWidget *WCtrlCarga)
    {
        WCtrlCarga->setWindowTitle(QApplication::translate("WCtrlCarga", "Dialog", 0, QApplication::UnicodeUTF8));
        lbCtrlCargaHwT->setText(QApplication::translate("WCtrlCarga", "CONTROL DE CARGA DE MW", 0, QApplication::UnicodeUTF8));
        btCerrar->setText(QApplication::translate("WCtrlCarga", "CERRAR", 0, QApplication::UnicodeUTF8));
        btCerrar->setShortcut(QString());
        btHabilitado->setText(QApplication::translate("WCtrlCarga", "HABILITADO", 0, QApplication::UnicodeUTF8));
        btHabilitado->setShortcut(QString());
        lbHabilitado->setText(QString());
        lbDemandaT->setText(QApplication::translate("WCtrlCarga", "DEMANDA:", 0, QApplication::UnicodeUTF8));
        lbConfT->setText(QApplication::translate("WCtrlCarga", "CONFIRMACI\303\223N:", 0, QApplication::UnicodeUTF8));
        btConfir->setText(QApplication::translate("WCtrlCarga", "CONFIRME", 0, QApplication::UnicodeUTF8));
        lbRemLoc->setText(QApplication::translate("WCtrlCarga", "LOCAL", 0, QApplication::UnicodeUTF8));
        lbRealT->setText(QApplication::translate("WCtrlCarga", "REAL:", 0, QApplication::UnicodeUTF8));
        lbRemLocT->setText(QApplication::translate("WCtrlCarga", "REM / LOCAL:", 0, QApplication::UnicodeUTF8));
        lbIP->setText(QApplication::translate("WCtrlCarga", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:5pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; color:#ffffff;\">FP_MW.grf</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        leReal->setText(QString());
        leConf->setText(QString());
        leDemanda->setText(QString());
        lbFondo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WCtrlCarga: public Ui_WCtrlCarga {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WCTRLCARGA_H
