#ifndef MYSOCKET_H

#define MYSOCKET_H



#include <QTcpSocket>

#include <QHostAddress>



#include <QDebug>



class MySocketCCS : public QTcpSocket

{

    Q_OBJECT

public:

    explicit MySocketCCS(int sockDesc, QObject *parent = Q_NULLPTR);

    ~MySocketCCS();



signals:

    void dataReady(const QString &ip, const QByteArray &data);



public slots:

    void recvData(void);

    void sendData(int id, const QByteArray &data);



private:

    int m_sockDesc;

};



#endif // MYSOCKET_H
