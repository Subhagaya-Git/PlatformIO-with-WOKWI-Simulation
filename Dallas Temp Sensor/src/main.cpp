#include <Arduino.h>
#include <OneWire.h>
#include <DallasTemperature.h>

// Data wire is connected to pin 2
#define ONE_WIRE_BUS 2

// Setup a oneWire instance to communicate with any OneWire devices
OneWire oneWire(ONE_WIRE_BUS);

// Pass our oneWire reference to Dallas Temperature sensor 
DallasTemperature sensors(&oneWire);

void setup(void) {
  // Start serial communication
  Serial.begin(9600);
  Serial.println("DS18B20 Temperature Sensor");

  // Start up the library
  sensors.begin();
}

void loop(void) {
  // Request temperature measurements from the sensor
  sensors.requestTemperatures();

  // Fetch and print the temperature in Celsius
  float temperatureC = sensors.getTempCByIndex(0);
  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.println(" °C");

  // Fetch and print the temperature in Fahrenheit
  float temperatureF = sensors.getTempFByIndex(0);
  Serial.print("Temperature: ");
  Serial.print(temperatureF);
  Serial.println(" °F");

  // Wait 1 second before repeating
  delay(1000);
}
