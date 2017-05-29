#ifndef SERIELLESCHNITTSTELLE_H
#define SERIELLESCHNITTSTELLE_H

#include <QObject>
#include <QSerialPort>

class SerielleSchnittstelle : public QObject
{
	Q_OBJECT
public:
	explicit SerielleSchnittstelle(QObject *parent = 0);

private:					  // Nicht vergessen:
	QSerialPort m_serialPort; // #include <QSerialPort>

public slots:
	void readFromSerialPort();
	void writeToSerialPort(const char *dataToWrite);
	void writeTestData();
};

#endif // SERIELLESCHNITTSTELLE_H
