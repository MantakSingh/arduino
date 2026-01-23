int latchPin=9;
int clockPin=11;
int dataPin=12;
int dt=500;

void setup() {
  Serial.begin(9600);
  pinMode(latchPin,OUTPUT);
  pinMode(dataPin,OUTPUT);
  pinMode(clockPin,OUTPUT);
}

void loop() {
  for(int i = 0b00000000; i < 0b11111111; i++){
    digitalWrite(latchPin,LOW);
    shiftOut(dataPin,clockPin,MSBFIRST,i);
    digitalWrite(latchPin,HIGH);
    delay(dt);
  }
}
