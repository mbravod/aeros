/********************************************************************************
** Form generated from reading UI file 'compresorgas.ui'
**
** Created: Thu 19. Dec 02:34:06 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPRESORGAS_H
#define UI_COMPRESORGAS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCommandLinkButton>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>
#include "wlabel.h"
#include "wlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_CompresorGas
{
public:
    QLabel *label;
    WLabel *lbCompGasT;
    WLabel *lbCommAlmrT;
    WLabel *lbCommSdT;
    WLabel *lbZSO3101T;
    WLabel *lbZSO2102T;
    WLabel *lbZSO2101T;
    WLineEdit *lbEdoAlarmT;
    WLineEdit *lbEdoParosT;
    WLineEdit *lbCompMarchaT;
    WLineEdit *lbVentMarchaT;
    WLineEdit *lbBombaLubT;
    WLabel *lbPI1101T;
    WLabel *lbPI1101;
    WLabel *lbTI_1102;
    WLabel *lbTI_1102T;
    WLabel *lbTI_1105;
    WLabel *lbTI_1105T;
    WLabel *lbPI1102;
    WLabel *lbPI1102T;
    WLabel *lbPI1105;
    WLabel *lbPI1105T;
    WLabel *lbLI1106;
    WLabel *lbLI1106T;
    WLabel *lbTI1201;
    WLabel *lbTI1201T;
    WLabel *lbTI1204;
    WLabel *lbTI1204T;
    WLabel *lbLI1205;
    WLabel *lbLI1205T;
    WLabel *lbPI1204;
    WLabel *lbPI1204T;
    WLabel *lbEntGasT;
    QPushButton *btDescription;
    WLabel *lbS100T;
    WLabel *lbB100T;
    WLabel *lbC100T;
    WLabel *lbB200T;
    WLabel *lbS200T;
    WLabel *lbM200T;
    WLabel *lbB210T;
    WLabel *lbC200T;
    WLabel *lbB300T;
    WLabel *lbF200T;
    WLabel *lbTI1305;
    WLabel *lbTI1305T;
    WLabel *lbLI1308;
    WLabel *lbLI1308T;
    WLabel *lbLI1310;
    WLabel *lbLI1310T;
    WLabel *lbPDI1309;
    WLabel *lbPDI1309T;
    WLabel *lbSalGasT;
    WLabel *lbPI1306;
    WLabel *lbPI1306T;
    QPushButton *btImpPant;
    QFrame *frame;
    WLabel *lbMotorT;
    WLabel *lbPI2103T;
    WLabel *lbPI2103;
    WLabel *lbVI2103T;
    WLabel *lbVI2103;
    WLabel *lbVI3101T;
    WLabel *lbVI3101;
    WLabel *lbTI3113T;
    WLabel *lbTI3113;
    WLabel *lbCompresorT;
    WLabel *lbTI2102T;
    WLabel *lbTI2102;
    WLabel *lbTI3111AT;
    WLabel *lbTI3111;
    WLabel *lbTI3112AT;
    WLabel *lbTI3112;
    WLineEdit *leAlam;
    WLineEdit *leAlam2;
    WLineEdit *leAlam3;
    QCommandLinkButton *btnleAlam2;
    QCommandLinkButton *btnleAlam;
    QCommandLinkButton *btnleAlam3;
    WLineEdit *leAlam3_2;
    WLineEdit *leAlam2_2;

    void setupUi(QWidget *CompresorGas)
    {
        if (CompresorGas->objectName().isEmpty())
            CompresorGas->setObjectName(QString::fromUtf8("CompresorGas"));
        CompresorGas->resize(1024, 662);
        CompresorGas->setMinimumSize(QSize(1024, 662));
        CompresorGas->setMaximumSize(QSize(1024, 662));
        label = new QLabel(CompresorGas);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 1024, 662));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Resources/PNG/N6.png")));
        label->setScaledContents(true);
        lbCompGasT = new WLabel(CompresorGas);
        lbCompGasT->setObjectName(QString::fromUtf8("lbCompGasT"));
        lbCompGasT->setGeometry(QRect(402, 5, 187, 21));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        lbCompGasT->setFont(font);
        lbCommAlmrT = new WLabel(CompresorGas);
        lbCommAlmrT->setObjectName(QString::fromUtf8("lbCommAlmrT"));
        lbCommAlmrT->setGeometry(QRect(19, 7, 115, 16));
        lbCommSdT = new WLabel(CompresorGas);
        lbCommSdT->setObjectName(QString::fromUtf8("lbCommSdT"));
        lbCommSdT->setGeometry(QRect(19, 23, 115, 16));
        lbZSO3101T = new WLabel(CompresorGas);
        lbZSO3101T->setObjectName(QString::fromUtf8("lbZSO3101T"));
        lbZSO3101T->setGeometry(QRect(19, 38, 115, 16));
        lbZSO2102T = new WLabel(CompresorGas);
        lbZSO2102T->setObjectName(QString::fromUtf8("lbZSO2102T"));
        lbZSO2102T->setGeometry(QRect(19, 54, 115, 16));
        lbZSO2101T = new WLabel(CompresorGas);
        lbZSO2101T->setObjectName(QString::fromUtf8("lbZSO2101T"));
        lbZSO2101T->setGeometry(QRect(19, 71, 115, 16));
        lbEdoAlarmT = new WLineEdit(CompresorGas);
        lbEdoAlarmT->setObjectName(QString::fromUtf8("lbEdoAlarmT"));
        lbEdoAlarmT->setGeometry(QRect(158, 6, 191, 16));
        lbEdoAlarmT->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        lbEdoAlarmT->setTipo(0);
        lbEdoParosT = new WLineEdit(CompresorGas);
        lbEdoParosT->setObjectName(QString::fromUtf8("lbEdoParosT"));
        lbEdoParosT->setGeometry(QRect(158, 22, 191, 16));
        lbEdoParosT->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        lbEdoParosT->setTipo(0);
        lbCompMarchaT = new WLineEdit(CompresorGas);
        lbCompMarchaT->setObjectName(QString::fromUtf8("lbCompMarchaT"));
        lbCompMarchaT->setGeometry(QRect(158, 38, 191, 16));
        lbCompMarchaT->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        lbCompMarchaT->setTipo(0);
        lbVentMarchaT = new WLineEdit(CompresorGas);
        lbVentMarchaT->setObjectName(QString::fromUtf8("lbVentMarchaT"));
        lbVentMarchaT->setGeometry(QRect(158, 55, 191, 16));
        lbVentMarchaT->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        lbVentMarchaT->setTipo(0);
        lbBombaLubT = new WLineEdit(CompresorGas);
        lbBombaLubT->setObjectName(QString::fromUtf8("lbBombaLubT"));
        lbBombaLubT->setGeometry(QRect(158, 71, 191, 16));
        lbBombaLubT->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        lbBombaLubT->setTipo(0);
        lbPI1101T = new WLabel(CompresorGas);
        lbPI1101T->setObjectName(QString::fromUtf8("lbPI1101T"));
        lbPI1101T->setGeometry(QRect(52, 187, 106, 16));
        QFont font1;
        font1.setPointSize(7);
        lbPI1101T->setFont(font1);
        lbPI1101 = new WLabel(CompresorGas);
        lbPI1101->setObjectName(QString::fromUtf8("lbPI1101"));
        lbPI1101->setGeometry(QRect(83, 200, 46, 13));
        lbTI_1102 = new WLabel(CompresorGas);
        lbTI_1102->setObjectName(QString::fromUtf8("lbTI_1102"));
        lbTI_1102->setGeometry(QRect(254, 245, 46, 13));
        lbTI_1102T = new WLabel(CompresorGas);
        lbTI_1102T->setObjectName(QString::fromUtf8("lbTI_1102T"));
        lbTI_1102T->setGeometry(QRect(225, 233, 106, 16));
        lbTI_1102T->setFont(font1);
        lbTI_1105 = new WLabel(CompresorGas);
        lbTI_1105->setObjectName(QString::fromUtf8("lbTI_1105"));
        lbTI_1105->setGeometry(QRect(281, 324, 46, 13));
        lbTI_1105T = new WLabel(CompresorGas);
        lbTI_1105T->setObjectName(QString::fromUtf8("lbTI_1105T"));
        lbTI_1105T->setGeometry(QRect(251, 312, 106, 16));
        lbTI_1105T->setFont(font1);
        lbPI1102 = new WLabel(CompresorGas);
        lbPI1102->setObjectName(QString::fromUtf8("lbPI1102"));
        lbPI1102->setGeometry(QRect(113, 314, 46, 13));
        lbPI1102T = new WLabel(CompresorGas);
        lbPI1102T->setObjectName(QString::fromUtf8("lbPI1102T"));
        lbPI1102T->setGeometry(QRect(82, 301, 106, 16));
        lbPI1102T->setFont(font1);
        lbPI1105 = new WLabel(CompresorGas);
        lbPI1105->setObjectName(QString::fromUtf8("lbPI1105"));
        lbPI1105->setGeometry(QRect(277, 454, 46, 13));
        lbPI1105T = new WLabel(CompresorGas);
        lbPI1105T->setObjectName(QString::fromUtf8("lbPI1105T"));
        lbPI1105T->setGeometry(QRect(247, 442, 106, 16));
        lbPI1105T->setFont(font1);
        lbLI1106 = new WLabel(CompresorGas);
        lbLI1106->setObjectName(QString::fromUtf8("lbLI1106"));
        lbLI1106->setGeometry(QRect(117, 405, 46, 13));
        lbLI1106T = new WLabel(CompresorGas);
        lbLI1106T->setObjectName(QString::fromUtf8("lbLI1106T"));
        lbLI1106T->setGeometry(QRect(87, 393, 106, 16));
        lbLI1106T->setFont(font1);
        lbTI1201 = new WLabel(CompresorGas);
        lbTI1201->setObjectName(QString::fromUtf8("lbTI1201"));
        lbTI1201->setGeometry(QRect(649, 245, 46, 13));
        lbTI1201T = new WLabel(CompresorGas);
        lbTI1201T->setObjectName(QString::fromUtf8("lbTI1201T"));
        lbTI1201T->setGeometry(QRect(619, 233, 106, 16));
        lbTI1201T->setFont(font1);
        lbTI1204 = new WLabel(CompresorGas);
        lbTI1204->setObjectName(QString::fromUtf8("lbTI1204"));
        lbTI1204->setGeometry(QRect(675, 324, 46, 13));
        lbTI1204T = new WLabel(CompresorGas);
        lbTI1204T->setObjectName(QString::fromUtf8("lbTI1204T"));
        lbTI1204T->setGeometry(QRect(646, 311, 106, 16));
        lbTI1204T->setFont(font1);
        lbLI1205 = new WLabel(CompresorGas);
        lbLI1205->setObjectName(QString::fromUtf8("lbLI1205"));
        lbLI1205->setGeometry(QRect(512, 405, 46, 13));
        lbLI1205T = new WLabel(CompresorGas);
        lbLI1205T->setObjectName(QString::fromUtf8("lbLI1205T"));
        lbLI1205T->setGeometry(QRect(481, 393, 106, 16));
        lbLI1205T->setFont(font1);
        lbPI1204 = new WLabel(CompresorGas);
        lbPI1204->setObjectName(QString::fromUtf8("lbPI1204"));
        lbPI1204->setGeometry(QRect(671, 455, 46, 13));
        lbPI1204T = new WLabel(CompresorGas);
        lbPI1204T->setObjectName(QString::fromUtf8("lbPI1204T"));
        lbPI1204T->setGeometry(QRect(642, 442, 106, 16));
        lbPI1204T->setFont(font1);
        lbEntGasT = new WLabel(CompresorGas);
        lbEntGasT->setObjectName(QString::fromUtf8("lbEntGasT"));
        lbEntGasT->setGeometry(QRect(1, 252, 53, 21));
        QFont font2;
        font2.setPointSize(6);
        lbEntGasT->setFont(font2);
        btDescription = new QPushButton(CompresorGas);
        btDescription->setObjectName(QString::fromUtf8("btDescription"));
        btDescription->setGeometry(QRect(17, 338, 78, 26));
        btDescription->setFont(font2);
        btDescription->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        lbS100T = new WLabel(CompresorGas);
        lbS100T->setObjectName(QString::fromUtf8("lbS100T"));
        lbS100T->setGeometry(QRect(194, 423, 46, 13));
        QFont font3;
        font3.setPointSize(7);
        font3.setUnderline(true);
        lbS100T->setFont(font3);
        lbB100T = new WLabel(CompresorGas);
        lbB100T->setObjectName(QString::fromUtf8("lbB100T"));
        lbB100T->setGeometry(QRect(355, 206, 46, 13));
        lbB100T->setFont(font3);
        lbC100T = new WLabel(CompresorGas);
        lbC100T->setObjectName(QString::fromUtf8("lbC100T"));
        lbC100T->setGeometry(QRect(357, 292, 46, 13));
        lbC100T->setFont(font3);
        lbB200T = new WLabel(CompresorGas);
        lbB200T->setObjectName(QString::fromUtf8("lbB200T"));
        lbB200T->setGeometry(QRect(355, 384, 46, 13));
        lbB200T->setFont(font3);
        lbS200T = new WLabel(CompresorGas);
        lbS200T->setObjectName(QString::fromUtf8("lbS200T"));
        lbS200T->setGeometry(QRect(592, 423, 46, 13));
        lbS200T->setFont(font3);
        lbM200T = new WLabel(CompresorGas);
        lbM200T->setObjectName(QString::fromUtf8("lbM200T"));
        lbM200T->setGeometry(QRect(480, 452, 46, 13));
        lbM200T->setFont(font3);
        lbB210T = new WLabel(CompresorGas);
        lbB210T->setObjectName(QString::fromUtf8("lbB210T"));
        lbB210T->setGeometry(QRect(752, 206, 46, 13));
        lbB210T->setFont(font3);
        lbC200T = new WLabel(CompresorGas);
        lbC200T->setObjectName(QString::fromUtf8("lbC200T"));
        lbC200T->setGeometry(QRect(755, 291, 46, 13));
        lbC200T->setFont(font3);
        lbB300T = new WLabel(CompresorGas);
        lbB300T->setObjectName(QString::fromUtf8("lbB300T"));
        lbB300T->setGeometry(QRect(752, 384, 46, 13));
        lbB300T->setFont(font3);
        lbF200T = new WLabel(CompresorGas);
        lbF200T->setObjectName(QString::fromUtf8("lbF200T"));
        lbF200T->setGeometry(QRect(931, 596, 46, 13));
        lbF200T->setFont(font3);
        lbTI1305 = new WLabel(CompresorGas);
        lbTI1305->setObjectName(QString::fromUtf8("lbTI1305"));
        lbTI1305->setGeometry(QRect(837, 528, 46, 13));
        lbTI1305T = new WLabel(CompresorGas);
        lbTI1305T->setObjectName(QString::fromUtf8("lbTI1305T"));
        lbTI1305T->setGeometry(QRect(807, 515, 106, 16));
        lbTI1305T->setFont(font1);
        lbLI1308 = new WLabel(CompresorGas);
        lbLI1308->setObjectName(QString::fromUtf8("lbLI1308"));
        lbLI1308->setGeometry(QRect(837, 555, 46, 13));
        lbLI1308T = new WLabel(CompresorGas);
        lbLI1308T->setObjectName(QString::fromUtf8("lbLI1308T"));
        lbLI1308T->setGeometry(QRect(806, 542, 106, 16));
        lbLI1308T->setFont(font1);
        lbLI1310 = new WLabel(CompresorGas);
        lbLI1310->setObjectName(QString::fromUtf8("lbLI1310"));
        lbLI1310->setGeometry(QRect(837, 359, 46, 13));
        lbLI1310T = new WLabel(CompresorGas);
        lbLI1310T->setObjectName(QString::fromUtf8("lbLI1310T"));
        lbLI1310T->setGeometry(QRect(806, 346, 106, 16));
        lbLI1310T->setFont(font1);
        lbPDI1309 = new WLabel(CompresorGas);
        lbPDI1309->setObjectName(QString::fromUtf8("lbPDI1309"));
        lbPDI1309->setGeometry(QRect(837, 331, 46, 13));
        lbPDI1309T = new WLabel(CompresorGas);
        lbPDI1309T->setObjectName(QString::fromUtf8("lbPDI1309T"));
        lbPDI1309T->setGeometry(QRect(805, 319, 106, 16));
        lbPDI1309T->setFont(font1);
        lbSalGasT = new WLabel(CompresorGas);
        lbSalGasT->setObjectName(QString::fromUtf8("lbSalGasT"));
        lbSalGasT->setGeometry(QRect(950, 95, 53, 21));
        lbSalGasT->setFont(font2);
        lbPI1306 = new WLabel(CompresorGas);
        lbPI1306->setObjectName(QString::fromUtf8("lbPI1306"));
        lbPI1306->setGeometry(QRect(944, 40, 46, 13));
        lbPI1306T = new WLabel(CompresorGas);
        lbPI1306T->setObjectName(QString::fromUtf8("lbPI1306T"));
        lbPI1306T->setGeometry(QRect(914, 27, 106, 16));
        lbPI1306T->setFont(font1);
        btImpPant = new QPushButton(CompresorGas);
        btImpPant->setObjectName(QString::fromUtf8("btImpPant"));
        btImpPant->setGeometry(QRect(20, 635, 132, 21));
        btImpPant->setFont(font2);
        btImpPant->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        frame = new QFrame(CompresorGas);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(13, 473, 345, 145));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(175, 175, 175);"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Raised);
        lbMotorT = new WLabel(frame);
        lbMotorT->setObjectName(QString::fromUtf8("lbMotorT"));
        lbMotorT->setGeometry(QRect(86, 0, 106, 20));
        lbPI2103T = new WLabel(frame);
        lbPI2103T->setObjectName(QString::fromUtf8("lbPI2103T"));
        lbPI2103T->setGeometry(QRect(79, 20, 106, 16));
        lbPI2103T->setFont(font1);
        lbPI2103 = new WLabel(frame);
        lbPI2103->setObjectName(QString::fromUtf8("lbPI2103"));
        lbPI2103->setGeometry(QRect(109, 32, 46, 13));
        lbVI2103T = new WLabel(frame);
        lbVI2103T->setObjectName(QString::fromUtf8("lbVI2103T"));
        lbVI2103T->setGeometry(QRect(79, 50, 106, 16));
        lbVI2103T->setFont(font1);
        lbVI2103 = new WLabel(frame);
        lbVI2103->setObjectName(QString::fromUtf8("lbVI2103"));
        lbVI2103->setGeometry(QRect(109, 64, 46, 13));
        lbVI3101T = new WLabel(frame);
        lbVI3101T->setObjectName(QString::fromUtf8("lbVI3101T"));
        lbVI3101T->setGeometry(QRect(79, 82, 106, 16));
        lbVI3101T->setFont(font1);
        lbVI3101 = new WLabel(frame);
        lbVI3101->setObjectName(QString::fromUtf8("lbVI3101"));
        lbVI3101->setGeometry(QRect(109, 95, 46, 13));
        lbTI3113T = new WLabel(frame);
        lbTI3113T->setObjectName(QString::fromUtf8("lbTI3113T"));
        lbTI3113T->setGeometry(QRect(79, 114, 106, 16));
        lbTI3113T->setFont(font1);
        lbTI3113 = new WLabel(frame);
        lbTI3113->setObjectName(QString::fromUtf8("lbTI3113"));
        lbTI3113->setGeometry(QRect(109, 126, 46, 13));
        lbCompresorT = new WLabel(frame);
        lbCompresorT->setObjectName(QString::fromUtf8("lbCompresorT"));
        lbCompresorT->setGeometry(QRect(234, 0, 106, 20));
        lbTI2102T = new WLabel(frame);
        lbTI2102T->setObjectName(QString::fromUtf8("lbTI2102T"));
        lbTI2102T->setGeometry(QRect(227, 20, 106, 16));
        lbTI2102T->setFont(font1);
        lbTI2102 = new WLabel(frame);
        lbTI2102->setObjectName(QString::fromUtf8("lbTI2102"));
        lbTI2102->setGeometry(QRect(256, 32, 46, 13));
        lbTI3111AT = new WLabel(frame);
        lbTI3111AT->setObjectName(QString::fromUtf8("lbTI3111AT"));
        lbTI3111AT->setGeometry(QRect(225, 50, 106, 16));
        lbTI3111AT->setFont(font1);
        lbTI3111 = new WLabel(frame);
        lbTI3111->setObjectName(QString::fromUtf8("lbTI3111"));
        lbTI3111->setGeometry(QRect(256, 64, 46, 13));
        lbTI3112AT = new WLabel(frame);
        lbTI3112AT->setObjectName(QString::fromUtf8("lbTI3112AT"));
        lbTI3112AT->setGeometry(QRect(225, 82, 106, 16));
        lbTI3112AT->setFont(font1);
        lbTI3112 = new WLabel(frame);
        lbTI3112->setObjectName(QString::fromUtf8("lbTI3112"));
        lbTI3112->setGeometry(QRect(256, 95, 46, 13));
        leAlam = new WLineEdit(CompresorGas);
        leAlam->setObjectName(QString::fromUtf8("leAlam"));
        leAlam->setGeometry(QRect(453, 557, 100, 16));
        leAlam->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        leAlam2 = new WLineEdit(CompresorGas);
        leAlam2->setObjectName(QString::fromUtf8("leAlam2"));
        leAlam2->setGeometry(QRect(390, 597, 99, 16));
        leAlam2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        leAlam3 = new WLineEdit(CompresorGas);
        leAlam3->setObjectName(QString::fromUtf8("leAlam3"));
        leAlam3->setGeometry(QRect(523, 597, 99, 16));
        leAlam3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        btnleAlam2 = new QCommandLinkButton(CompresorGas);
        btnleAlam2->setObjectName(QString::fromUtf8("btnleAlam2"));
        btnleAlam2->setGeometry(QRect(390, 597, 99, 33));
        btnleAlam2->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/PNG/Extras/transparente.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnleAlam2->setIcon(icon);
        btnleAlam = new QCommandLinkButton(CompresorGas);
        btnleAlam->setObjectName(QString::fromUtf8("btnleAlam"));
        btnleAlam->setGeometry(QRect(452, 557, 100, 16));
        btnleAlam->setStyleSheet(QString::fromUtf8(""));
        btnleAlam->setIcon(icon);
        btnleAlam3 = new QCommandLinkButton(CompresorGas);
        btnleAlam3->setObjectName(QString::fromUtf8("btnleAlam3"));
        btnleAlam3->setGeometry(QRect(522, 597, 99, 33));
        btnleAlam3->setStyleSheet(QString::fromUtf8(""));
        btnleAlam3->setIcon(icon);
        leAlam3_2 = new WLineEdit(CompresorGas);
        leAlam3_2->setObjectName(QString::fromUtf8("leAlam3_2"));
        leAlam3_2->setGeometry(QRect(523, 615, 99, 16));
        leAlam3_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        leAlam2_2 = new WLineEdit(CompresorGas);
        leAlam2_2->setObjectName(QString::fromUtf8("leAlam2_2"));
        leAlam2_2->setGeometry(QRect(390, 615, 99, 16));
        leAlam2_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        label->raise();
        lbCompGasT->raise();
        lbCommAlmrT->raise();
        lbCommSdT->raise();
        lbZSO3101T->raise();
        lbZSO2102T->raise();
        lbZSO2101T->raise();
        lbEdoAlarmT->raise();
        lbEdoParosT->raise();
        lbCompMarchaT->raise();
        lbVentMarchaT->raise();
        lbBombaLubT->raise();
        lbPI1101T->raise();
        lbPI1101->raise();
        lbTI_1102->raise();
        lbTI_1102T->raise();
        lbTI_1105->raise();
        lbTI_1105T->raise();
        lbPI1102->raise();
        lbPI1102T->raise();
        lbPI1105->raise();
        lbPI1105T->raise();
        lbLI1106->raise();
        lbLI1106T->raise();
        lbTI1201->raise();
        lbTI1201T->raise();
        lbTI1204->raise();
        lbTI1204T->raise();
        lbLI1205->raise();
        lbLI1205T->raise();
        lbPI1204->raise();
        lbPI1204T->raise();
        lbEntGasT->raise();
        btDescription->raise();
        lbS100T->raise();
        lbB100T->raise();
        lbC100T->raise();
        lbB200T->raise();
        lbS200T->raise();
        lbM200T->raise();
        lbB210T->raise();
        lbC200T->raise();
        lbB300T->raise();
        lbF200T->raise();
        lbTI1305->raise();
        lbTI1305T->raise();
        lbLI1308->raise();
        lbLI1308T->raise();
        lbLI1310->raise();
        lbLI1310T->raise();
        lbPDI1309->raise();
        lbPDI1309T->raise();
        lbSalGasT->raise();
        lbPI1306->raise();
        lbPI1306T->raise();
        btImpPant->raise();
        frame->raise();
        leAlam->raise();
        leAlam2->raise();
        leAlam3->raise();
        btnleAlam->raise();
        leAlam3_2->raise();
        leAlam2_2->raise();
        btnleAlam3->raise();
        btnleAlam2->raise();

        retranslateUi(CompresorGas);

        QMetaObject::connectSlotsByName(CompresorGas);
    } // setupUi

    void retranslateUi(QWidget *CompresorGas)
    {
        CompresorGas->setWindowTitle(QApplication::translate("CompresorGas", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        lbCompGasT->setText(QApplication::translate("CompresorGas", "COMPRESOR DE GAS", 0, QApplication::UnicodeUTF8));
        lbCommAlmrT->setText(QApplication::translate("CompresorGas", "GC_B_COMM_ALMR", 0, QApplication::UnicodeUTF8));
        lbCommSdT->setText(QApplication::translate("CompresorGas", "GC_B_COMM_SD", 0, QApplication::UnicodeUTF8));
        lbZSO3101T->setText(QApplication::translate("CompresorGas", "GC_B_ZSO_3101", 0, QApplication::UnicodeUTF8));
        lbZSO2102T->setText(QApplication::translate("CompresorGas", "GC_B_ZSO_2102", 0, QApplication::UnicodeUTF8));
        lbZSO2101T->setText(QApplication::translate("CompresorGas", "GC_B_ZSO_2101", 0, QApplication::UnicodeUTF8));
        lbEdoAlarmT->setId(QApplication::translate("CompresorGas", "p_Fix32_NODE_GC_B_COMM_ALRM_A_ALMEXT2", 0, QApplication::UnicodeUTF8));
        lbEdoAlarmT->setText(QApplication::translate("CompresorGas", "ESTADO DE ALARMAS", 0, QApplication::UnicodeUTF8));
        lbEdoParosT->setId(QApplication::translate("CompresorGas", "p_Fix32_NODE_GC_B_COMM_SD_F_CV", 0, QApplication::UnicodeUTF8));
        lbEdoParosT->setText(QApplication::translate("CompresorGas", "ESTADO DE PAROS", 0, QApplication::UnicodeUTF8));
        lbCompMarchaT->setId(QApplication::translate("CompresorGas", "p_Fix32_NODE_GC_B_ZSO_3101_F_CV", 0, QApplication::UnicodeUTF8));
        lbCompMarchaT->setText(QApplication::translate("CompresorGas", "COMPRESOR EN MARCHA", 0, QApplication::UnicodeUTF8));
        lbVentMarchaT->setId(QApplication::translate("CompresorGas", "p_Fix32_NODE_GC_B_ZSO_2102_F_CV", 0, QApplication::UnicodeUTF8));
        lbVentMarchaT->setText(QApplication::translate("CompresorGas", "VENTILADOR EN MARCHA", 0, QApplication::UnicodeUTF8));
        lbBombaLubT->setId(QApplication::translate("CompresorGas", "p_Fix32_NODE_GC_B_ZSO_2101_F_CV", 0, QApplication::UnicodeUTF8));
        lbBombaLubT->setText(QApplication::translate("CompresorGas", "BONBA DE LUBRICACION EN MARCHA", 0, QApplication::UnicodeUTF8));
        lbPI1101T->setText(QApplication::translate("CompresorGas", "GC_B_PI_1101", 0, QApplication::UnicodeUTF8));
        lbPI1101->setId(QApplication::translate("CompresorGas", "p_Fix32_NODE_GC_B_PI_1101_F_CV", 0, QApplication::UnicodeUTF8));
        lbPI1101->setText(QApplication::translate("CompresorGas", "????", 0, QApplication::UnicodeUTF8));
        lbTI_1102->setId(QApplication::translate("CompresorGas", "p_Fix32_NODE_GC_B_TI_1102_F_CV", 0, QApplication::UnicodeUTF8));
        lbTI_1102->setText(QApplication::translate("CompresorGas", "????", 0, QApplication::UnicodeUTF8));
        lbTI_1102T->setText(QApplication::translate("CompresorGas", "GC_B_TI_1102", 0, QApplication::UnicodeUTF8));
        lbTI_1105->setId(QApplication::translate("CompresorGas", "p_Fix32_NODE_GC_B_TI_1105_F_CV", 0, QApplication::UnicodeUTF8));
        lbTI_1105->setText(QApplication::translate("CompresorGas", "????", 0, QApplication::UnicodeUTF8));
        lbTI_1105T->setText(QApplication::translate("CompresorGas", "GC_B_TI_1105", 0, QApplication::UnicodeUTF8));
        lbPI1102->setId(QApplication::translate("CompresorGas", "p_Fix32_NODE_GC_B_PI_1102_F_CV", 0, QApplication::UnicodeUTF8));
        lbPI1102->setText(QApplication::translate("CompresorGas", "????", 0, QApplication::UnicodeUTF8));
        lbPI1102T->setText(QApplication::translate("CompresorGas", "GC_B_PI_1102", 0, QApplication::UnicodeUTF8));
        lbPI1105->setId(QApplication::translate("CompresorGas", "p_Fix32_NODE_GC_B_PI_1105_F_CV", 0, QApplication::UnicodeUTF8));
        lbPI1105->setText(QApplication::translate("CompresorGas", "????", 0, QApplication::UnicodeUTF8));
        lbPI1105T->setText(QApplication::translate("CompresorGas", "GC_B_PI_1105", 0, QApplication::UnicodeUTF8));
        lbLI1106->setId(QApplication::translate("CompresorGas", "p_Fix32_NODE_GC_B_LI_1106_F_CV", 0, QApplication::UnicodeUTF8));
        lbLI1106->setText(QApplication::translate("CompresorGas", "????", 0, QApplication::UnicodeUTF8));
        lbLI1106T->setText(QApplication::translate("CompresorGas", "GC_B_LI_1106", 0, QApplication::UnicodeUTF8));
        lbTI1201->setId(QApplication::translate("CompresorGas", "p_Fix32_NODE_GC_B_TI_1201_F_CV", 0, QApplication::UnicodeUTF8));
        lbTI1201->setText(QApplication::translate("CompresorGas", "????", 0, QApplication::UnicodeUTF8));
        lbTI1201T->setText(QApplication::translate("CompresorGas", "GC_B_TI_1201", 0, QApplication::UnicodeUTF8));
        lbTI1204->setId(QApplication::translate("CompresorGas", "p_Fix32_NODE_GC_B_TI_1204_F_CV", 0, QApplication::UnicodeUTF8));
        lbTI1204->setText(QApplication::translate("CompresorGas", "????", 0, QApplication::UnicodeUTF8));
        lbTI1204T->setText(QApplication::translate("CompresorGas", "GC_B_TI_1204", 0, QApplication::UnicodeUTF8));
        lbLI1205->setId(QApplication::translate("CompresorGas", "p_Fix32_NODE_GC_B_LI_1205_F_CV", 0, QApplication::UnicodeUTF8));
        lbLI1205->setText(QApplication::translate("CompresorGas", "????", 0, QApplication::UnicodeUTF8));
        lbLI1205T->setText(QApplication::translate("CompresorGas", "GC_B_LI_1205", 0, QApplication::UnicodeUTF8));
        lbPI1204->setId(QApplication::translate("CompresorGas", "p_Fix32_NODE_GC_B_PI_1204_F_CV", 0, QApplication::UnicodeUTF8));
        lbPI1204->setText(QApplication::translate("CompresorGas", "????", 0, QApplication::UnicodeUTF8));
        lbPI1204T->setText(QApplication::translate("CompresorGas", "GC_B_PI_1204", 0, QApplication::UnicodeUTF8));
        lbEntGasT->setText(QApplication::translate("CompresorGas", "ENTRADA DE\n"
" GAS", 0, QApplication::UnicodeUTF8));
        btDescription->setText(QApplication::translate("CompresorGas", "DESCRIPTIONS", 0, QApplication::UnicodeUTF8));
        lbS100T->setText(QApplication::translate("CompresorGas", "S-100", 0, QApplication::UnicodeUTF8));
        lbB100T->setText(QApplication::translate("CompresorGas", "B-100", 0, QApplication::UnicodeUTF8));
        lbC100T->setText(QApplication::translate("CompresorGas", "C-100", 0, QApplication::UnicodeUTF8));
        lbB200T->setText(QApplication::translate("CompresorGas", "B-200", 0, QApplication::UnicodeUTF8));
        lbS200T->setText(QApplication::translate("CompresorGas", "S-200", 0, QApplication::UnicodeUTF8));
        lbM200T->setText(QApplication::translate("CompresorGas", "M-200", 0, QApplication::UnicodeUTF8));
        lbB210T->setText(QApplication::translate("CompresorGas", "B-210", 0, QApplication::UnicodeUTF8));
        lbC200T->setText(QApplication::translate("CompresorGas", "C-200", 0, QApplication::UnicodeUTF8));
        lbB300T->setText(QApplication::translate("CompresorGas", "B-300", 0, QApplication::UnicodeUTF8));
        lbF200T->setText(QApplication::translate("CompresorGas", "F-200", 0, QApplication::UnicodeUTF8));
        lbTI1305->setId(QApplication::translate("CompresorGas", "p_Fix32_NODE_GC_B_TI_1305_F_CV", 0, QApplication::UnicodeUTF8));
        lbTI1305->setText(QApplication::translate("CompresorGas", "????", 0, QApplication::UnicodeUTF8));
        lbTI1305T->setText(QApplication::translate("CompresorGas", "GC_B_TI_1305", 0, QApplication::UnicodeUTF8));
        lbLI1308->setId(QApplication::translate("CompresorGas", "p_Fix32_NODE_GC_B_LI_1308_F_CV", 0, QApplication::UnicodeUTF8));
        lbLI1308->setText(QApplication::translate("CompresorGas", "????", 0, QApplication::UnicodeUTF8));
        lbLI1308T->setText(QApplication::translate("CompresorGas", "GC_B_LI_1308", 0, QApplication::UnicodeUTF8));
        lbLI1310->setId(QApplication::translate("CompresorGas", "p_Fix32_NODE_GC_B_LI_1310_F_CV", 0, QApplication::UnicodeUTF8));
        lbLI1310->setText(QApplication::translate("CompresorGas", "????", 0, QApplication::UnicodeUTF8));
        lbLI1310T->setText(QApplication::translate("CompresorGas", "GC_B_LI_1310", 0, QApplication::UnicodeUTF8));
        lbPDI1309->setId(QApplication::translate("CompresorGas", "p_Fix32_NODE_GC_B_PDI_1309_F_CV", 0, QApplication::UnicodeUTF8));
        lbPDI1309->setText(QApplication::translate("CompresorGas", "????", 0, QApplication::UnicodeUTF8));
        lbPDI1309T->setText(QApplication::translate("CompresorGas", "GC_B_PDI_1309", 0, QApplication::UnicodeUTF8));
        lbSalGasT->setText(QApplication::translate("CompresorGas", "SALIDA DE\n"
" GAS", 0, QApplication::UnicodeUTF8));
        lbPI1306->setId(QApplication::translate("CompresorGas", "p_Fix32_NODE_GC_B_PI_1306_F_CV", 0, QApplication::UnicodeUTF8));
        lbPI1306->setText(QApplication::translate("CompresorGas", "????", 0, QApplication::UnicodeUTF8));
        lbPI1306T->setText(QApplication::translate("CompresorGas", "GC_B_PI_1306", 0, QApplication::UnicodeUTF8));
        btImpPant->setText(QApplication::translate("CompresorGas", "IMP PANT", 0, QApplication::UnicodeUTF8));
        lbMotorT->setText(QApplication::translate("CompresorGas", "MOTOR", 0, QApplication::UnicodeUTF8));
        lbPI2103T->setText(QApplication::translate("CompresorGas", "GC_B_PI_2103", 0, QApplication::UnicodeUTF8));
        lbPI2103->setId(QApplication::translate("CompresorGas", "p_Fix32_NODE_GC_B_PI_2103_F_CV", 0, QApplication::UnicodeUTF8));
        lbPI2103->setText(QApplication::translate("CompresorGas", "????", 0, QApplication::UnicodeUTF8));
        lbVI2103T->setText(QApplication::translate("CompresorGas", "GC_B_VI_2103", 0, QApplication::UnicodeUTF8));
        lbVI2103->setId(QApplication::translate("CompresorGas", "p_Fix32_NODE_GC_B_VI_2103_F_CV", 0, QApplication::UnicodeUTF8));
        lbVI2103->setText(QApplication::translate("CompresorGas", "????", 0, QApplication::UnicodeUTF8));
        lbVI3101T->setText(QApplication::translate("CompresorGas", "GC_B_VI_3101", 0, QApplication::UnicodeUTF8));
        lbVI3101->setId(QApplication::translate("CompresorGas", "p_Fix32_NODE_GC_B_VI_3101_F_CV", 0, QApplication::UnicodeUTF8));
        lbVI3101->setText(QApplication::translate("CompresorGas", "????", 0, QApplication::UnicodeUTF8));
        lbTI3113T->setText(QApplication::translate("CompresorGas", "GC_B_TI_3113", 0, QApplication::UnicodeUTF8));
        lbTI3113->setId(QApplication::translate("CompresorGas", "p_Fix32_NODE_GC_B_TI_3113_F_CV", 0, QApplication::UnicodeUTF8));
        lbTI3113->setText(QApplication::translate("CompresorGas", "????", 0, QApplication::UnicodeUTF8));
        lbCompresorT->setText(QApplication::translate("CompresorGas", "COMPRESOR", 0, QApplication::UnicodeUTF8));
        lbTI2102T->setText(QApplication::translate("CompresorGas", "GC_B_TI_2102", 0, QApplication::UnicodeUTF8));
        lbTI2102->setId(QApplication::translate("CompresorGas", "p_Fix32_NODE_GC_B_TI_2102_F_CV", 0, QApplication::UnicodeUTF8));
        lbTI2102->setText(QApplication::translate("CompresorGas", "????", 0, QApplication::UnicodeUTF8));
        lbTI3111AT->setText(QApplication::translate("CompresorGas", "GC_B_TI_3111A", 0, QApplication::UnicodeUTF8));
        lbTI3111->setId(QApplication::translate("CompresorGas", "p_Fix32_NODE_GC_B_TI_3111A_F_CV", 0, QApplication::UnicodeUTF8));
        lbTI3111->setText(QApplication::translate("CompresorGas", "????", 0, QApplication::UnicodeUTF8));
        lbTI3112AT->setText(QApplication::translate("CompresorGas", "GC_B_TI_3112A", 0, QApplication::UnicodeUTF8));
        lbTI3112->setId(QApplication::translate("CompresorGas", "p_Fix32_NODE_GC_B_TI_3112A_F_CV", 0, QApplication::UnicodeUTF8));
        lbTI3112->setText(QApplication::translate("CompresorGas", "????", 0, QApplication::UnicodeUTF8));
        leAlam->setId(QApplication::translate("CompresorGas", "p_Fix32_NODE_GC_B_VI_3120_A_Tag", 0, QApplication::UnicodeUTF8));
        leAlam->setText(QString());
        leAlam2->setId(QApplication::translate("CompresorGas", "p_Fix32_NODE_YSA_FM_1_A_Tag", 0, QApplication::UnicodeUTF8));
        leAlam2->setText(QString());
        leAlam3->setId(QApplication::translate("CompresorGas", "p_Fix32_NODE_YSA_CM_1_A_Tag", 0, QApplication::UnicodeUTF8));
        leAlam3->setText(QString());
        btnleAlam2->setText(QString());
        btnleAlam->setText(QString());
        btnleAlam3->setText(QString());
        leAlam3_2->setId(QApplication::translate("CompresorGas", "p_Fix32_NODE_YSA_PM_1_A_Tag", 0, QApplication::UnicodeUTF8));
        leAlam3_2->setText(QString());
        leAlam2_2->setId(QApplication::translate("CompresorGas", "p_Fix32_NODE_YSA_FM_2_A_Tag", 0, QApplication::UnicodeUTF8));
        leAlam2_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CompresorGas: public Ui_CompresorGas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPRESORGAS_H
