#define rPIN 10 
#define gPIN 9
#define bPIN 8
#define tPERIOD 100
#define TIMES 5

void setup() {
  pinMode(rPIN, HIGH);
  pinMode(gPIN, HIGH);
  pinMode(bPIN, HIGH);
}

void blink_red() {
  digitalWrite(rPIN, HIGH);
  delay(tPERIOD);
  digitalWrite(rPIN, LOW);
  delay(tPERIOD);
}

void blink_green() {
  digitalWrite(gPIN, HIGH);
  delay(tPERIOD * 2);
  digitalWrite(gPIN, LOW);
  delay(tPERIOD * 2);
}

void blink_blue() {
  digitalWrite(bPIN, HIGH);
  delay(tPERIOD * 3);
  digitalWrite(bPIN, LOW);
  delay(tPERIOD * 3);
}

void loop() {
  // red led 
  for (int i = 0; i < TIMES; i++) {
    blink_red();
  }
  // green led 
  for (int i = 0; i < TIMES * 2; i++) {
    blink_green();
  }
  // blue led
  for (int i = 0; i < TIMES * 3; i++) {
    blink_blue();
  }
}
