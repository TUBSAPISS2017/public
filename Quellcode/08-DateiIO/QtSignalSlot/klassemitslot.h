#ifndef KLASSEMITSLOT_H
#define KLASSEMITSLOT_H

#include <QObject>

class KlasseMitSlot : public QObject
{
	Q_OBJECT
public:
	explicit KlasseMitSlot(QObject *parent = 0);

public slots:
	void leseDatenAus(); //Implementierung in klassemitslot.cpp
};
#endif // KLASSEMITSLOT_H
