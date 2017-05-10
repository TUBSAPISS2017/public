#include "eins.h"
#include "zwei.h"

Eins eins; // An dieser Stelle wird bereits der
           // Constructor der Klasse Eins aufgerufen
Zwei zwei; // An dieser Stelle wird bereits der
           // Constructor der Klasse Zwei aufgerufen

void setup() {
  Serial.begin(9600);
}

void loop() {
  eins.showEins();
  zwei.showZwei();
  delay(1000);
}
