#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();
  lcd.backlight();
  dht.begin();
}

void loop() {

  float h = dht.readHumidity();
  float t = dht.readTemperature();

  lcd.setCursor(0, 0);
  lcd.print("DHT Sensor");
  lcd.setCursor(0, 1);
  lcd.print("T:");
  lcd.print(t);
  lcd.print("C H:");
  lcd.print(h);
  lcd.print("%");

  delay(2000);
}
