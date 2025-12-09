#include <Arduino.h>

int led_red = 12;
int led_yellow = 11;
int led_green = 13;

void setup() {

  pinMode(led_red,OUTPUT);
  pinMode(led_green,OUTPUT);
  pinMode(led_yellow,OUTPUT);
}

void loop() {
  digitalWrite(led_red,HIGH);
  digitalWrite(led_red,LOW);
  delay(1000);

  digitalWrite(led_yellow,HIGH);
  digitalWrite(led_yellow,LOW);
  delay(1000);

  digitalWrite(led_green,HIGH);
  digitalWrite(led_green,LOW);
  delay(1000);
}
