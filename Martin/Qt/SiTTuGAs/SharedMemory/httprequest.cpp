#include "httprequest.h"

QString HTTPRequest::session = "1";

// Inicializaciones de variables
HTTPRequest::HTTPRequest(Config *conf, QWidget *parent)
{
    qDebug()<<"La configuracion es: "<< conf;
    this->config = conf;
    if(this->config != NULL)
    {
        protocolo = config->getProtocolo();
        //server = config->getServer();
        server = "192.168.0.14";
        aspPage = config->getAsp();
    }
    else
    {
        protocolo = "http://";
        server = "192.168.0.14";
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
    if(consultando)
        return;

    consultando = true;

    replyOK = false;

    QUrl url;
    url = QString("%1%2/%3").arg(protocolo).arg(server).arg(aspPage);
    qDebug()<<"URL: "<<url;
    eliminarVariable = 0;
    url.addQueryItem("session", session);
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

void HTTPRequest::HTTPReadyRead()
{
//    qDebug()<<"Listo para leer";

}

void HTTPRequest::HTTPFinished()
{
    qDebug()<<"Termina la respuesta";
    valorRS = reply->readAll();
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
       // qDebug()<<"Valor Leido: "<<valorRS;
        // Transformamos la respuesta en flujos de Bytes
        QByteArray AP_B((const char*) (valorRS.toLatin1()), valorRS.size());
        //qDebug()<< "Valor Inter: "<<AP_B.data();
       // qDebug()<< "AP_B.lenght(): "<<AP_B.length();
        decode =  QByteArray::fromBase64(AP_B);
       qDebug()<< "Valor Procesado l: "<<decode.length();
        //qDebug()<< "Valor Procesado: "<<decode.data();
        int i;
        for (i=0;i<decode.length();i++)
        {
            mem[i]=  decode[i];
        }

       int cd=(int )&mem;

       for (i=0;i<decode.length()/4;i++)
       {
           HTTPRequest::memf[i]=  *(float *)((int)((cd)+(i<<2)));
           HTTPRequest::memi[i]=  *(int *)((int)((cd)+(i<<2)));
       }

        emit Refresh();
    }

    consultando = false;
    disconnect(this, SLOT(HTTPReadyRead()));
    disconnect(this, SLOT(HTTPFinished()));
}

HTTPRequest::~HTTPRequest()
{

}

int HTTPRequest::getI(int pos)
{


    if(0 <= pos){
        return HTTPRequest::memi[pos];
        //return *arrI[pos];
    }
    else
        return -1;

}

float HTTPRequest::getF(int pos)
{
    if(0 <= pos)
        return HTTPRequest::memf[pos];
        //return * arrF[pos];
    else
        return -1;
}

int HTTPRequest::getVar(QString var)
{
    return SQLite::BuscarVal(var);;
}

void HTTPRequest::setF(float val, int pos)
{
    QUrl url;
    url = QString("%1%2/%3").arg(protocolo).arg(server).arg(aspPage);
    qDebug()<<"URL: "<<url;

    url.addQueryItem("session", session);
    url.addQueryItem("RW", "w");
    url.addQueryItem("type", "float");
    url.addQueryItem("var", QString::number(pos));
    url.addQueryItem("value", QString::number(val));
    url.addQueryItem("complete", "FALSE");//
    qDebug()<<"URL: "<<url;
    QNetworkRequest request(url);
    request.setHeader(QNetworkRequest::ContentTypeHeader,  "application/x-www-form-urlencoded");
    //networkManager->post(request, postData.encodedQuery());
    QByteArray dataGil;
    dataGil.append(url.toString());
    qDebug()<<"Data Gil: "<<dataGil;

    replyR = qnam.post(QNetworkRequest(url),url.encodedQuery());
    connect(replyR, SIGNAL(finished()), this, SLOT(HTTPFinishedR()));
    connect(replyR, SIGNAL(readyRead()),this, SLOT(HTTPReadyRead()));
}

void HTTPRequest::setI(int val, int pos)
{
    QUrl url;
    url = QString("%1%2/%3").arg(protocolo).arg(server).arg(aspPage);
    qDebug()<<"URL: "<<url;

    url.addQueryItem("session", session);
    url.addQueryItem("RW", "w");
    url.addQueryItem("type", "int");
    url.addQueryItem("var", QString::number(pos));
    url.addQueryItem("value", QString::number(val));
    url.addQueryItem("complete", "FALSE");//
    qDebug()<<"URL: "<<url;
    QNetworkRequest request(url);
    request.setHeader(QNetworkRequest::ContentTypeHeader,  "application/x-www-form-urlencoded");
    //networkManager->post(request, postData.encodedQuery());
    QByteArray dataGil;
    dataGil.append(url.toString());
    qDebug()<<"Data Gil: "<<dataGil;

    replyR = qnam.post(QNetworkRequest(url),url.encodedQuery());
    connect(replyR, SIGNAL(finished()), this, SLOT(HTTPFinishedR()));
    connect(replyR, SIGNAL(readyRead()),this, SLOT(HTTPReadyRead()));
}

void HTTPRequest::HTTPFinishedR()
{
    // No hago nada...
    qDebug()<<replyR->readAll();
    disconnect(this, SLOT(HTTPReadyRead()));
    disconnect(this, SLOT(HTTPFinishedR()));
}
