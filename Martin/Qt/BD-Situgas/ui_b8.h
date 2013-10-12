/********************************************************************************
** Form generated from reading UI file 'b8.ui'
**
** Created: Sat 12. Oct 11:06:23 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_B8_H
#define UI_B8_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>
#include "awmultiobject.h"
#include "ventilador.h"

QT_BEGIN_NAMESPACE

class Ui_B8
{
public:
    QLabel *lbIMGFondo;
    AWMultiObject *aValvula_0;
    AWMultiObject *aValvula_1;
    AWMultiObject *aValvula_2;
    AWMultiObject *aValvula_3;
    AWMultiObject *aValvula_4;
    AWMultiObject *aValvula_5;
    AWMultiObject *aValvula_6;
    AWMultiObject *aValvula_7;
    AWMultiObject *aValvula_8;
    AWMultiObject *aValvula_9;
    AWMultiObject *aValvula_10;
    QPushButton *btnIMPPant;
    QLabel *lbUnit3;
    QLabel *lbTexto_0;
    QLabel *lbTexto_1;
    QLabel *lbTexto_2;
    QLabel *lbValor_0;
    QLabel *lbTexto_3;
    QLabel *lbTexto_4;
    QLabel *lbTexto_5;
    QLabel *lbTexto_6;
    QLabel *lbTexto_7;
    QLabel *lbTexto_8;
    QLabel *lbTexto_9;
    QLabel *lbTexto_10;
    QLabel *lbTexto_11;
    QLabel *lbTexto_12;
    QLabel *lbTexto_13;
    QLabel *lbTexto_14;
    QLabel *lbTexto_15;
    QLabel *lbTexto_16;
    QPushButton *btnIMPPant_2;
    QLabel *lbTexto_17;
    QLabel *lbTexto_18;
    QLabel *lbTexto_19;
    QLabel *lbTexto_20;
    Ventilador *ventilador;
    Ventilador *ventilador7;
    Ventilador *ventilador8;
    Ventilador *ventilador9;
    Ventilador *ventilador10;
    Ventilador *ventilador11;
    Ventilador *ventilador12;
    Ventilador *ventilador13;
    Ventilador *ventilador14;
    Ventilador *ventilador1;
    Ventilador *ventilador2;
    Ventilador *ventilador3;
    Ventilador *ventilador4;
    Ventilador *ventilador5;
    Ventilador *ventilador6;

    void setupUi(QWidget *B8)
    {
        if (B8->objectName().isEmpty())
            B8->setObjectName(QString::fromUtf8("B8"));
        B8->resize(1024, 662);
        B8->setStyleSheet(QString::fromUtf8("background-color: rgba(128, 128, 128, 128);"));
        lbIMGFondo = new QLabel(B8);
        lbIMGFondo->setObjectName(QString::fromUtf8("lbIMGFondo"));
        lbIMGFondo->setGeometry(QRect(0, 0, 1024, 662));
        lbIMGFondo->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        lbIMGFondo->setPixmap(QPixmap(QString::fromUtf8(":/Resources/PNG/B8.png")));
        lbIMGFondo->setScaledContents(true);
        aValvula_0 = new AWMultiObject(B8);
        aValvula_0->setObjectName(QString::fromUtf8("aValvula_0"));
        aValvula_0->setGeometry(QRect(152, 50, 41, 51));
        aValvula_0->setElementType(AWMultiObject::VALCUAD2);
        aValvula_1 = new AWMultiObject(B8);
        aValvula_1->setObjectName(QString::fromUtf8("aValvula_1"));
        aValvula_1->setGeometry(QRect(152, 100, 41, 51));
        aValvula_1->setElementType(AWMultiObject::VALCUAD2);
        aValvula_2 = new AWMultiObject(B8);
        aValvula_2->setObjectName(QString::fromUtf8("aValvula_2"));
        aValvula_2->setGeometry(QRect(152, 278, 41, 51));
        aValvula_2->setElementType(AWMultiObject::VALCUAD2);
        aValvula_3 = new AWMultiObject(B8);
        aValvula_3->setObjectName(QString::fromUtf8("aValvula_3"));
        aValvula_3->setGeometry(QRect(152, 355, 41, 51));
        aValvula_3->setElementType(AWMultiObject::VALCUAD2);
        aValvula_4 = new AWMultiObject(B8);
        aValvula_4->setObjectName(QString::fromUtf8("aValvula_4"));
        aValvula_4->setGeometry(QRect(152, 433, 41, 51));
        aValvula_4->setElementType(AWMultiObject::VALCUAD2);
        aValvula_5 = new AWMultiObject(B8);
        aValvula_5->setObjectName(QString::fromUtf8("aValvula_5"));
        aValvula_5->setGeometry(QRect(855, 567, 41, 51));
        aValvula_5->setElementType(AWMultiObject::VALCUAD2);
        aValvula_6 = new AWMultiObject(B8);
        aValvula_6->setObjectName(QString::fromUtf8("aValvula_6"));
        aValvula_6->setGeometry(QRect(855, 425, 41, 51));
        aValvula_6->setElementType(AWMultiObject::VALCUAD2);
        aValvula_7 = new AWMultiObject(B8);
        aValvula_7->setObjectName(QString::fromUtf8("aValvula_7"));
        aValvula_7->setGeometry(QRect(855, 350, 41, 51));
        aValvula_7->setElementType(AWMultiObject::VALCUAD2);
        aValvula_8 = new AWMultiObject(B8);
        aValvula_8->setObjectName(QString::fromUtf8("aValvula_8"));
        aValvula_8->setGeometry(QRect(859, 275, 41, 51));
        aValvula_8->setElementType(AWMultiObject::VALCUAD2);
        aValvula_9 = new AWMultiObject(B8);
        aValvula_9->setObjectName(QString::fromUtf8("aValvula_9"));
        aValvula_9->setGeometry(QRect(856, 100, 41, 51));
        aValvula_9->setElementType(AWMultiObject::VALCUAD2);
        aValvula_10 = new AWMultiObject(B8);
        aValvula_10->setObjectName(QString::fromUtf8("aValvula_10"));
        aValvula_10->setGeometry(QRect(856, 50, 41, 51));
        aValvula_10->setElementType(AWMultiObject::VALCUAD2);
        btnIMPPant = new QPushButton(B8);
        btnIMPPant->setObjectName(QString::fromUtf8("btnIMPPant"));
        btnIMPPant->setGeometry(QRect(2, 633, 134, 23));
        QFont font;
        font.setPointSize(8);
        font.setBold(true);
        font.setWeight(75);
        btnIMPPant->setFont(font);
        btnIMPPant->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        lbUnit3 = new QLabel(B8);
        lbUnit3->setObjectName(QString::fromUtf8("lbUnit3"));
        lbUnit3->setGeometry(QRect(835, 649, 190, 15));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        lbUnit3->setFont(font1);
        lbUnit3->setStyleSheet(QString::fromUtf8("background-color: rgb(175, 175, 175);"));
        lbTexto_0 = new QLabel(B8);
        lbTexto_0->setObjectName(QString::fromUtf8("lbTexto_0"));
        lbTexto_0->setGeometry(QRect(392, 338, 171, 16));
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setWeight(75);
        lbTexto_0->setFont(font2);
        lbTexto_0->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);"));
        lbTexto_1 = new QLabel(B8);
        lbTexto_1->setObjectName(QString::fromUtf8("lbTexto_1"));
        lbTexto_1->setGeometry(QRect(445, 354, 171, 16));
        lbTexto_1->setFont(font2);
        lbTexto_1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);"));
        lbTexto_2 = new QLabel(B8);
        lbTexto_2->setObjectName(QString::fromUtf8("lbTexto_2"));
        lbTexto_2->setGeometry(QRect(456, 370, 171, 16));
        lbTexto_2->setFont(font2);
        lbTexto_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);"));
        lbValor_0 = new QLabel(B8);
        lbValor_0->setObjectName(QString::fromUtf8("lbValor_0"));
        lbValor_0->setGeometry(QRect(590, 340, 81, 16));
        lbValor_0->setFont(font2);
        lbValor_0->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);"));
        lbTexto_3 = new QLabel(B8);
        lbTexto_3->setObjectName(QString::fromUtf8("lbTexto_3"));
        lbTexto_3->setGeometry(QRect(60, 65, 171, 16));
        lbTexto_3->setFont(font2);
        lbTexto_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);"));
        lbTexto_4 = new QLabel(B8);
        lbTexto_4->setObjectName(QString::fromUtf8("lbTexto_4"));
        lbTexto_4->setGeometry(QRect(60, 118, 171, 16));
        lbTexto_4->setFont(font2);
        lbTexto_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);"));
        lbTexto_5 = new QLabel(B8);
        lbTexto_5->setObjectName(QString::fromUtf8("lbTexto_5"));
        lbTexto_5->setGeometry(QRect(60, 290, 171, 16));
        lbTexto_5->setFont(font2);
        lbTexto_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);"));
        lbTexto_6 = new QLabel(B8);
        lbTexto_6->setObjectName(QString::fromUtf8("lbTexto_6"));
        lbTexto_6->setGeometry(QRect(138, 219, 171, 16));
        lbTexto_6->setFont(font2);
        lbTexto_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);"));
        lbTexto_7 = new QLabel(B8);
        lbTexto_7->setObjectName(QString::fromUtf8("lbTexto_7"));
        lbTexto_7->setGeometry(QRect(60, 370, 171, 16));
        lbTexto_7->setFont(font2);
        lbTexto_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);"));
        lbTexto_8 = new QLabel(B8);
        lbTexto_8->setObjectName(QString::fromUtf8("lbTexto_8"));
        lbTexto_8->setGeometry(QRect(60, 445, 171, 16));
        lbTexto_8->setFont(font2);
        lbTexto_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);"));
        lbTexto_9 = new QLabel(B8);
        lbTexto_9->setObjectName(QString::fromUtf8("lbTexto_9"));
        lbTexto_9->setGeometry(QRect(720, 495, 171, 16));
        lbTexto_9->setFont(font2);
        lbTexto_9->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);"));
        lbTexto_10 = new QLabel(B8);
        lbTexto_10->setObjectName(QString::fromUtf8("lbTexto_10"));
        lbTexto_10->setGeometry(QRect(905, 440, 171, 16));
        lbTexto_10->setFont(font2);
        lbTexto_10->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);"));
        lbTexto_11 = new QLabel(B8);
        lbTexto_11->setObjectName(QString::fromUtf8("lbTexto_11"));
        lbTexto_11->setGeometry(QRect(905, 365, 171, 16));
        lbTexto_11->setFont(font2);
        lbTexto_11->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);"));
        lbTexto_12 = new QLabel(B8);
        lbTexto_12->setObjectName(QString::fromUtf8("lbTexto_12"));
        lbTexto_12->setGeometry(QRect(905, 290, 171, 16));
        lbTexto_12->setFont(font2);
        lbTexto_12->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);"));
        lbTexto_13 = new QLabel(B8);
        lbTexto_13->setObjectName(QString::fromUtf8("lbTexto_13"));
        lbTexto_13->setGeometry(QRect(905, 115, 171, 16));
        lbTexto_13->setFont(font2);
        lbTexto_13->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);"));
        lbTexto_14 = new QLabel(B8);
        lbTexto_14->setObjectName(QString::fromUtf8("lbTexto_14"));
        lbTexto_14->setGeometry(QRect(905, 65, 171, 16));
        lbTexto_14->setFont(font2);
        lbTexto_14->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);"));
        lbTexto_15 = new QLabel(B8);
        lbTexto_15->setObjectName(QString::fromUtf8("lbTexto_15"));
        lbTexto_15->setGeometry(QRect(905, 575, 171, 16));
        lbTexto_15->setFont(font2);
        lbTexto_15->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);"));
        lbTexto_16 = new QLabel(B8);
        lbTexto_16->setObjectName(QString::fromUtf8("lbTexto_16"));
        lbTexto_16->setGeometry(QRect(315, 625, 251, 20));
        lbTexto_16->setFont(font2);
        lbTexto_16->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);"));
        btnIMPPant_2 = new QPushButton(B8);
        btnIMPPant_2->setObjectName(QString::fromUtf8("btnIMPPant_2"));
        btnIMPPant_2->setGeometry(QRect(524, 619, 108, 31));
        btnIMPPant_2->setFont(font2);
        btnIMPPant_2->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        lbTexto_17 = new QLabel(B8);
        lbTexto_17->setObjectName(QString::fromUtf8("lbTexto_17"));
        lbTexto_17->setGeometry(QRect(104, 535, 251, 20));
        lbTexto_17->setFont(font2);
        lbTexto_17->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);"));
        lbTexto_18 = new QLabel(B8);
        lbTexto_18->setObjectName(QString::fromUtf8("lbTexto_18"));
        lbTexto_18->setGeometry(QRect(104, 560, 251, 20));
        lbTexto_18->setFont(font2);
        lbTexto_18->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);\n"
"background-color: rgba(255, 255, 255, 0);"));
        lbTexto_19 = new QLabel(B8);
        lbTexto_19->setObjectName(QString::fromUtf8("lbTexto_19"));
        lbTexto_19->setGeometry(QRect(104, 585, 251, 20));
        lbTexto_19->setFont(font2);
        lbTexto_19->setStyleSheet(QString::fromUtf8("color: rgb(151, 0, 226);\n"
"background-color: rgba(255, 255, 255, 0);"));
        lbTexto_20 = new QLabel(B8);
        lbTexto_20->setObjectName(QString::fromUtf8("lbTexto_20"));
        lbTexto_20->setGeometry(QRect(104, 608, 251, 20));
        lbTexto_20->setFont(font2);
        lbTexto_20->setStyleSheet(QString::fromUtf8("color: rgb(78,46, 28);\n"
"background-color: rgba(255, 255, 255, 0);"));
        ventilador = new Ventilador(B8);
        ventilador->setObjectName(QString::fromUtf8("ventilador"));
        ventilador->setGeometry(QRect(280, 330, 61, 111));
        ventilador7 = new Ventilador(B8);
        ventilador7->setObjectName(QString::fromUtf8("ventilador7"));
        ventilador7->setGeometry(QRect(260, 260, 61, 111));
        ventilador8 = new Ventilador(B8);
        ventilador8->setObjectName(QString::fromUtf8("ventilador8"));
        ventilador8->setGeometry(QRect(280, 190, 61, 111));
        ventilador9 = new Ventilador(B8);
        ventilador9->setObjectName(QString::fromUtf8("ventilador9"));
        ventilador9->setGeometry(QRect(310, 130, 61, 111));
        ventilador10 = new Ventilador(B8);
        ventilador10->setObjectName(QString::fromUtf8("ventilador10"));
        ventilador10->setGeometry(QRect(380, 70, 61, 111));
        ventilador11 = new Ventilador(B8);
        ventilador11->setObjectName(QString::fromUtf8("ventilador11"));
        ventilador11->setGeometry(QRect(470, 50, 61, 111));
        ventilador12 = new Ventilador(B8);
        ventilador12->setObjectName(QString::fromUtf8("ventilador12"));
        ventilador12->setGeometry(QRect(560, 70, 61, 111));
        ventilador13 = new Ventilador(B8);
        ventilador13->setObjectName(QString::fromUtf8("ventilador13"));
        ventilador13->setGeometry(QRect(630, 130, 61, 111));
        ventilador14 = new Ventilador(B8);
        ventilador14->setObjectName(QString::fromUtf8("ventilador14"));
        ventilador14->setGeometry(QRect(660, 200, 61, 111));
        ventilador1 = new Ventilador(B8);
        ventilador1->setObjectName(QString::fromUtf8("ventilador1"));
        ventilador1->setGeometry(QRect(670, 270, 61, 111));
        ventilador2 = new Ventilador(B8);
        ventilador2->setObjectName(QString::fromUtf8("ventilador2"));
        ventilador2->setGeometry(QRect(640, 350, 61, 111));
        ventilador3 = new Ventilador(B8);
        ventilador3->setObjectName(QString::fromUtf8("ventilador3"));
        ventilador3->setGeometry(QRect(590, 410, 61, 111));
        ventilador4 = new Ventilador(B8);
        ventilador4->setObjectName(QString::fromUtf8("ventilador4"));
        ventilador4->setGeometry(QRect(510, 450, 61, 111));
        ventilador5 = new Ventilador(B8);
        ventilador5->setObjectName(QString::fromUtf8("ventilador5"));
        ventilador5->setGeometry(QRect(420, 450, 61, 111));
        ventilador6 = new Ventilador(B8);
        ventilador6->setObjectName(QString::fromUtf8("ventilador6"));
        ventilador6->setGeometry(QRect(330, 410, 61, 111));

        retranslateUi(B8);

        QMetaObject::connectSlotsByName(B8);
    } // setupUi

    void retranslateUi(QWidget *B8)
    {
        B8->setWindowTitle(QApplication::translate("B8", "Form", 0, QApplication::UnicodeUTF8));
        lbIMGFondo->setText(QString());
        btnIMPPant->setText(QApplication::translate("B8", "IMP PANT", 0, QApplication::UnicodeUTF8));
        lbUnit3->setText(QApplication::translate("B8", "    UNIT3", 0, QApplication::UnicodeUTF8));
        lbTexto_0->setText(QApplication::translate("B8", "DEMANDA DEL QUEMADOR", 0, QApplication::UnicodeUTF8));
        lbTexto_1->setText(QApplication::translate("B8", "MODO QUEMADOR", 0, QApplication::UnicodeUTF8));
        lbTexto_2->setText(QApplication::translate("B8", "B (PILOTO)", 0, QApplication::UnicodeUTF8));
        lbValor_0->setText(QApplication::translate("B8", "0", 0, QApplication::UnicodeUTF8));
        lbTexto_3->setText(QApplication::translate("B8", "V\303\201L PRE 11", 0, QApplication::UnicodeUTF8));
        lbTexto_4->setText(QApplication::translate("B8", "V\303\201L PRE 10", 0, QApplication::UnicodeUTF8));
        lbTexto_5->setText(QApplication::translate("B8", "V\303\201L PRE 9", 0, QApplication::UnicodeUTF8));
        lbTexto_6->setText(QApplication::translate("B8", "ENCENDEDOR 2", 0, QApplication::UnicodeUTF8));
        lbTexto_7->setText(QApplication::translate("B8", "V\303\201L PRE 8", 0, QApplication::UnicodeUTF8));
        lbTexto_8->setText(QApplication::translate("B8", "V\303\201L PRE 7", 0, QApplication::UnicodeUTF8));
        lbTexto_9->setText(QApplication::translate("B8", "ENCENDEDOR 1", 0, QApplication::UnicodeUTF8));
        lbTexto_10->setText(QApplication::translate("B8", "V\303\201L PRE 5", 0, QApplication::UnicodeUTF8));
        lbTexto_11->setText(QApplication::translate("B8", "V\303\201L PRE 4", 0, QApplication::UnicodeUTF8));
        lbTexto_12->setText(QApplication::translate("B8", "V\303\201L PRE 3", 0, QApplication::UnicodeUTF8));
        lbTexto_13->setText(QApplication::translate("B8", "V\303\201L PRE 2", 0, QApplication::UnicodeUTF8));
        lbTexto_14->setText(QApplication::translate("B8", "V\303\201L PRE 1", 0, QApplication::UnicodeUTF8));
        lbTexto_15->setText(QApplication::translate("B8", "V\303\201L PRE 6", 0, QApplication::UnicodeUTF8));
        lbTexto_16->setText(QApplication::translate("B8", "ENCENDIDO MANUAL HABILITADO", 0, QApplication::UnicodeUTF8));
        btnIMPPant_2->setText(QApplication::translate("B8", "HAB/DESHAB", 0, QApplication::UnicodeUTF8));
        lbTexto_17->setText(QApplication::translate("B8", "M\303\232LTIPLE A (EXTERNO)", 0, QApplication::UnicodeUTF8));
        lbTexto_18->setText(QApplication::translate("B8", "M\303\232LTIPLE B (PILOTO)", 0, QApplication::UnicodeUTF8));
        lbTexto_19->setText(QApplication::translate("B8", "M\303\232LTIPLE C (INTERNO)", 0, QApplication::UnicodeUTF8));
        lbTexto_20->setText(QApplication::translate("B8", "SUMINISTRO DE GAS AUXILIAR", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class B8: public Ui_B8 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_B8_H
