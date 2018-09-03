/*
  myBlink

  Spells "SOS" in Morse code
  ...___...
  
*/

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  for (int i = 0; i < 3; i++) { dot(); }  // S
  for (int i = 0; i < 3; i++) { dash(); } // O 
  for (int i = 0; i < 3; i++) { dot(); }  // S
  delay(3000);
}

void dot() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(250);                     
  digitalWrite(LED_BUILTIN, LOW);
  delay(250);
}

void dash() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(750);
  digitalWrite(LED_BUILTIN, LOW);
  delay(250);
}
