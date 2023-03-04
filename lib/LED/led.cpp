
#include "led.h" 


const byte LED_pin = PC13;//happens to be led pin

void LED_setup(){//just sets pinmode 
    pinMode(PC13, OUTPUT);
  Serial.println("Hello world");
}

void LED_blink(){
    digitalWrite(PC13, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(100);                      // wait for a second
  digitalWrite(PC13, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                      // wait for a second
}

/*
void LED_setup(){

}
*/