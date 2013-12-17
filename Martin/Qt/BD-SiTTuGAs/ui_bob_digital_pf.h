/********************************************************************************
** Form generated from reading UI file 'bob_digital_pf.ui'
**
** Created: Tue 17. Dec 02:39:55 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOB_DIGITAL_PF_H
#define UI_BOB_DIGITAL_PF_H

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

class Ui_BOB_DIGITAL_PF
{
public:
    QFrame *frame_5;
    QLabel *lbIP;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QLabel *label_4;

    void setupUi(QWidget *BOB_DIGITAL_PF)
    {
        if (BOB_DIGITAL_PF->objectName().isEmpty())
            BOB_DIGITAL_PF->setObjectName(QString::fromUtf8("BOB_DIGITAL_PF"));
        BOB_DIGITAL_PF->resize(350, 110);
        BOB_DIGITAL_PF->setMinimumSize(QSize(350, 110));
        BOB_DIGITAL_PF->setMaximumSize(QSize(350, 110));
        BOB_DIGITAL_PF->setStyleSheet(QString::fromUtf8("background-color: rgb(198, 198, 198);"));
        frame_5 = new QFrame(BOB_DIGITAL_PF);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(0, 0, 350, 16));
        frame_5->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(43, 71, 134, 255), stop:1 rgba(255, 255, 255, 255));"));
        frame_5->setFrameShape(QFrame::Panel);
        frame_5->setFrameShadow(QFrame::Raised);
        frame_5->setLineWidth(0);
        lbIP = new QLabel(frame_5);
        lbIP->setObjectName(QString::fromUtf8("lbIP"));
        lbIP->setGeometry(QRect(2, 0, 141, 16));
        QFont font;
        font.setPointSize(7);
        lbIP->setFont(font);
        lbIP->setStyleSheet(QString::fromUtf8("background-color: rgb(74, 110, 195);\n"
"color: rgb(255, 255, 255);"));
        label = new QLabel(BOB_DIGITAL_PF);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(16, 20, 320, 20));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(BOB_DIGITAL_PF);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(16, 38, 320, 20));
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(BOB_DIGITAL_PF);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(16, 55, 320, 20));
        label_3->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(BOB_DIGITAL_PF);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(140, 80, 75, 23));
        label_4 = new QLabel(BOB_DIGITAL_PF);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 0, 350, 110));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(198, 198, 198);"));
        label_4->raise();
        frame_5->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        pushButton->raise();

        retranslateUi(BOB_DIGITAL_PF);

        QMetaObject::connectSlotsByName(BOB_DIGITAL_PF);
    } // setupUi

    void retranslateUi(QWidget *BOB_DIGITAL_PF)
    {
        BOB_DIGITAL_PF->setWindowTitle(QApplication::translate("BOB_DIGITAL_PF", "BOB_DIGITAL_PF", 0, QApplication::UnicodeUTF8));
        lbIP->setText(QApplication::translate("BOB_DIGITAL_PF", "BOB_DIGITAL_PF.grf", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("BOB_DIGITAL_PF", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("BOB_DIGITAL_PF", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("BOB_DIGITAL_PF", "TextLabel", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("BOB_DIGITAL_PF", "SALIR", 0, QApplication::UnicodeUTF8));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class BOB_DIGITAL_PF: public Ui_BOB_DIGITAL_PF {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOB_DIGITAL_PF_H
