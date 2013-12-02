/********************************************************************************
** Form generated from reading UI file 'parametrossimulacion.ui'
**
** Created: Mon 2. Dec 16:27:59 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARAMETROSSIMULACION_H
#define UI_PARAMETROSSIMULACION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ParametrosSimulacion
{
public:
    QGridLayout *gridLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSlider *slider;
    QLabel *sliderval;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *ParametrosSimulacion)
    {
        if (ParametrosSimulacion->objectName().isEmpty())
            ParametrosSimulacion->setObjectName(QString::fromUtf8("ParametrosSimulacion"));
        ParametrosSimulacion->resize(300, 226);
        gridLayout_2 = new QGridLayout(ParametrosSimulacion);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        tabWidget = new QTabWidget(ParametrosSimulacion);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        slider = new QSlider(tab);
        slider->setObjectName(QString::fromUtf8("slider"));
        slider->setMinimum(-3);
        slider->setMaximum(3);
        slider->setSingleStep(1);
        slider->setPageStep(1);
        slider->setValue(0);
        slider->setTracking(true);
        slider->setOrientation(Qt::Horizontal);
        slider->setInvertedAppearance(false);
        slider->setInvertedControls(false);
        slider->setTickPosition(QSlider::NoTicks);
        slider->setTickInterval(4);

        horizontalLayout_2->addWidget(slider);

        sliderval = new QLabel(tab);
        sliderval->setObjectName(QString::fromUtf8("sliderval"));

        horizontalLayout_2->addWidget(sliderval);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());

        gridLayout_2->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(ParametrosSimulacion);
        QObject::connect(pushButton_2, SIGNAL(clicked()), ParametrosSimulacion, SLOT(reject()));
        QObject::connect(pushButton, SIGNAL(clicked()), ParametrosSimulacion, SLOT(accept()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ParametrosSimulacion);
    } // setupUi

    void retranslateUi(QDialog *ParametrosSimulacion)
    {
        ParametrosSimulacion->setWindowTitle(QApplication::translate("ParametrosSimulacion", "Dialog", 0, QApplication::UnicodeUTF8));
        sliderval->setText(QString());
        pushButton->setText(QApplication::translate("ParametrosSimulacion", "Aceptar", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("ParametrosSimulacion", "Cancelar", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("ParametrosSimulacion", "Velocidad de Simulaci\303\263n", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ParametrosSimulacion: public Ui_ParametrosSimulacion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARAMETROSSIMULACION_H
