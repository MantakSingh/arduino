int lightPen = A0;
int lightVal;
int dv = 1000;
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
  } else{
    digitalWrite(redPin,HIGH);
  }
  delay(dv);
  digitalWrite(greenPin,LOW);
  digitalWrite(redPin,LOW);
  Serial.println(lightVal);
  delay(dv);
}
