void setup() {
  // put your setup code here, to run once:
  float tempFloat = 20.75;
  byte tempByte = (int) (tempFloat * 4);
  EEPROM.write(0, tempByte);

  byte tempByte2 = EEPROM.read(0);
  float temp2 = (float) (tempByte2) / 4;
  Serial.begin(9600);
  Serial.println("\n\n\n");
  Serial.println(temp2);
}

void loop() {
  // put your main code here, to run repeatedly:
  
}

