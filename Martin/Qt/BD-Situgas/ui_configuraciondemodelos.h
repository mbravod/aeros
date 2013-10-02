/********************************************************************************
** Form generated from reading UI file 'configuraciondemodelos.ui'
**
** Created: Mon 23. Sep 20:33:27 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURACIONDEMODELOS_H
#define UI_CONFIGURACIONDEMODELOS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ConfiguracionDeModelos
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_7;
    QComboBox *SeleccSist;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *textobuscar;
    QPushButton *bbuscar;
    QTableWidget *table;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *varToChange;
    QLabel *label_2;
    QLineEdit *inNuevoValor;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *guardar;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *cerrar;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *ConfiguracionDeModelos)
    {
        if (ConfiguracionDeModelos->objectName().isEmpty())
            ConfiguracionDeModelos->setObjectName(QString::fromUtf8("ConfiguracionDeModelos"));
        ConfiguracionDeModelos->resize(600, 450);
        gridLayout = new QGridLayout(ConfiguracionDeModelos);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(ConfiguracionDeModelos);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        horizontalSpacer_7 = new QSpacerItem(13, 17, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        SeleccSist = new QComboBox(ConfiguracionDeModelos);
        SeleccSist->setObjectName(QString::fromUtf8("SeleccSist"));
        SeleccSist->setMaxVisibleItems(15);

        horizontalLayout_3->addWidget(SeleccSist);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        textobuscar = new QLineEdit(ConfiguracionDeModelos);
        textobuscar->setObjectName(QString::fromUtf8("textobuscar"));

        horizontalLayout_3->addWidget(textobuscar);

        bbuscar = new QPushButton(ConfiguracionDeModelos);
        bbuscar->setObjectName(QString::fromUtf8("bbuscar"));

        horizontalLayout_3->addWidget(bbuscar);


        verticalLayout->addLayout(horizontalLayout_3);

        table = new QTableWidget(ConfiguracionDeModelos);
        table->setObjectName(QString::fromUtf8("table"));

        verticalLayout->addWidget(table);

        verticalSpacer_3 = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(ConfiguracionDeModelos);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        varToChange = new QLineEdit(ConfiguracionDeModelos);
        varToChange->setObjectName(QString::fromUtf8("varToChange"));
        varToChange->setMinimumSize(QSize(100, 25));
        varToChange->setMaximumSize(QSize(100, 25));
        varToChange->setReadOnly(true);

        horizontalLayout->addWidget(varToChange);

        label_2 = new QLabel(ConfiguracionDeModelos);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        inNuevoValor = new QLineEdit(ConfiguracionDeModelos);
        inNuevoValor->setObjectName(QString::fromUtf8("inNuevoValor"));
        inNuevoValor->setMinimumSize(QSize(100, 25));
        inNuevoValor->setMaximumSize(QSize(100, 25));
        inNuevoValor->setFrame(true);
        inNuevoValor->setEchoMode(QLineEdit::Normal);
        inNuevoValor->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(inNuevoValor);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        guardar = new QPushButton(ConfiguracionDeModelos);
        guardar->setObjectName(QString::fromUtf8("guardar"));
        guardar->setAutoDefault(false);
        guardar->setDefault(false);

        horizontalLayout_2->addWidget(guardar);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        cerrar = new QPushButton(ConfiguracionDeModelos);
        cerrar->setObjectName(QString::fromUtf8("cerrar"));
        cerrar->setDefault(true);

        horizontalLayout_2->addWidget(cerrar);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(ConfiguracionDeModelos);
        QObject::connect(cerrar, SIGNAL(clicked()), ConfiguracionDeModelos, SLOT(close()));

        SeleccSist->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(ConfiguracionDeModelos);
    } // setupUi

    void retranslateUi(QDialog *ConfiguracionDeModelos)
    {
        ConfiguracionDeModelos->setWindowTitle(QApplication::translate("ConfiguracionDeModelos", "Dialog", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ConfiguracionDeModelos", "Seleccionar Sistema", 0, QApplication::UnicodeUTF8));
        bbuscar->setText(QApplication::translate("ConfiguracionDeModelos", "Buscar", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ConfiguracionDeModelos", "VARIABLE:", 0, QApplication::UnicodeUTF8));
        varToChange->setText(QString());
        label_2->setText(QApplication::translate("ConfiguracionDeModelos", "NUEVO VALOR:", 0, QApplication::UnicodeUTF8));
        inNuevoValor->setInputMask(QString());
        inNuevoValor->setText(QString());
        guardar->setText(QApplication::translate("ConfiguracionDeModelos", "Aceptar Valor", 0, QApplication::UnicodeUTF8));
        cerrar->setText(QApplication::translate("ConfiguracionDeModelos", "Cerrar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ConfiguracionDeModelos: public Ui_ConfiguracionDeModelos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURACIONDEMODELOS_H
