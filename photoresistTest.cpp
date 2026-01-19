int lightPen = A0;
int lightVal;
int dv = 250;

void setup(){
  pinMode(lightPen,INPUT);
  Serial.begin(9600);
}

void loop(){
  lightVal = analogRead(lightPen);
  Serial.println(lightVal);
  delay(dv);
}
