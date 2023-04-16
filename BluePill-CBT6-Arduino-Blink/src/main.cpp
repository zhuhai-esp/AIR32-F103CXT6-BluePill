#include <Arduino.h>

#define LED1 PC13

void setup() { pinMode(LED1, OUTPUT); }

void loop() {
  digitalWrite(LED1, 0);
  delay(100);
  digitalWrite(LED1, 1);
  delay(900);
}