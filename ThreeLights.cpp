void setup() {

pinMode (11,OUTPUT); // Red
pinMode (8,OUTPUT);  // Green
pinMode (5,OUTPUT);  // Blue
}

void loop() {

// Red LED
digitalWrite(11,HIGH);
delay(200);
digitalWrite(11,LOW);
delay(200);

// Green LED
digitalWrite(8,HIGH);
delay(100);
digitalWrite(8,LOW);
delay(100);

// Blue LED
digitalWrite(5,HIGH);
delay(67);
digitalWrite(5,LOW);
delay(67);
}
