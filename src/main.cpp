#include <Arduino.h>

void setup()
{
  Serial.begin(115200);
}

void loop()
{
  unsigned int AnalogValue;
  AnalogValue = analogRead(PIN_A0);
  Serial.println(AnalogValue);
  delayMicroseconds(10);
}