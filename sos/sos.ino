#define myPIN 13
#define SHORT_WAIT 125
#define LONG_WAIT 250
#define TIMES 3

void setup() {
  pinMode(myPIN, OUTPUT);
}

void short_blinker() {
  digitalWrite(myPIN, HIGH);
  delay(SHORT_WAIT);
  digitalWrite(myPIN, LOW);
  delay(SHORT_WAIT);
}

void long_blinker() {
  digitalWrite(myPIN, HIGH);
  delay(LONG_WAIT);
  digitalWrite(myPIN, LOW);
  delay(LONG_WAIT);
}

void loop() {

  // SOS signal looks like this = ( * * * - - - * * * - - - )

  /* short blink 3 times */
  for (int i = 0; i < TIMES; i++) {
    short_blinker();
  }
  /* long blink 3 times */
  for (int i = 0; i < TIMES; i++) {
    long_blinker();
  }
  /* short blink 3 times */
  for (int i = 0; i < TIMES; i++) {
    short_blinker();
  }
  /* long blink 3 times */
  for (int i = 0; i < TIMES; i++) {
    long_blinker();
  }
}
