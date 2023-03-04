#include <Arduino.h>//see https://docs.platformio.org/en/latest/integration/ide/vscode.html#quick-start
#include "Altitude_dps310_no_pressure.h"
#include "led.h"
//used in arduino



void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  LED_setup();
}

// the loop function runs over and over again forever
void loop() {
  printf("placeholder");
  LED_blink();

}//see stuff here

/*
  digitalWrite(PC13, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(800);                      // wait for a second
  digitalWrite(PC13, LOW);   // turn the LED off by making the voltage LOW
  delay(300);                      // wait for a second*/