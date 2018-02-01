int ledPin = 13;
int delayPeriod = 250;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  flash(20, delayPeriod);
  delay(3000);
}

void flash(int numFlashes, int d) {
  for (int i = 0; i < numFlashes; i++) {
    digitalWrite(ledPin, HIGH);
    delay(d);
    digitalWrite(ledPin, LOW);
    delay(d);
  }
}

