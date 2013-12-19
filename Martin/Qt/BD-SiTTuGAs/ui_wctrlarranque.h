/********************************************************************************
** Form generated from reading UI file 'wctrlarranque.ui'
**
** Created: Thu 19. Dec 16:09:59 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WCTRLARRANQUE_H
#define UI_WCTRLARRANQUE_H

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

class Ui_WCtrlArranque
{
public:
    QFrame *frame;
    QLabel *lbctrlarranDetT;
    QLabel *lbpermturbinaT;
    WLabel *lbpermturbina;
    QPushButton *btCerrar;
    QPushButton *btDetencion;
    QPushButton *btArranque;
    QFrame *frame_2;
    QLabel *lbIP;
    WLabel *leArranque;
    WLabel *leDetecion;
    QLabel *lbFondo;

    void setupUi(QWidget *WCtrlArranque)
    {
        if (WCtrlArranque->objectName().isEmpty())
            WCtrlArranque->setObjectName(QString::fromUtf8("WCtrlArranque"));
        WCtrlArranque->resize(200, 330);
        WCtrlArranque->setMinimumSize(QSize(200, 330));
        WCtrlArranque->setMaximumSize(QSize(200, 330));
        WCtrlArranque->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        frame = new QFrame(WCtrlArranque);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(1, 17, 198, 31));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Sunken);
        frame->setLineWidth(2);
        lbctrlarranDetT = new QLabel(frame);
        lbctrlarranDetT->setObjectName(QString::fromUtf8("lbctrlarranDetT"));
        lbctrlarranDetT->setGeometry(QRect(8, 7, 171, 20));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        lbctrlarranDetT->setFont(font);
        lbctrlarranDetT->setFrameShape(QFrame::NoFrame);
        lbctrlarranDetT->setFrameShadow(QFrame::Plain);
        lbctrlarranDetT->setLineWidth(1);
        lbctrlarranDetT->setAlignment(Qt::AlignCenter);
        lbpermturbinaT = new QLabel(WCtrlArranque);
        lbpermturbinaT->setObjectName(QString::fromUtf8("lbpermturbinaT"));
        lbpermturbinaT->setGeometry(QRect(17, 56, 101, 21));
        lbpermturbinaT->setFont(font);
        lbpermturbinaT->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        lbpermturbinaT->setAlignment(Qt::AlignCenter);
        lbpermturbina = new WLabel(WCtrlArranque);
        lbpermturbina->setObjectName(QString::fromUtf8("lbpermturbina"));
        lbpermturbina->setGeometry(QRect(127, 56, 61, 21));
        lbpermturbina->setStyleSheet(QString::fromUtf8("color: rgb(21, 234, 21);"));
        lbpermturbina->setFont(font);
        lbpermturbina->setProperty("Alineacion", QVariant(WLabel::Centro));
        btCerrar = new QPushButton(WCtrlArranque);
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
        btDetencion = new QPushButton(WCtrlArranque);
        btDetencion->setObjectName(QString::fromUtf8("btDetencion"));
        btDetencion->setGeometry(QRect(59, 181, 84, 29));
        btDetencion->setFont(font1);
        btDetencion->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        btDetencion->setAutoDefault(false);
        btDetencion->setDefault(false);
        btDetencion->setFlat(false);
        btArranque = new QPushButton(WCtrlArranque);
        btArranque->setObjectName(QString::fromUtf8("btArranque"));
        btArranque->setGeometry(QRect(59, 100, 84, 29));
        btArranque->setFont(font1);
        btArranque->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        btArranque->setAutoDefault(false);
        btArranque->setDefault(false);
        btArranque->setFlat(false);
        frame_2 = new QFrame(WCtrlArranque);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(0, 0, 241, 16));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(43, 71, 134, 255), stop:1 rgba(255, 255, 255, 255));"));
        frame_2->setFrameShape(QFrame::Panel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_2->setLineWidth(0);
        lbIP = new QLabel(frame_2);
        lbIP->setObjectName(QString::fromUtf8("lbIP"));
        lbIP->setGeometry(QRect(2, 0, 81, 16));
        QFont font2;
        font2.setPointSize(5);
        lbIP->setFont(font2);
        lbIP->setStyleSheet(QString::fromUtf8("background-color: rgb(74, 110, 195);\n"
"color: rgb(255, 255, 255);"));
        leArranque = new WLabel(WCtrlArranque);
        leArranque->setObjectName(QString::fromUtf8("leArranque"));
        leArranque->setGeometry(QRect(50, 138, 101, 26));
        leArranque->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 0);\n"
"background-color: rgb(0, 0, 0);"));
        leArranque->setProperty("Alineacion", QVariant(WLabel::Centro));
        leDetecion = new WLabel(WCtrlArranque);
        leDetecion->setObjectName(QString::fromUtf8("leDetecion"));
        leDetecion->setGeometry(QRect(50, 223, 101, 26));
        leDetecion->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 0);\n"
"background-color: rgb(0, 0, 0);"));
        leDetecion->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbFondo = new QLabel(WCtrlArranque);
        lbFondo->setObjectName(QString::fromUtf8("lbFondo"));
        lbFondo->setGeometry(QRect(0, 0, 201, 331));
        lbFondo->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbFondo->setFrameShape(QFrame::Box);
        lbFondo->setFrameShadow(QFrame::Sunken);
        lbFondo->raise();
        frame->raise();
        lbpermturbinaT->raise();
        lbpermturbina->raise();
        btCerrar->raise();
        btDetencion->raise();
        btArranque->raise();
        frame_2->raise();
        leArranque->raise();
        leDetecion->raise();

        retranslateUi(WCtrlArranque);

        QMetaObject::connectSlotsByName(WCtrlArranque);
    } // setupUi

    void retranslateUi(QWidget *WCtrlArranque)
    {
        WCtrlArranque->setWindowTitle(QApplication::translate("WCtrlArranque", "Dialog", 0, QApplication::UnicodeUTF8));
        lbctrlarranDetT->setText(QApplication::translate("WCtrlArranque", "CTRL ARRANQUE / DETENCI\303\223N", 0, QApplication::UnicodeUTF8));
        lbpermturbinaT->setText(QApplication::translate("WCtrlArranque", "PERM TURBINA:", 0, QApplication::UnicodeUTF8));
        lbpermturbina->setText(QApplication::translate("WCtrlArranque", "OK", 0, QApplication::UnicodeUTF8));
        btCerrar->setText(QApplication::translate("WCtrlArranque", "CERRAR", 0, QApplication::UnicodeUTF8));
        btCerrar->setShortcut(QString());
        btDetencion->setText(QApplication::translate("WCtrlArranque", "DETENCI\303\223N", 0, QApplication::UnicodeUTF8));
        btDetencion->setShortcut(QString());
        btArranque->setText(QApplication::translate("WCtrlArranque", "ARRANQUE", 0, QApplication::UnicodeUTF8));
        btArranque->setShortcut(QString());
        lbIP->setText(QApplication::translate("WCtrlArranque", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:5pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">FP_STAR.grf</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        leArranque->setId(QApplication::translate("WCtrlArranque", "p_Fix32_NODENAME_START_FDBK_F_CV", 0, QApplication::UnicodeUTF8));
        leArranque->setText(QString());
        leDetecion->setId(QApplication::translate("WCtrlArranque", "p_Fix32_NODENAME_STOP_FDBK_F_CV", 0, QApplication::UnicodeUTF8));
        leDetecion->setText(QString());
        lbFondo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WCtrlArranque: public Ui_WCtrlArranque {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WCTRLARRANQUE_H
