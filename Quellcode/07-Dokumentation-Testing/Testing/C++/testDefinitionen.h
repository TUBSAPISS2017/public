#ifndef TESTDEFINITIONEN_H
#define TESTDEFINITIONEN_H

#ifdef TEST
#include "test.h"


void testAnmeldung(){ // Name frei waehlbar muss in runTests() aufgerufen werden

	bool testResult = false;

	// Hier soll der eigene Test implementiert werden.
	// Falls der Test erfolgreich ist, kann die Variable "testResult" auf true gesetzt werden.

	APITest::printTestResult(testResult, "Anmeldung", "Paul Frost");
}
#endif // TEST


void runTests(){
#ifdef TEST  // Nicht modifizieren
	APITest::printTestStartHeader(); // Nicht modifizieren

	// Hier sollen die eigenen Tests hinzugefuegt werden
	testAnmeldung();
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
