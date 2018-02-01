int ledPin = 13;
int delayPeriod = 100;
int count = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin, HIGH);
  delay(delayPeriod);
  digitalWrite(ledPin, LOW);
  delay(delayPeriod);
  count++;
  if (count == 20) {
    count = 0;
    delay(3000);
  }
}
