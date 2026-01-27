#include <IRremote.hpp>
/* 
  1 = BA45FF00
  2 = B946FF00
  3 = B847FF00
  4 = BB44FF00
*/
int IRpin = 2;
int redPin = 9;
int bluePin = 10;
int greenPin = 11;
int yellowPin = 12;
String myCom;
int dt = 500;
void setup() {
  Serial.begin(9600);
  IrReceiver.begin(IRpin, ENABLE_LED_FEEDBACK);
  pinMode(redPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(yellowPin,OUTPUT);
}

void loop() {
  if (IrReceiver.decode()) {

    Serial.println(IrReceiver.decodedIRData.decodedRawData, HEX);
    int IR_button = IrReciever.decodedIRData.decodedRawData;
    switch(IR_button){
      case BA45FF00:
        digitalWrite(redPin,HIGH);
        delay
    }
    if (IrReceiver.decodedIRData.decodedRawData == 0xFF6897) {
      myCom = "zero";
      Serial.println(myCom);
    }

    if (IrReceiver.decodedIRData.decodedRawData == 0xFFA25D) {
      myCom = "pwr";
      Serial.println(myCom);
    }

    IrReceiver.resume(); // ready for next value
    delay(1500);
  }
  digitalWrite(redPin,HIGH);
  digitalWrite(bluePin,HIGH);
  digitalWrite(greenPin,HIGH);
  digitalWrite(yellowPin,HIGH);

}
