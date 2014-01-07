#include "config.h"

Config::Config()
{
}

Config::Config(int mode, QString protocolo, QString server, QString asp)
{
    this->mode = mode;
    this->protocolo = protocolo;
    this->server = server;
    this->asp = asp;
}

void Config::setMode(int mode)
{
    this->mode = mode;
}

void Config::setProtocolo(QString protocolo)
{
    this->protocolo = protocolo;
}

void Config::setServer(QString server)
{
    this->server = server;
}

void Config::setAsp(QString asp)
{
    this->asp = asp;
}

int Config::getMode()
{
    return this->mode;
}

QString Config::getProtocolo()
{
    return this->protocolo;
}

QString Config::getServer()
{
    return this->server;
}

QString Config::getAsp()
{
    return this->asp;
}

Config::~Config()
{

}
