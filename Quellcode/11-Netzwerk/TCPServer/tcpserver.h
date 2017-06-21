#ifndef TCPSERVER_H
#define TCPSERVER_H

#include <QObject>
#include <QTcpServer>

class TCPServer : public QObject
{
	Q_OBJECT
public:
	explicit TCPServer(QObject *parent = 0);

private:
	QTcpServer m_server; //#include <QTcpServer>

private slots:
	void handleNewConnection();
	void readSocketData();

};

#endif // TCPSERVER_H
