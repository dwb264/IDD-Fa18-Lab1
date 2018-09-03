/*
  blink_pin9

  Blinks an LED on pin 9. Spells "SOS" in Morse code.
  ...___...
  
*/

int ledPin = 9;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  for (int i = 0; i < 3; i++) { dot(); }  // S
  for (int i = 0; i < 3; i++) { dash(); } // O 
  for (int i = 0; i < 3; i++) { dot(); }  // S
  delay(3000);
}

void dot() {
  digitalWrite(ledPin, HIGH);
  delay(250);                     
  digitalWrite(ledPin, LOW);
  delay(250);
}

void dash() {
  digitalWrite(ledPin, HIGH);
  delay(750);
  digitalWrite(ledPin, LOW);
  delay(250);
}
