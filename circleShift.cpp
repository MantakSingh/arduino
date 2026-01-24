int latchPin=9;
int clockPin=11;
int dataPin=12;
int dt=1000;

unsigned int MSB_holder;
unsigned int MSB_position = 7;
unsigned int mask = 1 << MSB_position;
byte myByte=0b00000001; //Put your binary number here


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
  MSB_holder = (myByte & mask) >> MSB_position;
  myByte = myByte * 2;
  myByte |= MSB_holder;
  delay(dt);
}
