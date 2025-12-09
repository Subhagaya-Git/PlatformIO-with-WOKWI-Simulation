#include <Arduino.h>

int led_pin = 13;  

void setup() {
  Serial.begin(9600);  
  pinMode(led_pin,OUTPUT);

  Serial.println("Commands: LEDON, LEDOFF"); 
}

void loop() {

  if (Serial.available()>0)  
  {
    String command = Serial.readStringUntil('\n');  
    command.trim();  

    if (command == "LEDON")  
    {
     digitalWrite(led_pin,HIGH);   
     Serial.println("LED is ON");  
    }
    else if (command == "LEDOFF")
    {
      digitalWrite(led_pin,LOW);  
     Serial.println("LED is OFF");  
    }
    else{
      Serial.println("UNKNOWN");
    }
  }
}
