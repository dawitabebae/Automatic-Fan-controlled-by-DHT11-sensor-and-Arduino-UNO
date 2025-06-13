#include <DHT.h>
#include <DHT_U.h>

#include "DHT.h"
#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHT11);
#define fanPin 9
void setup() 
{
pinMode(fanPin, OUTPUT);
dht.begin();
Serial.begin(9600);
}

void loop() 
{
  
    float humidity = dht.readHumidity();
    float temperature = dht.readTemperature();
    if (temperature >= 15 )
      {
        digitalWrite(fanPin, HIGH);
      }
    else
      {
      digitalWrite(fanPin, LOW);
      }
    Serial.print("temperature");
    Serial.print(temperature);
    
}