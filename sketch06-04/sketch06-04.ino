int inputPin = 5;
int ledPin = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(inputPin, INPUT);
  digitalWrite(inputPin, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  int switchOpen = digitalRead(inputPin);
  digitalWrite(ledPIn, !switchOpen);
}
