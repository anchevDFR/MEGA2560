/* examples/blinky_led/blinky_led.ino */

#include <blinky_led.h>

void setup() {
	setupBlinky();
}

void loop() {
	steadyBlink(250);
}
