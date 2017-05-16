#ifndef TEST_H
#define TEST_H



#include <iostream>

using namespace std;


static int s_testsPassed = 0;
static int s_testsFailed = 0;


class APITest {

private:

	/// \brief Nicht relevant: Ausgabe einer Linie
	static void printTestLine(){
		cout << "-------------------------------------\n";
	}


	/// \brief Diese Funktion soll aufgerufen werden, wenn der Test erfolgreich war
	static void printTestSuccess(){
		s_testsPassed++;
		cout << "Testergebnis | **Erfolgreich**\n";
		printTestLine();
	}


	/// \brief Diese Funktion soll aufgerufen werden, wenn der Test fehlgeschlagen ist
	static void printTestFail(){
		s_testsFailed++;
		cout << "Testergebnis | **Fehlgeschlagen**\n";
		printTestLine();
	}

public:

	/// \brief Setzt die Daten für den jeweiligen Test
	/// \param result Ergebnis des Tests true=Erfolgreich false=Fehlgeschlagen
	/// \param testName Name des Tests, damit dieser anschließend identifiziert werden kann
	/// \param autor Name des Autors, der den Test geschrieben hat
	/// \param testFall Was wird getestet. Ein Stichpunkt bzw. ein Satz genügt
	/// \param dateiName In welcher Datei befindet sich der Test
	static void printTestResult(const bool result, const char* testName, const char* autor, const char* testFall = "", const char* dateiName = ""){
		printTestLine();
		cout << "Test | ";
		cout << testName;
		cout << "\n---- | ----";
		cout << "\nGeschrieben von | ";
		cout << autor;
		cout << "\nWas wird getestet | ";
		cout << testFall;
		cout << "\nDateiname | ";
		cout << dateiName;
		cout << "\n";

		if(result){
			printTestSuccess();
		}
		else {
			printTestFail();
		}
	}


	/// \brief Nicht relevant: Gibt den Header am Anfang der Tests aus
	static void printTestStartHeader(){
		s_testsFailed = 0;
		s_testsPassed = 0;

		printTestLine();
		printTestLine();
		cout << "\nStarte Tests:\n";
	}


	/// \brief Gibt die Zusammenfassung am Ende der Tests aus
	static void printTestEndFooter(){
		cout << "\n";
		cout << "Tests Abgeschlossen\n";
		cout << s_testsPassed;
		cout << " Tests erfolgreich\n";
		cout << s_testsFailed;
		cout << " Tests fehlgeschlagen\n";
		printTestLine();
		printTestLine();
		cout.flush();
	}
};

#endif //TEST_H
