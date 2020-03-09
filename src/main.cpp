#include <Arduino.h>

void setup()
{
  Serial.begin(115200);
  Serial.println("Contoh penggunaan sensor cahaya");
}

void loop()
{
  unsigned int AnalogValue;
  AnalogValue = analogRead(PIN_A0);
  Serial.println(AnalogValue);
  delay(1);
}