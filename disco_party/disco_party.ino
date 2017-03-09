// In case of an emergency disco party. 
// This one goes out to Jake Kunz

const int redLED = 42; // K2
const int whiteLED = 41; // K3
const int blueLED = 40; // K4

// Runs once
void setup() {
  // Setup pin modes
  pinMode(redLED, OUTPUT);
  pinMode(whiteLED, OUTPUT);
  pinMode(blueLED, OUTPUT);

  // Setup serial port
  Serial.begin(9600);
  Serial.println("Type 'd' to disco once, type 'ddddd' to disco 5 times!");

  // Setup actuator states, note: relay board is active low
  digitalWrite(redLED, HIGH);
  digitalWrite(whiteLED, LOW);
  digitalWrite(blueLED, HIGH);

  delay(2000);
}

void disco() {
  digitalWrite(whiteLED, LOW);
  digitalWrite(redLED, HIGH);
  digitalWrite(blueLED, HIGH);
  delay(3000);
  digitalWrite(whiteLED, HIGH);
  digitalWrite(blueLED, LOW);
  delay(3000);
  digitalWrite(blueLED, HIGH);
  digitalWrite(redLED, LOW);
  delay(3000);
  digitalWrite(whiteLED, LOW);
  delay(1500);
  digitalWrite(redLED, HIGH);
  digitalWrite(blueLED, LOW);
  delay(1000);
  digitalWrite(redLED, LOW);
  delay(750);

  int j = 50;
  for (int i=0; i<10; i++) {
    digitalWrite(whiteLED, LOW);
    digitalWrite(redLED, HIGH);
    digitalWrite(blueLED, HIGH);
    delay(j);
    digitalWrite(whiteLED, HIGH);
    digitalWrite(blueLED, LOW);
    delay(j);
    digitalWrite(blueLED, HIGH);
    digitalWrite(redLED, LOW);
    delay(j);
    digitalWrite(whiteLED, LOW);
    delay(j);
    digitalWrite(redLED, HIGH);
    digitalWrite(blueLED, LOW);
    delay(j);
    digitalWrite(redLED, LOW);
    delay(j);
  }
}

void loop() {
  while (Serial.available() > 0) {
    if(Serial.read() == 'd') {
      disco();
    }
  }
  digitalWrite(blueLED, LOW);
  digitalWrite(redLED, LOW);
  digitalWrite(whiteLED, LOW);
}
