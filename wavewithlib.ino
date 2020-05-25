#include <Servo.h>//use arduino Servo Library
Servo myservo;
int pos = 0;
void setup() {
 myservo.attach(9);//servo connect to digital pin 9
 
}

void loop() {
  for (pos = 120; pos <= 180; pos += 1) { // goes from 120 degrees to 180 degrees
    //in steps of 1 degree
    myservo.write(pos);              
    delay(15);                      
  }
  for (pos = 180; pos >= 120; pos -= 1) { // goes from 180 degrees to 120 degrees
    myservo.write(pos);             
    delay(15);                      
  }
}
