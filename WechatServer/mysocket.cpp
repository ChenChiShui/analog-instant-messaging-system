#include "mysocket.h"



MySocketCCS::MySocketCCS(int sockDesc, QObject *parent) :

    QTcpSocket(parent)

{
    m_sockDesc=sockDesc;
    connect(this, SIGNAL(readyRead()), this, SLOT(recvData()));

}



MySocketCCS::~MySocketCCS()

{



}



void MySocketCCS::sendData(int id, const QByteArray &data)

{
    if (id == m_sockDesc && !data.isEmpty())
    {

        this->write(data);

    }

}



void MySocketCCS::recvData(void)

{

    QString ip = peerAddress().toString().remove(0, 7);

    QByteArray data = readAll();



    emit dataReady(ip, data);

}
