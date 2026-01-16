int redPin = 12;
int bluePin = 8;
int greenPin = 5;
int yellowPin = 3;

void setup() {

pinMode(redPin,OUTPUT);
pinMode(bluePin,OUTPUT);
pinMode(greenPin,OUTPUT);
pinMode(yellowPin,OUTPUT);

}



void loop() {

  for (int i = 0; i < 16; i++) {

    digitalWrite(redPin,    i & 1);
    digitalWrite(bluePin,   i & 2);
    digitalWrite(greenPin,  i & 4);
    digitalWrite(yellowPin, i & 8);

    delay(1000);
  }

}

