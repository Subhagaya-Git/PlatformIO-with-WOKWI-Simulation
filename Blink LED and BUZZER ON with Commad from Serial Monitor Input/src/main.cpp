#include <Arduino.h>

int led_pin = 13;
int buzzer_pin = 12;

void setup() {
  pinMode(led_pin,OUTPUT);
  pinMode(buzzer_pin,OUTPUT);
  Serial.begin(9600);
  Serial.println("Commans are : LEDON, LEDOFF, BUZZERON , BUZZEROFF");
}

void loop() {

  if (Serial.available()>0){
    String command = Serial.readStringUntil('\n');
    command.trim();

    if (command == "LEDON")
    {
      digitalWrite(led_pin,HIGH);
      Serial.println("LEDON");
    }
    else if (command == "LEDOFF")
    {
      digitalWrite(led_pin,LOW);
      Serial.println("LEDOFF");
    }
    else if (command == "BUZZERON")
    {
      tone(buzzer_pin,1400);
      Serial.println("BUZZERON");
    }
    else if (command == "BUZZEROFF")
    {
      noTone(buzzer_pin);
      Serial.println("BUZZEROFF");
    }
    else
    {
      Serial.println("UNKNOWN");
    }
  }
}