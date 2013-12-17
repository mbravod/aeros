/********************************************************************************
** Form generated from reading UI file 'consola.ui'
**
** Created: Tue 17. Dec 02:39:55 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSOLA_H
#define UI_CONSOLA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Consola
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Consola)
    {
        if (Consola->objectName().isEmpty())
            Consola->setObjectName(QString::fromUtf8("Consola"));
        Consola->resize(350, 100);
        centralwidget = new QWidget(Consola);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Consola->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Consola);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 350, 21));
        Consola->setMenuBar(menubar);
        statusbar = new QStatusBar(Consola);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Consola->setStatusBar(statusbar);

        retranslateUi(Consola);

        QMetaObject::connectSlotsByName(Consola);
    } // setupUi

    void retranslateUi(QMainWindow *Consola)
    {
        Consola->setWindowTitle(QApplication::translate("Consola", "MainWindow", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Consola: public Ui_Consola {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSOLA_H
