/********************************************************************************
** Form generated from reading UI file 'sistema_aire_instrumentos.ui'
**
** Created: Fri 13. Dec 14:43:56 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SISTEMA_AIRE_INSTRUMENTOS_H
#define UI_SISTEMA_AIRE_INSTRUMENTOS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sistema_Aire_Instrumentos
{
public:
    QTextEdit *textEdit;
    QLabel *label;
    QLabel *label_5;
    QLabel *label_4;
    QCheckBox *checkBox;
    QTextEdit *textEdit_2;
    QLabel *label_2;
    QPushButton *pushButton;
    QTextEdit *textEdit_4;
    QTextEdit *textEdit_5;
    QLabel *label_3;
    QTextEdit *textEdit_3;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Sistema_Aire_Instrumentos)
    {
        if (Sistema_Aire_Instrumentos->objectName().isEmpty())
            Sistema_Aire_Instrumentos->setObjectName(QString::fromUtf8("Sistema_Aire_Instrumentos"));
        Sistema_Aire_Instrumentos->resize(497, 270);
        textEdit = new QTextEdit(Sistema_Aire_Instrumentos);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(20, 10, 104, 21));
        textEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label = new QLabel(Sistema_Aire_Instrumentos);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 10, 53, 16));
        label_5 = new QLabel(Sistema_Aire_Instrumentos);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(130, 150, 191, 16));
        label_4 = new QLabel(Sistema_Aire_Instrumentos);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(130, 100, 161, 16));
        checkBox = new QCheckBox(Sistema_Aire_Instrumentos);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(380, 10, 141, 20));
        textEdit_2 = new QTextEdit(Sistema_Aire_Instrumentos);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(20, 40, 104, 21));
        textEdit_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label_2 = new QLabel(Sistema_Aire_Instrumentos);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(130, 40, 121, 16));
        pushButton = new QPushButton(Sistema_Aire_Instrumentos);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 190, 93, 28));
        textEdit_4 = new QTextEdit(Sistema_Aire_Instrumentos);
        textEdit_4->setObjectName(QString::fromUtf8("textEdit_4"));
        textEdit_4->setGeometry(QRect(20, 100, 104, 21));
        textEdit_4->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_4->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_5 = new QTextEdit(Sistema_Aire_Instrumentos);
        textEdit_5->setObjectName(QString::fromUtf8("textEdit_5"));
        textEdit_5->setGeometry(QRect(20, 150, 104, 21));
        textEdit_5->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_5->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label_3 = new QLabel(Sistema_Aire_Instrumentos);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(130, 70, 201, 16));
        textEdit_3 = new QTextEdit(Sistema_Aire_Instrumentos);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));
        textEdit_3->setGeometry(QRect(20, 70, 104, 21));
        textEdit_3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_3->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        pushButton_2 = new QPushButton(Sistema_Aire_Instrumentos);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 230, 93, 28));

        retranslateUi(Sistema_Aire_Instrumentos);

        QMetaObject::connectSlotsByName(Sistema_Aire_Instrumentos);
    } // setupUi

    void retranslateUi(QWidget *Sistema_Aire_Instrumentos)
    {
        Sistema_Aire_Instrumentos->setWindowTitle(QApplication::translate("Sistema_Aire_Instrumentos", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Sistema_Aire_Instrumentos", "Tiempo", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Sistema_Aire_Instrumentos", "Presi\303\263n del Tanque Acumulador", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Sistema_Aire_Instrumentos", "Presi\303\263n a la Salida del Aire", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("Sistema_Aire_Instrumentos", "On/Off Compresor", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Sistema_Aire_Instrumentos", "Potencia Compresor", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Sistema_Aire_Instrumentos", "Start", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Sistema_Aire_Instrumentos", "Temperatura a la Salida del Aire", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Sistema_Aire_Instrumentos", "Stop", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Sistema_Aire_Instrumentos: public Ui_Sistema_Aire_Instrumentos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SISTEMA_AIRE_INSTRUMENTOS_H
