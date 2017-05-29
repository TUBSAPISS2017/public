#ifndef KLASSEMITSIGNAL_H
#define KLASSEMITSIGNAL_H

#include <QObject>

class KlasseMitSignal : public QObject
{
	Q_OBJECT
public:
	explicit KlasseMitSignal(QObject *parent = 0);

signals:
	void datenVerfuegbar();
};
#endif // KLASSEMITSIGNAL_H
