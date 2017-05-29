#include <QCoreApplication>
#include "serielleschnittstelle.h"

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	SerielleSchnittstelle serial;

	return a.exec();
}
