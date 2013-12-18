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
#include "SharedMemory/config.h"

class HTTPRequest : QWidget
{
    Q_OBJECT

    public:
        HTTPRequest(Config *conf, QWidget *parent = 0);
        ~HTTPRequest();

        // Setter's y Getter's
        void setProtocolo(bool secure);
        void setServer(QString serverN);
        void setPage(QString page);

        // Métodos propios para SharedMemory
        // Entrega en QString el valor indicado por un indice
        QString GetValor(int indice, bool entero);
        //        void GetValor();
        static int session;// = 0;

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
        void HTTPReadyRead();

    private:
        QString protocolo;// = "http://";
        QString server;// = "127.0.0.1";
        QString aspPage;// = "onlinesthie.aspx";
        QNetworkReply *reply;
        QNetworkAccessManager qnam;
        bool replyOK;
        bool consultando;
        QString valorRS;
        QMutex mutex;
        Config *config;
};

#endif // HTTPREQUEST_H
