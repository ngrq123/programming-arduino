int dotDelay = 200;
int ledPin = 13;

char* letters[] = {
  ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", // A-I
  ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", // J-R
  "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.." // S-Z
};
char* numbers[] = {
  "----", ".----", "..---", "...--", "....-", 
  ".....", "-....", "--...", "---..", "----."
}

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  char ch;
  if (Serial.available() > 0) {
    ch = Serial.read();
    if (ch >= 'a' && ch <= 'z') {
      flashSequence(letters[ch - 'a']);
    } else if (ch >= 'A' && ch <= 'z') {
      flashSequence(letters[ch - 'A']);
    } else if (ch >= '0' && ch <= '9') {
      flashSequence(numbers[ch - '0'];
    } else if (ch == ' ') {
      delay(dotDelay * 4); // gap between words
    }
  }
}

void flashSequence(char* sequence) {
  int i = 0;
  while (sequence[i] != '\0' {
    flashDotOrDash(sequence[i]);
    i++;
  }
  delay(dotDelay * 3); // gap between letters
}

void flashDotOrDash(char dotOrDash) {
  digitalWrite(ledPin, HIGH);
  if (dotOrDash == '.') {
    delay(dotDelay);
  } else { // must be a -
    delay(dotDelay * 3);
  }
  digitalWrite(ledPin, LOW);
  delay(dotDelay); // gap between flashes
}

