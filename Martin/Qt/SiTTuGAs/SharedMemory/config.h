#ifndef CONFIG_H
#define CONFIG_H

#include <QString>

class Config
{
    public:
        Config();
        Config(int mode, QString protocolo, QString server, QString asp);
        ~Config();

        void setMode(int mode);
        void setProtocolo(QString protocolo);
        void setServer(QString server);
        void setAsp(QString asp);

        int getMode();
        QString getProtocolo();
        QString getServer();
        QString getAsp();

    private:
        int mode;
        QString protocolo;
        QString server;
        QString asp;
};

#endif // CONFIG_H
