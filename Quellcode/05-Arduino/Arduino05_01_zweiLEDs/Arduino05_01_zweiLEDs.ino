void setup() //Wir starten mit dem Setup
{
  pinMode(12, OUTPUT); // Pin 12 ist ein Ausgang.
  pinMode(4, OUTPUT); // Pin 4 ist ein Ausgang.
}

void loop() // Das Hauptprogramm beginnt.
{
  digitalWrite(12, HIGH); // Schalte die LED an Pin12 an.
  delay(1000); // Warte 1000 Millisekunden.
  digitalWrite(12, LOW); // Schalte die LED an Pin12 aus.
  digitalWrite(4, HIGH); // Schalte die LED an Pin4 ein.
  delay(1000); // Warte 1000 Millisekunden.
  digitalWrite(4, LOW); // Schalte die LED an Pin4 aus.
}

