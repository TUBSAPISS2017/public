#include "arduinointerface.h"

ArduinoInterface::ArduinoInterface(QObject *parent) : QObject(parent)
{
	m_serialPort.setPortName("COM9");
	m_serialPort.setBaudRate(9600);
	m_serialPort.open(QIODevice::WriteOnly);
}

void ArduinoInterface::writeData(const char *dataToWrite)
{
	m_serialPort.write(dataToWrite, 2);
	m_serialPort.flush();
}
