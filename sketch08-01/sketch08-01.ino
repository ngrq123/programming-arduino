PROGMEM prog_char sA[] = ".-";
PROGMEM prog_char sB[] = "-...";
PROGMEM prog_char sC[] = "-.-.";
PROGMEM prog_char sD[] = "-..";
PROGMEM prog_char sE[] = ".";
PROGMEM prog_char sF[] = "..-.";
PROGMEM prog_char sG[] = "--.";
PROGMEM prog_char sH[] = "....";
PROGMEM prog_char sI[] = "..";
PROGMEM prog_char sJ[] = ".---";
PROGMEM prog_char sK[] = "-.-";
PROGMEM prog_char sL[] = ".-..";
PROGMEM prog_char sM[] = "--";
PROGMEM prog_char sN[] = "-.";
PROGMEM prog_char sO[] = "---";
PROGMEM prog_char sP[] = ".--.";
PROGMEM prog_char sQ[] = "--.-";
PROGMEM prog_char sR[] = ".-.";
PROGMEM prog_char sS[] = "...";
PROGMEM prog_char sT[] = "-";
PROGMEM prog_char sU[] = "..-";
PROGMEM prog_char sV[] = "...-";
PROGMEM prog_char sW[] = ".--";
PROGMEM prog_char sX[] = "-..-";
PROGMEM prog_char sY[] = "-.--";
PROGMEM prog_char sZ[] = "--..";

PROGMEM const char* letters[] = {
  sA, sB, sC, sD, sE, sF, sG, sH, sI, sJ, sK, sL, sM, 
  sN, sO, sP, sQ, sR, sS, sT, sU, sV, sW, sX, sY, sZ
}
                                 

char* numbers[] = {
  "----", ".----", "..---", "...--", "....-", 
  ".....", "-....", "--...", "---..", "----."
}

char buffer[6];

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
      flashSequence(strcpy_P(buffer, (char*) pgm_read_word(&letters[ch - 'a'])));
    } else if (ch >= 'A' && ch <= 'z') {
      flashSequence(strcpy_P(buffer, (char*) pgm_read_word(&letters[ch - 'A'])));
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

