/********************************************************************************
** Form generated from reading UI file 'enfriador.ui'
**
** Created: Fri 3. Jan 20:43:14 2014
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENFRIADOR_H
#define UI_ENFRIADOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCommandLinkButton>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>
#include "wlabel.h"
#include "wlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_ENFRIADOR
{
public:
    QLabel *lbFondo;
    QLabel *lbEnfT;
    QPushButton *btHabPla;
    QPushButton *btDesPla;
    QPushButton *btEnfr;
    QPushButton *btCalent;
    QLabel *lbPm100a;
    QLabel *lbPm100b;
    QLabel *lbT390;
    QLabel *lbh110;
    QLabel *lbCh100;
    QLabel *lbT2U;
    QLabel *lbIndT;
    QLineEdit *leT2;
    QLabel *lbMizq;
    QLabel *lbMder;
    QPushButton *btImpr;
    QLabel *lbRetorT;
    QLabel *lbConexionT;
    QLabel *lbSumiT;
    QCommandLinkButton *btnlbAlarma;
    QCommandLinkButton *btnlbAlarma_2;
    QCommandLinkButton *btnlbAlarma_3;
    WLabel *wLabel;
    WLineEdit *wLineEdit;
    WLineEdit *wLineEdit_2;

    void setupUi(QWidget *ENFRIADOR)
    {
        if (ENFRIADOR->objectName().isEmpty())
            ENFRIADOR->setObjectName(QString::fromUtf8("ENFRIADOR"));
        ENFRIADOR->resize(1024, 662);
        ENFRIADOR->setMinimumSize(QSize(1024, 662));
        ENFRIADOR->setMaximumSize(QSize(1024, 662));
        lbFondo = new QLabel(ENFRIADOR);
        lbFondo->setObjectName(QString::fromUtf8("lbFondo"));
        lbFondo->setGeometry(QRect(0, 0, 1024, 662));
        lbFondo->setPixmap(QPixmap(QString::fromUtf8(":/Resources/PNG/N5.png")));
        lbEnfT = new QLabel(ENFRIADOR);
        lbEnfT->setObjectName(QString::fromUtf8("lbEnfT"));
        lbEnfT->setGeometry(QRect(410, 7, 181, 16));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        lbEnfT->setFont(font);
        lbEnfT->setAlignment(Qt::AlignCenter);
        btHabPla = new QPushButton(ENFRIADOR);
        btHabPla->setObjectName(QString::fromUtf8("btHabPla"));
        btHabPla->setGeometry(QRect(420, 564, 80, 32));
        QFont font1;
        font1.setPointSize(7);
        font1.setBold(false);
        font1.setWeight(50);
        btHabPla->setFont(font1);
        btHabPla->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        btDesPla = new QPushButton(ENFRIADOR);
        btDesPla->setObjectName(QString::fromUtf8("btDesPla"));
        btDesPla->setGeometry(QRect(420, 597, 80, 32));
        btDesPla->setFont(font1);
        btDesPla->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        btEnfr = new QPushButton(ENFRIADOR);
        btEnfr->setObjectName(QString::fromUtf8("btEnfr"));
        btEnfr->setGeometry(QRect(512, 597, 80, 32));
        btEnfr->setFont(font1);
        btEnfr->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        btCalent = new QPushButton(ENFRIADOR);
        btCalent->setObjectName(QString::fromUtf8("btCalent"));
        btCalent->setGeometry(QRect(511, 564, 80, 32));
        btCalent->setFont(font1);
        btCalent->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        lbPm100a = new QLabel(ENFRIADOR);
        lbPm100a->setObjectName(QString::fromUtf8("lbPm100a"));
        lbPm100a->setGeometry(QRect(188, 563, 61, 16));
        QFont font2;
        font2.setUnderline(true);
        lbPm100a->setFont(font2);
        lbPm100b = new QLabel(ENFRIADOR);
        lbPm100b->setObjectName(QString::fromUtf8("lbPm100b"));
        lbPm100b->setGeometry(QRect(368, 562, 61, 16));
        lbPm100b->setFont(font2);
        lbT390 = new QLabel(ENFRIADOR);
        lbT390->setObjectName(QString::fromUtf8("lbT390"));
        lbT390->setGeometry(QRect(305, 213, 45, 16));
        lbT390->setFont(font2);
        lbh110 = new QLabel(ENFRIADOR);
        lbh110->setObjectName(QString::fromUtf8("lbh110"));
        lbh110->setGeometry(QRect(710, 264, 45, 16));
        lbh110->setFont(font2);
        lbCh100 = new QLabel(ENFRIADOR);
        lbCh100->setObjectName(QString::fromUtf8("lbCh100"));
        lbCh100->setGeometry(QRect(798, 556, 45, 16));
        lbCh100->setFont(font2);
        lbT2U = new QLabel(ENFRIADOR);
        lbT2U->setObjectName(QString::fromUtf8("lbT2U"));
        lbT2U->setGeometry(QRect(852, 578, 21, 16));
        QFont font3;
        font3.setUnderline(false);
        lbT2U->setFont(font3);
        lbIndT = new QLabel(ENFRIADOR);
        lbIndT->setObjectName(QString::fromUtf8("lbIndT"));
        lbIndT->setGeometry(QRect(684, 602, 301, 16));
        QFont font4;
        font4.setBold(true);
        font4.setUnderline(false);
        font4.setWeight(75);
        lbIndT->setFont(font4);
        leT2 = new QLineEdit(ENFRIADOR);
        leT2->setObjectName(QString::fromUtf8("leT2"));
        leT2->setGeometry(QRect(780, 575, 63, 25));
        lbMizq = new QLabel(ENFRIADOR);
        lbMizq->setObjectName(QString::fromUtf8("lbMizq"));
        lbMizq->setGeometry(QRect(202, 542, 16, 16));
        lbMizq->setAlignment(Qt::AlignCenter);
        lbMder = new QLabel(ENFRIADOR);
        lbMder->setObjectName(QString::fromUtf8("lbMder"));
        lbMder->setGeometry(QRect(382, 542, 16, 16));
        lbMder->setAlignment(Qt::AlignCenter);
        btImpr = new QPushButton(ENFRIADOR);
        btImpr->setObjectName(QString::fromUtf8("btImpr"));
        btImpr->setGeometry(QRect(20, 634, 133, 23));
        btImpr->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 208, 212);"));
        lbRetorT = new QLabel(ENFRIADOR);
        lbRetorT->setObjectName(QString::fromUtf8("lbRetorT"));
        lbRetorT->setGeometry(QRect(10, 304, 71, 21));
        QFont font5;
        font5.setPointSize(6);
        lbRetorT->setFont(font5);
        lbRetorT->setAlignment(Qt::AlignCenter);
        lbConexionT = new QLabel(ENFRIADOR);
        lbConexionT->setObjectName(QString::fromUtf8("lbConexionT"));
        lbConexionT->setGeometry(QRect(10, 184, 71, 21));
        lbConexionT->setFont(font5);
        lbConexionT->setAlignment(Qt::AlignCenter);
        lbSumiT = new QLabel(ENFRIADOR);
        lbSumiT->setObjectName(QString::fromUtf8("lbSumiT"));
        lbSumiT->setGeometry(QRect(905, 110, 71, 21));
        lbSumiT->setFont(font5);
        lbSumiT->setAlignment(Qt::AlignCenter);
        btnlbAlarma = new QCommandLinkButton(ENFRIADOR);
        btnlbAlarma->setObjectName(QString::fromUtf8("btnlbAlarma"));
        btnlbAlarma->setGeometry(QRect(80, 80, 97, 16));
        btnlbAlarma->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/PNG/Extras/transparente.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnlbAlarma->setIcon(icon);
        btnlbAlarma_2 = new QCommandLinkButton(ENFRIADOR);
        btnlbAlarma_2->setObjectName(QString::fromUtf8("btnlbAlarma_2"));
        btnlbAlarma_2->setGeometry(QRect(780, 575, 63, 25));
        btnlbAlarma_2->setStyleSheet(QString::fromUtf8(""));
        btnlbAlarma_2->setIcon(icon);
        btnlbAlarma_3 = new QCommandLinkButton(ENFRIADOR);
        btnlbAlarma_3->setObjectName(QString::fromUtf8("btnlbAlarma_3"));
        btnlbAlarma_3->setGeometry(QRect(80, 100, 97, 16));
        btnlbAlarma_3->setStyleSheet(QString::fromUtf8(""));
        btnlbAlarma_3->setIcon(icon);
        wLabel = new WLabel(ENFRIADOR);
        wLabel->setObjectName(QString::fromUtf8("wLabel"));
        wLabel->setGeometry(QRect(780, 578, 61, 21));
        wLineEdit = new WLineEdit(ENFRIADOR);
        wLineEdit->setObjectName(QString::fromUtf8("wLineEdit"));
        wLineEdit->setGeometry(QRect(78, 80, 100, 18));
        wLineEdit->setProperty("Fondo_Inicial", QVariant(WLineEdit::Rojo));
        wLineEdit_2 = new WLineEdit(ENFRIADOR);
        wLineEdit_2->setObjectName(QString::fromUtf8("wLineEdit_2"));
        wLineEdit_2->setGeometry(QRect(78, 100, 100, 18));
        lbFondo->raise();
        wLineEdit_2->raise();
        wLineEdit->raise();
        btnlbAlarma_3->raise();
        btnlbAlarma->raise();
        lbEnfT->raise();
        btHabPla->raise();
        btDesPla->raise();
        btEnfr->raise();
        btCalent->raise();
        lbPm100a->raise();
        lbPm100b->raise();
        lbT390->raise();
        lbh110->raise();
        lbCh100->raise();
        lbT2U->raise();
        lbIndT->raise();
        leT2->raise();
        lbMizq->raise();
        lbMder->raise();
        btImpr->raise();
        lbRetorT->raise();
        lbConexionT->raise();
        lbSumiT->raise();
        btnlbAlarma_2->raise();
        wLabel->raise();

        retranslateUi(ENFRIADOR);

        QMetaObject::connectSlotsByName(ENFRIADOR);
    } // setupUi

    void retranslateUi(QWidget *ENFRIADOR)
    {
        ENFRIADOR->setWindowTitle(QApplication::translate("ENFRIADOR", "Form", 0, QApplication::UnicodeUTF8));
        lbFondo->setText(QString());
        lbEnfT->setText(QApplication::translate("ENFRIADOR", "ENFRIADOR", 0, QApplication::UnicodeUTF8));
        btHabPla->setText(QApplication::translate("ENFRIADOR", "HABILITAR\n"
"PLANTA", 0, QApplication::UnicodeUTF8));
        btDesPla->setText(QApplication::translate("ENFRIADOR", "DESHABILITAR\n"
"PLANTA", 0, QApplication::UnicodeUTF8));
        btEnfr->setText(QApplication::translate("ENFRIADOR", "MODO\n"
"ENFRIADOR", 0, QApplication::UnicodeUTF8));
        btCalent->setText(QApplication::translate("ENFRIADOR", "MODO\n"
"CALENTADOR", 0, QApplication::UnicodeUTF8));
        lbPm100a->setText(QApplication::translate("ENFRIADOR", "PM - 100A", 0, QApplication::UnicodeUTF8));
        lbPm100b->setText(QApplication::translate("ENFRIADOR", "PM - 100B", 0, QApplication::UnicodeUTF8));
        lbT390->setText(QApplication::translate("ENFRIADOR", "T - 390  ", 0, QApplication::UnicodeUTF8));
        lbh110->setText(QApplication::translate("ENFRIADOR", "H - 110", 0, QApplication::UnicodeUTF8));
        lbCh100->setText(QApplication::translate("ENFRIADOR", "CH - 100", 0, QApplication::UnicodeUTF8));
        lbT2U->setText(QApplication::translate("ENFRIADOR", "\302\272F", 0, QApplication::UnicodeUTF8));
        lbIndT->setText(QApplication::translate("ENFRIADOR", "INDIQUE EL PUNTO DE AJUSTE DE LA VARIABLE T2", 0, QApplication::UnicodeUTF8));
        lbMizq->setText(QApplication::translate("ENFRIADOR", "M", 0, QApplication::UnicodeUTF8));
        lbMder->setText(QApplication::translate("ENFRIADOR", "M", 0, QApplication::UnicodeUTF8));
        btImpr->setText(QApplication::translate("ENFRIADOR", "IMP PANT", 0, QApplication::UnicodeUTF8));
        lbRetorT->setText(QApplication::translate("ENFRIADOR", "RETORIO\n"
"AGUA CHILL", 0, QApplication::UnicodeUTF8));
        lbConexionT->setText(QApplication::translate("ENFRIADOR", "CONEXION\n"
"AGUA CHILL", 0, QApplication::UnicodeUTF8));
        lbSumiT->setText(QApplication::translate("ENFRIADOR", "SUMINISTRO\n"
"AGUA CHILL", 0, QApplication::UnicodeUTF8));
        btnlbAlarma->setText(QString());
        btnlbAlarma_2->setText(QString());
        btnlbAlarma_3->setText(QString());
        wLabel->setId(QApplication::translate("ENFRIADOR", "p_Fix32_NODE_INPUT_TY_177B_F_CV", 0, QApplication::UnicodeUTF8));
        wLineEdit->setId(QApplication::translate("ENFRIADOR", "p_Fix32_NODE_YSA_220_A_Tag", 0, QApplication::UnicodeUTF8));
        wLineEdit_2->setId(QApplication::translate("ENFRIADOR", "p_Fix32_NODE_YSA_177_A_Tag", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ENFRIADOR: public Ui_ENFRIADOR {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENFRIADOR_H
