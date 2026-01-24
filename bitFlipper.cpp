int latchPin=9;
int clockPin=11;
int dataPin=12;
int dt=1000;

byte myByte=0b00001111; 


void setup() {
  Serial.begin(9600);
  pinMode(latchPin,OUTPUT);
  pinMode(dataPin,OUTPUT);
  pinMode(clockPin,OUTPUT);
}

void loop() {
  digitalWrite(latchPin,LOW);
  shiftOut(dataPin,clockPin,LSBFIRST,myByte);
  digitalWrite(latchPin,HIGH);
  Serial.println(myByte,BIN);
  myByte = ~myByte;
  delay(dt);
}
