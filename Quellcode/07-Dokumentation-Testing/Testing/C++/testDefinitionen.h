#ifndef TESTDEFINITIONEN_H
#define TESTDEFINITIONEN_H

#ifdef TEST
#include "test.h"
#include "convertXY.h"

void testLatLon(){ // Name frei waehlbar muss in runTests() aufgerufen werden

	bool testResult = false;

	double lat = 50;
	double lon = 10;
	double x = 43782932;
	double y = 4372984;
	
	double ergX, ergY;
	
	convertXY(lat, lon, &ergX, &ergY);
	
	testResult = (ergX == x) && (ergY == y);
		
	APITest::printTestResult(testResult, "Anmeldung", "Paul Frost");
}
#endif // TEST


void runTests(){
#ifdef TEST  // Nicht modifizieren
	APITest::printTestStartHeader(); // Nicht modifizieren

	// Hier sollen die eigenen Tests hinzugefuegt werden
	testLatLon();
	// ...

	APITest::printTestEndFooter(); // Nicht modifizieren
#endif //TEST // Nicht modifizieren
}


#ifdef TEST  // Nicht modifizieren
	#define RUNTEST runTests();
#else
	#define RUNTEST
#endif


#endif //TESTDEFINITIONEN_H
