/********************************************************************************
** Form generated from reading UI file 'retroceder.ui'
**
** Created: Sat 12. Oct 11:06:11 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RETROCEDER_H
#define UI_RETROCEDER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Retroceder
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QSlider *slider;
    QHBoxLayout *horizontalLayout_2;
    QLabel *sliderval;
    QLabel *label_2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QProgressBar *progressBar;
    QHBoxLayout *horizontalLayout;
    QPushButton *Cargar;
    QPushButton *Iniciar;
    QPushButton *Detener;
    QPushButton *Cerrar;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *MinutosL;
    QLabel *dp;
    QLabel *SegundosL;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Retroceder)
    {
        if (Retroceder->objectName().isEmpty())
            Retroceder->setObjectName(QString::fromUtf8("Retroceder"));
        Retroceder->resize(503, 150);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Retroceder->sizePolicy().hasHeightForWidth());
        Retroceder->setSizePolicy(sizePolicy);
        Retroceder->setMinimumSize(QSize(503, 150));
        Retroceder->setMaximumSize(QSize(503, 150));
        centralWidget = new QWidget(Retroceder);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 40, 351, 21));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        slider = new QSlider(layoutWidget);
        slider->setObjectName(QString::fromUtf8("slider"));
        slider->setMaximum(0);
        slider->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(slider);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        sliderval = new QLabel(layoutWidget);
        sliderval->setObjectName(QString::fromUtf8("sliderval"));

        horizontalLayout_2->addWidget(sliderval);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 90, 491, 29));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        progressBar = new QProgressBar(layoutWidget1);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(0);

        horizontalLayout_4->addWidget(progressBar);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        Cargar = new QPushButton(layoutWidget1);
        Cargar->setObjectName(QString::fromUtf8("Cargar"));

        horizontalLayout->addWidget(Cargar);

        Iniciar = new QPushButton(layoutWidget1);
        Iniciar->setObjectName(QString::fromUtf8("Iniciar"));

        horizontalLayout->addWidget(Iniciar);

        Detener = new QPushButton(layoutWidget1);
        Detener->setObjectName(QString::fromUtf8("Detener"));

        horizontalLayout->addWidget(Detener);


        horizontalLayout_4->addLayout(horizontalLayout);


        horizontalLayout_5->addLayout(horizontalLayout_4);

        Cerrar = new QPushButton(layoutWidget1);
        Cerrar->setObjectName(QString::fromUtf8("Cerrar"));

        horizontalLayout_5->addWidget(Cerrar);

        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(230, 10, 61, 21));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        MinutosL = new QLabel(layoutWidget2);
        MinutosL->setObjectName(QString::fromUtf8("MinutosL"));
        QFont font;
        font.setPointSize(12);
        MinutosL->setFont(font);

        horizontalLayout_6->addWidget(MinutosL);

        dp = new QLabel(layoutWidget2);
        dp->setObjectName(QString::fromUtf8("dp"));
        dp->setFont(font);

        horizontalLayout_6->addWidget(dp);

        SegundosL = new QLabel(layoutWidget2);
        SegundosL->setObjectName(QString::fromUtf8("SegundosL"));
        SegundosL->setFont(font);

        horizontalLayout_6->addWidget(SegundosL);

        Retroceder->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Retroceder);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 503, 21));
        Retroceder->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Retroceder);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Retroceder->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Retroceder);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Retroceder->setStatusBar(statusBar);

        retranslateUi(Retroceder);
        QObject::connect(Cerrar, SIGNAL(clicked()), Retroceder, SLOT(close()));

        QMetaObject::connectSlotsByName(Retroceder);
    } // setupUi

    void retranslateUi(QMainWindow *Retroceder)
    {
        Retroceder->setWindowTitle(QApplication::translate("Retroceder", "Retroceder", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Retroceder", "Retroceder:", 0, QApplication::UnicodeUTF8));
        sliderval->setText(QApplication::translate("Retroceder", "0", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Retroceder", "Minutos", 0, QApplication::UnicodeUTF8));
        Cargar->setText(QApplication::translate("Retroceder", "Cargar", 0, QApplication::UnicodeUTF8));
        Iniciar->setText(QApplication::translate("Retroceder", "Iniciar", 0, QApplication::UnicodeUTF8));
        Detener->setText(QApplication::translate("Retroceder", "Detener", 0, QApplication::UnicodeUTF8));
        Cerrar->setText(QApplication::translate("Retroceder", "Cerrar", 0, QApplication::UnicodeUTF8));
        MinutosL->setText(QApplication::translate("Retroceder", "0", 0, QApplication::UnicodeUTF8));
        dp->setText(QApplication::translate("Retroceder", ":", 0, QApplication::UnicodeUTF8));
        SegundosL->setText(QApplication::translate("Retroceder", "0", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Retroceder: public Ui_Retroceder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RETROCEDER_H
