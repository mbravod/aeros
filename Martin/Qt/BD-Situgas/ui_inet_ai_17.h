/********************************************************************************
** Form generated from reading UI file 'inet_ai_17.ui'
**
** Created: Sun 13. Oct 17:34:40 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INET_AI_17_H
#define UI_INET_AI_17_H

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

class Ui_Inet_AI_17
{
public:
    QLabel *lbNumDes_1;
    QPushButton *btCerrar;
    QFrame *frame_2;
    QLabel *lbIP;
    QLabel *lbNum_5;
    QLabel *lbTit_3;
    QLabel *lbUni_1;
    QLabel *lbUni_5;
    QLabel *lbUni_2;
    QLabel *lbNumDes_4;
    QLabel *lbTit_1;
    QLabel *lbNumDes_3;
    QLabel *lbUni_4;
    QLabel *lbNumDes_6;
    QLabel *lbUni_6;
    QLabel *lbNum_3;
    QLabel *lbNum_6;
    QLabel *lbUni_3;
    QLabel *lbNum_1;
    QLabel *lbNumDes_2;
    QLabel *lbTit_2;
    QLabel *lbNum_2;
    QLabel *lbNum_4;
    QLabel *lbTit_4;
    QFrame *frame;
    QLabel *label;
    QLabel *lbTit_5;
    QLabel *lbNumDes_5;
    QLabel *lbTit_6;

    void setupUi(QWidget *Inet_AI_17)
    {
        if (Inet_AI_17->objectName().isEmpty())
            Inet_AI_17->setObjectName(QString::fromUtf8("Inet_AI_17"));
        Inet_AI_17->resize(485, 250);
        Inet_AI_17->setMinimumSize(QSize(485, 250));
        Inet_AI_17->setMaximumSize(QSize(485, 250));
        Inet_AI_17->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbNumDes_1 = new QLabel(Inet_AI_17);
        lbNumDes_1->setObjectName(QString::fromUtf8("lbNumDes_1"));
        lbNumDes_1->setGeometry(QRect(388, 50, 50, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(8);
        font.setBold(true);
        font.setWeight(75);
        lbNumDes_1->setFont(font);
        lbNumDes_1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        btCerrar = new QPushButton(Inet_AI_17);
        btCerrar->setObjectName(QString::fromUtf8("btCerrar"));
        btCerrar->setGeometry(QRect(126, 210, 98, 30));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        btCerrar->setFont(font1);
        btCerrar->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        frame_2 = new QFrame(Inet_AI_17);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(2, 0, 485, 16));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(43, 71, 134, 255), stop:1 rgba(255, 255, 255, 255));"));
        frame_2->setFrameShape(QFrame::Panel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_2->setLineWidth(0);
        lbIP = new QLabel(frame_2);
        lbIP->setObjectName(QString::fromUtf8("lbIP"));
        lbIP->setGeometry(QRect(3, 0, 91, 16));
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setWeight(75);
        lbIP->setFont(font2);
        lbIP->setStyleSheet(QString::fromUtf8("background-color: rgb(74, 110, 195);\n"
"background-color: rgb(74, 110, 195);\n"
"color: rgb(255, 255, 255);"));
        lbNum_5 = new QLabel(Inet_AI_17);
        lbNum_5->setObjectName(QString::fromUtf8("lbNum_5"));
        lbNum_5->setGeometry(QRect(12, 130, 21, 16));
        lbNum_5->setFont(font);
        lbNum_5->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_5->setAlignment(Qt::AlignCenter);
        lbTit_3 = new QLabel(Inet_AI_17);
        lbTit_3->setObjectName(QString::fromUtf8("lbTit_3"));
        lbTit_3->setGeometry(QRect(40, 90, 340, 16));
        lbTit_3->setFont(font);
        lbUni_1 = new QLabel(Inet_AI_17);
        lbUni_1->setObjectName(QString::fromUtf8("lbUni_1"));
        lbUni_1->setGeometry(QRect(440, 50, 43, 16));
        lbUni_1->setFont(font);
        lbUni_1->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbUni_1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lbUni_5 = new QLabel(Inet_AI_17);
        lbUni_5->setObjectName(QString::fromUtf8("lbUni_5"));
        lbUni_5->setGeometry(QRect(440, 130, 43, 16));
        lbUni_5->setFont(font);
        lbUni_5->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbUni_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lbUni_2 = new QLabel(Inet_AI_17);
        lbUni_2->setObjectName(QString::fromUtf8("lbUni_2"));
        lbUni_2->setGeometry(QRect(440, 70, 43, 16));
        lbUni_2->setFont(font);
        lbUni_2->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbUni_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lbNumDes_4 = new QLabel(Inet_AI_17);
        lbNumDes_4->setObjectName(QString::fromUtf8("lbNumDes_4"));
        lbNumDes_4->setGeometry(QRect(388, 110, 50, 16));
        lbNumDes_4->setFont(font);
        lbNumDes_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbTit_1 = new QLabel(Inet_AI_17);
        lbTit_1->setObjectName(QString::fromUtf8("lbTit_1"));
        lbTit_1->setGeometry(QRect(40, 50, 340, 16));
        lbTit_1->setFont(font);
        lbNumDes_3 = new QLabel(Inet_AI_17);
        lbNumDes_3->setObjectName(QString::fromUtf8("lbNumDes_3"));
        lbNumDes_3->setGeometry(QRect(388, 90, 50, 16));
        lbNumDes_3->setFont(font);
        lbNumDes_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbUni_4 = new QLabel(Inet_AI_17);
        lbUni_4->setObjectName(QString::fromUtf8("lbUni_4"));
        lbUni_4->setGeometry(QRect(440, 110, 43, 16));
        lbUni_4->setFont(font);
        lbUni_4->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbUni_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lbNumDes_6 = new QLabel(Inet_AI_17);
        lbNumDes_6->setObjectName(QString::fromUtf8("lbNumDes_6"));
        lbNumDes_6->setGeometry(QRect(388, 150, 50, 16));
        lbNumDes_6->setFont(font);
        lbNumDes_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbUni_6 = new QLabel(Inet_AI_17);
        lbUni_6->setObjectName(QString::fromUtf8("lbUni_6"));
        lbUni_6->setGeometry(QRect(440, 150, 43, 16));
        lbUni_6->setFont(font);
        lbUni_6->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbUni_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lbNum_3 = new QLabel(Inet_AI_17);
        lbNum_3->setObjectName(QString::fromUtf8("lbNum_3"));
        lbNum_3->setGeometry(QRect(12, 90, 21, 16));
        lbNum_3->setFont(font);
        lbNum_3->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_3->setAlignment(Qt::AlignCenter);
        lbNum_6 = new QLabel(Inet_AI_17);
        lbNum_6->setObjectName(QString::fromUtf8("lbNum_6"));
        lbNum_6->setGeometry(QRect(12, 150, 21, 16));
        lbNum_6->setFont(font);
        lbNum_6->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_6->setAlignment(Qt::AlignCenter);
        lbUni_3 = new QLabel(Inet_AI_17);
        lbUni_3->setObjectName(QString::fromUtf8("lbUni_3"));
        lbUni_3->setGeometry(QRect(440, 90, 43, 16));
        lbUni_3->setFont(font);
        lbUni_3->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbUni_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lbNum_1 = new QLabel(Inet_AI_17);
        lbNum_1->setObjectName(QString::fromUtf8("lbNum_1"));
        lbNum_1->setGeometry(QRect(12, 50, 21, 16));
        lbNum_1->setFont(font);
        lbNum_1->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_1->setAlignment(Qt::AlignCenter);
        lbNumDes_2 = new QLabel(Inet_AI_17);
        lbNumDes_2->setObjectName(QString::fromUtf8("lbNumDes_2"));
        lbNumDes_2->setGeometry(QRect(388, 70, 50, 16));
        lbNumDes_2->setFont(font);
        lbNumDes_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbTit_2 = new QLabel(Inet_AI_17);
        lbTit_2->setObjectName(QString::fromUtf8("lbTit_2"));
        lbTit_2->setGeometry(QRect(40, 70, 340, 16));
        lbTit_2->setFont(font);
        lbNum_2 = new QLabel(Inet_AI_17);
        lbNum_2->setObjectName(QString::fromUtf8("lbNum_2"));
        lbNum_2->setGeometry(QRect(12, 70, 21, 16));
        lbNum_2->setFont(font);
        lbNum_2->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_2->setAlignment(Qt::AlignCenter);
        lbNum_4 = new QLabel(Inet_AI_17);
        lbNum_4->setObjectName(QString::fromUtf8("lbNum_4"));
        lbNum_4->setGeometry(QRect(12, 110, 21, 16));
        lbNum_4->setFont(font);
        lbNum_4->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_4->setAlignment(Qt::AlignCenter);
        lbTit_4 = new QLabel(Inet_AI_17);
        lbTit_4->setObjectName(QString::fromUtf8("lbTit_4"));
        lbTit_4->setGeometry(QRect(40, 110, 340, 16));
        lbTit_4->setFont(font);
        frame = new QFrame(Inet_AI_17);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 17, 485, 30));
        frame->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        frame->setLineWidth(2);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(62, 4, 400, 22));
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 0);"));
        lbTit_5 = new QLabel(Inet_AI_17);
        lbTit_5->setObjectName(QString::fromUtf8("lbTit_5"));
        lbTit_5->setGeometry(QRect(40, 130, 340, 16));
        lbTit_5->setFont(font);
        lbNumDes_5 = new QLabel(Inet_AI_17);
        lbNumDes_5->setObjectName(QString::fromUtf8("lbNumDes_5"));
        lbNumDes_5->setGeometry(QRect(388, 130, 50, 16));
        lbNumDes_5->setFont(font);
        lbNumDes_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbTit_6 = new QLabel(Inet_AI_17);
        lbTit_6->setObjectName(QString::fromUtf8("lbTit_6"));
        lbTit_6->setGeometry(QRect(40, 150, 340, 16));
        lbTit_6->setFont(font);

        retranslateUi(Inet_AI_17);

        QMetaObject::connectSlotsByName(Inet_AI_17);
    } // setupUi

    void retranslateUi(QWidget *Inet_AI_17)
    {
        Inet_AI_17->setWindowTitle(QApplication::translate("Inet_AI_17", "Inet_AI_17", 0, QApplication::UnicodeUTF8));
        lbNumDes_1->setText(QApplication::translate("Inet_AI_17", "0.00", 0, QApplication::UnicodeUTF8));
        btCerrar->setText(QApplication::translate("Inet_AI_17", "CERRAR", 0, QApplication::UnicodeUTF8));
        lbIP->setText(QApplication::translate("Inet_AI_17", "LNET_A1.grf", 0, QApplication::UnicodeUTF8));
        lbNum_5->setText(QApplication::translate("Inet_AI_17", "5", 0, QApplication::UnicodeUTF8));
        lbTit_3->setText(QApplication::translate("Inet_AI_17", "AIRE DE VENT FILTRO DE ADMISI\303\223N (SEC A)", 0, QApplication::UnicodeUTF8));
        lbUni_1->setText(QApplication::translate("Inet_AI_17", "\302\260F", 0, QApplication::UnicodeUTF8));
        lbUni_5->setText(QApplication::translate("Inet_AI_17", "\302\260F", 0, QApplication::UnicodeUTF8));
        lbUni_2->setText(QApplication::translate("Inet_AI_17", "\302\260F", 0, QApplication::UnicodeUTF8));
        lbNumDes_4->setText(QApplication::translate("Inet_AI_17", "0.00", 0, QApplication::UnicodeUTF8));
        lbTit_1->setText(QApplication::translate("Inet_AI_17", "AIRE DE CONB FILTRO DE ADMISI\303\223N (SEC A)", 0, QApplication::UnicodeUTF8));
        lbNumDes_3->setText(QApplication::translate("Inet_AI_17", "0.00", 0, QApplication::UnicodeUTF8));
        lbUni_4->setText(QApplication::translate("Inet_AI_17", "\302\260F", 0, QApplication::UnicodeUTF8));
        lbNumDes_6->setText(QApplication::translate("Inet_AI_17", "0.00", 0, QApplication::UnicodeUTF8));
        lbUni_6->setText(QApplication::translate("Inet_AI_17", "\302\260F", 0, QApplication::UnicodeUTF8));
        lbNum_3->setText(QApplication::translate("Inet_AI_17", "3", 0, QApplication::UnicodeUTF8));
        lbNum_6->setText(QApplication::translate("Inet_AI_17", "6", 0, QApplication::UnicodeUTF8));
        lbUni_3->setText(QApplication::translate("Inet_AI_17", "\302\260F", 0, QApplication::UnicodeUTF8));
        lbNum_1->setText(QApplication::translate("Inet_AI_17", "1", 0, QApplication::UnicodeUTF8));
        lbNumDes_2->setText(QApplication::translate("Inet_AI_17", "0.00", 0, QApplication::UnicodeUTF8));
        lbTit_2->setText(QApplication::translate("Inet_AI_17", "AIRE DE CONB FILTRO DE ADMISI\303\223N (SEC B)", 0, QApplication::UnicodeUTF8));
        lbNum_2->setText(QApplication::translate("Inet_AI_17", "2", 0, QApplication::UnicodeUTF8));
        lbNum_4->setText(QApplication::translate("Inet_AI_17", "4", 0, QApplication::UnicodeUTF8));
        lbTit_4->setText(QApplication::translate("Inet_AI_17", "AIRE DE VENT FILTRO DE ADMISI\303\223N (SEC B)", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Inet_AI_17", "NODE - N1N10  - RTD", 0, QApplication::UnicodeUTF8));
        lbTit_5->setText(QApplication::translate("Inet_AI_17", "TEMP AIRE ACOND DE COMB (SEC A)", 0, QApplication::UnicodeUTF8));
        lbNumDes_5->setText(QApplication::translate("Inet_AI_17", "0.00", 0, QApplication::UnicodeUTF8));
        lbTit_6->setText(QApplication::translate("Inet_AI_17", "TEMP AIRE ACOND DE COMB (SEC B)", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Inet_AI_17: public Ui_Inet_AI_17 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INET_AI_17_H