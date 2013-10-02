/********************************************************************************
** Form generated from reading UI file 'wcrakctrl.ui'
**
** Created: Mon 23. Sep 20:33:30 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WCRAKCTRL_H
#define UI_WCRAKCTRL_H

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

class Ui_WCrakCtrl
{
public:
    QFrame *frame;
    QLabel *lbctrlcrankT;
    QPushButton *btcerrar;
    QPushButton *bthighspd;
    QPushButton *btstop;
    QPushButton *btcrankperm;
    QLabel *lbcrankperm;
    QFrame *frame_2;
    QLabel *lbIP;
    QLineEdit *lehighspd;
    QLineEdit *leStop;
    QLabel *lbFondo;

    void setupUi(QWidget *WCrakCtrl)
    {
        if (WCrakCtrl->objectName().isEmpty())
            WCrakCtrl->setObjectName(QString::fromUtf8("WCrakCtrl"));
        WCrakCtrl->resize(200, 330);
        WCrakCtrl->setMinimumSize(QSize(200, 330));
        WCrakCtrl->setMaximumSize(QSize(200, 330));
        WCrakCtrl->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        frame = new QFrame(WCrakCtrl);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(1, 16, 198, 31));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Sunken);
        frame->setLineWidth(2);
        lbctrlcrankT = new QLabel(frame);
        lbctrlcrankT->setObjectName(QString::fromUtf8("lbctrlcrankT"));
        lbctrlcrankT->setGeometry(QRect(8, 7, 181, 20));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        lbctrlcrankT->setFont(font);
        lbctrlcrankT->setFrameShape(QFrame::NoFrame);
        lbctrlcrankT->setFrameShadow(QFrame::Plain);
        lbctrlcrankT->setLineWidth(1);
        lbctrlcrankT->setAlignment(Qt::AlignCenter);
        btcerrar = new QPushButton(WCrakCtrl);
        btcerrar->setObjectName(QString::fromUtf8("btcerrar"));
        btcerrar->setGeometry(QRect(59, 290, 83, 33));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        font1.setKerning(true);
        btcerrar->setFont(font1);
        btcerrar->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        btcerrar->setAutoDefault(false);
        btcerrar->setDefault(false);
        btcerrar->setFlat(false);
        bthighspd = new QPushButton(WCrakCtrl);
        bthighspd->setObjectName(QString::fromUtf8("bthighspd"));
        bthighspd->setGeometry(QRect(59, 126, 81, 33));
        bthighspd->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        btstop = new QPushButton(WCrakCtrl);
        btstop->setObjectName(QString::fromUtf8("btstop"));
        btstop->setGeometry(QRect(59, 192, 81, 33));
        btstop->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        btcrankperm = new QPushButton(WCrakCtrl);
        btcrankperm->setObjectName(QString::fromUtf8("btcrankperm"));
        btcrankperm->setGeometry(QRect(10, 60, 81, 23));
        btcrankperm->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        lbcrankperm = new QLabel(WCrakCtrl);
        lbcrankperm->setObjectName(QString::fromUtf8("lbcrankperm"));
        lbcrankperm->setGeometry(QRect(100, 60, 81, 21));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        lbcrankperm->setFont(font2);
        lbcrankperm->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        frame_2 = new QFrame(WCrakCtrl);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(0, 0, 241, 16));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(43, 71, 134, 255), stop:1 rgba(255, 255, 255, 255));"));
        frame_2->setFrameShape(QFrame::Panel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_2->setLineWidth(0);
        lbIP = new QLabel(frame_2);
        lbIP->setObjectName(QString::fromUtf8("lbIP"));
        lbIP->setGeometry(QRect(0, 0, 91, 16));
        QFont font3;
        font3.setPointSize(5);
        lbIP->setFont(font3);
        lbIP->setStyleSheet(QString::fromUtf8("background-color: rgb(74, 110, 195);"));
        lehighspd = new QLineEdit(WCrakCtrl);
        lehighspd->setObjectName(QString::fromUtf8("lehighspd"));
        lehighspd->setGeometry(QRect(50, 161, 101, 25));
        lehighspd->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 0);"));
        leStop = new QLineEdit(WCrakCtrl);
        leStop->setObjectName(QString::fromUtf8("leStop"));
        leStop->setGeometry(QRect(50, 226, 101, 25));
        leStop->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 0);"));
        lbFondo = new QLabel(WCrakCtrl);
        lbFondo->setObjectName(QString::fromUtf8("lbFondo"));
        lbFondo->setGeometry(QRect(0, 0, 200, 330));
        lbFondo->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbFondo->raise();
        frame->raise();
        btcerrar->raise();
        bthighspd->raise();
        btstop->raise();
        btcrankperm->raise();
        lbcrankperm->raise();
        frame_2->raise();
        lehighspd->raise();
        leStop->raise();

        retranslateUi(WCrakCtrl);

        QMetaObject::connectSlotsByName(WCrakCtrl);
    } // setupUi

    void retranslateUi(QWidget *WCrakCtrl)
    {
        WCrakCtrl->setWindowTitle(QApplication::translate("WCrakCtrl", "Dialog", 0, QApplication::UnicodeUTF8));
        lbctrlcrankT->setText(QApplication::translate("WCrakCtrl", "CRANK CONTROL", 0, QApplication::UnicodeUTF8));
        btcerrar->setText(QApplication::translate("WCrakCtrl", "CERRAR", 0, QApplication::UnicodeUTF8));
        btcerrar->setShortcut(QString());
        bthighspd->setText(QApplication::translate("WCrakCtrl", "HIGH SPD", 0, QApplication::UnicodeUTF8));
        btstop->setText(QApplication::translate("WCrakCtrl", "STOP", 0, QApplication::UnicodeUTF8));
        btcrankperm->setText(QApplication::translate("WCrakCtrl", "CRANK PERM:", 0, QApplication::UnicodeUTF8));
        lbcrankperm->setText(QApplication::translate("WCrakCtrl", "BLOCKED", 0, QApplication::UnicodeUTF8));
        lbIP->setText(QApplication::translate("WCrakCtrl", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:5pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; color:#ffffff;\">FP_CrkCtrl.grf</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lbFondo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WCrakCtrl: public Ui_WCrakCtrl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WCRAKCTRL_H
