/********************************************************************************
** Form generated from reading UI file 'inet_ai_18.ui'
**
** Created: Sat 7. Dec 00:54:30 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INET_AI_18_H
#define UI_INET_AI_18_H

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

class Ui_Inet_AI_18
{
public:
    WLabel *lbNumDes_1;
    QPushButton *btCerrar;
    QFrame *frame_2;
    WLabel *lbIP;
    WLabel *lbNum_5;
    WLabel *lbTit_3;
    WLabel *lbUni_1;
    WLabel *lbUni_5;
    WLabel *lbUni_2;
    WLabel *lbNumDes_4;
    WLabel *lbTit_1;
    WLabel *lbNumDes_3;
    WLabel *lbUni_4;
    WLabel *lbNumDes_6;
    WLabel *lbUni_6;
    WLabel *lbNum_3;
    WLabel *lbNum_6;
    WLabel *lbUni_3;
    WLabel *lbNum_1;
    WLabel *lbNumDes_2;
    WLabel *lbTit_2;
    WLabel *lbNum_2;
    WLabel *lbNum_4;
    WLabel *lbTit_4;
    QFrame *frame;
    WLabel *label;
    WLabel *lbTit_5;
    WLabel *lbNumDes_5;
    WLabel *lbTit_6;
    QLabel *lbFondo;

    void setupUi(QWidget *Inet_AI_18)
    {
        if (Inet_AI_18->objectName().isEmpty())
            Inet_AI_18->setObjectName(QString::fromUtf8("Inet_AI_18"));
        Inet_AI_18->resize(485, 250);
        Inet_AI_18->setMinimumSize(QSize(485, 250));
        Inet_AI_18->setMaximumSize(QSize(485, 250));
        Inet_AI_18->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbNumDes_1 = new WLabel(Inet_AI_18);
        lbNumDes_1->setObjectName(QString::fromUtf8("lbNumDes_1"));
        lbNumDes_1->setGeometry(QRect(380, 50, 50, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(8);
        font.setBold(true);
        font.setWeight(75);
        lbNumDes_1->setFont(font);
        lbNumDes_1->setProperty("Alineacion", QVariant(WLabel::Derecha));
        btCerrar = new QPushButton(Inet_AI_18);
        btCerrar->setObjectName(QString::fromUtf8("btCerrar"));
        btCerrar->setGeometry(QRect(126, 210, 98, 30));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        btCerrar->setFont(font1);
        btCerrar->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        frame_2 = new QFrame(Inet_AI_18);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(2, 0, 485, 16));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(43, 71, 134, 255), stop:1 rgba(255, 255, 255, 255));"));
        frame_2->setFrameShape(QFrame::Panel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_2->setLineWidth(0);
        lbIP = new WLabel(frame_2);
        lbIP->setObjectName(QString::fromUtf8("lbIP"));
        lbIP->setGeometry(QRect(3, 0, 101, 16));
        lbIP->setStyleSheet(QString::fromUtf8("background-color: rgb(74, 110, 195);\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(74, 110, 195);"));
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setWeight(75);
        lbIP->setFont(font2);
        lbIP->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNum_5 = new WLabel(Inet_AI_18);
        lbNum_5->setObjectName(QString::fromUtf8("lbNum_5"));
        lbNum_5->setGeometry(QRect(12, 130, 21, 16));
        lbNum_5->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_5->setFont(font);
        lbNum_5->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbTit_3 = new WLabel(Inet_AI_18);
        lbTit_3->setObjectName(QString::fromUtf8("lbTit_3"));
        lbTit_3->setGeometry(QRect(40, 90, 340, 16));
        lbTit_3->setFont(font);
        lbTit_3->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbUni_1 = new WLabel(Inet_AI_18);
        lbUni_1->setObjectName(QString::fromUtf8("lbUni_1"));
        lbUni_1->setGeometry(QRect(440, 50, 43, 16));
        lbUni_1->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbUni_1->setFont(font);
        lbUni_1->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbUni_5 = new WLabel(Inet_AI_18);
        lbUni_5->setObjectName(QString::fromUtf8("lbUni_5"));
        lbUni_5->setGeometry(QRect(440, 130, 43, 16));
        lbUni_5->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbUni_5->setFont(font);
        lbUni_5->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbUni_2 = new WLabel(Inet_AI_18);
        lbUni_2->setObjectName(QString::fromUtf8("lbUni_2"));
        lbUni_2->setGeometry(QRect(440, 70, 43, 16));
        lbUni_2->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbUni_2->setFont(font);
        lbUni_2->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumDes_4 = new WLabel(Inet_AI_18);
        lbNumDes_4->setObjectName(QString::fromUtf8("lbNumDes_4"));
        lbNumDes_4->setGeometry(QRect(380, 110, 50, 16));
        lbNumDes_4->setFont(font);
        lbNumDes_4->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbTit_1 = new WLabel(Inet_AI_18);
        lbTit_1->setObjectName(QString::fromUtf8("lbTit_1"));
        lbTit_1->setGeometry(QRect(40, 50, 340, 16));
        lbTit_1->setFont(font);
        lbTit_1->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumDes_3 = new WLabel(Inet_AI_18);
        lbNumDes_3->setObjectName(QString::fromUtf8("lbNumDes_3"));
        lbNumDes_3->setGeometry(QRect(380, 90, 50, 16));
        lbNumDes_3->setFont(font);
        lbNumDes_3->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbUni_4 = new WLabel(Inet_AI_18);
        lbUni_4->setObjectName(QString::fromUtf8("lbUni_4"));
        lbUni_4->setGeometry(QRect(440, 110, 43, 16));
        lbUni_4->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbUni_4->setFont(font);
        lbUni_4->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumDes_6 = new WLabel(Inet_AI_18);
        lbNumDes_6->setObjectName(QString::fromUtf8("lbNumDes_6"));
        lbNumDes_6->setGeometry(QRect(380, 150, 50, 16));
        lbNumDes_6->setFont(font);
        lbNumDes_6->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbUni_6 = new WLabel(Inet_AI_18);
        lbUni_6->setObjectName(QString::fromUtf8("lbUni_6"));
        lbUni_6->setGeometry(QRect(440, 150, 43, 16));
        lbUni_6->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbUni_6->setFont(font);
        lbUni_6->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNum_3 = new WLabel(Inet_AI_18);
        lbNum_3->setObjectName(QString::fromUtf8("lbNum_3"));
        lbNum_3->setGeometry(QRect(12, 90, 21, 16));
        lbNum_3->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_3->setFont(font);
        lbNum_3->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNum_6 = new WLabel(Inet_AI_18);
        lbNum_6->setObjectName(QString::fromUtf8("lbNum_6"));
        lbNum_6->setGeometry(QRect(12, 150, 21, 16));
        lbNum_6->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_6->setFont(font);
        lbNum_6->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbUni_3 = new WLabel(Inet_AI_18);
        lbUni_3->setObjectName(QString::fromUtf8("lbUni_3"));
        lbUni_3->setGeometry(QRect(440, 90, 43, 16));
        lbUni_3->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbUni_3->setFont(font);
        lbUni_3->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNum_1 = new WLabel(Inet_AI_18);
        lbNum_1->setObjectName(QString::fromUtf8("lbNum_1"));
        lbNum_1->setGeometry(QRect(12, 50, 21, 16));
        lbNum_1->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_1->setFont(font);
        lbNum_1->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumDes_2 = new WLabel(Inet_AI_18);
        lbNumDes_2->setObjectName(QString::fromUtf8("lbNumDes_2"));
        lbNumDes_2->setGeometry(QRect(380, 70, 50, 16));
        lbNumDes_2->setFont(font);
        lbNumDes_2->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbTit_2 = new WLabel(Inet_AI_18);
        lbTit_2->setObjectName(QString::fromUtf8("lbTit_2"));
        lbTit_2->setGeometry(QRect(40, 70, 340, 16));
        lbTit_2->setFont(font);
        lbTit_2->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNum_2 = new WLabel(Inet_AI_18);
        lbNum_2->setObjectName(QString::fromUtf8("lbNum_2"));
        lbNum_2->setGeometry(QRect(12, 70, 21, 16));
        lbNum_2->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_2->setFont(font);
        lbNum_2->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNum_4 = new WLabel(Inet_AI_18);
        lbNum_4->setObjectName(QString::fromUtf8("lbNum_4"));
        lbNum_4->setGeometry(QRect(12, 110, 21, 16));
        lbNum_4->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_4->setFont(font);
        lbNum_4->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbTit_4 = new WLabel(Inet_AI_18);
        lbTit_4->setObjectName(QString::fromUtf8("lbTit_4"));
        lbTit_4->setGeometry(QRect(40, 110, 340, 16));
        lbTit_4->setFont(font);
        lbTit_4->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        frame = new QFrame(Inet_AI_18);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 17, 485, 30));
        frame->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        frame->setLineWidth(2);
        label = new WLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(62, 4, 400, 22));
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 0);"));
        label->setFont(font1);
        label->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbTit_5 = new WLabel(Inet_AI_18);
        lbTit_5->setObjectName(QString::fromUtf8("lbTit_5"));
        lbTit_5->setGeometry(QRect(40, 130, 340, 16));
        lbTit_5->setFont(font);
        lbTit_5->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumDes_5 = new WLabel(Inet_AI_18);
        lbNumDes_5->setObjectName(QString::fromUtf8("lbNumDes_5"));
        lbNumDes_5->setGeometry(QRect(380, 130, 50, 16));
        lbNumDes_5->setFont(font);
        lbNumDes_5->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbTit_6 = new WLabel(Inet_AI_18);
        lbTit_6->setObjectName(QString::fromUtf8("lbTit_6"));
        lbTit_6->setGeometry(QRect(40, 150, 340, 16));
        lbTit_6->setFont(font);
        lbTit_6->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbFondo = new QLabel(Inet_AI_18);
        lbFondo->setObjectName(QString::fromUtf8("lbFondo"));
        lbFondo->setGeometry(QRect(0, 0, 485, 250));
        lbFondo->setMinimumSize(QSize(485, 250));
        lbFondo->setMaximumSize(QSize(485, 250));
        lbFondo->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbFondo->raise();
        lbNumDes_1->raise();
        btCerrar->raise();
        frame_2->raise();
        lbNum_5->raise();
        lbTit_3->raise();
        lbUni_1->raise();
        lbUni_5->raise();
        lbUni_2->raise();
        lbNumDes_4->raise();
        lbTit_1->raise();
        lbNumDes_3->raise();
        lbUni_4->raise();
        lbNumDes_6->raise();
        lbUni_6->raise();
        lbNum_3->raise();
        lbNum_6->raise();
        lbUni_3->raise();
        lbNum_1->raise();
        lbNumDes_2->raise();
        lbTit_2->raise();
        lbNum_2->raise();
        lbNum_4->raise();
        lbTit_4->raise();
        frame->raise();
        lbTit_5->raise();
        lbNumDes_5->raise();
        lbTit_6->raise();

        retranslateUi(Inet_AI_18);

        QMetaObject::connectSlotsByName(Inet_AI_18);
    } // setupUi

    void retranslateUi(QWidget *Inet_AI_18)
    {
        Inet_AI_18->setWindowTitle(QApplication::translate("Inet_AI_18", "Inet_AI_18", 0, QApplication::UnicodeUTF8));
        lbNumDes_1->setText(QApplication::translate("Inet_AI_18", "0.00", 0, QApplication::UnicodeUTF8));
        btCerrar->setText(QApplication::translate("Inet_AI_18", "CERRAR", 0, QApplication::UnicodeUTF8));
        lbIP->setText(QApplication::translate("Inet_AI_18", "LNET_A1.grf", 0, QApplication::UnicodeUTF8));
        lbNum_5->setText(QApplication::translate("Inet_AI_18", "5", 0, QApplication::UnicodeUTF8));
        lbTit_3->setText(QApplication::translate("Inet_AI_18", "TURB RECUP COM MAG CHIP DET", 0, QApplication::UnicodeUTF8));
        lbUni_1->setText(QApplication::translate("Inet_AI_18", "OHMS", 0, QApplication::UnicodeUTF8));
        lbUni_5->setText(QString());
        lbUni_2->setText(QApplication::translate("Inet_AI_18", "OHMS", 0, QApplication::UnicodeUTF8));
        lbNumDes_4->setText(QApplication::translate("Inet_AI_18", "0.00", 0, QApplication::UnicodeUTF8));
        lbTit_1->setText(QApplication::translate("Inet_AI_18", "TURB RECUP TGB/A MAG CHIP DET", 0, QApplication::UnicodeUTF8));
        lbNumDes_3->setText(QApplication::translate("Inet_AI_18", "0.00", 0, QApplication::UnicodeUTF8));
        lbUni_4->setText(QString());
        lbNumDes_6->setText(QApplication::translate("Inet_AI_18", "0.00", 0, QApplication::UnicodeUTF8));
        lbUni_6->setText(QString());
        lbNum_3->setText(QApplication::translate("Inet_AI_18", "3", 0, QApplication::UnicodeUTF8));
        lbNum_6->setText(QApplication::translate("Inet_AI_18", "6", 0, QApplication::UnicodeUTF8));
        lbUni_3->setText(QString());
        lbNum_1->setText(QApplication::translate("Inet_AI_18", "1", 0, QApplication::UnicodeUTF8));
        lbNumDes_2->setText(QApplication::translate("Inet_AI_18", "0.00", 0, QApplication::UnicodeUTF8));
        lbTit_2->setText(QApplication::translate("Inet_AI_18", "TURB RECUP B CHIP MAGN\303\211TICO DET", 0, QApplication::UnicodeUTF8));
        lbNum_2->setText(QApplication::translate("Inet_AI_18", "2", 0, QApplication::UnicodeUTF8));
        lbNum_4->setText(QApplication::translate("Inet_AI_18", "4", 0, QApplication::UnicodeUTF8));
        lbTit_4->setText(QApplication::translate("Inet_AI_18", "(REFACCI\303\223N)", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Inet_AI_18", "NODE - N1N11  - RTD", 0, QApplication::UnicodeUTF8));
        lbTit_5->setText(QApplication::translate("Inet_AI_18", "(REFACCI\303\223N)", 0, QApplication::UnicodeUTF8));
        lbNumDes_5->setText(QApplication::translate("Inet_AI_18", "0.00", 0, QApplication::UnicodeUTF8));
        lbTit_6->setText(QApplication::translate("Inet_AI_18", "(REFACCI\303\223N)", 0, QApplication::UnicodeUTF8));
        lbFondo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Inet_AI_18: public Ui_Inet_AI_18 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INET_AI_18_H
