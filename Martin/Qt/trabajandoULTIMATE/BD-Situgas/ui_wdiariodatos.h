/********************************************************************************
** Form generated from reading UI file 'wdiariodatos.ui'
**
** Created: Mon 25. Nov 21:01:07 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WDIARIODATOS_H
#define UI_WDIARIODATOS_H

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

class Ui_WDiarioDatos
{
public:
    QFrame *frame;
    QLabel *lbDiarioDatosT;
    QPushButton *btCerrar;
    QPushButton *btInicio;
    QPushButton *btAlto;
    QFrame *frame_2;
    QLabel *lbIP;
    WLabel *leAlto;
    WLabel *leInicio;
    QLabel *lbFondo;

    void setupUi(QWidget *WDiarioDatos)
    {
        if (WDiarioDatos->objectName().isEmpty())
            WDiarioDatos->setObjectName(QString::fromUtf8("WDiarioDatos"));
        WDiarioDatos->resize(200, 330);
        WDiarioDatos->setMinimumSize(QSize(200, 330));
        WDiarioDatos->setMaximumSize(QSize(200, 330));
        WDiarioDatos->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        frame = new QFrame(WDiarioDatos);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(1, 17, 198, 31));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Sunken);
        frame->setLineWidth(2);
        lbDiarioDatosT = new QLabel(frame);
        lbDiarioDatosT->setObjectName(QString::fromUtf8("lbDiarioDatosT"));
        lbDiarioDatosT->setGeometry(QRect(0, 7, 198, 20));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        lbDiarioDatosT->setFont(font);
        lbDiarioDatosT->setFrameShape(QFrame::NoFrame);
        lbDiarioDatosT->setFrameShadow(QFrame::Plain);
        lbDiarioDatosT->setLineWidth(1);
        lbDiarioDatosT->setAlignment(Qt::AlignCenter);
        btCerrar = new QPushButton(WDiarioDatos);
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
        btInicio = new QPushButton(WDiarioDatos);
        btInicio->setObjectName(QString::fromUtf8("btInicio"));
        btInicio->setGeometry(QRect(22, 76, 156, 24));
        btInicio->setFont(font1);
        btInicio->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        btInicio->setAutoDefault(false);
        btInicio->setDefault(false);
        btInicio->setFlat(false);
        btAlto = new QPushButton(WDiarioDatos);
        btAlto->setObjectName(QString::fromUtf8("btAlto"));
        btAlto->setGeometry(QRect(22, 153, 156, 24));
        btAlto->setFont(font1);
        btAlto->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        btAlto->setAutoDefault(false);
        btAlto->setDefault(false);
        btAlto->setFlat(false);
        frame_2 = new QFrame(WDiarioDatos);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(0, 0, 241, 16));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(43, 71, 134, 255), stop:1 rgba(255, 255, 255, 255));"));
        frame_2->setFrameShape(QFrame::Panel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_2->setLineWidth(0);
        lbIP = new QLabel(frame_2);
        lbIP->setObjectName(QString::fromUtf8("lbIP"));
        lbIP->setGeometry(QRect(3, 0, 91, 16));
        QFont font2;
        font2.setPointSize(5);
        lbIP->setFont(font2);
        lbIP->setStyleSheet(QString::fromUtf8("background-color: rgb(74, 110, 195);"));
        leAlto = new WLabel(WDiarioDatos);
        leAlto->setObjectName(QString::fromUtf8("leAlto"));
        leAlto->setGeometry(QRect(36, 186, 128, 24));
        leAlto->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(0, 195, 0);"));
        QFont font3;
        font3.setPointSize(9);
        font3.setBold(true);
        font3.setWeight(75);
        leAlto->setFont(font3);
        leAlto->setProperty("Alineacion", QVariant(WLabel::Centro));
        leInicio = new WLabel(WDiarioDatos);
        leInicio->setObjectName(QString::fromUtf8("leInicio"));
        leInicio->setGeometry(QRect(34, 110, 128, 24));
        leInicio->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(0, 195, 0);"));
        leInicio->setFont(font3);
        leInicio->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbFondo = new QLabel(WDiarioDatos);
        lbFondo->setObjectName(QString::fromUtf8("lbFondo"));
        lbFondo->setGeometry(QRect(0, 0, 200, 330));
        lbFondo->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbFondo->raise();
        frame->raise();
        btCerrar->raise();
        btInicio->raise();
        btAlto->raise();
        frame_2->raise();
        leAlto->raise();
        leInicio->raise();

        retranslateUi(WDiarioDatos);

        QMetaObject::connectSlotsByName(WDiarioDatos);
    } // setupUi

    void retranslateUi(QWidget *WDiarioDatos)
    {
        WDiarioDatos->setWindowTitle(QApplication::translate("WDiarioDatos", "Dialog", 0, QApplication::UnicodeUTF8));
        lbDiarioDatosT->setText(QApplication::translate("WDiarioDatos", "DIARIO DATOS", 0, QApplication::UnicodeUTF8));
        btCerrar->setText(QApplication::translate("WDiarioDatos", "CERRAR", 0, QApplication::UnicodeUTF8));
        btCerrar->setShortcut(QString());
        btInicio->setText(QApplication::translate("WDiarioDatos", "INICIO DIARIO DATOS", 0, QApplication::UnicodeUTF8));
        btInicio->setShortcut(QString());
        btAlto->setText(QApplication::translate("WDiarioDatos", "ALTO AL DIARIO DATOS", 0, QApplication::UnicodeUTF8));
        btAlto->setShortcut(QString());
        lbIP->setText(QApplication::translate("WDiarioDatos", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:5pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; color:#ffffff;\">FP_DATALOG.grf</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        leAlto->setText(QString());
        leInicio->setText(QString());
        lbFondo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WDiarioDatos: public Ui_WDiarioDatos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WDIARIODATOS_H
