#include <LiquidCrystal.h>

//
int tempSensorPin = A0;

LiquidCrystal lcd(12, 11, 5, 4, 3, 2); //pins used by screen

void setup()
{
  Serial.begin(9600);

  // initilize the interface to the LCD screen with 16 columns and 2 rows
  lcd.begin(16, 2);

  lcd.print("Room temperature: ");
}

void loop()
{
  int tempSensorValue = analogRead(tempSensorPin);

  // convert reading from temperature sensor to voltage, formula explained in README
  float ratio = tempSensorValue / 1024.0;
  float voltage = ratio * 5.0 - 0.5;

  // calculate room temperature
  float roomTemperature = voltage / 0.01;

  // set screen cursor in the first column, the second row
  lcd.setCursor(0, 1);

  lcd.print(String(roomTemperature) + String((char)223) + "C");

  delay(1000);
}
