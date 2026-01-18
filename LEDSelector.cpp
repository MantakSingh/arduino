int redPin = 12;
int greenPin = 11;
int bluePin = 10;
String msg = "What color do you want to turn on? \n 1: Red 2: Green 3: Blue ";
int selectedColor;
void setup() {
  Serial.begin(9600);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
}

void loop() {
  Serial.println(msg);
  while(Serial.available() == 0){
    
  }
  selectedColor = Serial.parseInt();
  if(selectedColor == 1){
    digitalWrite(redPin, HIGH);
  }
  if(selectedColor == 2){
    digitalWrite(greenPin, HIGH);
  }
  if(selectedColor == 3){
    digitalWrite(bluePin, HIGH);
  }
  delay(1000);
  // Reset
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,LOW);
}
 
