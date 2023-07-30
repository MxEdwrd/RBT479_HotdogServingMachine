const int MotorDir1 = 3;
const int MotorDir2 = 4;
const int MotorDir3 = 2;
const int MotorStp1 = 5;
const int MotorStp2 = 6;
const int MotorStp3 = 7;

const int ButtonPin = 8;

const int Steps = 800;

int ButtonState = 0;

void setup() {
  pinMode(MotorDir1, OUTPUT);
  pinMode(MotorStp1, OUTPUT);
  
  pinMode(ButtonPin, INPUT_PULLUP);
}

void loop() {
  ButtonState = digitalRead(ButtonPin);
  
  
  
  // Makes 200 pulses for making one full cycle rotation
  // Moves 5 rotations on press
  if (ButtonState == LOW) {
    for(int Steps = 0; Steps <= 800; Steps++) {

      digitalWrite(MotorDir1,HIGH);
      digitalWrite(MotorStp1,HIGH); 
      delayMicroseconds(10000); 
      digitalWrite(MotorStp1,LOW); 
      delayMicroseconds(10000); 
      
    }
    delay(500);
    for(int Steps = 0; Steps <= 800; Steps++) {

      digitalWrite(MotorDir1,LOW);
      digitalWrite(MotorStp1,HIGH); 
      delayMicroseconds(5000); 
      digitalWrite(MotorStp1,LOW); 
      delayMicroseconds(5000); 
    }
  }
 
  /*
   * // For per step control
   if (ButtonState == HIGH) {
    for(int x = 0; x < 1000; x++) {
      digitalWrite(MotorStp1,HIGH); 
      delayMicroseconds(2000); 
      digitalWrite(MotorStp1,LOW); 
      delayMicroseconds(2000); 
    
      digitalWrite(MotorStp2,HIGH); 
      delayMicroseconds(2000); 
      digitalWrite(MotorStp2,LOW); 
      delayMicroseconds(2000); 
    }
  }
   */
}
