/* src/blinky_led.cpp */
#include <Arduino.h>

void setupBlinky() {
	pinMode(LED_BUILTIN, OUTPUT);
}

void steadyBlink(int duration) {
	  digitalWrite(LED_BUILTIN, HIGH);
	  delay(duration);
	  digitalWrite(LED_BUILTIN, LOW);
	  delay(duration);
}
