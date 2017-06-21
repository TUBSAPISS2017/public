#include "tcpclient.h"

#include <QHostAddress>

TCPClient::TCPClient(QObject *parent) : QObject(parent)
{
	connect(&m_socket, SIGNAL(connected()), this, SLOT(connected()));
	connect(&m_socket, SIGNAL(readyRead()), this, SLOT(readSocketData()));

	m_socket.connectToHost(QHostAddress::LocalHost, 2006, QIODevice::ReadWrite);
}

void TCPClient::connected()
{
	m_socket.write("Hello from the Client");
}

void TCPClient::readSocketData()
{
	while(m_socket.bytesAvailable())
	{
		qDebug() << m_socket.readAll();
	}
}
