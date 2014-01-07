/********************************************************************************
** Form generated from reading UI file 'a4.ui'
**
** Created: Fri 3. Jan 20:43:13 2014
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_A4_H
#define UI_A4_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>
#include "wcheckbox.h"
#include "wlabel.h"

QT_BEGIN_NAMESPACE

class Ui_A4
{
public:
    QFrame *frame;
    QPushButton *btImp;
    QFrame *frame_7;
    QFrame *frame_8;
    QLabel *lbPrdT;
    QLabel *lbPas1_1T;
    QLabel *lbEdo1_1;
    WCheckBox *cbRampa;
    WCheckBox *cbInteruptor;
    WCheckBox *cbCronCiclo;
    QFrame *frame_14;
    QLabel *lbsecT;
    QLabel *lbPas1_2T;
    WCheckBox *cbDesacel;
    QLabel *lbEdo1_2;
    QLabel *label_3;
    WLabel *wLabel;
    WLabel *wLabel_2;
    QFrame *frame_9;
    QFrame *frame_10;
    QLabel *lbApaT;
    QLabel *lbPas2_1T;
    QLabel *lbEdo2_1;
    WCheckBox *cbEsperarNuc;
    WCheckBox *cbIniciar;
    WLabel *wLabel_3;
    QFrame *frame_11;
    QFrame *frame_12;
    QLabel *lbApaET;
    QFrame *frame_13;
    QLabel *lbImpT;
    WCheckBox *cbEsperarVel;
    QLabel *lbPas3_1T;
    WCheckBox *cbApagado;
    QLabel *lbEdo3_1;
    QLabel *lbPas3_2T;
    WCheckBox *checkBox_19;
    QLabel *lbEdo3_2;
    WCheckBox *cbEsperarIni;
    WCheckBox *cbSelec;
    WCheckBox *cbEsperarN25;
    WCheckBox *cbListo;
    WCheckBox *cbEsperarXn25;
    QLabel *label_4;
    WLabel *wLabel_4;
    WLabel *wLabel_5;
    QLabel *lbBack;
    QLabel *lbUnit3;

    void setupUi(QWidget *A4)
    {
        if (A4->objectName().isEmpty())
            A4->setObjectName(QString::fromUtf8("A4"));
        A4->resize(1024, 662);
        A4->setMinimumSize(QSize(1024, 662));
        A4->setMaximumSize(QSize(1024, 662));
        frame = new QFrame(A4);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 1024, 662));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(154, 154, 154);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        btImp = new QPushButton(frame);
        btImp->setObjectName(QString::fromUtf8("btImp"));
        btImp->setGeometry(QRect(10, 632, 135, 27));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        btImp->setFont(font);
        btImp->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        frame_7 = new QFrame(frame);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setGeometry(QRect(5, 50, 339, 541));
        frame_7->setStyleSheet(QString::fromUtf8("background-color: none;"));
        frame_7->setFrameShape(QFrame::Box);
        frame_7->setFrameShadow(QFrame::Sunken);
        frame_8 = new QFrame(frame_7);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setGeometry(QRect(5, 5, 332, 22));
        frame_8->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        frame_8->setFrameShape(QFrame::Box);
        frame_8->setFrameShadow(QFrame::Raised);
        lbPrdT = new QLabel(frame_8);
        lbPrdT->setObjectName(QString::fromUtf8("lbPrdT"));
        lbPrdT->setGeometry(QRect(7, 4, 318, 15));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        lbPrdT->setFont(font1);
        lbPrdT->setAlignment(Qt::AlignCenter);
        lbPas1_1T = new QLabel(frame_7);
        lbPas1_1T->setObjectName(QString::fromUtf8("lbPas1_1T"));
        lbPas1_1T->setGeometry(QRect(40, 30, 171, 21));
        QPalette palette;
        QBrush brush(QColor(0, 0, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        lbPas1_1T->setPalette(palette);
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setWeight(75);
        lbPas1_1T->setFont(font2);
        lbEdo1_1 = new QLabel(frame_7);
        lbEdo1_1->setObjectName(QString::fromUtf8("lbEdo1_1"));
        lbEdo1_1->setGeometry(QRect(280, 30, 54, 20));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        lbEdo1_1->setPalette(palette1);
        lbEdo1_1->setFont(font2);
        cbRampa = new WCheckBox(frame_7);
        cbRampa->setObjectName(QString::fromUtf8("cbRampa"));
        cbRampa->setGeometry(QRect(20, 50, 201, 16));
        cbRampa->setFont(font2);
        cbRampa->setProperty("iconSize", QVariant(QSize(24, 24)));
        cbInteruptor = new WCheckBox(frame_7);
        cbInteruptor->setObjectName(QString::fromUtf8("cbInteruptor"));
        cbInteruptor->setGeometry(QRect(20, 70, 189, 16));
        cbInteruptor->setFont(font2);
        cbInteruptor->setProperty("iconSize", QVariant(QSize(24, 24)));
        cbCronCiclo = new WCheckBox(frame_7);
        cbCronCiclo->setObjectName(QString::fromUtf8("cbCronCiclo"));
        cbCronCiclo->setGeometry(QRect(20, 90, 261, 16));
        cbCronCiclo->setFont(font2);
        cbCronCiclo->setProperty("iconSize", QVariant(QSize(24, 24)));
        frame_14 = new QFrame(frame_7);
        frame_14->setObjectName(QString::fromUtf8("frame_14"));
        frame_14->setGeometry(QRect(5, 160, 332, 22));
        frame_14->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        frame_14->setFrameShape(QFrame::Box);
        frame_14->setFrameShadow(QFrame::Raised);
        lbsecT = new QLabel(frame_14);
        lbsecT->setObjectName(QString::fromUtf8("lbsecT"));
        lbsecT->setGeometry(QRect(7, 4, 318, 15));
        lbsecT->setFont(font1);
        lbsecT->setAlignment(Qt::AlignCenter);
        lbPas1_2T = new QLabel(frame_7);
        lbPas1_2T->setObjectName(QString::fromUtf8("lbPas1_2T"));
        lbPas1_2T->setGeometry(QRect(40, 185, 171, 21));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        lbPas1_2T->setPalette(palette2);
        lbPas1_2T->setFont(font2);
        cbDesacel = new WCheckBox(frame_7);
        cbDesacel->setObjectName(QString::fromUtf8("cbDesacel"));
        cbDesacel->setGeometry(QRect(20, 206, 235, 16));
        cbDesacel->setFont(font2);
        cbDesacel->setProperty("iconSize", QVariant(QSize(24, 24)));
        lbEdo1_2 = new QLabel(frame_7);
        lbEdo1_2->setObjectName(QString::fromUtf8("lbEdo1_2"));
        lbEdo1_2->setGeometry(QRect(280, 185, 55, 20));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        lbEdo1_2->setPalette(palette3);
        lbEdo1_2->setFont(font2);
        label_3 = new QLabel(frame_7);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(294, 90, 12, 31));
        QFont font3;
        font3.setBold(true);
        font3.setWeight(75);
        label_3->setFont(font3);
        label_3->setAlignment(Qt::AlignCenter);
        wLabel = new WLabel(frame_7);
        wLabel->setObjectName(QString::fromUtf8("wLabel"));
        wLabel->setGeometry(QRect(270, 100, 16, 16));
        wLabel_2 = new WLabel(frame_7);
        wLabel_2->setObjectName(QString::fromUtf8("wLabel_2"));
        wLabel_2->setGeometry(QRect(300, 100, 16, 16));
        frame_9 = new QFrame(frame);
        frame_9->setObjectName(QString::fromUtf8("frame_9"));
        frame_9->setGeometry(QRect(342, 50, 339, 541));
        frame_9->setStyleSheet(QString::fromUtf8("background-color: none;"));
        frame_9->setFrameShape(QFrame::Box);
        frame_9->setFrameShadow(QFrame::Sunken);
        frame_10 = new QFrame(frame_9);
        frame_10->setObjectName(QString::fromUtf8("frame_10"));
        frame_10->setGeometry(QRect(5, 5, 332, 22));
        frame_10->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        frame_10->setFrameShape(QFrame::Box);
        frame_10->setFrameShadow(QFrame::Raised);
        lbApaT = new QLabel(frame_10);
        lbApaT->setObjectName(QString::fromUtf8("lbApaT"));
        lbApaT->setGeometry(QRect(7, 4, 318, 15));
        lbApaT->setFont(font1);
        lbApaT->setAlignment(Qt::AlignCenter);
        lbPas2_1T = new QLabel(frame_9);
        lbPas2_1T->setObjectName(QString::fromUtf8("lbPas2_1T"));
        lbPas2_1T->setGeometry(QRect(40, 30, 171, 21));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        lbPas2_1T->setPalette(palette4);
        lbPas2_1T->setFont(font2);
        lbEdo2_1 = new QLabel(frame_9);
        lbEdo2_1->setObjectName(QString::fromUtf8("lbEdo2_1"));
        lbEdo2_1->setGeometry(QRect(280, 30, 61, 20));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        lbEdo2_1->setPalette(palette5);
        lbEdo2_1->setFont(font2);
        cbEsperarNuc = new WCheckBox(frame_9);
        cbEsperarNuc->setObjectName(QString::fromUtf8("cbEsperarNuc"));
        cbEsperarNuc->setGeometry(QRect(20, 50, 211, 16));
        cbEsperarNuc->setFont(font2);
        cbEsperarNuc->setProperty("iconSize", QVariant(QSize(24, 24)));
        cbIniciar = new WCheckBox(frame_9);
        cbIniciar->setObjectName(QString::fromUtf8("cbIniciar"));
        cbIniciar->setGeometry(QRect(20, 70, 281, 16));
        cbIniciar->setFont(font2);
        cbIniciar->setProperty("iconSize", QVariant(QSize(24, 24)));
        wLabel_3 = new WLabel(frame_9);
        wLabel_3->setObjectName(QString::fromUtf8("wLabel_3"));
        wLabel_3->setGeometry(QRect(290, 70, 16, 16));
        frame_11 = new QFrame(frame);
        frame_11->setObjectName(QString::fromUtf8("frame_11"));
        frame_11->setGeometry(QRect(680, 50, 339, 541));
        frame_11->setStyleSheet(QString::fromUtf8("background-color: none;"));
        frame_11->setFrameShape(QFrame::Box);
        frame_11->setFrameShadow(QFrame::Sunken);
        frame_12 = new QFrame(frame_11);
        frame_12->setObjectName(QString::fromUtf8("frame_12"));
        frame_12->setGeometry(QRect(5, 5, 332, 22));
        frame_12->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        frame_12->setFrameShape(QFrame::Box);
        frame_12->setFrameShadow(QFrame::Raised);
        lbApaET = new QLabel(frame_12);
        lbApaET->setObjectName(QString::fromUtf8("lbApaET"));
        lbApaET->setGeometry(QRect(7, 4, 318, 15));
        lbApaET->setFont(font1);
        lbApaET->setAlignment(Qt::AlignCenter);
        frame_13 = new QFrame(frame_11);
        frame_13->setObjectName(QString::fromUtf8("frame_13"));
        frame_13->setGeometry(QRect(5, 160, 332, 22));
        frame_13->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        frame_13->setFrameShape(QFrame::Box);
        frame_13->setFrameShadow(QFrame::Raised);
        lbImpT = new QLabel(frame_13);
        lbImpT->setObjectName(QString::fromUtf8("lbImpT"));
        lbImpT->setGeometry(QRect(7, 4, 318, 15));
        lbImpT->setFont(font1);
        lbImpT->setAlignment(Qt::AlignCenter);
        cbEsperarVel = new WCheckBox(frame_11);
        cbEsperarVel->setObjectName(QString::fromUtf8("cbEsperarVel"));
        cbEsperarVel->setGeometry(QRect(20, 70, 302, 16));
        cbEsperarVel->setFont(font2);
        cbEsperarVel->setProperty("iconSize", QVariant(QSize(24, 24)));
        lbPas3_1T = new QLabel(frame_11);
        lbPas3_1T->setObjectName(QString::fromUtf8("lbPas3_1T"));
        lbPas3_1T->setGeometry(QRect(40, 30, 171, 21));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        lbPas3_1T->setPalette(palette6);
        lbPas3_1T->setFont(font2);
        cbApagado = new WCheckBox(frame_11);
        cbApagado->setObjectName(QString::fromUtf8("cbApagado"));
        cbApagado->setGeometry(QRect(20, 50, 211, 16));
        cbApagado->setFont(font2);
        cbApagado->setProperty("iconSize", QVariant(QSize(24, 24)));
        lbEdo3_1 = new QLabel(frame_11);
        lbEdo3_1->setObjectName(QString::fromUtf8("lbEdo3_1"));
        lbEdo3_1->setGeometry(QRect(280, 30, 71, 20));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        lbEdo3_1->setPalette(palette7);
        lbEdo3_1->setFont(font2);
        lbPas3_2T = new QLabel(frame_11);
        lbPas3_2T->setObjectName(QString::fromUtf8("lbPas3_2T"));
        lbPas3_2T->setGeometry(QRect(40, 185, 171, 21));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        lbPas3_2T->setPalette(palette8);
        lbPas3_2T->setFont(font2);
        checkBox_19 = new WCheckBox(frame_11);
        checkBox_19->setObjectName(QString::fromUtf8("checkBox_19"));
        checkBox_19->setGeometry(QRect(20, 220, 251, 16));
        checkBox_19->setFont(font2);
        checkBox_19->setProperty("iconSize", QVariant(QSize(24, 24)));
        lbEdo3_2 = new QLabel(frame_11);
        lbEdo3_2->setObjectName(QString::fromUtf8("lbEdo3_2"));
        lbEdo3_2->setGeometry(QRect(280, 185, 71, 20));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        lbEdo3_2->setPalette(palette9);
        lbEdo3_2->setFont(font2);
        cbEsperarIni = new WCheckBox(frame_11);
        cbEsperarIni->setObjectName(QString::fromUtf8("cbEsperarIni"));
        cbEsperarIni->setGeometry(QRect(20, 280, 244, 16));
        cbEsperarIni->setFont(font2);
        cbEsperarIni->setProperty("iconSize", QVariant(QSize(24, 24)));
        cbSelec = new WCheckBox(frame_11);
        cbSelec->setObjectName(QString::fromUtf8("cbSelec"));
        cbSelec->setGeometry(QRect(20, 240, 191, 16));
        cbSelec->setFont(font2);
        cbSelec->setProperty("iconSize", QVariant(QSize(24, 24)));
        cbEsperarN25 = new WCheckBox(frame_11);
        cbEsperarN25->setObjectName(QString::fromUtf8("cbEsperarN25"));
        cbEsperarN25->setGeometry(QRect(20, 200, 281, 16));
        cbEsperarN25->setFont(font2);
        cbEsperarN25->setProperty("iconSize", QVariant(QSize(24, 24)));
        cbListo = new WCheckBox(frame_11);
        cbListo->setObjectName(QString::fromUtf8("cbListo"));
        cbListo->setGeometry(QRect(20, 300, 254, 16));
        cbListo->setFont(font2);
        cbListo->setProperty("iconSize", QVariant(QSize(24, 24)));
        cbEsperarXn25 = new WCheckBox(frame_11);
        cbEsperarXn25->setObjectName(QString::fromUtf8("cbEsperarXn25"));
        cbEsperarXn25->setGeometry(QRect(20, 260, 311, 16));
        QFont font4;
        font4.setPointSize(8);
        font4.setBold(true);
        font4.setWeight(75);
        cbEsperarXn25->setFont(font4);
        cbEsperarXn25->setProperty("iconSize", QVariant(QSize(24, 24)));
        label_4 = new QLabel(frame_11);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(294, 320, 12, 31));
        label_4->setFont(font3);
        label_4->setAlignment(Qt::AlignCenter);
        wLabel_4 = new WLabel(frame_11);
        wLabel_4->setObjectName(QString::fromUtf8("wLabel_4"));
        wLabel_4->setGeometry(QRect(280, 330, 16, 16));
        wLabel_5 = new WLabel(frame_11);
        wLabel_5->setObjectName(QString::fromUtf8("wLabel_5"));
        wLabel_5->setGeometry(QRect(310, 330, 16, 16));
        lbBack = new QLabel(frame);
        lbBack->setObjectName(QString::fromUtf8("lbBack"));
        lbBack->setGeometry(QRect(0, 0, 1024, 662));
        lbBack->setMinimumSize(QSize(1024, 662));
        lbBack->setMaximumSize(QSize(1024, 662));
        lbBack->setPixmap(QPixmap(QString::fromUtf8(":/Resources/PNG/BackGround.png")));
        lbUnit3 = new QLabel(frame);
        lbUnit3->setObjectName(QString::fromUtf8("lbUnit3"));
        lbUnit3->setGeometry(QRect(833, 648, 190, 15));
        lbUnit3->setFont(font3);
        lbUnit3->setStyleSheet(QString::fromUtf8("background-color: rgb(175, 175, 175);"));
        lbBack->raise();
        btImp->raise();
        frame_7->raise();
        frame_9->raise();
        frame_11->raise();
        lbUnit3->raise();

        retranslateUi(A4);

        QMetaObject::connectSlotsByName(A4);
    } // setupUi

    void retranslateUi(QWidget *A4)
    {
        A4->setWindowTitle(QApplication::translate("A4", "Form", 0, QApplication::UnicodeUTF8));
        btImp->setText(QApplication::translate("A4", "IMP. PANTALLA", 0, QApplication::UnicodeUTF8));
        lbPrdT->setText(QApplication::translate("A4", "PARADA NORMAL", 0, QApplication::UnicodeUTF8));
        lbPas1_1T->setText(QApplication::translate("A4", "PASO DE SECUENCIA", 0, QApplication::UnicodeUTF8));
        lbEdo1_1->setText(QApplication::translate("A4", "ESTADO", 0, QApplication::UnicodeUTF8));
        cbRampa->setId(QApplication::translate("A4", "p_Fix32_THISNODE_NORM_STP_1", 0, QApplication::UnicodeUTF8));
        cbRampa->setText(QApplication::translate("A4", "RAMPA NPT A CARGA MIN", 0, QApplication::UnicodeUTF8));
        cbInteruptor->setId(QApplication::translate("A4", "p_Fix32_THISNODE_NORM_STP_3", 0, QApplication::UnicodeUTF8));
        cbInteruptor->setText(QApplication::translate("A4", "INTERRUPTOR ABIERTO", 0, QApplication::UnicodeUTF8));
        cbCronCiclo->setId(QApplication::translate("A4", "p_Fix32_THISNODE_CD_CYCT_ON", 0, QApplication::UnicodeUTF8));
        cbCronCiclo->setText(QApplication::translate("A4", "CRON CICLO ENFRIAMIENTO ACTIVO", 0, QApplication::UnicodeUTF8));
        lbsecT->setText(QApplication::translate("A4", "SECUENCIA DESACEL A MIN", 0, QApplication::UnicodeUTF8));
        lbPas1_2T->setText(QApplication::translate("A4", "PASO DE SECUENCIA", 0, QApplication::UnicodeUTF8));
        cbDesacel->setId(QApplication::translate("A4", "p_Fix32_THISNODE_DECELMIN", 0, QApplication::UnicodeUTF8));
        cbDesacel->setText(QApplication::translate("A4", "DESACEL A CARGA MIN ACTIVO", 0, QApplication::UnicodeUTF8));
        lbEdo1_2->setText(QApplication::translate("A4", "ESTADO", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("A4", ":", 0, QApplication::UnicodeUTF8));
        wLabel->setId(QApplication::translate("A4", "p_Fix32_THISNODE_CD_MIN_F_CV", 0, QApplication::UnicodeUTF8));
        wLabel_2->setId(QApplication::translate("A4", "p_Fix32_THISNODE_CD_SEC_F_CV", 0, QApplication::UnicodeUTF8));
        lbApaT->setText(QApplication::translate("A4", "APAGADO CON PASO A RALENT\303\215", 0, QApplication::UnicodeUTF8));
        lbPas2_1T->setText(QApplication::translate("A4", "PASO DE SECUENCIA", 0, QApplication::UnicodeUTF8));
        lbEdo2_1->setText(QApplication::translate("A4", "ESTADO", 0, QApplication::UnicodeUTF8));
        cbEsperarNuc->setId(QApplication::translate("A4", "p_Fix32_THISNODE_STI_SEQ_1", 0, QApplication::UnicodeUTF8));
        cbEsperarNuc->setText(QApplication::translate("A4", "ESPERAR N\303\232CLEO RALENT\303\215", 0, QApplication::UnicodeUTF8));
        cbIniciar->setId(QApplication::translate("A4", "p_Fix32_THISNODE_STI_SEQ_2", 0, QApplication::UnicodeUTF8));
        cbIniciar->setText(QApplication::translate("A4", "INICIAR CRONO DE 10 SEG A REESTAB", 0, QApplication::UnicodeUTF8));
        wLabel_3->setId(QApplication::translate("A4", "p_Fix32_THISNODE_STI_1_SEC_F_CV", 0, QApplication::UnicodeUTF8));
        lbApaET->setText(QApplication::translate("A4", "APAGADO DE EMERGENCIA", 0, QApplication::UnicodeUTF8));
        lbImpT->setText(QApplication::translate("A4", "IMPULSI\303\223N", 0, QApplication::UnicodeUTF8));
        cbEsperarVel->setId(QApplication::translate("A4", "p_Fix32_THISNODE_ES_STP_2", 0, QApplication::UnicodeUTF8));
        cbEsperarVel->setText(QApplication::translate("A4", "ESPERAR QUE VEL BAJE ANTES DE MOTOR", 0, QApplication::UnicodeUTF8));
        lbPas3_1T->setText(QApplication::translate("A4", "PASO DE SECUENCIA", 0, QApplication::UnicodeUTF8));
        cbApagado->setId(QApplication::translate("A4", "p_Fix32_THISNODE_ES_STP_1", 0, QApplication::UnicodeUTF8));
        cbApagado->setText(QApplication::translate("A4", "APAGADO DE EMERGENCIA", 0, QApplication::UnicodeUTF8));
        lbEdo3_1->setText(QApplication::translate("A4", "ESTADO", 0, QApplication::UnicodeUTF8));
        lbPas3_2T->setText(QApplication::translate("A4", "PASO DE SECUENCIA", 0, QApplication::UnicodeUTF8));
        checkBox_19->setId(QApplication::translate("A4", "p_Fix32_THISNODE_MTR_STP_2", 0, QApplication::UnicodeUTF8));
        checkBox_19->setText(QApplication::translate("A4", "ACTIVAR ARRANQUE HIDR\303\201ULICO", 0, QApplication::UnicodeUTF8));
        lbEdo3_2->setText(QApplication::translate("A4", "ESTADO", 0, QApplication::UnicodeUTF8));
        cbEsperarIni->setId(QApplication::translate("A4", "p_Fix32_THISNODE_MTR_STP_5", 0, QApplication::UnicodeUTF8));
        cbEsperarIni->setText(QApplication::translate("A4", "INICIAR CRONO ROTACI\303\223N ENFR", 0, QApplication::UnicodeUTF8));
        cbSelec->setId(QApplication::translate("A4", "p_Fix32_THISNODE_MTR_STP_3", 0, QApplication::UnicodeUTF8));
        cbSelec->setText(QApplication::translate("A4", "SELEC ALTA VELOCIDAD", 0, QApplication::UnicodeUTF8));
        cbEsperarN25->setId(QApplication::translate("A4", "p_Fix32_THISNODE_MTR_STP_1", 0, QApplication::UnicodeUTF8));
        cbEsperarN25->setText(QApplication::translate("A4", "ESPERAR QUE N25 ABAJO DE 300 RPM", 0, QApplication::UnicodeUTF8));
        cbListo->setId(QApplication::translate("A4", "p_Fix32_THISNODE_MTR_STP_6", 0, QApplication::UnicodeUTF8));
        cbListo->setText(QApplication::translate("A4", "LISTO PARA ARRANQUE CALIENTE", 0, QApplication::UnicodeUTF8));
        cbEsperarXn25->setId(QApplication::translate("A4", "p_Fix32_THISNODE_MTR_STP_4", 0, QApplication::UnicodeUTF8));
        cbEsperarXn25->setText(QApplication::translate("A4", "ESPERAR PARA QUE VEL XN25 SUPERE 1700 RPM", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("A4", ":", 0, QApplication::UnicodeUTF8));
        wLabel_4->setId(QApplication::translate("A4", "p_Fix32_THISNODE_CDC_MIN_F_CV", 0, QApplication::UnicodeUTF8));
        wLabel_5->setId(QApplication::translate("A4", "p_Fix32_THISNODE_CDC_SEC_F_CV", 0, QApplication::UnicodeUTF8));
        lbBack->setText(QString());
        lbUnit3->setText(QApplication::translate("A4", "    UNIT3", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class A4: public Ui_A4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_A4_H
