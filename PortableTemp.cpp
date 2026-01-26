#include <LiquidCrystal.h>
#include <DHT.h>
#include <DHT_U.h>
#define Type DHT11

// LCD Set-up
int rs=7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

// DHT Set-Up
int sensePin=2;
DHT HT(sensePin,Type);
float humidity;
float tempC;
float tempF;
int setTime=500;
int dt=1000;

void setup() {
  Serial.begin(9600);
  HT.begin();
  delay(setTime);
  lcd.begin(16,2);
  lcd.setCursor(0,0);
}

void loop() {
  humidity=HT.readHumidity();
  tempC=HT.readTemperature();
  tempF=HT.readTemperature(true);
  // Display results
  lcd.setCursor(0,0);
  lcd.print("Humidity:");
  lcd.setCursor(10,0);
  lcd.print(humidity);
  lcd.print("%");
  lcd.setCursor(0,1);
  lcd.print("Temp:");
  lcd.setCursor(6,1);
  lcd.print(tempF);
  lcd.setCursor(12, 1);
  lcd.print("F");
  delay(dt);
}
