/********************************************************************************
** Form generated from reading UI file 'wctrllavagua.ui'
**
** Created: Tue 17. Dec 13:46:50 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WCTRLLAVAGUA_H
#define UI_WCTRLLAVAGUA_H

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

class Ui_WCtrlLavAgua
{
public:
    QFrame *frame;
    QLabel *lbCtrlLavAguaT;
    QPushButton *btCerrar;
    WLabel *lbPermLav;
    QPushButton *btPermLav;
    QLabel *lbFueraDeLineaT;
    QPushButton *btDeLineaHab;
    QPushButton *btDeLineaDes;
    WLabel *lbDeLinea;
    WLabel *lbEnLinea;
    QPushButton *btEnLineaHab;
    QLabel *lbFueraEnLineaT;
    QPushButton *btEnLineaDes;
    QFrame *frame_2;
    QLabel *lbIP;
    QLabel *lbFondo;

    void setupUi(QWidget *WCtrlLavAgua)
    {
        if (WCtrlLavAgua->objectName().isEmpty())
            WCtrlLavAgua->setObjectName(QString::fromUtf8("WCtrlLavAgua"));
        WCtrlLavAgua->resize(200, 330);
        WCtrlLavAgua->setMinimumSize(QSize(200, 330));
        WCtrlLavAgua->setMaximumSize(QSize(200, 330));
        WCtrlLavAgua->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        frame = new QFrame(WCtrlLavAgua);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(1, 17, 198, 31));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Sunken);
        frame->setLineWidth(2);
        lbCtrlLavAguaT = new QLabel(frame);
        lbCtrlLavAguaT->setObjectName(QString::fromUtf8("lbCtrlLavAguaT"));
        lbCtrlLavAguaT->setGeometry(QRect(0, 7, 198, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(8);
        font.setBold(true);
        font.setWeight(75);
        lbCtrlLavAguaT->setFont(font);
        lbCtrlLavAguaT->setFrameShape(QFrame::NoFrame);
        lbCtrlLavAguaT->setFrameShadow(QFrame::Plain);
        lbCtrlLavAguaT->setLineWidth(1);
        lbCtrlLavAguaT->setAlignment(Qt::AlignCenter);
        btCerrar = new QPushButton(WCtrlLavAgua);
        btCerrar->setObjectName(QString::fromUtf8("btCerrar"));
        btCerrar->setGeometry(QRect(59, 290, 83, 33));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        font1.setKerning(true);
        btCerrar->setFont(font1);
        btCerrar->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        btCerrar->setAutoDefault(false);
        btCerrar->setDefault(false);
        btCerrar->setFlat(false);
        lbPermLav = new WLabel(WCtrlLavAgua);
        lbPermLav->setObjectName(QString::fromUtf8("lbPermLav"));
        lbPermLav->setGeometry(QRect(127, 60, 67, 21));
        lbPermLav->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(255, 255, 255);"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Verdana"));
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        lbPermLav->setFont(font2);
        btPermLav = new QPushButton(WCtrlLavAgua);
        btPermLav->setObjectName(QString::fromUtf8("btPermLav"));
        btPermLav->setGeometry(QRect(5, 63, 121, 23));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Verdana"));
        btPermLav->setFont(font3);
        btPermLav->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        lbFueraDeLineaT = new QLabel(WCtrlLavAgua);
        lbFueraDeLineaT->setObjectName(QString::fromUtf8("lbFueraDeLineaT"));
        lbFueraDeLineaT->setGeometry(QRect(20, 95, 161, 41));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Verdana"));
        font4.setBold(true);
        font4.setWeight(75);
        lbFueraDeLineaT->setFont(font4);
        lbFueraDeLineaT->setAlignment(Qt::AlignCenter);
        btDeLineaHab = new QPushButton(WCtrlLavAgua);
        btDeLineaHab->setObjectName(QString::fromUtf8("btDeLineaHab"));
        btDeLineaHab->setGeometry(QRect(9, 129, 78, 31));
        btDeLineaHab->setFont(font4);
        btDeLineaHab->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        btDeLineaDes = new QPushButton(WCtrlLavAgua);
        btDeLineaDes->setObjectName(QString::fromUtf8("btDeLineaDes"));
        btDeLineaDes->setGeometry(QRect(94, 129, 101, 31));
        btDeLineaDes->setFont(font4);
        btDeLineaDes->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        lbDeLinea = new WLabel(WCtrlLavAgua);
        lbDeLinea->setObjectName(QString::fromUtf8("lbDeLinea"));
        lbDeLinea->setGeometry(QRect(40, 162, 121, 25));
        lbDeLinea->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 0, 0);"));
        QFont font5;
        font5.setBold(true);
        font5.setWeight(75);
        lbDeLinea->setFont(font5);
        lbDeLinea->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbEnLinea = new WLabel(WCtrlLavAgua);
        lbEnLinea->setObjectName(QString::fromUtf8("lbEnLinea"));
        lbEnLinea->setGeometry(QRect(40, 253, 121, 25));
        lbEnLinea->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 0, 0);"));
        lbEnLinea->setFont(font4);
        lbEnLinea->setProperty("Alineacion", QVariant(WLabel::Centro));
        btEnLineaHab = new QPushButton(WCtrlLavAgua);
        btEnLineaHab->setObjectName(QString::fromUtf8("btEnLineaHab"));
        btEnLineaHab->setGeometry(QRect(10, 220, 78, 31));
        btEnLineaHab->setFont(font4);
        btEnLineaHab->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        lbFueraEnLineaT = new QLabel(WCtrlLavAgua);
        lbFueraEnLineaT->setObjectName(QString::fromUtf8("lbFueraEnLineaT"));
        lbFueraEnLineaT->setGeometry(QRect(15, 191, 161, 31));
        lbFueraEnLineaT->setFont(font4);
        lbFueraEnLineaT->setAlignment(Qt::AlignCenter);
        btEnLineaDes = new QPushButton(WCtrlLavAgua);
        btEnLineaDes->setObjectName(QString::fromUtf8("btEnLineaDes"));
        btEnLineaDes->setGeometry(QRect(94, 220, 101, 31));
        btEnLineaDes->setFont(font4);
        btEnLineaDes->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        frame_2 = new QFrame(WCtrlLavAgua);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(0, 0, 241, 16));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(43, 71, 134, 255), stop:1 rgba(255, 255, 255, 255));"));
        frame_2->setFrameShape(QFrame::Panel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_2->setLineWidth(0);
        lbIP = new QLabel(frame_2);
        lbIP->setObjectName(QString::fromUtf8("lbIP"));
        lbIP->setGeometry(QRect(0, 0, 101, 16));
        QFont font6;
        font6.setPointSize(5);
        lbIP->setFont(font6);
        lbIP->setStyleSheet(QString::fromUtf8("background-color: rgb(74, 110, 195);"));
        lbFondo = new QLabel(WCtrlLavAgua);
        lbFondo->setObjectName(QString::fromUtf8("lbFondo"));
        lbFondo->setGeometry(QRect(0, 0, 200, 330));
        lbFondo->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbFondo->setFrameShape(QFrame::Box);
        lbFondo->setFrameShadow(QFrame::Sunken);
        lbFondo->raise();
        frame->raise();
        btCerrar->raise();
        lbPermLav->raise();
        btPermLav->raise();
        lbFueraDeLineaT->raise();
        btDeLineaHab->raise();
        btDeLineaDes->raise();
        lbDeLinea->raise();
        lbEnLinea->raise();
        btEnLineaHab->raise();
        lbFueraEnLineaT->raise();
        btEnLineaDes->raise();
        frame_2->raise();

        retranslateUi(WCtrlLavAgua);

        QMetaObject::connectSlotsByName(WCtrlLavAgua);
    } // setupUi

    void retranslateUi(QWidget *WCtrlLavAgua)
    {
        WCtrlLavAgua->setWindowTitle(QApplication::translate("WCtrlLavAgua", "Dialog", 0, QApplication::UnicodeUTF8));
        lbCtrlLavAguaT->setText(QApplication::translate("WCtrlLavAgua", "CONTROL LAVADO CON AGUA", 0, QApplication::UnicodeUTF8));
        btCerrar->setText(QApplication::translate("WCtrlLavAgua", "CERRAR", 0, QApplication::UnicodeUTF8));
        btCerrar->setShortcut(QString());
        lbPermLav->setText(QApplication::translate("WCtrlLavAgua", "NO PREP", 0, QApplication::UnicodeUTF8));
        btPermLav->setText(QApplication::translate("WCtrlLavAgua", "PERM LAV C/AGUA", 0, QApplication::UnicodeUTF8));
        lbFueraDeLineaT->setText(QApplication::translate("WCtrlLavAgua", "HABILITAR LAV C/ AGUA\n"
"FUERA DE LINEA", 0, QApplication::UnicodeUTF8));
        btDeLineaHab->setText(QApplication::translate("WCtrlLavAgua", "HABILITAR", 0, QApplication::UnicodeUTF8));
        btDeLineaDes->setText(QApplication::translate("WCtrlLavAgua", "DESHABILITAR", 0, QApplication::UnicodeUTF8));
        lbDeLinea->setId(QApplication::translate("WCtrlLavAgua", "p_Fix32_NODENAME_WW_ENBL_F_CV", 0, QApplication::UnicodeUTF8));
        lbDeLinea->setText(QApplication::translate("WCtrlLavAgua", "DESHABILIRTADO", 0, QApplication::UnicodeUTF8));
        lbEnLinea->setId(QApplication::translate("WCtrlLavAgua", "p_Fix32_NODENAME_ONLINE_EN_F_CV", 0, QApplication::UnicodeUTF8));
        lbEnLinea->setText(QApplication::translate("WCtrlLavAgua", "DESHABILIRTADO", 0, QApplication::UnicodeUTF8));
        btEnLineaHab->setText(QApplication::translate("WCtrlLavAgua", "HABILITAR", 0, QApplication::UnicodeUTF8));
        lbFueraEnLineaT->setText(QApplication::translate("WCtrlLavAgua", "HABILITAR LAV C/ AGUA\n"
"FUERA EN LINEA", 0, QApplication::UnicodeUTF8));
        btEnLineaDes->setText(QApplication::translate("WCtrlLavAgua", "DESHABILITAR", 0, QApplication::UnicodeUTF8));
        lbIP->setText(QApplication::translate("WCtrlLavAgua", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:5pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; color:#ffffff;\">FP_WTRWASH.grf</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lbFondo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WCtrlLavAgua: public Ui_WCtrlLavAgua {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WCTRLLAVAGUA_H
