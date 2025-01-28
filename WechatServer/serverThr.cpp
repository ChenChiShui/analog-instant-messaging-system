#include "serverThr.h"

serverThreadCCS::serverThreadCCS(int sockDesc, QObject *parent) :

    QThread(parent),

    m_sockDesc(sockDesc)

{



}
serverThreadCCS::~serverThreadCCS()

{

    m_socket->close();

}



void serverThreadCCS::run(void)

{

    m_socket = new MySocketCCS(m_sockDesc);



    if (!m_socket->setSocketDescriptor(m_sockDesc)) {

        return ;

    }



    connect(m_socket, &MySocketCCS::disconnected, this, &serverThreadCCS::disconnectToHost);

    connect(m_socket, SIGNAL(dataReady(const QString&, const QByteArray&)),

            this, SLOT(recvDataSlot(const QString&, const QByteArray&)));

    connect(this, SIGNAL(sendData(int, const QByteArray&)),

            m_socket, SLOT(sendData(int, const QByteArray&)));



    this->exec();

}



void serverThreadCCS::sendDataSlot(int sockDesc, const QByteArray &data)

{

    if (data.isEmpty()) {

        return ;

    }



    emit sendData(sockDesc, data);

}



void serverThreadCCS::recvDataSlot(const QString &ip, const QByteArray &data)

{

    emit dataReady(ip, data);

}



void serverThreadCCS::disconnectToHost(void)

{

    emit disconnectTCP(m_sockDesc);

    m_socket->disconnectFromHost();

    this->quit();

}
