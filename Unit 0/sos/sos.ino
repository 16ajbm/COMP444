void setup() {
  pinMode(13, OUTPUT);      // Set pin 13 to output
}

void loop() {
  s();
  o();
  s();
}

void s() {
  short_tap();
  short_tap();
  short_tap(); 
}

void o() {
  long_tap();
  long_tap();
  long_tap();
}

void short_tap() {
    digitalWrite(13, HIGH);

    delay(250); 

    digitalWrite(13, LOW);

    delay(250);
}

void long_tap() {
    digitalWrite(13, HIGH);

    delay(500); 

    digitalWrite(13, LOW);

    delay(250);
}
