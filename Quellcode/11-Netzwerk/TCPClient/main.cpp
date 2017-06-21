#include <QCoreApplication>
#include "tcpclient.h"

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	TCPClient client;

	return a.exec();
}
