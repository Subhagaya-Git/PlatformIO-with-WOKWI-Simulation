#include <Arduino.h>

// Joystick analog pins
const int xPin = A1;
const int yPin = A0;

const int LED_TOP = 2;
const int LED_BOTTOM = 3;
const int LED_LEFT = 4;
const int LED_RIGHT = 5;

void setup() {
  pinMode(LED_TOP, OUTPUT);
  pinMode(LED_BOTTOM, OUTPUT);
  pinMode(LED_LEFT, OUTPUT);
  pinMode(LED_RIGHT, OUTPUT);
}

void loop() {
  int xVal = analogRead(xPin); // Read X-axis value
  int yVal = analogRead(yPin); // Read Y-axis value

  // Turn off all LEDs first
  digitalWrite(LED_TOP, LOW);
  digitalWrite(LED_BOTTOM, LOW);
  digitalWrite(LED_LEFT, LOW);
  digitalWrite(LED_RIGHT, LOW);

  // Joystick centered around ~512
  if (xVal < 400) {
    digitalWrite(LED_RIGHT, HIGH);   // Move left
  } else if (xVal > 600) {
    digitalWrite(LED_LEFT, HIGH);  // Move right
  }

  if (yVal < 400) {
    digitalWrite(LED_BOTTOM, HIGH); // Move down
  } else if (yVal > 600) {
    digitalWrite(LED_TOP, HIGH);    // Move up
  }

  delay(100); // Small delay for stability
}
