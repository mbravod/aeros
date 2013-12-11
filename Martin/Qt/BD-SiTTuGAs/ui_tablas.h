/********************************************************************************
** Form generated from reading UI file 'tablas.ui'
**
** Created: Tue 10. Dec 18:43:55 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLAS_H
#define UI_TABLAS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Tablas
{
public:
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QComboBox *tiempo;
    QSpacerItem *horizontalSpacer;
    QFrame *line;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLineEdit *root;
    QPushButton *abrir;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *rootD;
    QPushButton *guardar;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *guardarcomo;
    QFrame *line_2;
    QSpacerItem *horizontalSpacer_3;
    QFrame *line_3;
    QVBoxLayout *verticalLayout;
    QPushButton *genera;
    QPushButton *detener;

    void setupUi(QDialog *Tablas)
    {
        if (Tablas->objectName().isEmpty())
            Tablas->setObjectName(QString::fromUtf8("Tablas"));
        Tablas->resize(554, 322);
        gridLayout_3 = new QGridLayout(Tablas);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(Tablas);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        tiempo = new QComboBox(Tablas);
        tiempo->setObjectName(QString::fromUtf8("tiempo"));
        tiempo->setMinimumSize(QSize(73, 20));
        tiempo->setMaximumSize(QSize(73, 20));
        tiempo->setMaxVisibleItems(15);

        horizontalLayout->addWidget(tiempo);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout);

        line = new QFrame(Tablas);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        groupBox = new QGroupBox(Tablas);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_3->addWidget(label_5);

        root = new QLineEdit(groupBox);
        root->setObjectName(QString::fromUtf8("root"));
        root->setReadOnly(true);

        horizontalLayout_3->addWidget(root);

        abrir = new QPushButton(groupBox);
        abrir->setObjectName(QString::fromUtf8("abrir"));

        horizontalLayout_3->addWidget(abrir);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Tablas);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        rootD = new QLineEdit(groupBox_2);
        rootD->setObjectName(QString::fromUtf8("rootD"));
        rootD->setMinimumSize(QSize(250, 20));
        rootD->setMaximumSize(QSize(250, 20));
        rootD->setReadOnly(false);

        horizontalLayout_6->addWidget(rootD);

        guardar = new QPushButton(groupBox_2);
        guardar->setObjectName(QString::fromUtf8("guardar"));
        guardar->setEnabled(false);
        guardar->setAutoDefault(false);
        guardar->setDefault(false);

        horizontalLayout_6->addWidget(guardar);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        guardarcomo = new QPushButton(groupBox_2);
        guardarcomo->setObjectName(QString::fromUtf8("guardarcomo"));
        guardarcomo->setEnabled(false);
        guardarcomo->setAutoDefault(false);
        guardarcomo->setDefault(false);

        horizontalLayout_2->addWidget(guardarcomo);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout_4->addLayout(verticalLayout_2);

        line_2 = new QFrame(groupBox_2);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        line_3 = new QFrame(groupBox_2);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        genera = new QPushButton(groupBox_2);
        genera->setObjectName(QString::fromUtf8("genera"));
        genera->setEnabled(false);

        verticalLayout->addWidget(genera);

        detener = new QPushButton(groupBox_2);
        detener->setObjectName(QString::fromUtf8("detener"));
        detener->setEnabled(false);

        verticalLayout->addWidget(detener);


        horizontalLayout_4->addLayout(verticalLayout);


        gridLayout_2->addLayout(horizontalLayout_4, 0, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox_2);


        gridLayout_3->addLayout(verticalLayout_3, 0, 0, 1, 1);


        retranslateUi(Tablas);

        tiempo->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Tablas);
    } // setupUi

    void retranslateUi(QDialog *Tablas)
    {
        Tablas->setWindowTitle(QApplication::translate("Tablas", "Dialog", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Tablas", "Tiempo:", 0, QApplication::UnicodeUTF8));
        tiempo->clear();
        tiempo->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("Tablas", "Minutos", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Tablas", "Segundos", 0, QApplication::UnicodeUTF8)
        );
        groupBox->setTitle(QApplication::translate("Tablas", "Grupo de Variables", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Tablas", "Archivo:", 0, QApplication::UnicodeUTF8));
        abrir->setText(QApplication::translate("Tablas", "Abrir", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("Tablas", "Tabla", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Tablas", "Archivo:", 0, QApplication::UnicodeUTF8));
        rootD->setText(QString());
        guardar->setText(QApplication::translate("Tablas", "Guardar", 0, QApplication::UnicodeUTF8));
        guardarcomo->setText(QApplication::translate("Tablas", "Guardar como", 0, QApplication::UnicodeUTF8));
        genera->setText(QApplication::translate("Tablas", "Generar Tabla", 0, QApplication::UnicodeUTF8));
        detener->setText(QApplication::translate("Tablas", "Detener tabulaci\303\263n", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Tablas: public Ui_Tablas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLAS_H
