#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

int up_Count_Button = 12;
int down_Count_Button = 13;

int upCount = 0;
int downCount = 0;

void setup() {
  pinMode(up_Count_Button,INPUT_PULLUP);
  pinMode(down_Count_Button,INPUT_PULLUP);

  lcd.init();
  lcd.backlight();
  lcd.clear();

  lcd.setCursor(0,0);
  lcd.print("upCount - white");

  lcd.setCursor(0,1);
  lcd.print("downCount - Blue");
  
  delay(2000);
  lcd.clear();
}

void loop() {
  int whiteBtn = digitalRead(up_Count_Button);
  int blueBtn = digitalRead(down_Count_Button);

  if (whiteBtn == LOW)
  {
    lcd.setCursor(0,0);
    lcd.print("Up Count +");
    lcd.setCursor(10,0);
    upCount++;
    lcd.print(upCount);
    delay(200);
  }

  if (blueBtn == LOW)
  {
    lcd.setCursor(0,1);
    lcd.print("Down Count ");
    downCount--;
    lcd.setCursor(12,1);
    lcd.print(downCount);
    delay(200);
  }
}
