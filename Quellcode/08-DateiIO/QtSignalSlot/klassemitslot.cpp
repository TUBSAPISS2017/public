#include "klassemitslot.h"
#include <iostream>

KlasseMitSlot::KlasseMitSlot(QObject *parent) : QObject(parent)
{

}

void KlasseMitSlot::leseDatenAus()
{
	std::cout << "leseDatenAus wurde aufgerufen";
	std::cout.flush();
}
