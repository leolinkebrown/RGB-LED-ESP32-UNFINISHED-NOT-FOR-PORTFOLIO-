#define PIN_RED    23 // GPIO23
#define PIN_GREEN  22 // GPIO22
#define PIN_BLUE   21 // GPIO21

void setup() {
  pinMode(PIN_RED,   OUTPUT);
  pinMode(PIN_GREEN, OUTPUT);
  pinMode(PIN_BLUE,  OUTPUT);
}

void loop() {
  // color code #00C9CC (R = 255,   G = 0, B = 0)
  setColor(255, 0, 0);

  delay(1000); // keep the color 1 second

  // color code #F7788A (R = 0, G = 255, B = 0)
  setColor(0, 255, 0);

  delay(1000); // keep the color 1 second

  // color code #34A853 (R = 0,  G = 0, B = 255)
  setColor(0, 0, 255);

  delay(1000); // keep the color 1 second
}

void setColor(int R, int G, int B) {
  analogWrite(PIN_RED,   R);
  analogWrite(PIN_GREEN, G);
  analogWrite(PIN_BLUE,  B);
}
