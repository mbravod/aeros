/********************************************************************************
** Form generated from reading UI file 'analog04.ui'
**
** Created: Thu 19. Dec 02:34:05 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANALOG04_H
#define UI_ANALOG04_H

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

class Ui_Analog04
{
public:
    QFrame *frame_2;
    WLabel *lbAnaT;
    QFrame *frame;
    WLabel *lbSloMPU;
    WLabel *lbMPUT_1;
    WLabel *lbMPU_1;
    WLabel *lbNumMPU_1;
    WLabel *lbMPUU_1;
    WLabel *lbMPUU_2;
    WLabel *lbNumMPU_2;
    WLabel *lbMPUT_2;
    WLabel *lbMPU_2;
    WLabel *lbNumMPU_3;
    WLabel *lbMPUU_3;
    WLabel *lbMPU_3;
    WLabel *lbMPUT_3;
    WLabel *lbNumMPU_4;
    WLabel *lbMPUT_4;
    WLabel *lbMPU_4;
    WLabel *lbMPUU_4;
    QPushButton *btCerrar;
    QLabel *lbFondo;

    void setupUi(QWidget *Analog04)
    {
        if (Analog04->objectName().isEmpty())
            Analog04->setObjectName(QString::fromUtf8("Analog04"));
        Analog04->resize(485, 210);
        Analog04->setMinimumSize(QSize(485, 210));
        Analog04->setMaximumSize(QSize(485, 210));
        Analog04->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        frame_2 = new QFrame(Analog04);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(0, 0, 485, 12));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(43, 71, 134, 255), stop:1 rgba(255, 255, 255, 255));"));
        frame_2->setFrameShape(QFrame::Panel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_2->setLineWidth(0);
        lbAnaT = new WLabel(frame_2);
        lbAnaT->setObjectName(QString::fromUtf8("lbAnaT"));
        lbAnaT->setGeometry(QRect(3, 0, 81, 12));
        lbAnaT->setStyleSheet(QString::fromUtf8("background-color: rgb(73, 105, 160);"));
        QFont font;
        font.setPointSize(5);
        font.setBold(true);
        font.setWeight(75);
        lbAnaT->setFont(font);
        frame = new QFrame(Analog04);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 18, 485, 30));
        frame->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        frame->setLineWidth(2);
        lbSloMPU = new WLabel(Analog04);
        lbSloMPU->setObjectName(QString::fromUtf8("lbSloMPU"));
        lbSloMPU->setGeometry(QRect(60, 22, 400, 22));
        lbSloMPU->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 0);"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        lbSloMPU->setFont(font1);
        lbMPUT_1 = new WLabel(Analog04);
        lbMPUT_1->setObjectName(QString::fromUtf8("lbMPUT_1"));
        lbMPUT_1->setGeometry(QRect(30, 55, 340, 16));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Verdana"));
        font2.setBold(true);
        font2.setWeight(75);
        lbMPUT_1->setFont(font2);
        lbMPUT_1->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbMPU_1 = new WLabel(Analog04);
        lbMPU_1->setObjectName(QString::fromUtf8("lbMPU_1"));
        lbMPU_1->setGeometry(QRect(355, 55, 81, 20));
        lbMPU_1->setFont(font2);
        lbMPU_1->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbNumMPU_1 = new WLabel(Analog04);
        lbNumMPU_1->setObjectName(QString::fromUtf8("lbNumMPU_1"));
        lbNumMPU_1->setGeometry(QRect(10, 55, 21, 16));
        lbNumMPU_1->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNumMPU_1->setFont(font2);
        lbNumMPU_1->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbMPUU_1 = new WLabel(Analog04);
        lbMPUU_1->setObjectName(QString::fromUtf8("lbMPUU_1"));
        lbMPUU_1->setGeometry(QRect(438, 54, 35, 20));
        lbMPUU_1->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbMPUU_1->setFont(font2);
        lbMPUU_1->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbMPUU_2 = new WLabel(Analog04);
        lbMPUU_2->setObjectName(QString::fromUtf8("lbMPUU_2"));
        lbMPUU_2->setGeometry(QRect(438, 75, 35, 20));
        lbMPUU_2->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbMPUU_2->setFont(font2);
        lbMPUU_2->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbNumMPU_2 = new WLabel(Analog04);
        lbNumMPU_2->setObjectName(QString::fromUtf8("lbNumMPU_2"));
        lbNumMPU_2->setGeometry(QRect(10, 75, 21, 16));
        lbNumMPU_2->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNumMPU_2->setFont(font2);
        lbNumMPU_2->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbMPUT_2 = new WLabel(Analog04);
        lbMPUT_2->setObjectName(QString::fromUtf8("lbMPUT_2"));
        lbMPUT_2->setGeometry(QRect(30, 75, 340, 16));
        lbMPUT_2->setFont(font2);
        lbMPUT_2->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbMPU_2 = new WLabel(Analog04);
        lbMPU_2->setObjectName(QString::fromUtf8("lbMPU_2"));
        lbMPU_2->setGeometry(QRect(355, 75, 81, 20));
        lbMPU_2->setFont(font2);
        lbMPU_2->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbNumMPU_3 = new WLabel(Analog04);
        lbNumMPU_3->setObjectName(QString::fromUtf8("lbNumMPU_3"));
        lbNumMPU_3->setGeometry(QRect(10, 95, 21, 16));
        lbNumMPU_3->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNumMPU_3->setFont(font2);
        lbNumMPU_3->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbMPUU_3 = new WLabel(Analog04);
        lbMPUU_3->setObjectName(QString::fromUtf8("lbMPUU_3"));
        lbMPUU_3->setGeometry(QRect(438, 95, 35, 20));
        lbMPUU_3->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbMPUU_3->setFont(font2);
        lbMPUU_3->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbMPU_3 = new WLabel(Analog04);
        lbMPU_3->setObjectName(QString::fromUtf8("lbMPU_3"));
        lbMPU_3->setGeometry(QRect(355, 95, 81, 20));
        lbMPU_3->setFont(font2);
        lbMPU_3->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbMPUT_3 = new WLabel(Analog04);
        lbMPUT_3->setObjectName(QString::fromUtf8("lbMPUT_3"));
        lbMPUT_3->setGeometry(QRect(30, 95, 340, 16));
        lbMPUT_3->setFont(font2);
        lbMPUT_3->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumMPU_4 = new WLabel(Analog04);
        lbNumMPU_4->setObjectName(QString::fromUtf8("lbNumMPU_4"));
        lbNumMPU_4->setGeometry(QRect(10, 115, 21, 16));
        lbNumMPU_4->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNumMPU_4->setFont(font2);
        lbNumMPU_4->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbMPUT_4 = new WLabel(Analog04);
        lbMPUT_4->setObjectName(QString::fromUtf8("lbMPUT_4"));
        lbMPUT_4->setGeometry(QRect(30, 115, 340, 16));
        lbMPUT_4->setFont(font2);
        lbMPUT_4->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbMPU_4 = new WLabel(Analog04);
        lbMPU_4->setObjectName(QString::fromUtf8("lbMPU_4"));
        lbMPU_4->setGeometry(QRect(355, 115, 81, 20));
        lbMPU_4->setFont(font2);
        lbMPU_4->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbMPUU_4 = new WLabel(Analog04);
        lbMPUU_4->setObjectName(QString::fromUtf8("lbMPUU_4"));
        lbMPUU_4->setGeometry(QRect(438, 115, 35, 20));
        lbMPUU_4->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbMPUU_4->setFont(font2);
        lbMPUU_4->setProperty("Alineacion", QVariant(WLabel::Centro));
        btCerrar = new QPushButton(Analog04);
        btCerrar->setObjectName(QString::fromUtf8("btCerrar"));
        btCerrar->setGeometry(QRect(130, 160, 101, 41));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Verdana"));
        font3.setPointSize(9);
        font3.setBold(true);
        font3.setWeight(75);
        btCerrar->setFont(font3);
        btCerrar->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        lbFondo = new QLabel(Analog04);
        lbFondo->setObjectName(QString::fromUtf8("lbFondo"));
        lbFondo->setGeometry(QRect(0, 0, 485, 210));
        lbFondo->setMinimumSize(QSize(485, 210));
        lbFondo->setMaximumSize(QSize(485, 210));
        lbFondo->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbFondo->setFrameShape(QFrame::Box);
        lbFondo->setFrameShadow(QFrame::Sunken);
        lbFondo->raise();
        frame_2->raise();
        frame->raise();
        lbSloMPU->raise();
        lbMPUT_1->raise();
        lbMPU_1->raise();
        lbNumMPU_1->raise();
        lbMPUU_1->raise();
        lbMPUU_2->raise();
        lbNumMPU_2->raise();
        lbMPUT_2->raise();
        lbMPU_2->raise();
        lbNumMPU_3->raise();
        lbMPUU_3->raise();
        lbMPU_3->raise();
        lbMPUT_3->raise();
        lbNumMPU_4->raise();
        lbMPUT_4->raise();
        lbMPU_4->raise();
        lbMPUU_4->raise();
        btCerrar->raise();

        retranslateUi(Analog04);

        QMetaObject::connectSlotsByName(Analog04);
    } // setupUi

    void retranslateUi(QWidget *Analog04)
    {
        Analog04->setWindowTitle(QApplication::translate("Analog04", "Analog04", 0, QApplication::UnicodeUTF8));
        lbAnaT->setText(QApplication::translate("Analog04", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:5pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7pt; color:#ffffff;\">ANALOGO4.grf</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lbSloMPU->setText(QApplication::translate("Analog04", "SLOT-  A104  - MPU", 0, QApplication::UnicodeUTF8));
        lbMPUT_1->setText(QApplication::translate("Analog04", "SE6800 - N25A HPC CAPTADOR VELOC (N\302\272 1)", 0, QApplication::UnicodeUTF8));
        lbMPU_1->setText(QApplication::translate("Analog04", "0000.00", 0, QApplication::UnicodeUTF8));
        lbNumMPU_1->setText(QApplication::translate("Analog04", "1", 0, QApplication::UnicodeUTF8));
        lbMPUU_1->setText(QApplication::translate("Analog04", "RPM", 0, QApplication::UnicodeUTF8));
        lbMPUU_2->setText(QApplication::translate("Analog04", "RPM", 0, QApplication::UnicodeUTF8));
        lbNumMPU_2->setText(QApplication::translate("Analog04", "2", 0, QApplication::UnicodeUTF8));
        lbMPUT_2->setText(QApplication::translate("Analog04", "SE6812 - NSDA LPT CAPTADOR VELOC (IZQ.)", 0, QApplication::UnicodeUTF8));
        lbMPU_2->setText(QApplication::translate("Analog04", "0000.00", 0, QApplication::UnicodeUTF8));
        lbNumMPU_3->setText(QApplication::translate("Analog04", "3", 0, QApplication::UnicodeUTF8));
        lbMPUU_3->setText(QApplication::translate("Analog04", "RPM", 0, QApplication::UnicodeUTF8));
        lbMPU_3->setText(QApplication::translate("Analog04", "0000.00", 0, QApplication::UnicodeUTF8));
        lbMPUT_3->setText(QApplication::translate("Analog04", "SE6801 - N25B HPC CAPTADOR VELOC (N\302\272 2)", 0, QApplication::UnicodeUTF8));
        lbNumMPU_4->setText(QApplication::translate("Analog04", "4", 0, QApplication::UnicodeUTF8));
        lbMPUT_4->setText(QApplication::translate("Analog04", "SE6813 - NSDB LPT CAPTADOR VELOC (DER.)", 0, QApplication::UnicodeUTF8));
        lbMPU_4->setText(QApplication::translate("Analog04", "0000.00", 0, QApplication::UnicodeUTF8));
        lbMPUU_4->setText(QApplication::translate("Analog04", "RPM", 0, QApplication::UnicodeUTF8));
        btCerrar->setText(QApplication::translate("Analog04", "CERRAR", 0, QApplication::UnicodeUTF8));
        lbFondo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Analog04: public Ui_Analog04 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANALOG04_H
