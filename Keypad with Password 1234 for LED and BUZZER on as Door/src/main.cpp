#include <Arduino.h>
#include <Keypad.h>

const byte ROWS = 4;
const byte COLS = 4;

char keys[ROWS][COLS] = {
  { '1', '2', '3', 'A' },
  { '4', '5', '6', 'B' },
  { '7', '8', '9', 'C' },
  { '*', '0', '#', 'D' }
};

byte colPins[COLS] = { 5, 4, 3, 2 }; // Pins connected to C1, C2, C3, C4
byte rowPins[ROWS] = { 9, 8, 7, 6 }; // Pins connected to R1, R2, R3, R4

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

String inputText = "";
String password = "12345";

int ledPin = 13;
int buzzerPin = 12;

void setup() {
  Serial.begin(9600);

  pinMode(ledPin,OUTPUT);
  pinMode(buzzerPin,OUTPUT);
}

void loop() {
  char key = keypad.getKey();

  if (key) {   
    if (key=='#') {
      Serial.print("Entered Password ");
      Serial.println(inputText);

      if (inputText == password){
        digitalWrite(ledPin,HIGH);
        tone(buzzerPin,1400);
        Serial.println("password is correct. LED and BUZZER is ON");
      }
      else {
        digitalWrite(ledPin,LOW);
        noTone(buzzerPin);
        Serial.println("password is Wrong");
      }
      inputText="";
    }
    else if (key == '*'){
      inputText="";
      Serial.println("Input Clear");
    }
    else{
      inputText = inputText + key;
    } 
  }
}
