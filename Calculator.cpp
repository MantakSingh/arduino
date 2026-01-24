#include <LiquidCrystal.h>
// LCD Set-up
int rs=7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

// Calculator Variables
String firstMsg = "Please enter your first number"
float firstNum;
String
void setup() {
  Serial.begin(9600);
  lcd.begin(16,2);
}

void loop() {
  lcd.setCursor(0,0);
  lcd.print(firstMsg);
  while(Serial.available() == 0){

  }
  firstNum = Serial.parseFloat();
  lcd
}
