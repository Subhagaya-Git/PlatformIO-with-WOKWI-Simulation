#include <Arduino.h>

void setup() {
  Serial.begin(9600);   
}

void loop() {
  Serial.println("This is serial monitor");  
  delay(1000);
}
