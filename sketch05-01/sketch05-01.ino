int ledPin = 13;
int durations[] = {200, 200, 200, 500, 500, 500, 200, 200, 200};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for (int i = 0; i < 9; i++) {
    Serial.println(durations[i]);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
}
