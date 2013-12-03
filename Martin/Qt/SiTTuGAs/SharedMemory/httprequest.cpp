#include "httprequest.h"

int HTTPRequest::session = 1;

// Inicializaciones de variables
HTTPRequest::HTTPRequest()
{
    protocolo = "http://";
    server = "127.0.0.1";
    aspPage = "onlinesthie.aspx";
    ready = false;
}

// Setters y Getters
void HTTPRequest::setProtocolo(bool secure)
{
    if(secure)
        protocolo = "https://";
    else
        protocolo = "http://";
}

void HTTPRequest::setServer(QString serverN)
{
    if(serverN.isEmpty())
        return;

    server = serverN;
}

void HTTPRequest::setPage(QString page)
{
    aspPage = page;
}

// Funciones propias de la SharedMemory
QString HTTPRequest::GetValor(int indice, bool entero)
{
    ready = false;
    QString tipo = "int";

    if(entero)
        tipo = "float";

    QUrl url = QString("%1%2/%3?session=%4&RW=r&type=%5&var=%6&value=45&complete=FALSE").arg(protocolo).arg(server).arg(aspPage).arg(session).arg(tipo).arg(indice);
    url = QString("%1%2/%3").arg(protocolo).arg(server).arg(aspPage);
    qDebug()<<"URL: "<<url;

//    QUrl postData;
    url.addQueryItem("session", QString("%1").arg(session));
    url.addQueryItem("RW", "r");
    if(entero)
        url.addQueryItem("type", "int");
    else
        url.addQueryItem("type", "float");
    url.addQueryItem("var", "23");
    url.addQueryItem("value", "43.1416");
    url.addQueryItem("complete", "FALSE");//*/
    qDebug()<<"URL: "<<url;
    QNetworkRequest request(url);
    request.setHeader(QNetworkRequest::ContentTypeHeader,  "application/x-www-form-urlencoded");
    //networkManager->post(request, postData.encodedQuery());
    QByteArray dataGil;
    dataGil.append(url.toString());
    qDebug()<<"Data Gil: "<<dataGil;

    reply = qnam.post(QNetworkRequest(url),url.encodedQuery());
    connect(reply, SIGNAL(finished()), this, SLOT(HTTPFinished()));
    connect(reply, SIGNAL(readyRead()),this, SLOT(HTTPReadyRead()));

/*    while(!ready)
    {
        Sleep();
        qDebug()<<"Esperando...";
    }*/

    qDebug()<<valorRS;
    return valorRS;
}

float HTTPRequest::getF(int pos)
{
    return -1;
}

void HTTPRequest::HTTPReadyRead()
{
    qDebug()<<"Listo para leer";

}

void HTTPRequest::HTTPFinished()
{
    qDebug()<<"Termina la respuesta";
    valorRS = reply->readAll();
    qDebug()<<"Valor Leído: "<<valorRS;
//    qDebug()<<QString::compare(valorRS, "Unloaded Memory", Qt::CaseSensitive);
    if(QString::compare(valorRS, "Unloaded Memory", Qt::CaseSensitive) == 0)
    {
        qDebug()<<"La memoria no se ha cargado...";
    }
    else if(valorRS.startsWith("<!DOCTYPE html", Qt::CaseInsensitive))
    {
        qDebug()<<"Respuesta inesperada del servidor";
    }

    ready = true;
}

HTTPRequest::~HTTPRequest()
{

}

int HTTPRequest::getI(int pos)
{
    return -1;
}

int HTTPRequest::getVar(QString var)
{
    return -1;
}

void HTTPRequest::setF(float val, int pos)
{
}

void HTTPRequest::setI(int val, int pos)
{
}

