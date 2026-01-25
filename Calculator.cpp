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
float firstNum;
float secondNum;
char operatorChar;
float answer;

void setup() {
  Serial.begin(9600);
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("Please Enter");
  lcd.setCursor(0,1);
  lcd.print("Your Number..");
}

void loop() {

  // First Number
  while(Serial.available() == 0){
    //Blinking period at the end
    lcd.setCursor(13,1);
    lcd.print(".");
    delay(500);
    lcd.setCursor(13,1);
    lcd.print("  ");
    delay(500);
  }
  firstNum = Serial.parseFloat();

  // Clear Buffer
  while (Serial.available() > 0) {
    Serial.read();
  }

  // Second Number
  lcd.clear();
  while(Serial.available() == 0){
    lcd.setCursor(0,0);
    lcd.print("Please Enter The");
    lcd.setCursor(0,1);
    lcd.print("2nd Number..");
    //Blinking period at the end 
    lcd.setCursor(12,1);
    lcd.print(".");
    delay(500);
    lcd.setCursor(12,1);
    lcd.print("  ");
    delay(500);
  }
  secondNum = Serial.parseFloat();

  // Clear Buffer
  while (Serial.available() > 0) {
    Serial.read();
  }

  //Operator
  lcd.clear();
  while(Serial.available() == 0){
    lcd.setCursor(0,0);
    lcd.print("What Operation?");
    lcd.setCursor(0,1);
    lcd.print(" +   -   *   / ");
  }
  operatorChar = Serial.read();

  // Calculate answer
  if(operatorChar == '+') answer = firstNum + secondNum;
  else if(operatorChar == '-') answer = firstNum - secondNum;
  else if(operatorChar == '*') answer = firstNum * secondNum;
  else if(operatorChar == '/') answer = firstNum / secondNum;

  // Display answer
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Your Answer Is:");
  lcd.setCursor(0,1);
  lcd.print(answer);

  // Stop program
  while(true);

}
