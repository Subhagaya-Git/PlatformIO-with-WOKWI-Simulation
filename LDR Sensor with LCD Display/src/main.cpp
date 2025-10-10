#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27 , 16 , 2);
int ledPin = 13;

void setup() {

    pinMode(A0, INPUT);
    Serial.begin(9600);
    pinMode(ledPin, OUTPUT);
    lcd.init();
    lcd.backlight();
    lcd.clear();
}

void loop() {

    int value = analogRead(A0);
    Serial.print("Sensor Value : ");
    Serial.println(value);
    delay(500);

    if(value<200){
    digitalWrite(ledPin,HIGH);
    lcd.setCursor(0,0);
    lcd.print("Dark Detected");
    lcd.setCursor(1,5);
    lcd.print("LED is ON");
    }

    else{
    digitalWrite(ledPin,LOW);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Dark Detected");
    lcd.setCursor(1,5);
    lcd.print("LED is OFF");
    }

}