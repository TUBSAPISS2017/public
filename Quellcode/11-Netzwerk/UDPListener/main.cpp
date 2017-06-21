#include <QCoreApplication>
#include "udplistener.h"

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);
	UDPListener listener;
	return a.exec();
}
