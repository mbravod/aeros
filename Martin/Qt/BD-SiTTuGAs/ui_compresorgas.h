/********************************************************************************
** Form generated from reading UI file 'compresorgas.ui'
**
** Created: Mon 9. Dec 19:12:10 2013
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
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CompresorGas
{
public:
    QLabel *label;
    QLabel *lbCompGasT;
    QLabel *lbCommAlmrT;
    QLabel *lbCommSdT;
    QLabel *lbZSO3101T;
    QLabel *lbZSO2102T;
    QLabel *lbZSO2101T;
    QLabel *lbEdoAlarmT;
    QLabel *lbEdoParosT;
    QLabel *lbCompMarchaT;
    QLabel *lbVentMarchaT;
    QLabel *lbBombaLubT;
    QLabel *lbPI1101T;
    QLabel *lbPI1101;
    QLabel *lbTI_1102;
    QLabel *lbTI_1102T;
    QLabel *lbTI_1105;
    QLabel *lbTI_1105T;
    QLabel *lbPI1102;
    QLabel *lbPI1102T;
    QLabel *lbPI1105;
    QLabel *lbPI1105T;
    QLabel *lbLI1106;
    QLabel *lbLI1106T;
    QLabel *lbTI1201;
    QLabel *lbTI1201T;
    QLabel *lbTI1204;
    QLabel *lbTI1204T;
    QLabel *lbLI1205;
    QLabel *lbLI1205T;
    QLabel *lbPI1204;
    QLabel *lbPI1204T;
    QLabel *lbEntGasT;
    QPushButton *btDescription;
    QLabel *lbS100T;
    QLabel *lbB100T;
    QLabel *lbC100T;
    QLabel *lbB200T;
    QLabel *lbS200T;
    QLabel *lbM200T;
    QLabel *lbB210T;
    QLabel *lbC200T;
    QLabel *lbB300T;
    QLabel *lbF200T;
    QLabel *lbTI1305;
    QLabel *lbTI1305T;
    QLabel *lbLI1308;
    QLabel *lbLI1308T;
    QLabel *lbLI1310;
    QLabel *lbLI1310T;
    QLabel *lbPDI1309;
    QLabel *lbPDI1309T;
    QLabel *lbSalGasT;
    QLabel *lbPI1306;
    QLabel *lbPI1306T;
    QPushButton *btImpPant;
    QFrame *frame;
    QLabel *lbMotorT;
    QLabel *lbPI2103T;
    QLabel *lbPI2103;
    QLabel *lbVI2103T;
    QLabel *lbVI2103;
    QLabel *lbVI3101T;
    QLabel *lbVI3101;
    QLabel *lbTI3113T;
    QLabel *lbTI3113;
    QLabel *lbCompresorT;
    QLabel *lbTI2102T;
    QLabel *lbTI2102;
    QLabel *lbTI3111AT;
    QLabel *lbTI3111;
    QLabel *lbTI3112AT;
    QLabel *lbTI3112;
    QLineEdit *leAlam;
    QLineEdit *leAlam2;
    QLineEdit *leAlam3;
    QCommandLinkButton *btnleAlam2;
    QCommandLinkButton *btnleAlam;
    QCommandLinkButton *btnleAlam3;

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
        lbCompGasT = new QLabel(CompresorGas);
        lbCompGasT->setObjectName(QString::fromUtf8("lbCompGasT"));
        lbCompGasT->setGeometry(QRect(402, 5, 187, 21));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        lbCompGasT->setFont(font);
        lbCompGasT->setAlignment(Qt::AlignCenter);
        lbCommAlmrT = new QLabel(CompresorGas);
        lbCommAlmrT->setObjectName(QString::fromUtf8("lbCommAlmrT"));
        lbCommAlmrT->setGeometry(QRect(19, 7, 115, 16));
        lbCommSdT = new QLabel(CompresorGas);
        lbCommSdT->setObjectName(QString::fromUtf8("lbCommSdT"));
        lbCommSdT->setGeometry(QRect(19, 23, 115, 16));
        lbZSO3101T = new QLabel(CompresorGas);
        lbZSO3101T->setObjectName(QString::fromUtf8("lbZSO3101T"));
        lbZSO3101T->setGeometry(QRect(19, 38, 115, 16));
        lbZSO2102T = new QLabel(CompresorGas);
        lbZSO2102T->setObjectName(QString::fromUtf8("lbZSO2102T"));
        lbZSO2102T->setGeometry(QRect(19, 54, 115, 16));
        lbZSO2101T = new QLabel(CompresorGas);
        lbZSO2101T->setObjectName(QString::fromUtf8("lbZSO2101T"));
        lbZSO2101T->setGeometry(QRect(19, 71, 115, 16));
        lbEdoAlarmT = new QLabel(CompresorGas);
        lbEdoAlarmT->setObjectName(QString::fromUtf8("lbEdoAlarmT"));
        lbEdoAlarmT->setGeometry(QRect(158, 6, 191, 16));
        lbEdoAlarmT->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        lbEdoParosT = new QLabel(CompresorGas);
        lbEdoParosT->setObjectName(QString::fromUtf8("lbEdoParosT"));
        lbEdoParosT->setGeometry(QRect(158, 22, 191, 16));
        lbEdoParosT->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        lbCompMarchaT = new QLabel(CompresorGas);
        lbCompMarchaT->setObjectName(QString::fromUtf8("lbCompMarchaT"));
        lbCompMarchaT->setGeometry(QRect(158, 38, 191, 16));
        lbCompMarchaT->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        lbVentMarchaT = new QLabel(CompresorGas);
        lbVentMarchaT->setObjectName(QString::fromUtf8("lbVentMarchaT"));
        lbVentMarchaT->setGeometry(QRect(158, 55, 191, 16));
        lbVentMarchaT->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        lbBombaLubT = new QLabel(CompresorGas);
        lbBombaLubT->setObjectName(QString::fromUtf8("lbBombaLubT"));
        lbBombaLubT->setGeometry(QRect(158, 71, 191, 16));
        lbBombaLubT->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        lbPI1101T = new QLabel(CompresorGas);
        lbPI1101T->setObjectName(QString::fromUtf8("lbPI1101T"));
        lbPI1101T->setGeometry(QRect(52, 187, 106, 16));
        QFont font1;
        font1.setPointSize(7);
        lbPI1101T->setFont(font1);
        lbPI1101T->setAlignment(Qt::AlignCenter);
        lbPI1101 = new QLabel(CompresorGas);
        lbPI1101->setObjectName(QString::fromUtf8("lbPI1101"));
        lbPI1101->setGeometry(QRect(83, 200, 46, 13));
        lbPI1101->setAlignment(Qt::AlignCenter);
        lbTI_1102 = new QLabel(CompresorGas);
        lbTI_1102->setObjectName(QString::fromUtf8("lbTI_1102"));
        lbTI_1102->setGeometry(QRect(254, 245, 46, 13));
        lbTI_1102->setAlignment(Qt::AlignCenter);
        lbTI_1102T = new QLabel(CompresorGas);
        lbTI_1102T->setObjectName(QString::fromUtf8("lbTI_1102T"));
        lbTI_1102T->setGeometry(QRect(225, 233, 106, 16));
        lbTI_1102T->setFont(font1);
        lbTI_1102T->setAlignment(Qt::AlignCenter);
        lbTI_1105 = new QLabel(CompresorGas);
        lbTI_1105->setObjectName(QString::fromUtf8("lbTI_1105"));
        lbTI_1105->setGeometry(QRect(281, 324, 46, 13));
        lbTI_1105->setAlignment(Qt::AlignCenter);
        lbTI_1105T = new QLabel(CompresorGas);
        lbTI_1105T->setObjectName(QString::fromUtf8("lbTI_1105T"));
        lbTI_1105T->setGeometry(QRect(251, 312, 106, 16));
        lbTI_1105T->setFont(font1);
        lbTI_1105T->setAlignment(Qt::AlignCenter);
        lbPI1102 = new QLabel(CompresorGas);
        lbPI1102->setObjectName(QString::fromUtf8("lbPI1102"));
        lbPI1102->setGeometry(QRect(113, 314, 46, 13));
        lbPI1102->setAlignment(Qt::AlignCenter);
        lbPI1102T = new QLabel(CompresorGas);
        lbPI1102T->setObjectName(QString::fromUtf8("lbPI1102T"));
        lbPI1102T->setGeometry(QRect(82, 301, 106, 16));
        lbPI1102T->setFont(font1);
        lbPI1102T->setAlignment(Qt::AlignCenter);
        lbPI1105 = new QLabel(CompresorGas);
        lbPI1105->setObjectName(QString::fromUtf8("lbPI1105"));
        lbPI1105->setGeometry(QRect(277, 454, 46, 13));
        lbPI1105->setAlignment(Qt::AlignCenter);
        lbPI1105T = new QLabel(CompresorGas);
        lbPI1105T->setObjectName(QString::fromUtf8("lbPI1105T"));
        lbPI1105T->setGeometry(QRect(247, 442, 106, 16));
        lbPI1105T->setFont(font1);
        lbPI1105T->setAlignment(Qt::AlignCenter);
        lbLI1106 = new QLabel(CompresorGas);
        lbLI1106->setObjectName(QString::fromUtf8("lbLI1106"));
        lbLI1106->setGeometry(QRect(117, 405, 46, 13));
        lbLI1106->setAlignment(Qt::AlignCenter);
        lbLI1106T = new QLabel(CompresorGas);
        lbLI1106T->setObjectName(QString::fromUtf8("lbLI1106T"));
        lbLI1106T->setGeometry(QRect(87, 393, 106, 16));
        lbLI1106T->setFont(font1);
        lbLI1106T->setAlignment(Qt::AlignCenter);
        lbTI1201 = new QLabel(CompresorGas);
        lbTI1201->setObjectName(QString::fromUtf8("lbTI1201"));
        lbTI1201->setGeometry(QRect(649, 245, 46, 13));
        lbTI1201->setAlignment(Qt::AlignCenter);
        lbTI1201T = new QLabel(CompresorGas);
        lbTI1201T->setObjectName(QString::fromUtf8("lbTI1201T"));
        lbTI1201T->setGeometry(QRect(619, 233, 106, 16));
        lbTI1201T->setFont(font1);
        lbTI1201T->setAlignment(Qt::AlignCenter);
        lbTI1204 = new QLabel(CompresorGas);
        lbTI1204->setObjectName(QString::fromUtf8("lbTI1204"));
        lbTI1204->setGeometry(QRect(675, 324, 46, 13));
        lbTI1204->setAlignment(Qt::AlignCenter);
        lbTI1204T = new QLabel(CompresorGas);
        lbTI1204T->setObjectName(QString::fromUtf8("lbTI1204T"));
        lbTI1204T->setGeometry(QRect(646, 311, 106, 16));
        lbTI1204T->setFont(font1);
        lbTI1204T->setAlignment(Qt::AlignCenter);
        lbLI1205 = new QLabel(CompresorGas);
        lbLI1205->setObjectName(QString::fromUtf8("lbLI1205"));
        lbLI1205->setGeometry(QRect(512, 405, 46, 13));
        lbLI1205->setAlignment(Qt::AlignCenter);
        lbLI1205T = new QLabel(CompresorGas);
        lbLI1205T->setObjectName(QString::fromUtf8("lbLI1205T"));
        lbLI1205T->setGeometry(QRect(481, 393, 106, 16));
        lbLI1205T->setFont(font1);
        lbLI1205T->setAlignment(Qt::AlignCenter);
        lbPI1204 = new QLabel(CompresorGas);
        lbPI1204->setObjectName(QString::fromUtf8("lbPI1204"));
        lbPI1204->setGeometry(QRect(671, 455, 46, 13));
        lbPI1204->setAlignment(Qt::AlignCenter);
        lbPI1204T = new QLabel(CompresorGas);
        lbPI1204T->setObjectName(QString::fromUtf8("lbPI1204T"));
        lbPI1204T->setGeometry(QRect(642, 442, 106, 16));
        lbPI1204T->setFont(font1);
        lbPI1204T->setAlignment(Qt::AlignCenter);
        lbEntGasT = new QLabel(CompresorGas);
        lbEntGasT->setObjectName(QString::fromUtf8("lbEntGasT"));
        lbEntGasT->setGeometry(QRect(1, 252, 53, 21));
        QFont font2;
        font2.setPointSize(6);
        lbEntGasT->setFont(font2);
        lbEntGasT->setAlignment(Qt::AlignCenter);
        btDescription = new QPushButton(CompresorGas);
        btDescription->setObjectName(QString::fromUtf8("btDescription"));
        btDescription->setGeometry(QRect(17, 338, 78, 26));
        btDescription->setFont(font2);
        btDescription->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        lbS100T = new QLabel(CompresorGas);
        lbS100T->setObjectName(QString::fromUtf8("lbS100T"));
        lbS100T->setGeometry(QRect(194, 423, 46, 13));
        QFont font3;
        font3.setPointSize(7);
        font3.setUnderline(true);
        lbS100T->setFont(font3);
        lbS100T->setAlignment(Qt::AlignCenter);
        lbB100T = new QLabel(CompresorGas);
        lbB100T->setObjectName(QString::fromUtf8("lbB100T"));
        lbB100T->setGeometry(QRect(355, 206, 46, 13));
        lbB100T->setFont(font3);
        lbB100T->setAlignment(Qt::AlignCenter);
        lbC100T = new QLabel(CompresorGas);
        lbC100T->setObjectName(QString::fromUtf8("lbC100T"));
        lbC100T->setGeometry(QRect(357, 292, 46, 13));
        lbC100T->setFont(font3);
        lbC100T->setAlignment(Qt::AlignCenter);
        lbB200T = new QLabel(CompresorGas);
        lbB200T->setObjectName(QString::fromUtf8("lbB200T"));
        lbB200T->setGeometry(QRect(355, 384, 46, 13));
        lbB200T->setFont(font3);
        lbB200T->setAlignment(Qt::AlignCenter);
        lbS200T = new QLabel(CompresorGas);
        lbS200T->setObjectName(QString::fromUtf8("lbS200T"));
        lbS200T->setGeometry(QRect(592, 423, 46, 13));
        lbS200T->setFont(font3);
        lbS200T->setAlignment(Qt::AlignCenter);
        lbM200T = new QLabel(CompresorGas);
        lbM200T->setObjectName(QString::fromUtf8("lbM200T"));
        lbM200T->setGeometry(QRect(480, 452, 46, 13));
        lbM200T->setFont(font3);
        lbM200T->setAlignment(Qt::AlignCenter);
        lbB210T = new QLabel(CompresorGas);
        lbB210T->setObjectName(QString::fromUtf8("lbB210T"));
        lbB210T->setGeometry(QRect(752, 206, 46, 13));
        lbB210T->setFont(font3);
        lbB210T->setAlignment(Qt::AlignCenter);
        lbC200T = new QLabel(CompresorGas);
        lbC200T->setObjectName(QString::fromUtf8("lbC200T"));
        lbC200T->setGeometry(QRect(755, 291, 46, 13));
        lbC200T->setFont(font3);
        lbC200T->setAlignment(Qt::AlignCenter);
        lbB300T = new QLabel(CompresorGas);
        lbB300T->setObjectName(QString::fromUtf8("lbB300T"));
        lbB300T->setGeometry(QRect(752, 384, 46, 13));
        lbB300T->setFont(font3);
        lbB300T->setAlignment(Qt::AlignCenter);
        lbF200T = new QLabel(CompresorGas);
        lbF200T->setObjectName(QString::fromUtf8("lbF200T"));
        lbF200T->setGeometry(QRect(931, 596, 46, 13));
        lbF200T->setFont(font3);
        lbF200T->setAlignment(Qt::AlignCenter);
        lbTI1305 = new QLabel(CompresorGas);
        lbTI1305->setObjectName(QString::fromUtf8("lbTI1305"));
        lbTI1305->setGeometry(QRect(837, 528, 46, 13));
        lbTI1305->setAlignment(Qt::AlignCenter);
        lbTI1305T = new QLabel(CompresorGas);
        lbTI1305T->setObjectName(QString::fromUtf8("lbTI1305T"));
        lbTI1305T->setGeometry(QRect(807, 515, 106, 16));
        lbTI1305T->setFont(font1);
        lbTI1305T->setAlignment(Qt::AlignCenter);
        lbLI1308 = new QLabel(CompresorGas);
        lbLI1308->setObjectName(QString::fromUtf8("lbLI1308"));
        lbLI1308->setGeometry(QRect(837, 555, 46, 13));
        lbLI1308->setAlignment(Qt::AlignCenter);
        lbLI1308T = new QLabel(CompresorGas);
        lbLI1308T->setObjectName(QString::fromUtf8("lbLI1308T"));
        lbLI1308T->setGeometry(QRect(806, 542, 106, 16));
        lbLI1308T->setFont(font1);
        lbLI1308T->setAlignment(Qt::AlignCenter);
        lbLI1310 = new QLabel(CompresorGas);
        lbLI1310->setObjectName(QString::fromUtf8("lbLI1310"));
        lbLI1310->setGeometry(QRect(837, 359, 46, 13));
        lbLI1310->setAlignment(Qt::AlignCenter);
        lbLI1310T = new QLabel(CompresorGas);
        lbLI1310T->setObjectName(QString::fromUtf8("lbLI1310T"));
        lbLI1310T->setGeometry(QRect(806, 346, 106, 16));
        lbLI1310T->setFont(font1);
        lbLI1310T->setAlignment(Qt::AlignCenter);
        lbPDI1309 = new QLabel(CompresorGas);
        lbPDI1309->setObjectName(QString::fromUtf8("lbPDI1309"));
        lbPDI1309->setGeometry(QRect(837, 331, 46, 13));
        lbPDI1309->setAlignment(Qt::AlignCenter);
        lbPDI1309T = new QLabel(CompresorGas);
        lbPDI1309T->setObjectName(QString::fromUtf8("lbPDI1309T"));
        lbPDI1309T->setGeometry(QRect(805, 319, 106, 16));
        lbPDI1309T->setFont(font1);
        lbPDI1309T->setAlignment(Qt::AlignCenter);
        lbSalGasT = new QLabel(CompresorGas);
        lbSalGasT->setObjectName(QString::fromUtf8("lbSalGasT"));
        lbSalGasT->setGeometry(QRect(950, 95, 53, 21));
        lbSalGasT->setFont(font2);
        lbSalGasT->setAlignment(Qt::AlignCenter);
        lbPI1306 = new QLabel(CompresorGas);
        lbPI1306->setObjectName(QString::fromUtf8("lbPI1306"));
        lbPI1306->setGeometry(QRect(944, 40, 46, 13));
        lbPI1306->setAlignment(Qt::AlignCenter);
        lbPI1306T = new QLabel(CompresorGas);
        lbPI1306T->setObjectName(QString::fromUtf8("lbPI1306T"));
        lbPI1306T->setGeometry(QRect(914, 27, 106, 16));
        lbPI1306T->setFont(font1);
        lbPI1306T->setAlignment(Qt::AlignCenter);
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
        lbMotorT = new QLabel(frame);
        lbMotorT->setObjectName(QString::fromUtf8("lbMotorT"));
        lbMotorT->setGeometry(QRect(86, 0, 106, 20));
        lbMotorT->setAlignment(Qt::AlignCenter);
        lbPI2103T = new QLabel(frame);
        lbPI2103T->setObjectName(QString::fromUtf8("lbPI2103T"));
        lbPI2103T->setGeometry(QRect(79, 20, 106, 16));
        lbPI2103T->setFont(font1);
        lbPI2103T->setAlignment(Qt::AlignCenter);
        lbPI2103 = new QLabel(frame);
        lbPI2103->setObjectName(QString::fromUtf8("lbPI2103"));
        lbPI2103->setGeometry(QRect(109, 32, 46, 13));
        lbPI2103->setAlignment(Qt::AlignCenter);
        lbVI2103T = new QLabel(frame);
        lbVI2103T->setObjectName(QString::fromUtf8("lbVI2103T"));
        lbVI2103T->setGeometry(QRect(79, 50, 106, 16));
        lbVI2103T->setFont(font1);
        lbVI2103T->setAlignment(Qt::AlignCenter);
        lbVI2103 = new QLabel(frame);
        lbVI2103->setObjectName(QString::fromUtf8("lbVI2103"));
        lbVI2103->setGeometry(QRect(109, 64, 46, 13));
        lbVI2103->setAlignment(Qt::AlignCenter);
        lbVI3101T = new QLabel(frame);
        lbVI3101T->setObjectName(QString::fromUtf8("lbVI3101T"));
        lbVI3101T->setGeometry(QRect(79, 82, 106, 16));
        lbVI3101T->setFont(font1);
        lbVI3101T->setAlignment(Qt::AlignCenter);
        lbVI3101 = new QLabel(frame);
        lbVI3101->setObjectName(QString::fromUtf8("lbVI3101"));
        lbVI3101->setGeometry(QRect(109, 95, 46, 13));
        lbVI3101->setAlignment(Qt::AlignCenter);
        lbTI3113T = new QLabel(frame);
        lbTI3113T->setObjectName(QString::fromUtf8("lbTI3113T"));
        lbTI3113T->setGeometry(QRect(79, 114, 106, 16));
        lbTI3113T->setFont(font1);
        lbTI3113T->setAlignment(Qt::AlignCenter);
        lbTI3113 = new QLabel(frame);
        lbTI3113->setObjectName(QString::fromUtf8("lbTI3113"));
        lbTI3113->setGeometry(QRect(109, 126, 46, 13));
        lbTI3113->setAlignment(Qt::AlignCenter);
        lbCompresorT = new QLabel(frame);
        lbCompresorT->setObjectName(QString::fromUtf8("lbCompresorT"));
        lbCompresorT->setGeometry(QRect(234, 0, 106, 20));
        lbCompresorT->setAlignment(Qt::AlignCenter);
        lbTI2102T = new QLabel(frame);
        lbTI2102T->setObjectName(QString::fromUtf8("lbTI2102T"));
        lbTI2102T->setGeometry(QRect(227, 20, 106, 16));
        lbTI2102T->setFont(font1);
        lbTI2102T->setAlignment(Qt::AlignCenter);
        lbTI2102 = new QLabel(frame);
        lbTI2102->setObjectName(QString::fromUtf8("lbTI2102"));
        lbTI2102->setGeometry(QRect(256, 32, 46, 13));
        lbTI2102->setAlignment(Qt::AlignCenter);
        lbTI3111AT = new QLabel(frame);
        lbTI3111AT->setObjectName(QString::fromUtf8("lbTI3111AT"));
        lbTI3111AT->setGeometry(QRect(225, 50, 106, 16));
        lbTI3111AT->setFont(font1);
        lbTI3111AT->setAlignment(Qt::AlignCenter);
        lbTI3111 = new QLabel(frame);
        lbTI3111->setObjectName(QString::fromUtf8("lbTI3111"));
        lbTI3111->setGeometry(QRect(256, 64, 46, 13));
        lbTI3111->setAlignment(Qt::AlignCenter);
        lbTI3112AT = new QLabel(frame);
        lbTI3112AT->setObjectName(QString::fromUtf8("lbTI3112AT"));
        lbTI3112AT->setGeometry(QRect(225, 82, 106, 16));
        lbTI3112AT->setFont(font1);
        lbTI3112AT->setAlignment(Qt::AlignCenter);
        lbTI3112 = new QLabel(frame);
        lbTI3112->setObjectName(QString::fromUtf8("lbTI3112"));
        lbTI3112->setGeometry(QRect(256, 95, 46, 13));
        lbTI3112->setAlignment(Qt::AlignCenter);
        leAlam = new QLineEdit(CompresorGas);
        leAlam->setObjectName(QString::fromUtf8("leAlam"));
        leAlam->setGeometry(QRect(453, 557, 100, 16));
        leAlam->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        leAlam2 = new QLineEdit(CompresorGas);
        leAlam2->setObjectName(QString::fromUtf8("leAlam2"));
        leAlam2->setGeometry(QRect(398, 597, 99, 33));
        leAlam2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        leAlam3 = new QLineEdit(CompresorGas);
        leAlam3->setObjectName(QString::fromUtf8("leAlam3"));
        leAlam3->setGeometry(QRect(523, 597, 99, 33));
        leAlam3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        btnleAlam2 = new QCommandLinkButton(CompresorGas);
        btnleAlam2->setObjectName(QString::fromUtf8("btnleAlam2"));
        btnleAlam2->setGeometry(QRect(398, 598, 99, 33));
        btnleAlam2->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/PNG/Extras/transparente.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnleAlam2->setIcon(icon);
        btnleAlam = new QCommandLinkButton(CompresorGas);
        btnleAlam->setObjectName(QString::fromUtf8("btnleAlam"));
        btnleAlam->setGeometry(QRect(453, 557, 100, 16));
        btnleAlam->setStyleSheet(QString::fromUtf8(""));
        btnleAlam->setIcon(icon);
        btnleAlam3 = new QCommandLinkButton(CompresorGas);
        btnleAlam3->setObjectName(QString::fromUtf8("btnleAlam3"));
        btnleAlam3->setGeometry(QRect(523, 598, 99, 33));
        btnleAlam3->setStyleSheet(QString::fromUtf8(""));
        btnleAlam3->setIcon(icon);

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
        lbEdoAlarmT->setText(QApplication::translate("CompresorGas", "ESTADO DE ALARMAS", 0, QApplication::UnicodeUTF8));
        lbEdoParosT->setText(QApplication::translate("CompresorGas", "ESTADO DE PAROS", 0, QApplication::UnicodeUTF8));
        lbCompMarchaT->setText(QApplication::translate("CompresorGas", "COMPRESOR EN MARCHA", 0, QApplication::UnicodeUTF8));
        lbVentMarchaT->setText(QApplication::translate("CompresorGas", "VENTILADOR EN MARCHA", 0, QApplication::UnicodeUTF8));
        lbBombaLubT->setText(QApplication::translate("CompresorGas", "BONBA DE LUBRICACION EN MARCHA", 0, QApplication::UnicodeUTF8));
        lbPI1101T->setText(QApplication::translate("CompresorGas", "GC_B_PI_1101", 0, QApplication::UnicodeUTF8));
        lbPI1101->setText(QApplication::translate("CompresorGas", "????", 0, QApplication::UnicodeUTF8));
        lbTI_1102->setText(QApplication::translate("CompresorGas", "????", 0, QApplication::UnicodeUTF8));
        lbTI_1102T->setText(QApplication::translate("CompresorGas", "GC_B_TI_1102", 0, QApplication::UnicodeUTF8));
        lbTI_1105->setText(QApplication::translate("CompresorGas", "????", 0, QApplication::UnicodeUTF8));
        lbTI_1105T->setText(QApplication::translate("CompresorGas", "GC_B_TI_1105", 0, QApplication::UnicodeUTF8));
        lbPI1102->setText(QApplication::translate("CompresorGas", "????", 0, QApplication::UnicodeUTF8));
        lbPI1102T->setText(QApplication::translate("CompresorGas", "GC_B_PI_1102", 0, QApplication::UnicodeUTF8));
        lbPI1105->setText(QApplication::translate("CompresorGas", "????", 0, QApplication::UnicodeUTF8));
        lbPI1105T->setText(QApplication::translate("CompresorGas", "GC_B_PI_1105", 0, QApplication::UnicodeUTF8));
        lbLI1106->setText(QApplication::translate("CompresorGas", "????", 0, QApplication::UnicodeUTF8));
        lbLI1106T->setText(QApplication::translate("CompresorGas", "GC_B_LI_1106", 0, QApplication::UnicodeUTF8));
        lbTI1201->setText(QApplication::translate("CompresorGas", "????", 0, QApplication::UnicodeUTF8));
        lbTI1201T->setText(QApplication::translate("CompresorGas", "GC_B_TI_1201", 0, QApplication::UnicodeUTF8));
        lbTI1204->setText(QApplication::translate("CompresorGas", "????", 0, QApplication::UnicodeUTF8));
        lbTI1204T->setText(QApplication::translate("CompresorGas", "GC_B_TI_1204", 0, QApplication::UnicodeUTF8));
        lbLI1205->setText(QApplication::translate("CompresorGas", "????", 0, QApplication::UnicodeUTF8));
        lbLI1205T->setText(QApplication::translate("CompresorGas", "GC_B_LI_1205", 0, QApplication::UnicodeUTF8));
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
        lbTI1305->setText(QApplication::translate("CompresorGas", "????", 0, QApplication::UnicodeUTF8));
        lbTI1305T->setText(QApplication::translate("CompresorGas", "GC_B_TI_1305", 0, QApplication::UnicodeUTF8));
        lbLI1308->setText(QApplication::translate("CompresorGas", "????", 0, QApplication::UnicodeUTF8));
        lbLI1308T->setText(QApplication::translate("CompresorGas", "GC_B_LI_1308", 0, QApplication::UnicodeUTF8));
        lbLI1310->setText(QApplication::translate("CompresorGas", "????", 0, QApplication::UnicodeUTF8));
        lbLI1310T->setText(QApplication::translate("CompresorGas", "GC_B_LI_1310", 0, QApplication::UnicodeUTF8));
        lbPDI1309->setText(QApplication::translate("CompresorGas", "????", 0, QApplication::UnicodeUTF8));
        lbPDI1309T->setText(QApplication::translate("CompresorGas", "GC_B_PDI_1309", 0, QApplication::UnicodeUTF8));
        lbSalGasT->setText(QApplication::translate("CompresorGas", "SALIDA DE\n"
" GAS", 0, QApplication::UnicodeUTF8));
        lbPI1306->setText(QApplication::translate("CompresorGas", "????", 0, QApplication::UnicodeUTF8));
        lbPI1306T->setText(QApplication::translate("CompresorGas", "GC_B_PI_1306", 0, QApplication::UnicodeUTF8));
        btImpPant->setText(QApplication::translate("CompresorGas", "IMP PANT", 0, QApplication::UnicodeUTF8));
        lbMotorT->setText(QApplication::translate("CompresorGas", "MOTOR", 0, QApplication::UnicodeUTF8));
        lbPI2103T->setText(QApplication::translate("CompresorGas", "GC_B_PI_2103", 0, QApplication::UnicodeUTF8));
        lbPI2103->setText(QApplication::translate("CompresorGas", "????", 0, QApplication::UnicodeUTF8));
        lbVI2103T->setText(QApplication::translate("CompresorGas", "GC_B_VI_2103", 0, QApplication::UnicodeUTF8));
        lbVI2103->setText(QApplication::translate("CompresorGas", "????", 0, QApplication::UnicodeUTF8));
        lbVI3101T->setText(QApplication::translate("CompresorGas", "GC_B_VI_3101", 0, QApplication::UnicodeUTF8));
        lbVI3101->setText(QApplication::translate("CompresorGas", "????", 0, QApplication::UnicodeUTF8));
        lbTI3113T->setText(QApplication::translate("CompresorGas", "GC_B_TI_3113", 0, QApplication::UnicodeUTF8));
        lbTI3113->setText(QApplication::translate("CompresorGas", "????", 0, QApplication::UnicodeUTF8));
        lbCompresorT->setText(QApplication::translate("CompresorGas", "COMPRESOR", 0, QApplication::UnicodeUTF8));
        lbTI2102T->setText(QApplication::translate("CompresorGas", "GC_B_TI_2102", 0, QApplication::UnicodeUTF8));
        lbTI2102->setText(QApplication::translate("CompresorGas", "????", 0, QApplication::UnicodeUTF8));
        lbTI3111AT->setText(QApplication::translate("CompresorGas", "GC_B_TI_3111A", 0, QApplication::UnicodeUTF8));
        lbTI3111->setText(QApplication::translate("CompresorGas", "????", 0, QApplication::UnicodeUTF8));
        lbTI3112AT->setText(QApplication::translate("CompresorGas", "GC_B_TI_3112A", 0, QApplication::UnicodeUTF8));
        lbTI3112->setText(QApplication::translate("CompresorGas", "????", 0, QApplication::UnicodeUTF8));
        btnleAlam2->setText(QString());
        btnleAlam->setText(QString());
        btnleAlam3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CompresorGas: public Ui_CompresorGas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPRESORGAS_H
