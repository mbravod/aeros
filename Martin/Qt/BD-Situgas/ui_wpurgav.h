/********************************************************************************
** Form generated from reading UI file 'wpurgav.ui'
**
** Created: Sat 12. Oct 11:06:17 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WPURGAV_H
#define UI_WPURGAV_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WPurgaV
{
public:
    QLabel *lbVbvBT;
    QLabel *lbVbvsel;
    QLabel *lbVbvaU;
    QLabel *lbVbvB;
    QLabel *lbVbvMa;
    QLabel *lbVbvdmdU;
    QLabel *lbVbvOhms;
    QLabel *lbVbvBU;
    QLabel *lbVbvOhmsU;
    QFrame *frame;
    QLabel *lbPugaVarT;
    QLabel *lbVbvselT;
    QLabel *lbVbvselU;
    QLabel *lbVbvMaT;
    QLabel *lbVbvOhmsT;
    QLabel *lbVbvdmdT;
    QLabel *lbVbvdmd;
    QLabel *lbVbvaT;
    QLabel *lbVbva;
    QLabel *lbVbvMaU;
    QLabel *lbFondo;

    void setupUi(QWidget *WPurgaV)
    {
        if (WPurgaV->objectName().isEmpty())
            WPurgaV->setObjectName(QString::fromUtf8("WPurgaV"));
        WPurgaV->resize(175, 150);
        WPurgaV->setMinimumSize(QSize(175, 150));
        WPurgaV->setMaximumSize(QSize(175, 150));
        WPurgaV->setStyleSheet(QString::fromUtf8(""));
        lbVbvBT = new QLabel(WPurgaV);
        lbVbvBT->setObjectName(QString::fromUtf8("lbVbvBT"));
        lbVbvBT->setGeometry(QRect(20, 78, 46, 13));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setBold(true);
        font.setWeight(75);
        lbVbvBT->setFont(font);
        lbVbvBT->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbVbvsel = new QLabel(WPurgaV);
        lbVbvsel->setObjectName(QString::fromUtf8("lbVbvsel"));
        lbVbvsel->setGeometry(QRect(72, 46, 46, 13));
        lbVbvsel->setFont(font);
        lbVbvsel->setAlignment(Qt::AlignCenter);
        lbVbvaU = new QLabel(WPurgaV);
        lbVbvaU->setObjectName(QString::fromUtf8("lbVbvaU"));
        lbVbvaU->setGeometry(QRect(127, 62, 21, 16));
        lbVbvaU->setFont(font);
        lbVbvB = new QLabel(WPurgaV);
        lbVbvB->setObjectName(QString::fromUtf8("lbVbvB"));
        lbVbvB->setGeometry(QRect(72, 78, 46, 13));
        lbVbvB->setFont(font);
        lbVbvB->setAlignment(Qt::AlignCenter);
        lbVbvMa = new QLabel(WPurgaV);
        lbVbvMa->setObjectName(QString::fromUtf8("lbVbvMa"));
        lbVbvMa->setGeometry(QRect(72, 110, 46, 13));
        lbVbvMa->setFont(font);
        lbVbvMa->setAlignment(Qt::AlignCenter);
        lbVbvdmdU = new QLabel(WPurgaV);
        lbVbvdmdU->setObjectName(QString::fromUtf8("lbVbvdmdU"));
        lbVbvdmdU->setGeometry(QRect(127, 30, 21, 16));
        lbVbvdmdU->setFont(font);
        lbVbvOhms = new QLabel(WPurgaV);
        lbVbvOhms->setObjectName(QString::fromUtf8("lbVbvOhms"));
        lbVbvOhms->setGeometry(QRect(72, 126, 46, 13));
        lbVbvOhms->setFont(font);
        lbVbvOhms->setAlignment(Qt::AlignCenter);
        lbVbvBU = new QLabel(WPurgaV);
        lbVbvBU->setObjectName(QString::fromUtf8("lbVbvBU"));
        lbVbvBU->setGeometry(QRect(127, 78, 21, 16));
        lbVbvBU->setFont(font);
        lbVbvOhmsU = new QLabel(WPurgaV);
        lbVbvOhmsU->setObjectName(QString::fromUtf8("lbVbvOhmsU"));
        lbVbvOhmsU->setGeometry(QRect(127, 126, 41, 16));
        lbVbvOhmsU->setFont(font);
        frame = new QFrame(WPurgaV);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(1, -1, 173, 31));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        frame->setLineWidth(2);
        lbPugaVarT = new QLabel(frame);
        lbPugaVarT->setObjectName(QString::fromUtf8("lbPugaVarT"));
        lbPugaVarT->setGeometry(QRect(10, 7, 151, 20));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        lbPugaVarT->setFont(font1);
        lbPugaVarT->setFrameShape(QFrame::NoFrame);
        lbPugaVarT->setFrameShadow(QFrame::Plain);
        lbPugaVarT->setLineWidth(1);
        lbPugaVarT->setAlignment(Qt::AlignCenter);
        lbVbvselT = new QLabel(WPurgaV);
        lbVbvselT->setObjectName(QString::fromUtf8("lbVbvselT"));
        lbVbvselT->setGeometry(QRect(20, 46, 46, 13));
        lbVbvselT->setFont(font);
        lbVbvselT->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbVbvselU = new QLabel(WPurgaV);
        lbVbvselU->setObjectName(QString::fromUtf8("lbVbvselU"));
        lbVbvselU->setGeometry(QRect(127, 46, 21, 16));
        lbVbvselU->setFont(font);
        lbVbvMaT = new QLabel(WPurgaV);
        lbVbvMaT->setObjectName(QString::fromUtf8("lbVbvMaT"));
        lbVbvMaT->setGeometry(QRect(20, 110, 46, 13));
        lbVbvMaT->setFont(font);
        lbVbvMaT->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbVbvOhmsT = new QLabel(WPurgaV);
        lbVbvOhmsT->setObjectName(QString::fromUtf8("lbVbvOhmsT"));
        lbVbvOhmsT->setGeometry(QRect(5, 126, 61, 16));
        lbVbvOhmsT->setFont(font);
        lbVbvOhmsT->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbVbvdmdT = new QLabel(WPurgaV);
        lbVbvdmdT->setObjectName(QString::fromUtf8("lbVbvdmdT"));
        lbVbvdmdT->setGeometry(QRect(20, 30, 46, 13));
        lbVbvdmdT->setFont(font);
        lbVbvdmdT->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbVbvdmd = new QLabel(WPurgaV);
        lbVbvdmd->setObjectName(QString::fromUtf8("lbVbvdmd"));
        lbVbvdmd->setGeometry(QRect(72, 30, 46, 13));
        lbVbvdmd->setFont(font);
        lbVbvdmd->setAlignment(Qt::AlignCenter);
        lbVbvaT = new QLabel(WPurgaV);
        lbVbvaT->setObjectName(QString::fromUtf8("lbVbvaT"));
        lbVbvaT->setGeometry(QRect(20, 62, 46, 13));
        lbVbvaT->setFont(font);
        lbVbvaT->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbVbva = new QLabel(WPurgaV);
        lbVbva->setObjectName(QString::fromUtf8("lbVbva"));
        lbVbva->setGeometry(QRect(72, 62, 46, 13));
        lbVbva->setFont(font);
        lbVbva->setAlignment(Qt::AlignCenter);
        lbVbvMaU = new QLabel(WPurgaV);
        lbVbvMaU->setObjectName(QString::fromUtf8("lbVbvMaU"));
        lbVbvMaU->setGeometry(QRect(127, 110, 41, 16));
        lbVbvMaU->setFont(font);
        lbFondo = new QLabel(WPurgaV);
        lbFondo->setObjectName(QString::fromUtf8("lbFondo"));
        lbFondo->setGeometry(QRect(0, 0, 175, 150));
        lbFondo->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbFondo->raise();
        lbVbvBT->raise();
        lbVbvsel->raise();
        lbVbvaU->raise();
        lbVbvB->raise();
        lbVbvMa->raise();
        lbVbvdmdU->raise();
        lbVbvOhms->raise();
        lbVbvBU->raise();
        lbVbvOhmsU->raise();
        frame->raise();
        lbVbvselT->raise();
        lbVbvselU->raise();
        lbVbvMaT->raise();
        lbVbvOhmsT->raise();
        lbVbvdmdT->raise();
        lbVbvdmd->raise();
        lbVbvaT->raise();
        lbVbva->raise();
        lbVbvMaU->raise();

        retranslateUi(WPurgaV);

        QMetaObject::connectSlotsByName(WPurgaV);
    } // setupUi

    void retranslateUi(QWidget *WPurgaV)
    {
        WPurgaV->setWindowTitle(QApplication::translate("WPurgaV", "Form", 0, QApplication::UnicodeUTF8));
        lbVbvBT->setText(QApplication::translate("WPurgaV", "VBVB", 0, QApplication::UnicodeUTF8));
        lbVbvsel->setText(QString());
        lbVbvaU->setText(QApplication::translate("WPurgaV", "%", 0, QApplication::UnicodeUTF8));
        lbVbvB->setText(QString());
        lbVbvMa->setText(QString());
        lbVbvdmdU->setText(QApplication::translate("WPurgaV", "%", 0, QApplication::UnicodeUTF8));
        lbVbvOhms->setText(QString());
        lbVbvBU->setText(QApplication::translate("WPurgaV", "%", 0, QApplication::UnicodeUTF8));
        lbVbvOhmsU->setText(QApplication::translate("WPurgaV", "OHMS", 0, QApplication::UnicodeUTF8));
        lbPugaVarT->setText(QApplication::translate("WPurgaV", "PURGA VARIABLE", 0, QApplication::UnicodeUTF8));
        lbVbvselT->setText(QApplication::translate("WPurgaV", "VBVSEL", 0, QApplication::UnicodeUTF8));
        lbVbvselU->setText(QApplication::translate("WPurgaV", "%", 0, QApplication::UnicodeUTF8));
        lbVbvMaT->setText(QApplication::translate("WPurgaV", "VBVMA", 0, QApplication::UnicodeUTF8));
        lbVbvOhmsT->setText(QApplication::translate("WPurgaV", "VBVOHMS", 0, QApplication::UnicodeUTF8));
        lbVbvdmdT->setText(QApplication::translate("WPurgaV", "VBVDMD", 0, QApplication::UnicodeUTF8));
        lbVbvdmd->setText(QString());
        lbVbvaT->setText(QApplication::translate("WPurgaV", "VBVA", 0, QApplication::UnicodeUTF8));
        lbVbva->setText(QString());
        lbVbvMaU->setText(QApplication::translate("WPurgaV", "MA", 0, QApplication::UnicodeUTF8));
        lbFondo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WPurgaV: public Ui_WPurgaV {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WPURGAV_H
