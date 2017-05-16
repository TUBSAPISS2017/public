#ifndef TEST_H
#define TEST_H


static int s_testsPassed = 0;
static int s_testsFailed = 0;

class APITest {
  
private:
  /// \brief Nicht relevant: Ausgabe einer Linie
  static void printTestLine(){
    Serial.print("-------------------------------------\n");
  }
  
  /// \brief Diese Funktion wird aufgerufen, wenn der Test erfolgreich war
  static void printTestSuccess(){
    s_testsPassed++;
    Serial.print("Testergebnis | **Erfolgreich**\n");
    printTestLine();
  }

  /// \brief Diese Funktion wird aufgerufen, wenn der Test fehlgeschlagen ist
  static void printTestFail(){
    s_testsFailed++;
    Serial.print("Testergebnis | **Fehlgeschlagen**\n");
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
    Serial.print("Test | ");
    Serial.print(testName);
    Serial.print("\n--- | ---");
    Serial.print("\nGeschrieben von | ");
    Serial.print(autor);
    Serial.print("\nWas wird getestet  | ");
    Serial.print(testFall);
    Serial.print("\nDateiname | ");
    Serial.print(dateiName);
    Serial.print("\n");
  
    if(result){
      printTestSuccess();
    }
    else {
      printTestFail();
    }
  }

  /// \brief Gibt den Header am Anfang der Tests aus
  static void printTestStartHeader(){
    Serial.begin(9600);
    printTestLine();
    printTestLine();
    Serial.println();
    Serial.print("Starte Tests:\n");
  }

  /// \brief Gibt die Zusammenfassung am Ende der Tests aus
  static void printTestEndFooter(){
    Serial.println();
    Serial.print("Tests Abgeschlossen\n");
    Serial.print(s_testsPassed);
    Serial.print(" Tests erfolgreich\n");
    Serial.print(s_testsFailed);
    Serial.print(" Tests fehlgeschlagen\n");
    printTestLine();
    printTestLine();
    delay(100);
  }

};
#endif //TEST_H
