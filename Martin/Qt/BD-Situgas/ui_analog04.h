/********************************************************************************
** Form generated from reading UI file 'analog04.ui'
**
** Created: Sun 13. Oct 17:33:28 2013
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

QT_BEGIN_NAMESPACE

class Ui_Analog04
{
public:
    QFrame *frame_2;
    QLabel *lbAnaT;
    QFrame *frame;
    QLabel *lbSloMPU;
    QLabel *lbMPUT_1;
    QLabel *lbMPU_1;
    QLabel *lbNumMPU_1;
    QLabel *lbMPUU_1;
    QLabel *lbMPUU_2;
    QLabel *lbNumMPU_2;
    QLabel *lbMPUT_2;
    QLabel *lbMPU_2;
    QLabel *lbNumMPU_3;
    QLabel *lbMPUU_3;
    QLabel *lbMPU_3;
    QLabel *lbMPUT_3;
    QLabel *lbNumMPU_4;
    QLabel *lbMPUT_4;
    QLabel *lbMPU_4;
    QLabel *lbMPUU_4;
    QPushButton *btnCerrar;

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
        lbAnaT = new QLabel(frame_2);
        lbAnaT->setObjectName(QString::fromUtf8("lbAnaT"));
        lbAnaT->setGeometry(QRect(3, 0, 81, 12));
        QFont font;
        font.setPointSize(5);
        font.setBold(true);
        font.setWeight(75);
        lbAnaT->setFont(font);
        lbAnaT->setStyleSheet(QString::fromUtf8("background-color: rgb(73, 105, 160);"));
        frame = new QFrame(Analog04);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 18, 485, 30));
        frame->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        frame->setLineWidth(2);
        lbSloMPU = new QLabel(Analog04);
        lbSloMPU->setObjectName(QString::fromUtf8("lbSloMPU"));
        lbSloMPU->setGeometry(QRect(60, 22, 400, 22));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        lbSloMPU->setFont(font1);
        lbSloMPU->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 0);"));
        lbMPUT_1 = new QLabel(Analog04);
        lbMPUT_1->setObjectName(QString::fromUtf8("lbMPUT_1"));
        lbMPUT_1->setGeometry(QRect(30, 55, 340, 16));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Verdana"));
        font2.setBold(true);
        font2.setWeight(75);
        lbMPUT_1->setFont(font2);
        lbMPU_1 = new QLabel(Analog04);
        lbMPU_1->setObjectName(QString::fromUtf8("lbMPU_1"));
        lbMPU_1->setGeometry(QRect(375, 55, 61, 20));
        lbMPU_1->setFont(font2);
        lbMPU_1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbNumMPU_1 = new QLabel(Analog04);
        lbNumMPU_1->setObjectName(QString::fromUtf8("lbNumMPU_1"));
        lbNumMPU_1->setGeometry(QRect(10, 55, 21, 16));
        lbNumMPU_1->setFont(font2);
        lbNumMPU_1->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNumMPU_1->setAlignment(Qt::AlignCenter);
        lbMPUU_1 = new QLabel(Analog04);
        lbMPUU_1->setObjectName(QString::fromUtf8("lbMPUU_1"));
        lbMPUU_1->setGeometry(QRect(438, 54, 35, 20));
        lbMPUU_1->setFont(font2);
        lbMPUU_1->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbMPUU_2 = new QLabel(Analog04);
        lbMPUU_2->setObjectName(QString::fromUtf8("lbMPUU_2"));
        lbMPUU_2->setGeometry(QRect(438, 75, 35, 20));
        lbMPUU_2->setFont(font2);
        lbMPUU_2->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNumMPU_2 = new QLabel(Analog04);
        lbNumMPU_2->setObjectName(QString::fromUtf8("lbNumMPU_2"));
        lbNumMPU_2->setGeometry(QRect(10, 75, 21, 16));
        lbNumMPU_2->setFont(font2);
        lbNumMPU_2->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNumMPU_2->setAlignment(Qt::AlignCenter);
        lbMPUT_2 = new QLabel(Analog04);
        lbMPUT_2->setObjectName(QString::fromUtf8("lbMPUT_2"));
        lbMPUT_2->setGeometry(QRect(30, 75, 340, 16));
        lbMPUT_2->setFont(font2);
        lbMPU_2 = new QLabel(Analog04);
        lbMPU_2->setObjectName(QString::fromUtf8("lbMPU_2"));
        lbMPU_2->setGeometry(QRect(375, 75, 61, 20));
        lbMPU_2->setFont(font2);
        lbMPU_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbNumMPU_3 = new QLabel(Analog04);
        lbNumMPU_3->setObjectName(QString::fromUtf8("lbNumMPU_3"));
        lbNumMPU_3->setGeometry(QRect(10, 95, 21, 16));
        lbNumMPU_3->setFont(font2);
        lbNumMPU_3->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNumMPU_3->setAlignment(Qt::AlignCenter);
        lbMPUU_3 = new QLabel(Analog04);
        lbMPUU_3->setObjectName(QString::fromUtf8("lbMPUU_3"));
        lbMPUU_3->setGeometry(QRect(438, 95, 35, 20));
        lbMPUU_3->setFont(font2);
        lbMPUU_3->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbMPU_3 = new QLabel(Analog04);
        lbMPU_3->setObjectName(QString::fromUtf8("lbMPU_3"));
        lbMPU_3->setGeometry(QRect(375, 95, 61, 20));
        lbMPU_3->setFont(font2);
        lbMPU_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbMPUT_3 = new QLabel(Analog04);
        lbMPUT_3->setObjectName(QString::fromUtf8("lbMPUT_3"));
        lbMPUT_3->setGeometry(QRect(30, 95, 340, 16));
        lbMPUT_3->setFont(font2);
        lbNumMPU_4 = new QLabel(Analog04);
        lbNumMPU_4->setObjectName(QString::fromUtf8("lbNumMPU_4"));
        lbNumMPU_4->setGeometry(QRect(10, 115, 21, 16));
        lbNumMPU_4->setFont(font2);
        lbNumMPU_4->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNumMPU_4->setAlignment(Qt::AlignCenter);
        lbMPUT_4 = new QLabel(Analog04);
        lbMPUT_4->setObjectName(QString::fromUtf8("lbMPUT_4"));
        lbMPUT_4->setGeometry(QRect(30, 115, 340, 16));
        lbMPUT_4->setFont(font2);
        lbMPU_4 = new QLabel(Analog04);
        lbMPU_4->setObjectName(QString::fromUtf8("lbMPU_4"));
        lbMPU_4->setGeometry(QRect(375, 115, 61, 20));
        lbMPU_4->setFont(font2);
        lbMPU_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbMPUU_4 = new QLabel(Analog04);
        lbMPUU_4->setObjectName(QString::fromUtf8("lbMPUU_4"));
        lbMPUU_4->setGeometry(QRect(438, 115, 35, 20));
        lbMPUU_4->setFont(font2);
        lbMPUU_4->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        btnCerrar = new QPushButton(Analog04);
        btnCerrar->setObjectName(QString::fromUtf8("btnCerrar"));
        btnCerrar->setGeometry(QRect(130, 160, 101, 41));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Verdana"));
        font3.setPointSize(9);
        font3.setBold(true);
        font3.setWeight(75);
        btnCerrar->setFont(font3);
        btnCerrar->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));

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
        lbMPU_1->setText(QApplication::translate("Analog04", "10162.00", 0, QApplication::UnicodeUTF8));
        lbNumMPU_1->setText(QApplication::translate("Analog04", "1", 0, QApplication::UnicodeUTF8));
        lbMPUU_1->setText(QApplication::translate("Analog04", "RPM", 0, QApplication::UnicodeUTF8));
        lbMPUU_2->setText(QApplication::translate("Analog04", "RPM", 0, QApplication::UnicodeUTF8));
        lbNumMPU_2->setText(QApplication::translate("Analog04", "2", 0, QApplication::UnicodeUTF8));
        lbMPUT_2->setText(QApplication::translate("Analog04", "SE6812 - NSDA LPT CAPTADOR VELOC (IZQ.)", 0, QApplication::UnicodeUTF8));
        lbMPU_2->setText(QApplication::translate("Analog04", "3599.00", 0, QApplication::UnicodeUTF8));
        lbNumMPU_3->setText(QApplication::translate("Analog04", "3", 0, QApplication::UnicodeUTF8));
        lbMPUU_3->setText(QApplication::translate("Analog04", "RPM", 0, QApplication::UnicodeUTF8));
        lbMPU_3->setText(QApplication::translate("Analog04", "10162.00", 0, QApplication::UnicodeUTF8));
        lbMPUT_3->setText(QApplication::translate("Analog04", "SE6801 - N25B HPC CAPTADOR VELOC (N\302\272 2)", 0, QApplication::UnicodeUTF8));
        lbNumMPU_4->setText(QApplication::translate("Analog04", "4", 0, QApplication::UnicodeUTF8));
        lbMPUT_4->setText(QApplication::translate("Analog04", "SE6813 - NSDB LPT CAPTADOR VELOC (DER.)", 0, QApplication::UnicodeUTF8));
        lbMPU_4->setText(QApplication::translate("Analog04", "3598.00", 0, QApplication::UnicodeUTF8));
        lbMPUU_4->setText(QApplication::translate("Analog04", "RPM", 0, QApplication::UnicodeUTF8));
        btnCerrar->setText(QApplication::translate("Analog04", "CERRAR", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Analog04: public Ui_Analog04 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANALOG04_H