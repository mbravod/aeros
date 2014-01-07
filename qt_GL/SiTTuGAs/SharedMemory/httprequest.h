#ifndef HTTPREQUEST_H
#define HTTPREQUEST_H

#include <QDebug>
#include <QWidget>
#include <QString>
#include <QUrl>
#include <QMutex>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkReply>
#include "config.h"
#include "sqlite.h"

class HTTPRequest : public QWidget
{
    Q_OBJECT

    public:
        HTTPRequest(Config *conf, QWidget *parent = 0);
        ~HTTPRequest();
        char mem[32000*4];
        float  memf[32000];
        int memi[32000];
        // Setter's y Getter's
        void setProtocolo(bool secure);
        void setServer(QString serverN);
        void setPage(QString page);

        // Métodos propios para SharedMemory
        // Entrega en QString el valor indicado por un indice
        void GetValor();
        static QString session;// = 0;
        int eliminarVariable;
        // Obtiene valor flotante
        float getF(int pos);
        // Obtiene valor entero
        int getI(int pos);
        // Regresa el índice de la variable
        int getVar(QString var);
        // Pone valor flotante en la variable
        void setF(float val, int pos);
        // Pone valor entero en la variable
        void setI(int val, int pos);

    signals:
        // Se emite para refrescar elementos
        void Refresh();


    private slots:
        // Slots para la lectura
        void HTTPFinished();
        void HTTPFinishedR();
        void HTTPReadyRead();

    private:
        QString protocolo;// = "http://";
        QString server;// = "127.0.0.1";
        QString aspPage;// = "onlinesthie.aspx";
        QNetworkReply *reply;
        QNetworkReply *replyR;
        QNetworkAccessManager qnam;
        bool replyOK;
        bool consultando;
        QString valorRS;
        QMutex mutex;
        Config *config;
        int *arrI[24000];
        float *arrF[24000];
        QByteArray decode;


};

#endif // HTTPREQUEST_H
