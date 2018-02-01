int outputPin = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(outputPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("Enter Volts 0 to 5");
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) {
    char ch = Serial.read();
    int volts = (ch - '0') * 51;
    analogWrite(outputPin, volts);
  }
}
