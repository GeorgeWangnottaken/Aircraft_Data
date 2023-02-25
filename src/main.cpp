#include <Arduino.h>//see https://docs.platformio.org/en/latest/integration/ide/vscode.html#quick-start

//used in arduino

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(PC13, OUTPUT);
  Serial.println("Hello world");
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(PC13, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(200);                      // wait for a second
  digitalWrite(PC13, LOW);   // turn the LED off by making the voltage LOW
  delay(400);                      // wait for a second
}//see stuff here