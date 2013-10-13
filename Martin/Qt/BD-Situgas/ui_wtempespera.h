/********************************************************************************
** Form generated from reading UI file 'wtempespera.ui'
**
** Created: Sat 12. Oct 21:51:54 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WTEMPESPERA_H
#define UI_WTEMPESPERA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WTempEspera
{
public:
    QPushButton *btCerrar;
    QLabel *lbRetroT;
    QFrame *frame;
    QLabel *lbTiempoT;
    QLabel *lbDemandaT;
    QPushButton *btConfirmar;
    QFrame *frame_5;
    QLabel *lbIP;
    QLineEdit *leRetro;
    QLineEdit *leDemanda;
    QLabel *lbFondo;

    void setupUi(QWidget *WTempEspera)
    {
        if (WTempEspera->objectName().isEmpty())
            WTempEspera->setObjectName(QString::fromUtf8("WTempEspera"));
        WTempEspera->resize(200, 330);
        WTempEspera->setMinimumSize(QSize(200, 330));
        WTempEspera->setMaximumSize(QSize(200, 330));
        WTempEspera->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        btCerrar = new QPushButton(WTempEspera);
        btCerrar->setObjectName(QString::fromUtf8("btCerrar"));
        btCerrar->setGeometry(QRect(60, 287, 83, 33));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        font.setKerning(true);
        btCerrar->setFont(font);
        btCerrar->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        btCerrar->setAutoDefault(false);
        btCerrar->setDefault(false);
        btCerrar->setFlat(false);
        lbRetroT = new QLabel(WTempEspera);
        lbRetroT->setObjectName(QString::fromUtf8("lbRetroT"));
        lbRetroT->setGeometry(QRect(10, 94, 77, 20));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        lbRetroT->setFont(font1);
        lbRetroT->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        frame = new QFrame(WTempEspera);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 17, 198, 34));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Sunken);
        frame->setLineWidth(2);
        lbTiempoT = new QLabel(frame);
        lbTiempoT->setObjectName(QString::fromUtf8("lbTiempoT"));
        lbTiempoT->setGeometry(QRect(0, 0, 198, 31));
        lbTiempoT->setFont(font1);
        lbTiempoT->setFrameShape(QFrame::NoFrame);
        lbTiempoT->setFrameShadow(QFrame::Plain);
        lbTiempoT->setLineWidth(1);
        lbTiempoT->setAlignment(Qt::AlignCenter);
        lbDemandaT = new QLabel(WTempEspera);
        lbDemandaT->setObjectName(QString::fromUtf8("lbDemandaT"));
        lbDemandaT->setGeometry(QRect(10, 64, 77, 20));
        lbDemandaT->setFont(font1);
        lbDemandaT->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        btConfirmar = new QPushButton(WTempEspera);
        btConfirmar->setObjectName(QString::fromUtf8("btConfirmar"));
        btConfirmar->setGeometry(QRect(22, 150, 156, 25));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Verdana"));
        font2.setBold(true);
        font2.setWeight(75);
        btConfirmar->setFont(font2);
        btConfirmar->setStyleSheet(QString::fromUtf8("background-color: rgb(152, 152, 152);"));
        frame_5 = new QFrame(WTempEspera);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(0, 0, 241, 16));
        frame_5->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(43, 71, 134, 255), stop:1 rgba(255, 255, 255, 255));"));
        frame_5->setFrameShape(QFrame::Panel);
        frame_5->setFrameShadow(QFrame::Raised);
        frame_5->setLineWidth(0);
        lbIP = new QLabel(frame_5);
        lbIP->setObjectName(QString::fromUtf8("lbIP"));
        lbIP->setGeometry(QRect(0, 0, 81, 16));
        QFont font3;
        font3.setPointSize(5);
        lbIP->setFont(font3);
        lbIP->setStyleSheet(QString::fromUtf8("background-color: rgb(74, 110, 195);"));
        leRetro = new QLineEdit(WTempEspera);
        leRetro->setObjectName(QString::fromUtf8("leRetro"));
        leRetro->setGeometry(QRect(94, 89, 74, 22));
        leRetro->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        leRetro->setAlignment(Qt::AlignCenter);
        leDemanda = new QLineEdit(WTempEspera);
        leDemanda->setObjectName(QString::fromUtf8("leDemanda"));
        leDemanda->setGeometry(QRect(94, 59, 74, 22));
        leDemanda->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 255);"));
        leDemanda->setAlignment(Qt::AlignCenter);
        lbFondo = new QLabel(WTempEspera);
        lbFondo->setObjectName(QString::fromUtf8("lbFondo"));
        lbFondo->setGeometry(QRect(0, 0, 200, 330));
        lbFondo->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbFondo->raise();
        btCerrar->raise();
        lbRetroT->raise();
        frame->raise();
        lbDemandaT->raise();
        btConfirmar->raise();
        frame_5->raise();
        leRetro->raise();
        leDemanda->raise();

        retranslateUi(WTempEspera);

        QMetaObject::connectSlotsByName(WTempEspera);
    } // setupUi

    void retranslateUi(QWidget *WTempEspera)
    {
        WTempEspera->setWindowTitle(QApplication::translate("WTempEspera", "Dialog", 0, QApplication::UnicodeUTF8));
        btCerrar->setText(QApplication::translate("WTempEspera", "CERRAR", 0, QApplication::UnicodeUTF8));
        btCerrar->setShortcut(QString());
        lbRetroT->setText(QApplication::translate("WTempEspera", "RETRO:", 0, QApplication::UnicodeUTF8));
        lbTiempoT->setText(QApplication::translate("WTempEspera", "TIEMPO DE ESPERA DESACEL\n"
"CARGA MINIMA", 0, QApplication::UnicodeUTF8));
        lbDemandaT->setText(QApplication::translate("WTempEspera", "DEMANDA:", 0, QApplication::UnicodeUTF8));
        btConfirmar->setText(QApplication::translate("WTempEspera", "CONFIRMAR", 0, QApplication::UnicodeUTF8));
        lbIP->setText(QApplication::translate("WTempEspera", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:5pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; color:#ffffff;\">FP_SMI_TM.grf</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        leRetro->setText(QApplication::translate("WTempEspera", "0", 0, QApplication::UnicodeUTF8));
        leDemanda->setText(QApplication::translate("WTempEspera", "0", 0, QApplication::UnicodeUTF8));
        lbFondo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WTempEspera: public Ui_WTempEspera {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WTEMPESPERA_H
