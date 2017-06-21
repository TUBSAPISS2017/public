#include "tcpserver.h"
#include <QTcpSocket>
#include <QDebug>

TCPServer::TCPServer(QObject *parent) : QObject(parent)
{
	connect(&m_server, SIGNAL(newConnection()),
			this,SLOT(handleNewConnection()));

	m_server.listen(QHostAddress::Any, 2006);
}

void TCPServer::handleNewConnection()
{
	QTcpSocket *tcpSocket = m_server.nextPendingConnection();

	while(tcpSocket)
	{
		connect(tcpSocket, SIGNAL(readyRead()),
				this, SLOT(readSocketData()));
		tcpSocket = m_server.nextPendingConnection();
		tcpSocket->write("Mit dem Server verbunden");
	}
}

void TCPServer::readSocketData()
{
	QTcpSocket *socket = (QTcpSocket*) this->sender();

	while (socket->bytesAvailable()) {
		qDebug()<< socket->readAll(); // #include <QDebug>
	}
}
