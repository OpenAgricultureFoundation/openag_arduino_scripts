
void setup() {
  // set all relay pins and power pins to output high
  for (int i=26; i<44; i++) {
    pinMode(i, OUTPUT);
    digitalWrite(i, HIGH);
  }

  // set ground pins to output low
  pinMode(44, OUTPUT);
  digitalWrite(44, LOW);
  pinMode(45, OUTPUT);
  digitalWrite(45, LOW);

}

void loop() {
  // run through relay pins and turn on individually for audible test
  for (int i=28; i<44; i++) {
    digitalWrite(i, LOW);
    delay(500);
    digitalWrite(i, HIGH);
  }
}
