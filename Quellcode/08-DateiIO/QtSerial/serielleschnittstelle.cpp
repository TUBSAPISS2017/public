#include "serielleschnittstelle.h"

#include <iostream>
#include <QTimer>

SerielleSchnittstelle::SerielleSchnittstelle(QObject *parent) : QObject(parent)
{
	m_serialPort.setPortName("COM5");
	m_serialPort.setBaudRate(9600);

	connect(&m_serialPort, SIGNAL(readyRead()),
			this, SLOT(readFromSerialPort()));

	if(!m_serialPort.open(QIODevice::ReadWrite)){
		std::cout << "Could not open Interface\n";
		std::cout.flush();
	}

	QTimer *timer = new QTimer(this);
	timer->setSingleShot(false);
	timer->start(1000);
	connect(timer, SIGNAL(timeout()), this, SLOT(writeTestData()));
}

void SerielleSchnittstelle::readFromSerialPort()
{
	char speicher[100]; // Speicher anlegen
	memset(speicher, 0, sizeof(speicher));

	m_serialPort.read(speicher, 100);

	//etwas mit dem Inhalt von speicher machen
	std::cout << speicher; // Zum Beispiel ausgeben
	std::cout.flush();
}

void SerielleSchnittstelle::writeToSerialPort(const char* dataToWrite)
{
	m_serialPort.write(dataToWrite);
	m_serialPort.flush();
}

void SerielleSchnittstelle::writeTestData()
{
	writeToSerialPort("Test\0");
}
