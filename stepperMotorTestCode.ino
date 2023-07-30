// defines pins numbers
const int stepPin = 3; 
const int dirPin = 4; 
const int stepsPerRevolution = 200;
 
void setup() {
  // Sets the two pins as Outputs
  pinMode(stepPin,OUTPUT); 
  pinMode(dirPin,OUTPUT);
}
void loop() {
  digitalWrite(dirPin,HIGH);
  for(int x = 0; x < stepsPerRevolution; x++) {
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(2000); 
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(2000); 
  }
  delay(200);
  
  digitalWrite(dirPin,LOW);
  for(int x = 0; x < stepsPerRevolution; x++) {
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(3000); 
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(3000); 
  }
  delay(200);

  digitalWrite(dirPin,HIGH);
  for(int x = 0; x < stepsPerRevolution; x++) {
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(2000); 
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(2000); 
  }
  delay(200);

  digitalWrite(dirPin,LOW);
  for(int x = 0; x < stepsPerRevolution; x++) {
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(2500); 
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(2500); 
  }
  delay(200);
}
