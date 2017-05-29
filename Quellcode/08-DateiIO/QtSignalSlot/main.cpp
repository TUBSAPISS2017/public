#include <QCoreApplication>

#include "klassemitsignal.h"
#include "klassemitslot.h"

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);
										// Vorher nicht vergessen:
	KlasseMitSignal instanzMitSignal;	// #include "klassemitsignal.h"
	KlasseMitSlot instanzMitSlot;		// #include "klassemitslot.h"

	//Verbinden von Signal und Slot
	QObject::connect(&instanzMitSignal, SIGNAL(datenVerfuegbar()),
							&instanzMitSlot, SLOT(leseDatenAus()));

	//Signal aufrufen
	emit instanzMitSignal.datenVerfuegbar();

	return a.exec();
}
