/********************************************************************************
** Form generated from reading UI file 'analog08_2.ui'
**
** Created: Mon 16. Dec 20:20:25 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANALOG08_2_H
#define UI_ANALOG08_2_H

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

class Ui_Analog08_2
{
public:
    WLabel *lbTit_5;
    WLabel *lbNumDes_4;
    WLabel *lbTit_2;
    WLabel *lbNum_1;
    WLabel *lbNumDes_2;
    WLabel *lbNum_3;
    WLabel *lbNumDes_5;
    WLabel *lbNumDes_6;
    WLabel *lbUni_1;
    WLabel *lbTit_3;
    WLabel *lbTit_7;
    WLabel *lbUni_8;
    WLabel *lbNumDes_3;
    WLabel *lbNum_6;
    WLabel *lbTit_6;
    WLabel *lbUni_5;
    WLabel *lbNumDes_1;
    WLabel *lbTit_8;
    WLabel *lbNum_2;
    WLabel *lbNum_7;
    QFrame *frame_2;
    WLabel *lbIP_2;
    WLabel *lbTit_4;
    WLabel *lbNum_8;
    WLabel *lbUni_3;
    WLabel *lbUni_2;
    WLabel *lbUni_7;
    QFrame *frame;
    WLabel *label_2;
    WLabel *lbTit_1;
    WLabel *lbNum_5;
    QPushButton *btCerrar;
    WLabel *lbUni_4;
    WLabel *lbNumDes_7;
    WLabel *lbNum_4;
    WLabel *lbNumDes_8;
    WLabel *lbUni_6;
    QLabel *lbFondo;

    void setupUi(QWidget *Analog08_2)
    {
        if (Analog08_2->objectName().isEmpty())
            Analog08_2->setObjectName(QString::fromUtf8("Analog08_2"));
        Analog08_2->resize(485, 250);
        Analog08_2->setMinimumSize(QSize(485, 250));
        Analog08_2->setMaximumSize(QSize(485, 250));
        Analog08_2->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbTit_5 = new WLabel(Analog08_2);
        lbTit_5->setObjectName(QString::fromUtf8("lbTit_5"));
        lbTit_5->setGeometry(QRect(40, 130, 340, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(7);
        font.setBold(false);
        font.setWeight(50);
        lbTit_5->setFont(font);
        lbTit_5->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumDes_4 = new WLabel(Analog08_2);
        lbNumDes_4->setObjectName(QString::fromUtf8("lbNumDes_4"));
        lbNumDes_4->setGeometry(QRect(384, 110, 50, 16));
        lbNumDes_4->setFont(font);
        lbNumDes_4->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbTit_2 = new WLabel(Analog08_2);
        lbTit_2->setObjectName(QString::fromUtf8("lbTit_2"));
        lbTit_2->setGeometry(QRect(40, 70, 340, 16));
        lbTit_2->setFont(font);
        lbTit_2->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNum_1 = new WLabel(Analog08_2);
        lbNum_1->setObjectName(QString::fromUtf8("lbNum_1"));
        lbNum_1->setGeometry(QRect(12, 50, 21, 16));
        lbNum_1->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setBold(true);
        font1.setWeight(75);
        lbNum_1->setFont(font1);
        lbNum_1->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumDes_2 = new WLabel(Analog08_2);
        lbNumDes_2->setObjectName(QString::fromUtf8("lbNumDes_2"));
        lbNumDes_2->setGeometry(QRect(384, 70, 50, 16));
        lbNumDes_2->setFont(font);
        lbNumDes_2->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbNum_3 = new WLabel(Analog08_2);
        lbNum_3->setObjectName(QString::fromUtf8("lbNum_3"));
        lbNum_3->setGeometry(QRect(12, 90, 21, 16));
        lbNum_3->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_3->setFont(font1);
        lbNum_3->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumDes_5 = new WLabel(Analog08_2);
        lbNumDes_5->setObjectName(QString::fromUtf8("lbNumDes_5"));
        lbNumDes_5->setGeometry(QRect(384, 130, 50, 16));
        lbNumDes_5->setFont(font);
        lbNumDes_5->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbNumDes_6 = new WLabel(Analog08_2);
        lbNumDes_6->setObjectName(QString::fromUtf8("lbNumDes_6"));
        lbNumDes_6->setGeometry(QRect(384, 150, 50, 16));
        lbNumDes_6->setFont(font);
        lbNumDes_6->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbUni_1 = new WLabel(Analog08_2);
        lbUni_1->setObjectName(QString::fromUtf8("lbUni_1"));
        lbUni_1->setGeometry(QRect(440, 50, 43, 16));
        lbUni_1->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbUni_1->setFont(font);
        lbUni_1->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbTit_3 = new WLabel(Analog08_2);
        lbTit_3->setObjectName(QString::fromUtf8("lbTit_3"));
        lbTit_3->setGeometry(QRect(40, 90, 340, 16));
        lbTit_3->setFont(font);
        lbTit_3->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbTit_7 = new WLabel(Analog08_2);
        lbTit_7->setObjectName(QString::fromUtf8("lbTit_7"));
        lbTit_7->setGeometry(QRect(40, 170, 340, 16));
        lbTit_7->setFont(font);
        lbTit_7->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbUni_8 = new WLabel(Analog08_2);
        lbUni_8->setObjectName(QString::fromUtf8("lbUni_8"));
        lbUni_8->setGeometry(QRect(440, 190, 43, 16));
        lbUni_8->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbUni_8->setFont(font);
        lbUni_8->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumDes_3 = new WLabel(Analog08_2);
        lbNumDes_3->setObjectName(QString::fromUtf8("lbNumDes_3"));
        lbNumDes_3->setGeometry(QRect(384, 90, 50, 16));
        lbNumDes_3->setFont(font);
        lbNumDes_3->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbNum_6 = new WLabel(Analog08_2);
        lbNum_6->setObjectName(QString::fromUtf8("lbNum_6"));
        lbNum_6->setGeometry(QRect(12, 150, 21, 16));
        lbNum_6->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_6->setFont(font1);
        lbNum_6->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbTit_6 = new WLabel(Analog08_2);
        lbTit_6->setObjectName(QString::fromUtf8("lbTit_6"));
        lbTit_6->setGeometry(QRect(40, 150, 340, 16));
        lbTit_6->setFont(font);
        lbTit_6->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbUni_5 = new WLabel(Analog08_2);
        lbUni_5->setObjectName(QString::fromUtf8("lbUni_5"));
        lbUni_5->setGeometry(QRect(440, 130, 43, 16));
        lbUni_5->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbUni_5->setFont(font);
        lbUni_5->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumDes_1 = new WLabel(Analog08_2);
        lbNumDes_1->setObjectName(QString::fromUtf8("lbNumDes_1"));
        lbNumDes_1->setGeometry(QRect(384, 50, 50, 16));
        lbNumDes_1->setFont(font);
        lbNumDes_1->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbTit_8 = new WLabel(Analog08_2);
        lbTit_8->setObjectName(QString::fromUtf8("lbTit_8"));
        lbTit_8->setGeometry(QRect(40, 190, 340, 16));
        lbTit_8->setFont(font);
        lbTit_8->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNum_2 = new WLabel(Analog08_2);
        lbNum_2->setObjectName(QString::fromUtf8("lbNum_2"));
        lbNum_2->setGeometry(QRect(12, 70, 21, 16));
        lbNum_2->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_2->setFont(font1);
        lbNum_2->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNum_7 = new WLabel(Analog08_2);
        lbNum_7->setObjectName(QString::fromUtf8("lbNum_7"));
        lbNum_7->setGeometry(QRect(12, 170, 21, 16));
        lbNum_7->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_7->setFont(font1);
        lbNum_7->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        frame_2 = new QFrame(Analog08_2);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(2, 0, 485, 16));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(43, 71, 134, 255), stop:1 rgba(255, 255, 255, 255));"));
        frame_2->setFrameShape(QFrame::Panel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_2->setLineWidth(0);
        lbIP_2 = new WLabel(frame_2);
        lbIP_2->setObjectName(QString::fromUtf8("lbIP_2"));
        lbIP_2->setGeometry(QRect(3, 0, 111, 16));
        lbIP_2->setStyleSheet(QString::fromUtf8("background-color: rgb(74, 110, 195);\n"
"background-color: rgb(74, 110, 195);\n"
"color: rgb(255, 255, 255);"));
        QFont font2;
        font2.setPointSize(9);
        lbIP_2->setFont(font2);
        lbIP_2->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbTit_4 = new WLabel(Analog08_2);
        lbTit_4->setObjectName(QString::fromUtf8("lbTit_4"));
        lbTit_4->setGeometry(QRect(40, 110, 340, 16));
        lbTit_4->setFont(font);
        lbTit_4->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNum_8 = new WLabel(Analog08_2);
        lbNum_8->setObjectName(QString::fromUtf8("lbNum_8"));
        lbNum_8->setGeometry(QRect(12, 190, 21, 16));
        lbNum_8->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_8->setFont(font1);
        lbNum_8->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbUni_3 = new WLabel(Analog08_2);
        lbUni_3->setObjectName(QString::fromUtf8("lbUni_3"));
        lbUni_3->setGeometry(QRect(440, 90, 43, 16));
        lbUni_3->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbUni_3->setFont(font);
        lbUni_3->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbUni_2 = new WLabel(Analog08_2);
        lbUni_2->setObjectName(QString::fromUtf8("lbUni_2"));
        lbUni_2->setGeometry(QRect(440, 70, 43, 16));
        lbUni_2->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbUni_2->setFont(font);
        lbUni_2->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbUni_7 = new WLabel(Analog08_2);
        lbUni_7->setObjectName(QString::fromUtf8("lbUni_7"));
        lbUni_7->setGeometry(QRect(440, 170, 43, 16));
        lbUni_7->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbUni_7->setFont(font);
        lbUni_7->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        frame = new QFrame(Analog08_2);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 17, 485, 30));
        frame->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        frame->setLineWidth(2);
        label_2 = new WLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(62, 4, 400, 22));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 0);"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Verdana"));
        font3.setPointSize(9);
        font3.setBold(true);
        font3.setWeight(75);
        label_2->setFont(font3);
        label_2->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbTit_1 = new WLabel(Analog08_2);
        lbTit_1->setObjectName(QString::fromUtf8("lbTit_1"));
        lbTit_1->setGeometry(QRect(40, 50, 340, 16));
        lbTit_1->setFont(font);
        lbTit_1->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNum_5 = new WLabel(Analog08_2);
        lbNum_5->setObjectName(QString::fromUtf8("lbNum_5"));
        lbNum_5->setGeometry(QRect(12, 130, 21, 16));
        lbNum_5->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_5->setFont(font1);
        lbNum_5->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        btCerrar = new QPushButton(Analog08_2);
        btCerrar->setObjectName(QString::fromUtf8("btCerrar"));
        btCerrar->setGeometry(QRect(126, 210, 98, 30));
        btCerrar->setFont(font3);
        btCerrar->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        lbUni_4 = new WLabel(Analog08_2);
        lbUni_4->setObjectName(QString::fromUtf8("lbUni_4"));
        lbUni_4->setGeometry(QRect(440, 110, 43, 16));
        lbUni_4->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbUni_4->setFont(font);
        lbUni_4->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumDes_7 = new WLabel(Analog08_2);
        lbNumDes_7->setObjectName(QString::fromUtf8("lbNumDes_7"));
        lbNumDes_7->setGeometry(QRect(384, 170, 50, 16));
        lbNumDes_7->setFont(font);
        lbNumDes_7->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbNum_4 = new WLabel(Analog08_2);
        lbNum_4->setObjectName(QString::fromUtf8("lbNum_4"));
        lbNum_4->setGeometry(QRect(12, 110, 21, 16));
        lbNum_4->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_4->setFont(font1);
        lbNum_4->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumDes_8 = new WLabel(Analog08_2);
        lbNumDes_8->setObjectName(QString::fromUtf8("lbNumDes_8"));
        lbNumDes_8->setGeometry(QRect(384, 190, 50, 16));
        lbNumDes_8->setFont(font);
        lbNumDes_8->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbUni_6 = new WLabel(Analog08_2);
        lbUni_6->setObjectName(QString::fromUtf8("lbUni_6"));
        lbUni_6->setGeometry(QRect(440, 150, 43, 16));
        lbUni_6->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbUni_6->setFont(font);
        lbUni_6->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbFondo = new QLabel(Analog08_2);
        lbFondo->setObjectName(QString::fromUtf8("lbFondo"));
        lbFondo->setGeometry(QRect(0, 0, 485, 251));
        lbFondo->setMinimumSize(QSize(485, 251));
        lbFondo->setMaximumSize(QSize(485, 251));
        lbFondo->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbFondo->setFrameShape(QFrame::Box);
        lbFondo->setFrameShadow(QFrame::Sunken);
        lbFondo->raise();
        lbTit_5->raise();
        lbNumDes_4->raise();
        lbTit_2->raise();
        lbNum_1->raise();
        lbNumDes_2->raise();
        lbNum_3->raise();
        lbNumDes_5->raise();
        lbNumDes_6->raise();
        lbUni_1->raise();
        lbTit_3->raise();
        lbTit_7->raise();
        lbUni_8->raise();
        lbNumDes_3->raise();
        lbNum_6->raise();
        lbTit_6->raise();
        lbUni_5->raise();
        lbNumDes_1->raise();
        lbTit_8->raise();
        lbNum_2->raise();
        lbNum_7->raise();
        frame_2->raise();
        lbTit_4->raise();
        lbNum_8->raise();
        lbUni_3->raise();
        lbUni_2->raise();
        lbUni_7->raise();
        frame->raise();
        lbTit_1->raise();
        lbNum_5->raise();
        btCerrar->raise();
        lbUni_4->raise();
        lbNumDes_7->raise();
        lbNum_4->raise();
        lbNumDes_8->raise();
        lbUni_6->raise();

        retranslateUi(Analog08_2);

        QMetaObject::connectSlotsByName(Analog08_2);
    } // setupUi

    void retranslateUi(QWidget *Analog08_2)
    {
        Analog08_2->setWindowTitle(QApplication::translate("Analog08_2", "Analog08_2", 0, QApplication::UnicodeUTF8));
        lbTit_5->setText(QApplication::translate("Analog08_2", "PT62139B GP1B EXTERNO", 0, QApplication::UnicodeUTF8));
        lbNumDes_4->setText(QApplication::translate("Analog08_2", "10", 0, QApplication::UnicodeUTF8));
        lbTit_2->setText(QApplication::translate("Analog08_2", "PT62138B GP2B PILOTO MEDICO", 0, QApplication::UnicodeUTF8));
        lbNum_1->setText(QApplication::translate("Analog08_2", "1", 0, QApplication::UnicodeUTF8));
        lbNumDes_2->setText(QApplication::translate("Analog08_2", "0.00", 0, QApplication::UnicodeUTF8));
        lbNum_3->setText(QApplication::translate("Analog08_2", "3", 0, QApplication::UnicodeUTF8));
        lbNumDes_5->setText(QApplication::translate("Analog08_2", "0.00", 0, QApplication::UnicodeUTF8));
        lbNumDes_6->setText(QApplication::translate("Analog08_2", "0.00", 0, QApplication::UnicodeUTF8));
        lbUni_1->setText(QApplication::translate("Analog08_2", "PSIA", 0, QApplication::UnicodeUTF8));
        lbTit_3->setText(QApplication::translate("Analog08_2", "PT62137B GP2B INTERNO MEDICO", 0, QApplication::UnicodeUTF8));
        lbTit_7->setText(QApplication::translate("Analog08_2", "PT62141B GP1B PILOTO", 0, QApplication::UnicodeUTF8));
        lbUni_8->setText(QString());
        lbNumDes_3->setText(QApplication::translate("Analog08_2", "0.00", 0, QApplication::UnicodeUTF8));
        lbNum_6->setText(QApplication::translate("Analog08_2", "6", 0, QApplication::UnicodeUTF8));
        lbTit_6->setText(QApplication::translate("Analog08_2", "PT62141B GP1B INTERNO", 0, QApplication::UnicodeUTF8));
        lbUni_5->setText(QApplication::translate("Analog08_2", "PSIA", 0, QApplication::UnicodeUTF8));
        lbNumDes_1->setText(QApplication::translate("Analog08_2", "0.00", 0, QApplication::UnicodeUTF8));
        lbTit_8->setText(QApplication::translate("Analog08_2", "(REFACCI\303\223N)", 0, QApplication::UnicodeUTF8));
        lbNum_2->setText(QApplication::translate("Analog08_2", "2", 0, QApplication::UnicodeUTF8));
        lbNum_7->setText(QApplication::translate("Analog08_2", "7", 0, QApplication::UnicodeUTF8));
        lbIP_2->setText(QApplication::translate("Analog08_2", "ANALOG08.grf", 0, QApplication::UnicodeUTF8));
        lbTit_4->setText(QApplication::translate("Analog08_2", "(REFACCI\303\223N)", 0, QApplication::UnicodeUTF8));
        lbNum_8->setText(QApplication::translate("Analog08_2", "8", 0, QApplication::UnicodeUTF8));
        lbUni_3->setText(QApplication::translate("Analog08_2", "PSIA", 0, QApplication::UnicodeUTF8));
        lbUni_2->setText(QApplication::translate("Analog08_2", "PSIA", 0, QApplication::UnicodeUTF8));
        lbUni_7->setText(QApplication::translate("Analog08_2", "PSIA", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Analog08_2", "SLOT-  A205  - A1", 0, QApplication::UnicodeUTF8));
        lbTit_1->setText(QApplication::translate("Analog08_2", "PT62136B GP2B EXTERNO MEDICO", 0, QApplication::UnicodeUTF8));
        lbNum_5->setText(QApplication::translate("Analog08_2", "5", 0, QApplication::UnicodeUTF8));
        btCerrar->setText(QApplication::translate("Analog08_2", "CERRAR", 0, QApplication::UnicodeUTF8));
        lbUni_4->setText(QString());
        lbNumDes_7->setText(QApplication::translate("Analog08_2", "0.00", 0, QApplication::UnicodeUTF8));
        lbNum_4->setText(QApplication::translate("Analog08_2", "4", 0, QApplication::UnicodeUTF8));
        lbNumDes_8->setText(QApplication::translate("Analog08_2", "10", 0, QApplication::UnicodeUTF8));
        lbUni_6->setText(QApplication::translate("Analog08_2", "PSIA", 0, QApplication::UnicodeUTF8));
        lbFondo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Analog08_2: public Ui_Analog08_2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANALOG08_2_H
