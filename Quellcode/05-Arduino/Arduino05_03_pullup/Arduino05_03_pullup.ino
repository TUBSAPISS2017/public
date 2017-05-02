void setup() {
  pinMode(2, INPUT_PULLUP);
}

void loop() {
  if(digitalRead(2) == LOW)
  {
    // Button wurde gedrueckt
    // das wird ausgefuehrt...
  }
}
