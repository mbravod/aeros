/********************************************************************************
** Form generated from reading UI file 'modsel.ui'
**
** Created: Wed 9. Oct 20:10:08 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODSEL_H
#define UI_MODSEL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_MODSEL
{
public:
    QLineEdit *le_op3_ip02;
    QLineEdit *le_op4_ip01;
    QLineEdit *le_op2_ip01;
    QLineEdit *le_op2_ip03;
    QLineEdit *le_op4_ip03;
    QLabel *label_6;
    QFrame *line;
    QLineEdit *le_op3_ip04;
    QRadioButton *rdbtn_Operador;
    QLabel *label_9;
    QLineEdit *le_op1_ip02;
    QLineEdit *le_op2_ip02;
    QFrame *line_3;
    QLineEdit *le_op1_ip04;
    QLabel *label_12;
    QPushButton *btn_SITTUGAS;
    QLineEdit *le_op3_ip01;
    QLabel *label_10;
    QLineEdit *le_op1_ip03;
    QRadioButton *rdbtn_Instructor;
    QFrame *line_2;
    QLabel *label_11;
    QLineEdit *le_op3_ip03;
    QLabel *label_8;
    QLineEdit *le_op2_ip04;
    QLineEdit *le_op4_ip04;
    QLineEdit *le_op4_ip02;
    QLineEdit *le_op1_ip01;

    void setupUi(QDialog *MODSEL)
    {
        if (MODSEL->objectName().isEmpty())
            MODSEL->setObjectName(QString::fromUtf8("MODSEL"));
        MODSEL->resize(500, 400);
        MODSEL->setMinimumSize(QSize(500, 400));
        MODSEL->setMaximumSize(QSize(500, 400));
        QPalette palette;
        QBrush brush(QColor(205, 223, 223, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(172, 172, 172, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(36, 36, 36, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush1);
        QBrush brush4(QColor(57, 57, 57, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush4);
        palette.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        QBrush brush5(QColor(255, 255, 255, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush5);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        MODSEL->setPalette(palette);
        le_op3_ip02 = new QLineEdit(MODSEL);
        le_op3_ip02->setObjectName(QString::fromUtf8("le_op3_ip02"));
        le_op3_ip02->setGeometry(QRect(273, 262, 50, 20));
        le_op3_ip02->setMinimumSize(QSize(50, 20));
        le_op3_ip02->setMaximumSize(QSize(50, 20));
        le_op3_ip02->setInputMethodHints(Qt::ImhDigitsOnly);
        le_op3_ip02->setMaxLength(3);
        le_op3_ip02->setAlignment(Qt::AlignCenter);
        le_op4_ip01 = new QLineEdit(MODSEL);
        le_op4_ip01->setObjectName(QString::fromUtf8("le_op4_ip01"));
        le_op4_ip01->setGeometry(QRect(208, 302, 50, 20));
        le_op4_ip01->setMinimumSize(QSize(50, 20));
        le_op4_ip01->setMaximumSize(QSize(50, 20));
        le_op4_ip01->setInputMethodHints(Qt::ImhDigitsOnly);
        le_op4_ip01->setMaxLength(3);
        le_op4_ip01->setAlignment(Qt::AlignCenter);
        le_op2_ip01 = new QLineEdit(MODSEL);
        le_op2_ip01->setObjectName(QString::fromUtf8("le_op2_ip01"));
        le_op2_ip01->setGeometry(QRect(208, 222, 50, 20));
        le_op2_ip01->setMinimumSize(QSize(50, 20));
        le_op2_ip01->setMaximumSize(QSize(50, 20));
        le_op2_ip01->setInputMethodHints(Qt::ImhDigitsOnly);
        le_op2_ip01->setMaxLength(3);
        le_op2_ip01->setAlignment(Qt::AlignCenter);
        le_op2_ip03 = new QLineEdit(MODSEL);
        le_op2_ip03->setObjectName(QString::fromUtf8("le_op2_ip03"));
        le_op2_ip03->setGeometry(QRect(338, 222, 50, 20));
        le_op2_ip03->setMinimumSize(QSize(50, 20));
        le_op2_ip03->setMaximumSize(QSize(50, 20));
        le_op2_ip03->setInputMethodHints(Qt::ImhDigitsOnly);
        le_op2_ip03->setMaxLength(3);
        le_op2_ip03->setAlignment(Qt::AlignCenter);
        le_op4_ip03 = new QLineEdit(MODSEL);
        le_op4_ip03->setObjectName(QString::fromUtf8("le_op4_ip03"));
        le_op4_ip03->setGeometry(QRect(338, 302, 50, 20));
        le_op4_ip03->setMinimumSize(QSize(50, 20));
        le_op4_ip03->setMaximumSize(QSize(50, 20));
        le_op4_ip03->setInputMethodHints(Qt::ImhDigitsOnly);
        le_op4_ip03->setMaxLength(3);
        le_op4_ip03->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(MODSEL);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(4, 62, 491, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_6->setFont(font);
        line = new QFrame(MODSEL);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(14, 82, 457, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        le_op3_ip04 = new QLineEdit(MODSEL);
        le_op3_ip04->setObjectName(QString::fromUtf8("le_op3_ip04"));
        le_op3_ip04->setGeometry(QRect(403, 262, 50, 20));
        le_op3_ip04->setMinimumSize(QSize(50, 20));
        le_op3_ip04->setMaximumSize(QSize(50, 20));
        le_op3_ip04->setInputMethodHints(Qt::ImhDigitsOnly);
        le_op3_ip04->setMaxLength(3);
        le_op3_ip04->setAlignment(Qt::AlignCenter);
        rdbtn_Operador = new QRadioButton(MODSEL);
        rdbtn_Operador->setObjectName(QString::fromUtf8("rdbtn_Operador"));
        rdbtn_Operador->setGeometry(QRect(54, 102, 131, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        rdbtn_Operador->setFont(font1);
        rdbtn_Operador->setChecked(true);
        rdbtn_Operador->setAutoExclusive(true);
        label_9 = new QLabel(MODSEL);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(128, 225, 71, 16));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        le_op1_ip02 = new QLineEdit(MODSEL);
        le_op1_ip02->setObjectName(QString::fromUtf8("le_op1_ip02"));
        le_op1_ip02->setGeometry(QRect(273, 182, 50, 20));
        le_op1_ip02->setMinimumSize(QSize(50, 20));
        le_op1_ip02->setMaximumSize(QSize(50, 20));
        le_op1_ip02->setInputMethodHints(Qt::ImhDigitsOnly);
        le_op1_ip02->setMaxLength(3);
        le_op1_ip02->setAlignment(Qt::AlignCenter);
        le_op2_ip02 = new QLineEdit(MODSEL);
        le_op2_ip02->setObjectName(QString::fromUtf8("le_op2_ip02"));
        le_op2_ip02->setGeometry(QRect(273, 222, 50, 20));
        le_op2_ip02->setMinimumSize(QSize(50, 20));
        le_op2_ip02->setMaximumSize(QSize(50, 20));
        le_op2_ip02->setInputMethodHints(Qt::ImhDigitsOnly);
        le_op2_ip02->setMaxLength(3);
        le_op2_ip02->setAlignment(Qt::AlignCenter);
        line_3 = new QFrame(MODSEL);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(188, 332, 281, 20));
        line_3->setMinimumSize(QSize(281, 20));
        line_3->setMaximumSize(QSize(281, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        le_op1_ip04 = new QLineEdit(MODSEL);
        le_op1_ip04->setObjectName(QString::fromUtf8("le_op1_ip04"));
        le_op1_ip04->setGeometry(QRect(403, 182, 50, 20));
        le_op1_ip04->setMinimumSize(QSize(50, 20));
        le_op1_ip04->setMaximumSize(QSize(50, 20));
        le_op1_ip04->setInputMethodHints(Qt::ImhDigitsOnly);
        le_op1_ip04->setMaxLength(3);
        le_op1_ip04->setAlignment(Qt::AlignCenter);
        label_12 = new QLabel(MODSEL);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(208, 142, 241, 16));
        label_12->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(205, 223, 255);"));
        btn_SITTUGAS = new QPushButton(MODSEL);
        btn_SITTUGAS->setObjectName(QString::fromUtf8("btn_SITTUGAS"));
        btn_SITTUGAS->setGeometry(QRect(318, 362, 150, 25));
        btn_SITTUGAS->setMinimumSize(QSize(150, 25));
        btn_SITTUGAS->setMaximumSize(QSize(150, 25));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        btn_SITTUGAS->setFont(font2);
        le_op3_ip01 = new QLineEdit(MODSEL);
        le_op3_ip01->setObjectName(QString::fromUtf8("le_op3_ip01"));
        le_op3_ip01->setGeometry(QRect(208, 262, 50, 20));
        le_op3_ip01->setMinimumSize(QSize(50, 20));
        le_op3_ip01->setMaximumSize(QSize(50, 20));
        le_op3_ip01->setInputMethodHints(Qt::ImhDigitsOnly);
        le_op3_ip01->setMaxLength(3);
        le_op3_ip01->setAlignment(Qt::AlignCenter);
        label_10 = new QLabel(MODSEL);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(128, 265, 71, 16));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        le_op1_ip03 = new QLineEdit(MODSEL);
        le_op1_ip03->setObjectName(QString::fromUtf8("le_op1_ip03"));
        le_op1_ip03->setGeometry(QRect(338, 182, 50, 20));
        le_op1_ip03->setMinimumSize(QSize(50, 20));
        le_op1_ip03->setMaximumSize(QSize(50, 20));
        le_op1_ip03->setInputMethodHints(Qt::ImhDigitsOnly);
        le_op1_ip03->setMaxLength(3);
        le_op1_ip03->setAlignment(Qt::AlignCenter);
        rdbtn_Instructor = new QRadioButton(MODSEL);
        rdbtn_Instructor->setObjectName(QString::fromUtf8("rdbtn_Instructor"));
        rdbtn_Instructor->setGeometry(QRect(304, 102, 131, 17));
        rdbtn_Instructor->setFont(font1);
        rdbtn_Instructor->setChecked(false);
        rdbtn_Instructor->setAutoExclusive(true);
        line_2 = new QFrame(MODSEL);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(-2, 122, 457, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_11 = new QLabel(MODSEL);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(128, 305, 71, 16));
        label_11->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(205, 223, 255);"));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        le_op3_ip03 = new QLineEdit(MODSEL);
        le_op3_ip03->setObjectName(QString::fromUtf8("le_op3_ip03"));
        le_op3_ip03->setGeometry(QRect(338, 262, 50, 20));
        le_op3_ip03->setMinimumSize(QSize(50, 20));
        le_op3_ip03->setMaximumSize(QSize(50, 20));
        le_op3_ip03->setInputMethodHints(Qt::ImhDigitsOnly);
        le_op3_ip03->setMaxLength(3);
        le_op3_ip03->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(MODSEL);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(128, 185, 71, 16));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        le_op2_ip04 = new QLineEdit(MODSEL);
        le_op2_ip04->setObjectName(QString::fromUtf8("le_op2_ip04"));
        le_op2_ip04->setGeometry(QRect(403, 222, 50, 20));
        le_op2_ip04->setMinimumSize(QSize(50, 20));
        le_op2_ip04->setMaximumSize(QSize(50, 20));
        le_op2_ip04->setInputMethodHints(Qt::ImhDigitsOnly);
        le_op2_ip04->setMaxLength(3);
        le_op2_ip04->setAlignment(Qt::AlignCenter);
        le_op4_ip04 = new QLineEdit(MODSEL);
        le_op4_ip04->setObjectName(QString::fromUtf8("le_op4_ip04"));
        le_op4_ip04->setGeometry(QRect(403, 302, 50, 20));
        le_op4_ip04->setMinimumSize(QSize(50, 20));
        le_op4_ip04->setMaximumSize(QSize(50, 20));
        le_op4_ip04->setInputMethodHints(Qt::ImhDigitsOnly);
        le_op4_ip04->setMaxLength(3);
        le_op4_ip04->setAlignment(Qt::AlignCenter);
        le_op4_ip02 = new QLineEdit(MODSEL);
        le_op4_ip02->setObjectName(QString::fromUtf8("le_op4_ip02"));
        le_op4_ip02->setGeometry(QRect(273, 302, 50, 20));
        le_op4_ip02->setMinimumSize(QSize(50, 20));
        le_op4_ip02->setMaximumSize(QSize(50, 20));
        le_op4_ip02->setInputMethodHints(Qt::ImhDigitsOnly);
        le_op4_ip02->setMaxLength(3);
        le_op4_ip02->setAlignment(Qt::AlignCenter);
        le_op1_ip01 = new QLineEdit(MODSEL);
        le_op1_ip01->setObjectName(QString::fromUtf8("le_op1_ip01"));
        le_op1_ip01->setGeometry(QRect(208, 182, 50, 20));
        le_op1_ip01->setMinimumSize(QSize(50, 20));
        le_op1_ip01->setMaximumSize(QSize(50, 20));
        le_op1_ip01->setInputMethodHints(Qt::ImhDigitsOnly);
        le_op1_ip01->setMaxLength(3);
        le_op1_ip01->setAlignment(Qt::AlignCenter);

        retranslateUi(MODSEL);

        QMetaObject::connectSlotsByName(MODSEL);
    } // setupUi

    void retranslateUi(QDialog *MODSEL)
    {
        MODSEL->setWindowTitle(QApplication::translate("MODSEL", "Dialog", 0, QApplication::UnicodeUTF8));
        le_op3_ip02->setText(QString());
        le_op4_ip01->setText(QString());
        le_op2_ip01->setText(QString());
        le_op2_ip03->setText(QString());
        le_op4_ip03->setText(QString());
        label_6->setText(QApplication::translate("MODSEL", "Por favor, configure los par\303\241metro de configuraci\303\263n.", 0, QApplication::UnicodeUTF8));
        le_op3_ip04->setText(QString());
        rdbtn_Operador->setText(QApplication::translate("MODSEL", "Modo Operador", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MODSEL", "IP Operador 2:", 0, QApplication::UnicodeUTF8));
        le_op1_ip02->setText(QString());
        le_op2_ip02->setText(QString());
        le_op1_ip04->setText(QString());
        label_12->setText(QApplication::translate("MODSEL", "Ajuste las direcciones IP de los equipos SITTUGAS", 0, QApplication::UnicodeUTF8));
        btn_SITTUGAS->setText(QApplication::translate("MODSEL", "INICIAR SITTUGAS", 0, QApplication::UnicodeUTF8));
        le_op3_ip01->setText(QString());
        label_10->setText(QApplication::translate("MODSEL", "IP Operador 3:", 0, QApplication::UnicodeUTF8));
        le_op1_ip03->setText(QString());
        rdbtn_Instructor->setText(QApplication::translate("MODSEL", "Modo Instructor", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MODSEL", "IP Operador 4:", 0, QApplication::UnicodeUTF8));
        le_op3_ip03->setText(QString());
        label_8->setText(QApplication::translate("MODSEL", "IP Operador 1:", 0, QApplication::UnicodeUTF8));
        le_op2_ip04->setText(QString());
        le_op4_ip04->setText(QString());
        le_op4_ip02->setText(QString());
        le_op1_ip01->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MODSEL: public Ui_MODSEL {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODSEL_H
