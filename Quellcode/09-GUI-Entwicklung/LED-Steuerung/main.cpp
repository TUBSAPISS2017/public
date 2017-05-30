#include "ledwidget.h"
#include "arduinointerface.h"

#include <QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	ArduinoInterface arduinoInterface;
	LEDWidget ledWidget;

	QObject::connect(&ledWidget, SIGNAL(colorChanged(const char*)), &arduinoInterface, SLOT(writeData(const char*)));
	ledWidget.show();


	return a.exec();
}
