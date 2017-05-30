const int RED_PIN = 2;
const int GREEN_PIN = 3;
const int BLUE_PIN = 4;

int redValue = 0;
int greenValue = 0;
int blueValue = 0;


enum ActiveColor : char {
  ActiveRed = 101,
  ActiveGreen = 102,
  ActiveBlue = 103
};

int incomingByte = 0;
ActiveColor activeColor;

void setup() {
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  if (Serial.available() > 0) {
    incomingByte = Serial.read();
  }

  if(incomingByte >= ActiveRed){
    activeColor = incomingByte;
  }
  
  else {
    
    int currentColorValue = map(incomingByte,0,100,0,255);
    
    switch(activeColor){
      case ActiveRed:
      redValue = currentColorValue;
      break;
      case ActiveGreen:
      greenValue = currentColorValue;
      break;
      case ActiveBlue:
      blueValue = currentColorValue;
      break;
    } 
  }

  // put your main code here, to run repeatedly:
  analogWrite(RED_PIN, redValue); //blau einschalten
  analogWrite(GREEN_PIN, greenValue); //blau einschalten
  analogWrite(BLUE_PIN, blueValue); //blau einschalten
}
