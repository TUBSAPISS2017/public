#ifndef TCPCLIENT_H
#define TCPCLIENT_H

#include <QObject>
#include <QTcpSocket>

class TCPClient : public QObject
{
	Q_OBJECT
public:
	explicit TCPClient(QObject *parent = 0);
private:
	QTcpSocket m_socket; //#include <QTcpSocket>

private slots:
	void connected();
	void readSocketData();
};

#endif // TCPCLIENT_H
