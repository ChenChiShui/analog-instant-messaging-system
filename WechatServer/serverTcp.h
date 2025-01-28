#ifndef TCPSERVER_H
#define TCPSERVER_H
#include <QTcpServer>
#include <QDialog>
#include <QThread>
#include "serverThr.h"
#include "qServer.h"
class QtServerCCS;
class TcpServerCCS:public QTcpServer
{
    Q_OBJECT
public:

    explicit TcpServerCCS(QObject *parent = Q_NULLPTR);

    ~TcpServerCCS();

private:

    void incomingConnection(int sockDesc);

private slots:

    void clientDisconnected(int sockDesc);

private:

    QtServerCCS *m_dialog;

    QList<int> m_socketList;
};

#endif // TCPSERVER_H
