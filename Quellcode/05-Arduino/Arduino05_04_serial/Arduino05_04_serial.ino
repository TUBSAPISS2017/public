void setup() {
  // Initialisierung der seriellen Schnittstelle
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(A0);
  
  // Schreiben des ausgelesenen Werts von Analog-Pin-0
  Serial.println(sensorValue);
  delay(1);        // 1 ms warten wegen Stabilitaet
}