int inputPin = 5;
int ledPin = 13;
int ledValue = LOW;

void setup() {
  // put your setup code here, to run once:
  pinMode(inputPin, INPUT);
  digitalWrite(inputPin, HIGH);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(inputPin) == LOW) {
    ledValue = !ledValue;
    digitalWrite(ledPin, ledValue);
  }
}
