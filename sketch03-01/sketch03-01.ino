void setup() {
  // put your setup code here, to run once:

  // set pin 13 as output
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  // set pin 13 to on
  digitalWrite(13, HIGH);
  
  // delay 500 milliseconds
  delay(500);
  
  // set pin 13 to off
  digitalWrite(13, LOW);
  
  delay(500);
}
