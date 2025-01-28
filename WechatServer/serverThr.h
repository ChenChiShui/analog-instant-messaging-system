#ifndef SERVERTHREAD_H

#define SERVERTHREAD_H



#include <QThread>

#include <QObject>

#include <QtNetwork>

#include <QDebug>



#include "mysocket.h"



class Socket;



class serverThreadCCS : public QThread

{

    Q_OBJECT

public:

    serverThreadCCS(int sockDesc, QObject *parent = Q_NULLPTR);

    ~serverThreadCCS();



private:

    void run(void);



public slots:

    void sendDataSlot(int sockDesc, const QByteArray &data);



signals:

    void dataReady(const QString &ip, const QByteArray &data);

    void sendData(int sockDesc, const QByteArray &data);

    void disconnectTCP(int sockDesc);



private slots:

    void recvDataSlot(const QString &ip, const QByteArray &data);

    void disconnectToHost(void);



private:

    MySocketCCS *m_socket;



    int m_sockDesc;

};



#endif // SERVERTHREAD_H
