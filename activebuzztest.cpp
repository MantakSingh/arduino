int potPin = A1;
int gPin = 6;
int potVal;
void setup() {
  pinMode(potPin,INPUT);
  pinMode(gPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  potVal = analogRead(potPin);

  if(potVal >= 1000){
    digitalWrite(gPin,HIGH);
  } else if(potVal < 1000){
    digitalWrite(gPin,LOW);
  }
  delay(1000);
  Serial.println(potVal);
}
