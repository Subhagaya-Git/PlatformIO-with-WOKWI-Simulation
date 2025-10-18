#include <Arduino.h>

int led_pin = 12;
int btn_pin = 13;
int buzzer_pin = 11;

void setup() {
  pinMode(led_pin, OUTPUT);
  pinMode(btn_pin, INPUT_PULLUP);
  pinMode(buzzer_pin,OUTPUT);
}

void loop() {
  int btn_state = digitalRead(btn_pin);

  if(btn_state == LOW){
    digitalWrite(led_pin, HIGH);
    tone(buzzer_pin,1000);
  }
  else if(btn_state == HIGH){
    digitalWrite(led_pin, LOW);
    noTone(buzzer_pin);
  }
}

