#include <LiquidCrystal.h>

int tempSensorPin = A0;

LiquidCrystal lcd(12, 11, 5, 4, 3, 2); //pins used by screen

void setup()
{
  Serial.begin(9600);

  lcd.begin(16, 2); 

  lcd.print("Room temperature: ");


}

void loop()
{
  int tempSensorValue = analogRead(tempSensorPin);

  // https://www.arduino.cc/en/uploads/Main/TemperatureSensor.pdf figure 6
  float voltage = (tempSensorValue / 1024.0) * 5.0;
  float temperature = (voltage - 0.5) * 100;
  
  lcd.setCursor(0, 1);

  lcd.print(String(temperature) + String((char)223) +"C");
  
  delay(1000);
}
