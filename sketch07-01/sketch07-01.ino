void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int number = random(1, 7);
  Serial.println(number);
  delay(500);
}
