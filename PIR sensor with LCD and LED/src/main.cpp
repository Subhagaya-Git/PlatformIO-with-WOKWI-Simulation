#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);

int LED_PIN = 13;
int PIR_PIN = 2;

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.clear();

  pinMode(LED_PIN,OUTPUT);
  pinMode(PIR_PIN,INPUT);
}

void loop() {
  int pir_value = digitalRead(PIR_PIN);

  if (pir_value == HIGH){
    digitalWrite(LED_PIN,HIGH);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Motion Detected");
  }
  else {
    digitalWrite(LED_PIN,LOW);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("No Motion");
  }
  delay(1000);
}