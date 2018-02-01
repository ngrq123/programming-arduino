int ledPin = 13;
int delayPeriod = 500;

void setup() {
  // put your setup code here, to run once:

  // set pin ledPin as output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  // set pin ledPin to on
  digitalWrite(ledPin, HIGH);
  
  // delay delayPeriod milliseconds
  delay(delayPeriod);
  
  // set pin ledPin to off
  digitalWrite(13, LOW);
  
  delay(delayPeriod);
}
