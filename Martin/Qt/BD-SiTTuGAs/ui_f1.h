/********************************************************************************
** Form generated from reading UI file 'f1.ui'
**
** Created: Mon 2. Dec 19:01:09 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_F1_H
#define UI_F1_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_F1
{
public:
    QLabel *lbIMGFondo;

    void setupUi(QWidget *F1)
    {
        if (F1->objectName().isEmpty())
            F1->setObjectName(QString::fromUtf8("F1"));
        F1->resize(1024, 662);
        F1->setMinimumSize(QSize(1024, 662));
        F1->setMaximumSize(QSize(1024, 662));
        F1->setStyleSheet(QString::fromUtf8(""));
        lbIMGFondo = new QLabel(F1);
        lbIMGFondo->setObjectName(QString::fromUtf8("lbIMGFondo"));
        lbIMGFondo->setGeometry(QRect(0, 0, 1024, 662));
        lbIMGFondo->setPixmap(QPixmap(QString::fromUtf8(":/Resources/PNG/BackGround.png")));
        lbIMGFondo->setScaledContents(true);

        retranslateUi(F1);

        QMetaObject::connectSlotsByName(F1);
    } // setupUi

    void retranslateUi(QWidget *F1)
    {
        F1->setWindowTitle(QApplication::translate("F1", "Form", 0, QApplication::UnicodeUTF8));
        lbIMGFondo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class F1: public Ui_F1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_F1_H
