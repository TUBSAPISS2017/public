char incomingByte = '\0';   // Speicher fuer das ankommende Byte

/// Oeffnet die serielle Schnittstelle mit einer Baudrate von 9600
void setup() {
  Serial.begin(9600);
}

/// Sendet das empfangene Symbol zurueck
void loop() {
  if (Serial.available() > 0){
    incomingByte = Serial.read();
    Serial.print(incomingByte);
  }
}
 
