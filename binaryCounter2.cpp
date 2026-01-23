int latchPin=11;
int clockPin=9;
int dataPin=12;
int dt=250;

void setup() {
  Serial.begin(9600);
  pinMode(latchPin,OUTPUT);
  pinMode(dataPin,OUTPUT);
  pinMode(clockPin,OUTPUT);
}

void loop() {
  for(int i = 0; i < 255; i++){
    i = byte(i);
    digitalWrite(latchPin,LOW);
    shiftOut(dataPin,clockPin,LSBFIRST,i);
    digitalWrite(latchPin,HIGH);
    Serial.println(i);
    delay(dt);
  }
}
