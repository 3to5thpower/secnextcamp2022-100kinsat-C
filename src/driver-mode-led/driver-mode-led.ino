#include <obniz.h>
const uint8_t pin_led        =2 ;

void setup() {
  Serial.begin(115200);
  obniz.start();
  obniz.pinReserve(pin_led);
  pinMode(2, OUTPUT);
}
void loop() {
  digitalWrite(pin_led, HIGH);
  delay(500);
  digitalWrite(pin_led, LOW);
  delay(500);
}
