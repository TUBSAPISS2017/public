#include "udplistener.h"
#include <QDebug>

UDPListener::UDPListener(QObject *parent) : QObject(parent)
{
	connect(&m_socket, SIGNAL(readyRead()), this, SLOT(readSocketData()));
	m_socket.bind(2006);
}

void UDPListener::readSocketData()
{
	while (m_socket.bytesAvailable()) {
		QByteArray byteArray;
		byteArray.resize(m_socket.bytesAvailable());

		m_socket.readDatagram(byteArray.data(), byteArray.size());

		qDebug() << byteArray;
	}
}
