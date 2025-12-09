#include <Arduino.h>

int button_pin = 13;
int buzzer_pin = 12;

void setup() {
  pinMode(button_pin,INPUT);
  pinMode(buzzer_pin,OUTPUT);
}

void loop() {
  int button_state = digitalRead(button_pin);

  if (button_state == HIGH){
    tone(buzzer_pin,1500);
  }
  else{
    noTone(buzzer_pin);
  }
}
