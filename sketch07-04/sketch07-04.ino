int interruptPin = 2;
int ledPin = 13;
int period = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(interruptPin, INPUT);
  digitalWrite(interruptPin, HIGH); // pull-up
  attachInterrupt(0, goFast, FALLING);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin, HIGH);
  delay(period);
  digitalWrite(ledPin, LOW);
  delay(period);
}

void goFast() {
  period = 100;
}

