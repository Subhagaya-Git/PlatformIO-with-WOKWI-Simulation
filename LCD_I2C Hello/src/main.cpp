#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27 , 16, 2);

void setup() {
  lcd.init(); 
  lcd.backlight(); 
  lcd.clear(); 

  lcd.setCursor(3,0);
  lcd.print("Hello");  

  lcd.setCursor(6,1);
  lcd.print("Hello");
}
void loop() {
  lcd.scrollDisplayLeft();
  delay(200);
}

