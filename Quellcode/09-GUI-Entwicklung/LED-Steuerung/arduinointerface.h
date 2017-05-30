#ifndef ARDUINOINTERFACE_H
#define ARDUINOINTERFACE_H

#include <QObject>
#include <QSerialPort>

class ArduinoInterface : public QObject
{
	Q_OBJECT
public:
	explicit ArduinoInterface(QObject *parent = 0);
private:
	QSerialPort m_serialPort;

signals:

public slots:
	void writeData(const char* dataToWrite);
};

#endif // ARDUINOINTERFACE_H
