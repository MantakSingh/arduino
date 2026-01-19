int lightPen = A0;
int lightVal;
int dv = 200;
int redPin = A4;
int greenPin = A2;

void setup(){
  pinMode(lightPen,INPUT);
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  Serial.begin(9600);
}

void loop(){
  lightVal = analogRead(lightPen);
  if(lightVal >= 20){
    digitalWrite(greenPin,HIGH);
    digitalWrite(redPin,LOW);
  } else{
    digitalWrite(redPin,HIGH);
    digitalWrite(greenPin,LOW);
  }
  delay(dv);
  Serial.println(lightVal);

}
