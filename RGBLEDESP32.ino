/*
 * This ESP32 code is created by esp32io.com
 *
 * This ESP32 code is released in the public domain
 *
 * For more detail (instruction and wiring diagram), visit https://esp32io.com/tutorials/esp32-rgb-led
 */

#define PIN_RED    23 // GPIO23
#define PIN_GREEN  22 // GPIO22
#define PIN_BLUE   21 // GPIO21

void setup() {
  pinMode(PIN_RED,   OUTPUT);
  pinMode(PIN_GREEN, OUTPUT);
  pinMode(PIN_BLUE,  OUTPUT);
}

void loop() {
  // color code #00C9CC (R = 0,   G = 201, B = 204)
  setColor(255, 0, 0);

  delay(1000); // keep the color 1 second

  // color code #F7788A (R = 247, G = 120, B = 138)
  setColor(0, 255, 0);

  delay(1000); // keep the color 1 second

  // color code #34A853 (R = 52,  G = 168, B = 83)
  setColor(0, 0, 255);

  delay(1000); // keep the color 1 second
}

void setColor(int R, int G, int B) {
  analogWrite(PIN_RED,   R);
  analogWrite(PIN_GREEN, G);
  analogWrite(PIN_BLUE,  B);
}
