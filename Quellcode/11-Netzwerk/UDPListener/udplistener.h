#ifndef UDPLISTENER_H
#define UDPLISTENER_H

#include <QObject>
#include <QUdpSocket>

class UDPListener : public QObject
{
	Q_OBJECT
public:
	explicit UDPListener(QObject *parent = 0);

private:
	QUdpSocket m_socket; // #include <QUdpSocket>

private slots:
	void readSocketData();
signals:

public slots:
};

#endif // UDPLISTENER_H
