#include <QCoreApplication>
#include <QUdpSocket>
int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	QUdpSocket socket;
	socket.writeDatagram("Hello from the Sender side", QHostAddress::LocalHost, 2006);

	return a.exec();
}
