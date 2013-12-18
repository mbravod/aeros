#include "httprequest.h"

int HTTPRequest::session = 1;

// Inicializaciones de variables
HTTPRequest::HTTPRequest(Config *conf, QWidget *parent)
{
    qDebug()<<"La configuracion es: "<< conf;
    this->config = conf;
    if(this->config != NULL)
    {
        protocolo = config->getProtocolo();
        server = config->getServer();
        aspPage = config->getAsp();
    }
    else
    {
        protocolo = "http://";
        server = "127.0.0.1";
        aspPage = "onlinesthie.aspx";
    }
    qDebug()<<"Protocolo: "<<protocolo;
    qDebug()<<"server: "<<server;
    qDebug()<<"aspPage: "<<aspPage;

    replyOK = false;
    consultando = false;
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
void HTTPRequest::GetValor()
{
    qDebug()<<"GetValor() "<<consultando;
    if(consultando)
        return;

    consultando = true;
    qDebug()<<consultando;

    replyOK = false;
    QString tipo = "int";

    QUrl url;
    url = QString("%1%2/%3").arg(protocolo).arg(server).arg(aspPage);
    qDebug()<<"URL: "<<url;

//    QUrl postData;
    url.addQueryItem("session", QString("%1").arg(session));
    url.addQueryItem("RW", "r");
    url.addQueryItem("type", "int");
    url.addQueryItem("var", "23");
    url.addQueryItem("value", "43.1416");
    url.addQueryItem("complete", "TRUE");//
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
        replyOK = false;
    }
    else if(valorRS.startsWith("<!DOCTYPE html", Qt::CaseInsensitive))
    {
        qDebug()<<"Respuesta inesperada del servidor";
        replyOK = false;
    }
    else
    {
        replyOK = true;
    }

    if(replyOK)
    {
        qDebug()<<"Valor Leido: "<<valorRS;
        // Transformamos la respuesta en flujos de Bytes
/*        QByteArray text = QByteArray::fromBase64(valorRS);
//        qDebug()<<">>> "<<text.data();
        float *arrF = (float *)&text;
        int *arrI = (int *)&text;

        qDebug()<<"Emitiendo señal: "<<arrF[23];
        qDebug()<<"Emitiendo señal: "<<arrI[23];
*/
        emit Refresh();
    }

    qDebug()<<"Cambiando valor...";
    consultando = false;
    disconnect(this, SLOT(HTTPReadyRead()));
    disconnect(this, SLOT(HTTPFinished()));
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

