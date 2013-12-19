/********************************************************************************
** Form generated from reading UI file 'analog08.ui'
**
** Created: Thu 19. Dec 16:09:59 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANALOG08_H
#define UI_ANALOG08_H

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

class Ui_Analog08
{
public:
    WLabel *lbTit_3;
    WLabel *lbUni_1;
    WLabel *lbNumDes_2;
    WLabel *lbNum_4;
    WLabel *lbNumDes_3;
    WLabel *lbNum_1;
    WLabel *lbNumDes_1;
    WLabel *lbUni_3;
    WLabel *lbUni_8;
    WLabel *lbNum_3;
    WLabel *lbTit_6;
    WLabel *lbTit_5;
    WLabel *lbUni_2;
    WLabel *lbUni_5;
    WLabel *lbTit_2;
    WLabel *lbNum_7;
    WLabel *lbNumDes_4;
    WLabel *lbTit_4;
    WLabel *lbTit_1;
    WLabel *lbNumDes_7;
    WLabel *lbUni_6;
    WLabel *lbUni_7;
    QPushButton *btCerrar;
    QFrame *frame_2;
    WLabel *lbIP;
    WLabel *lbNumDes_5;
    WLabel *lbNum_8;
    WLabel *lbUni_4;
    WLabel *lbTit_8;
    WLabel *lbNum_6;
    WLabel *lbNumDes_8;
    WLabel *lbTit_7;
    WLabel *lbNumDes_6;
    QFrame *frame;
    WLabel *label;
    WLabel *lbNum_2;
    WLabel *lbNum_5;
    QLabel *lbFondo;

    void setupUi(QWidget *Analog08)
    {
        if (Analog08->objectName().isEmpty())
            Analog08->setObjectName(QString::fromUtf8("Analog08"));
        Analog08->resize(485, 250);
        Analog08->setMinimumSize(QSize(485, 250));
        Analog08->setMaximumSize(QSize(485, 250));
        Analog08->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbTit_3 = new WLabel(Analog08);
        lbTit_3->setObjectName(QString::fromUtf8("lbTit_3"));
        lbTit_3->setGeometry(QRect(40, 90, 340, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(7);
        font.setBold(false);
        font.setWeight(50);
        lbTit_3->setFont(font);
        lbTit_3->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbUni_1 = new WLabel(Analog08);
        lbUni_1->setObjectName(QString::fromUtf8("lbUni_1"));
        lbUni_1->setGeometry(QRect(440, 50, 43, 16));
        lbUni_1->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbUni_1->setFont(font);
        lbUni_1->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumDes_2 = new WLabel(Analog08);
        lbNumDes_2->setObjectName(QString::fromUtf8("lbNumDes_2"));
        lbNumDes_2->setGeometry(QRect(388, 70, 50, 16));
        lbNumDes_2->setFont(font);
        lbNumDes_2->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbNum_4 = new WLabel(Analog08);
        lbNum_4->setObjectName(QString::fromUtf8("lbNum_4"));
        lbNum_4->setGeometry(QRect(12, 110, 21, 16));
        lbNum_4->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setBold(true);
        font1.setWeight(75);
        lbNum_4->setFont(font1);
        lbNum_4->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumDes_3 = new WLabel(Analog08);
        lbNumDes_3->setObjectName(QString::fromUtf8("lbNumDes_3"));
        lbNumDes_3->setGeometry(QRect(388, 90, 50, 16));
        lbNumDes_3->setFont(font);
        lbNumDes_3->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbNum_1 = new WLabel(Analog08);
        lbNum_1->setObjectName(QString::fromUtf8("lbNum_1"));
        lbNum_1->setGeometry(QRect(12, 50, 21, 16));
        lbNum_1->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_1->setFont(font1);
        lbNum_1->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumDes_1 = new WLabel(Analog08);
        lbNumDes_1->setObjectName(QString::fromUtf8("lbNumDes_1"));
        lbNumDes_1->setGeometry(QRect(388, 50, 50, 16));
        lbNumDes_1->setFont(font);
        lbNumDes_1->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbUni_3 = new WLabel(Analog08);
        lbUni_3->setObjectName(QString::fromUtf8("lbUni_3"));
        lbUni_3->setGeometry(QRect(440, 90, 43, 16));
        lbUni_3->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbUni_3->setFont(font);
        lbUni_3->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbUni_8 = new WLabel(Analog08);
        lbUni_8->setObjectName(QString::fromUtf8("lbUni_8"));
        lbUni_8->setGeometry(QRect(440, 190, 43, 16));
        lbUni_8->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbUni_8->setFont(font);
        lbUni_8->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNum_3 = new WLabel(Analog08);
        lbNum_3->setObjectName(QString::fromUtf8("lbNum_3"));
        lbNum_3->setGeometry(QRect(12, 90, 21, 16));
        lbNum_3->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_3->setFont(font1);
        lbNum_3->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbTit_6 = new WLabel(Analog08);
        lbTit_6->setObjectName(QString::fromUtf8("lbTit_6"));
        lbTit_6->setGeometry(QRect(40, 150, 340, 16));
        lbTit_6->setFont(font);
        lbTit_6->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbTit_5 = new WLabel(Analog08);
        lbTit_5->setObjectName(QString::fromUtf8("lbTit_5"));
        lbTit_5->setGeometry(QRect(40, 130, 340, 16));
        lbTit_5->setFont(font);
        lbTit_5->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbUni_2 = new WLabel(Analog08);
        lbUni_2->setObjectName(QString::fromUtf8("lbUni_2"));
        lbUni_2->setGeometry(QRect(440, 70, 43, 16));
        lbUni_2->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbUni_2->setFont(font);
        lbUni_2->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbUni_5 = new WLabel(Analog08);
        lbUni_5->setObjectName(QString::fromUtf8("lbUni_5"));
        lbUni_5->setGeometry(QRect(440, 130, 43, 16));
        lbUni_5->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbUni_5->setFont(font);
        lbUni_5->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbTit_2 = new WLabel(Analog08);
        lbTit_2->setObjectName(QString::fromUtf8("lbTit_2"));
        lbTit_2->setGeometry(QRect(40, 70, 340, 16));
        lbTit_2->setFont(font);
        lbTit_2->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNum_7 = new WLabel(Analog08);
        lbNum_7->setObjectName(QString::fromUtf8("lbNum_7"));
        lbNum_7->setGeometry(QRect(12, 170, 21, 16));
        lbNum_7->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_7->setFont(font1);
        lbNum_7->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumDes_4 = new WLabel(Analog08);
        lbNumDes_4->setObjectName(QString::fromUtf8("lbNumDes_4"));
        lbNumDes_4->setGeometry(QRect(388, 110, 50, 16));
        lbNumDes_4->setFont(font);
        lbNumDes_4->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbTit_4 = new WLabel(Analog08);
        lbTit_4->setObjectName(QString::fromUtf8("lbTit_4"));
        lbTit_4->setGeometry(QRect(40, 110, 340, 16));
        lbTit_4->setFont(font);
        lbTit_4->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbTit_1 = new WLabel(Analog08);
        lbTit_1->setObjectName(QString::fromUtf8("lbTit_1"));
        lbTit_1->setGeometry(QRect(40, 50, 340, 16));
        lbTit_1->setFont(font);
        lbTit_1->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumDes_7 = new WLabel(Analog08);
        lbNumDes_7->setObjectName(QString::fromUtf8("lbNumDes_7"));
        lbNumDes_7->setGeometry(QRect(388, 170, 50, 16));
        lbNumDes_7->setFont(font);
        lbNumDes_7->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbUni_6 = new WLabel(Analog08);
        lbUni_6->setObjectName(QString::fromUtf8("lbUni_6"));
        lbUni_6->setGeometry(QRect(440, 150, 43, 16));
        lbUni_6->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbUni_6->setFont(font);
        lbUni_6->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbUni_7 = new WLabel(Analog08);
        lbUni_7->setObjectName(QString::fromUtf8("lbUni_7"));
        lbUni_7->setGeometry(QRect(440, 170, 43, 16));
        lbUni_7->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbUni_7->setFont(font);
        lbUni_7->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        btCerrar = new QPushButton(Analog08);
        btCerrar->setObjectName(QString::fromUtf8("btCerrar"));
        btCerrar->setGeometry(QRect(126, 210, 98, 30));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Verdana"));
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setWeight(75);
        btCerrar->setFont(font2);
        btCerrar->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        frame_2 = new QFrame(Analog08);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(2, 0, 485, 16));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(43, 71, 134, 255), stop:1 rgba(255, 255, 255, 255));"));
        frame_2->setFrameShape(QFrame::Panel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_2->setLineWidth(0);
        lbIP = new WLabel(frame_2);
        lbIP->setObjectName(QString::fromUtf8("lbIP"));
        lbIP->setGeometry(QRect(3, 0, 121, 16));
        lbIP->setStyleSheet(QString::fromUtf8("background-color: rgb(74, 110, 195);\n"
"background-color: rgb(74, 110, 195);\n"
"color: rgb(255, 255, 255);"));
        QFont font3;
        font3.setPointSize(9);
        lbIP->setFont(font3);
        lbIP->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumDes_5 = new WLabel(Analog08);
        lbNumDes_5->setObjectName(QString::fromUtf8("lbNumDes_5"));
        lbNumDes_5->setGeometry(QRect(388, 130, 50, 16));
        lbNumDes_5->setFont(font);
        lbNumDes_5->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbNum_8 = new WLabel(Analog08);
        lbNum_8->setObjectName(QString::fromUtf8("lbNum_8"));
        lbNum_8->setGeometry(QRect(12, 190, 21, 16));
        lbNum_8->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_8->setFont(font1);
        lbNum_8->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbUni_4 = new WLabel(Analog08);
        lbUni_4->setObjectName(QString::fromUtf8("lbUni_4"));
        lbUni_4->setGeometry(QRect(440, 110, 43, 16));
        lbUni_4->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbUni_4->setFont(font);
        lbUni_4->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbTit_8 = new WLabel(Analog08);
        lbTit_8->setObjectName(QString::fromUtf8("lbTit_8"));
        lbTit_8->setGeometry(QRect(40, 190, 340, 16));
        lbTit_8->setFont(font);
        lbTit_8->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNum_6 = new WLabel(Analog08);
        lbNum_6->setObjectName(QString::fromUtf8("lbNum_6"));
        lbNum_6->setGeometry(QRect(12, 150, 21, 16));
        lbNum_6->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_6->setFont(font1);
        lbNum_6->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumDes_8 = new WLabel(Analog08);
        lbNumDes_8->setObjectName(QString::fromUtf8("lbNumDes_8"));
        lbNumDes_8->setGeometry(QRect(388, 190, 50, 16));
        lbNumDes_8->setFont(font);
        lbNumDes_8->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbTit_7 = new WLabel(Analog08);
        lbTit_7->setObjectName(QString::fromUtf8("lbTit_7"));
        lbTit_7->setGeometry(QRect(40, 170, 340, 16));
        lbTit_7->setFont(font);
        lbTit_7->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumDes_6 = new WLabel(Analog08);
        lbNumDes_6->setObjectName(QString::fromUtf8("lbNumDes_6"));
        lbNumDes_6->setGeometry(QRect(388, 150, 50, 16));
        lbNumDes_6->setFont(font);
        lbNumDes_6->setProperty("Alineacion", QVariant(WLabel::Derecha));
        frame = new QFrame(Analog08);
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
        label->setFont(font2);
        label->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNum_2 = new WLabel(Analog08);
        lbNum_2->setObjectName(QString::fromUtf8("lbNum_2"));
        lbNum_2->setGeometry(QRect(12, 70, 21, 16));
        lbNum_2->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_2->setFont(font1);
        lbNum_2->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNum_5 = new WLabel(Analog08);
        lbNum_5->setObjectName(QString::fromUtf8("lbNum_5"));
        lbNum_5->setGeometry(QRect(12, 130, 21, 16));
        lbNum_5->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_5->setFont(font1);
        lbNum_5->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbFondo = new QLabel(Analog08);
        lbFondo->setObjectName(QString::fromUtf8("lbFondo"));
        lbFondo->setGeometry(QRect(0, 0, 485, 251));
        lbFondo->setMinimumSize(QSize(485, 251));
        lbFondo->setMaximumSize(QSize(485, 251));
        lbFondo->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbFondo->setFrameShape(QFrame::Box);
        lbFondo->setFrameShadow(QFrame::Sunken);
        lbFondo->raise();
        lbTit_3->raise();
        lbUni_1->raise();
        lbNumDes_2->raise();
        lbNum_4->raise();
        lbNumDes_3->raise();
        lbNum_1->raise();
        lbNumDes_1->raise();
        lbUni_3->raise();
        lbUni_8->raise();
        lbNum_3->raise();
        lbTit_6->raise();
        lbTit_5->raise();
        lbUni_2->raise();
        lbUni_5->raise();
        lbTit_2->raise();
        lbNum_7->raise();
        lbNumDes_4->raise();
        lbTit_4->raise();
        lbTit_1->raise();
        lbNumDes_7->raise();
        lbUni_6->raise();
        lbUni_7->raise();
        btCerrar->raise();
        frame_2->raise();
        lbNumDes_5->raise();
        lbNum_8->raise();
        lbUni_4->raise();
        lbTit_8->raise();
        lbNum_6->raise();
        lbNumDes_8->raise();
        lbTit_7->raise();
        lbNumDes_6->raise();
        frame->raise();
        lbNum_2->raise();
        lbNum_5->raise();

        retranslateUi(Analog08);

        QMetaObject::connectSlotsByName(Analog08);
    } // setupUi

    void retranslateUi(QWidget *Analog08)
    {
        Analog08->setWindowTitle(QApplication::translate("Analog08", "Analog08", 0, QApplication::UnicodeUTF8));
        lbTit_3->setText(QApplication::translate("Analog08", "PT62137A GP2A INTERNO MEDICO", 0, QApplication::UnicodeUTF8));
        lbUni_1->setText(QApplication::translate("Analog08", "PSIA", 0, QApplication::UnicodeUTF8));
        lbNumDes_2->setText(QApplication::translate("Analog08", "375.20", 0, QApplication::UnicodeUTF8));
        lbNum_4->setText(QApplication::translate("Analog08", "4", 0, QApplication::UnicodeUTF8));
        lbNumDes_3->setText(QApplication::translate("Analog08", "365.80", 0, QApplication::UnicodeUTF8));
        lbNum_1->setText(QApplication::translate("Analog08", "1", 0, QApplication::UnicodeUTF8));
        lbNumDes_1->setText(QApplication::translate("Analog08", "364.40", 0, QApplication::UnicodeUTF8));
        lbUni_3->setText(QApplication::translate("Analog08", "PSIA", 0, QApplication::UnicodeUTF8));
        lbUni_8->setText(QString());
        lbNum_3->setText(QApplication::translate("Analog08", "3", 0, QApplication::UnicodeUTF8));
        lbTit_6->setText(QApplication::translate("Analog08", "PT62141A GP1A INTERNO", 0, QApplication::UnicodeUTF8));
        lbTit_5->setText(QApplication::translate("Analog08", "PT62139A GP1A EXTERNO", 0, QApplication::UnicodeUTF8));
        lbUni_2->setText(QApplication::translate("Analog08", "PSIA", 0, QApplication::UnicodeUTF8));
        lbUni_5->setText(QApplication::translate("Analog08", "PSIA", 0, QApplication::UnicodeUTF8));
        lbTit_2->setText(QApplication::translate("Analog08", "PT62138A GP2A PILOTO MEDICO", 0, QApplication::UnicodeUTF8));
        lbNum_7->setText(QApplication::translate("Analog08", "7", 0, QApplication::UnicodeUTF8));
        lbNumDes_4->setText(QApplication::translate("Analog08", "10", 0, QApplication::UnicodeUTF8));
        lbTit_4->setText(QApplication::translate("Analog08", "(REFACCI\303\223N)", 0, QApplication::UnicodeUTF8));
        lbTit_1->setText(QApplication::translate("Analog08", "PT62136A GP2A EXTERNO MEDICO", 0, QApplication::UnicodeUTF8));
        lbNumDes_7->setText(QApplication::translate("Analog08", "529.10", 0, QApplication::UnicodeUTF8));
        lbUni_6->setText(QApplication::translate("Analog08", "PSIA", 0, QApplication::UnicodeUTF8));
        lbUni_7->setText(QApplication::translate("Analog08", "PSIA", 0, QApplication::UnicodeUTF8));
        btCerrar->setText(QApplication::translate("Analog08", "CERRAR", 0, QApplication::UnicodeUTF8));
        lbIP->setText(QApplication::translate("Analog08", "ANALOG08.grf", 0, QApplication::UnicodeUTF8));
        lbNumDes_5->setText(QApplication::translate("Analog08", "528.40", 0, QApplication::UnicodeUTF8));
        lbNum_8->setText(QApplication::translate("Analog08", "8", 0, QApplication::UnicodeUTF8));
        lbUni_4->setText(QString());
        lbTit_8->setText(QApplication::translate("Analog08", "(REFACCI\303\223N)", 0, QApplication::UnicodeUTF8));
        lbNum_6->setText(QApplication::translate("Analog08", "6", 0, QApplication::UnicodeUTF8));
        lbNumDes_8->setText(QApplication::translate("Analog08", "10", 0, QApplication::UnicodeUTF8));
        lbTit_7->setText(QApplication::translate("Analog08", "PT62141A GP1A PILOTO", 0, QApplication::UnicodeUTF8));
        lbNumDes_6->setText(QApplication::translate("Analog08", "528.40", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Analog08", "SLOT-  A204  - A1", 0, QApplication::UnicodeUTF8));
        lbNum_2->setText(QApplication::translate("Analog08", "2", 0, QApplication::UnicodeUTF8));
        lbNum_5->setText(QApplication::translate("Analog08", "5", 0, QApplication::UnicodeUTF8));
        lbFondo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Analog08: public Ui_Analog08 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANALOG08_H
