/********************************************************************************
** Form generated from reading UI file 'mi_prueba.ui'
**
** Created: Mon 7. Oct 20:08:40 2013
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MI_PRUEBA_H
#define UI_MI_PRUEBA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>
#include "ainstrumentindicator.h"
#include "awidget.h"

QT_BEGIN_NAMESPACE

class Ui_Mi_Prueba
{
public:
    QWidget *centralWidget;
    AInstrumentIndicator *aInstrumentIndicator;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Mi_Prueba)
    {
        if (Mi_Prueba->objectName().isEmpty())
            Mi_Prueba->setObjectName(QString::fromUtf8("Mi_Prueba"));
        Mi_Prueba->resize(673, 450);
        centralWidget = new QWidget(Mi_Prueba);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        aInstrumentIndicator = new AInstrumentIndicator(centralWidget);
        aInstrumentIndicator->setObjectName(QString::fromUtf8("aInstrumentIndicator"));
        aInstrumentIndicator->setGeometry(QRect(90, 50, 70, 70));
        aInstrumentIndicator->setProperty("Normal", QVariant(2));
        aInstrumentIndicator->setAlarma(0);
        Mi_Prueba->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Mi_Prueba);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 673, 21));
        Mi_Prueba->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Mi_Prueba);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Mi_Prueba->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Mi_Prueba);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Mi_Prueba->setStatusBar(statusBar);

        retranslateUi(Mi_Prueba);

        QMetaObject::connectSlotsByName(Mi_Prueba);
    } // setupUi

    void retranslateUi(QMainWindow *Mi_Prueba)
    {
        Mi_Prueba->setWindowTitle(QApplication::translate("Mi_Prueba", "Mi_Prueba", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Mi_Prueba: public Ui_Mi_Prueba {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MI_PRUEBA_H
