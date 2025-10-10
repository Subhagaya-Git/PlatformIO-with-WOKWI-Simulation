#include <Arduino.h>
#include <LiquidCrystal_I2C.h>
#define PIN_TRIG 13
#define PIN_ECHO 12

int YELLOW_LED_PIN = 11;
int RED_LED_PIN = 10;
int BUZZER_PIN = 9;

LiquidCrystal_I2C lcd(0x27 , 16 , 2);
void setup() {
    Serial.begin(115200);
    pinMode(PIN_TRIG, OUTPUT);
    pinMode(PIN_ECHO, INPUT);

    lcd.init();
    lcd.backlight();
    lcd.clear();

    pinMode(YELLOW_LED_PIN, OUTPUT);
    pinMode(RED_LED_PIN, OUTPUT);
    pinMode(BUZZER_PIN, OUTPUT);
}
void loop() {
    digitalWrite(PIN_TRIG, HIGH);
    delayMicroseconds(10);
    digitalWrite(PIN_TRIG, LOW);

    int duration = pulseIn(PIN_ECHO, HIGH);
    int cm = duration/58;
    int inch = duration/148;

    Serial.print("Distance in CM: ");
    Serial.println(cm);
    Serial.print("Distance in inches: ");
    Serial.println(inch);
    //LDC display
    lcd.setCursor(0,0);
    lcd.print("Distance:");
    lcd.setCursor(10,0);
    lcd.print(cm);
    lcd.setCursor(14,0);
    lcd.print("cm");
    if ( cm > 10 && cm <=20 ){
        digitalWrite(YELLOW_LED_PIN, HIGH);
        digitalWrite(RED_LED_PIN, LOW);
        noTone(BUZZER_PIN);
        lcd.setCursor(0,1);
        lcd.print("Object Nearby");
    }
    else if ( cm <= 10 ){
        digitalWrite(YELLOW_LED_PIN, LOW);
        digitalWrite(RED_LED_PIN, HIGH);
        tone(BUZZER_PIN,1300);
        lcd.setCursor(0,1);
        lcd.print("Object Very Close");
    }
    else if ( cm > 20 ){
        digitalWrite(YELLOW_LED_PIN, LOW);
        digitalWrite(RED_LED_PIN, LOW);
        noTone(BUZZER_PIN);
        lcd.setCursor(0,1);
        lcd.print("Safe Distance");
    }
        delay(1000);
        lcd.clear();
    }