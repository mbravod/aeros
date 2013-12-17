/********************************************************************************
** Form generated from reading UI file 'grupovars.ui'
**
** Created: Mon 16. Dec 20:20:25 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRUPOVARS_H
#define UI_GRUPOVARS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GrupoVars
{
public:
    QGridLayout *gridLayout_9;
    QGridLayout *gridLayout_8;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_7;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_5;
    QComboBox *SeleccSist;
    QSpacerItem *horizontalSpacer_5;
    QFrame *line_4;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QTableWidget *table;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QTableWidget *table2;
    QFrame *line;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *rootD;
    QPushButton *guardar;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *guardarcomo;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *cerrar;
    QWidget *tab_2;
    QGridLayout *gridLayout_6;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QTableWidget *table3;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QLineEdit *root;
    QPushButton *abrir;
    QFrame *line_2;
    QTableWidget *table4;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *guardarE;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *cerrarE;

    void setupUi(QWidget *GrupoVars)
    {
        if (GrupoVars->objectName().isEmpty())
            GrupoVars->setObjectName(QString::fromUtf8("GrupoVars"));
        GrupoVars->resize(524, 493);
        gridLayout_9 = new QGridLayout(GrupoVars);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setSpacing(6);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        groupBox_5 = new QGroupBox(GrupoVars);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout_7 = new QGridLayout(groupBox_5);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        label_4 = new QLabel(groupBox_5);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_7->addWidget(label_4, 0, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        SeleccSist = new QComboBox(groupBox_5);
        SeleccSist->setObjectName(QString::fromUtf8("SeleccSist"));
        SeleccSist->setMaxVisibleItems(15);

        horizontalLayout_5->addWidget(SeleccSist);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        gridLayout_7->addLayout(horizontalLayout_5, 0, 1, 1, 1);


        gridLayout_8->addWidget(groupBox_5, 0, 0, 1, 1);

        line_4 = new QFrame(GrupoVars);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_8->addWidget(line_4, 1, 0, 1, 1);

        tabWidget = new QTabWidget(GrupoVars);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_4 = new QGridLayout(tab);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        table = new QTableWidget(groupBox);
        table->setObjectName(QString::fromUtf8("table"));
        table->setEnabled(true);

        gridLayout->addWidget(table, 0, 0, 1, 1);


        verticalLayout_4->addWidget(groupBox);

        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        table2 = new QTableWidget(groupBox_2);
        table2->setObjectName(QString::fromUtf8("table2"));
        table2->setEnabled(true);

        gridLayout_2->addWidget(table2, 0, 0, 1, 1);


        verticalLayout_4->addWidget(groupBox_2);

        line = new QFrame(tab);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        rootD = new QLineEdit(tab);
        rootD->setObjectName(QString::fromUtf8("rootD"));
        rootD->setMinimumSize(QSize(250, 20));
        rootD->setMaximumSize(QSize(250, 20));
        rootD->setReadOnly(false);

        horizontalLayout_4->addWidget(rootD);

        guardar = new QPushButton(tab);
        guardar->setObjectName(QString::fromUtf8("guardar"));
        guardar->setAutoDefault(false);
        guardar->setDefault(false);

        horizontalLayout_4->addWidget(guardar);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        guardarcomo = new QPushButton(tab);
        guardarcomo->setObjectName(QString::fromUtf8("guardarcomo"));
        guardarcomo->setAutoDefault(false);
        guardarcomo->setDefault(false);

        horizontalLayout_2->addWidget(guardarcomo);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_6->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        cerrar = new QPushButton(tab);
        cerrar->setObjectName(QString::fromUtf8("cerrar"));
        cerrar->setDefault(true);

        horizontalLayout_6->addWidget(cerrar);


        verticalLayout_4->addLayout(horizontalLayout_6);


        gridLayout_4->addLayout(verticalLayout_4, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_6 = new QGridLayout(tab_2);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox_3 = new QGroupBox(tab_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        table3 = new QTableWidget(groupBox_3);
        table3->setObjectName(QString::fromUtf8("table3"));
        table3->setEnabled(true);

        gridLayout_3->addWidget(table3, 0, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(tab_2);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_5 = new QGridLayout(groupBox_4);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);

        root = new QLineEdit(groupBox_4);
        root->setObjectName(QString::fromUtf8("root"));
        root->setReadOnly(true);

        horizontalLayout->addWidget(root);

        abrir = new QPushButton(groupBox_4);
        abrir->setObjectName(QString::fromUtf8("abrir"));

        horizontalLayout->addWidget(abrir);


        verticalLayout_2->addLayout(horizontalLayout);

        line_2 = new QFrame(groupBox_4);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_2);

        table4 = new QTableWidget(groupBox_4);
        table4->setObjectName(QString::fromUtf8("table4"));
        table4->setEnabled(true);

        verticalLayout_2->addWidget(table4);


        gridLayout_5->addLayout(verticalLayout_2, 0, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox_4);

        line_3 = new QFrame(tab_2);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetFixedSize);
        guardarE = new QPushButton(tab_2);
        guardarE->setObjectName(QString::fromUtf8("guardarE"));
        guardarE->setAutoDefault(false);
        guardarE->setDefault(false);

        horizontalLayout_3->addWidget(guardarE);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        cerrarE = new QPushButton(tab_2);
        cerrarE->setObjectName(QString::fromUtf8("cerrarE"));
        cerrarE->setDefault(true);

        horizontalLayout_3->addWidget(cerrarE);


        verticalLayout_3->addLayout(horizontalLayout_3);


        gridLayout_6->addLayout(verticalLayout_3, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout_8->addWidget(tabWidget, 2, 0, 1, 1);


        gridLayout_9->addLayout(gridLayout_8, 0, 0, 1, 1);


        retranslateUi(GrupoVars);
        QObject::connect(cerrar, SIGNAL(clicked()), GrupoVars, SLOT(close()));
        QObject::connect(cerrarE, SIGNAL(clicked()), GrupoVars, SLOT(close()));

        SeleccSist->setCurrentIndex(-1);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(GrupoVars);
    } // setupUi

    void retranslateUi(QWidget *GrupoVars)
    {
        GrupoVars->setWindowTitle(QApplication::translate("GrupoVars", "GrupoVars", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("GrupoVars", "Seleccionar Sistema", 0, QApplication::UnicodeUTF8));
        label_4->setText(QString());
        groupBox->setTitle(QApplication::translate("GrupoVars", "Listado de Variables", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("GrupoVars", "Grupo de Variables", 0, QApplication::UnicodeUTF8));
        rootD->setText(QString());
        guardar->setText(QApplication::translate("GrupoVars", "Guardar", 0, QApplication::UnicodeUTF8));
        guardarcomo->setText(QApplication::translate("GrupoVars", "Guardar como", 0, QApplication::UnicodeUTF8));
        cerrar->setText(QApplication::translate("GrupoVars", "Cerrar", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("GrupoVars", "Nuevo Grupo", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("GrupoVars", "Listado de Variables", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("GrupoVars", "Variables monitoreadas", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("GrupoVars", "Archivo:", 0, QApplication::UnicodeUTF8));
        abrir->setText(QApplication::translate("GrupoVars", "Abrir", 0, QApplication::UnicodeUTF8));
        guardarE->setText(QApplication::translate("GrupoVars", "Guardar", 0, QApplication::UnicodeUTF8));
        cerrarE->setText(QApplication::translate("GrupoVars", "Cerrar", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("GrupoVars", "Editar Grupo", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GrupoVars: public Ui_GrupoVars {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRUPOVARS_H
