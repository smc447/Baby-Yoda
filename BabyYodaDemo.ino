#include <Servo.h>
//have four servos for baby yoda, 2 per arm
Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;

int pos = 0;
void setup() {
  // setup servo
 myservo1.attach(8);//left shoulder servo
 myservo2.attach(9);//left elbow servo
 myservo3.attach(10);//right shoulder servo
 myservo4.attach(11);//right elbow servo
}

void loop() {
  
  for (pos = 120; pos >= 10; pos -= 1) { //moves left arm up
    // wierd angles because the arm was attached incorrectly to elbow servo
    myservo1.write(pos);              
    delay(20);                       
  }
  //wave left hand
  for (pos = 170; pos >= 110; pos -= 1) { 
    myservo2.write(pos);             
    delay(20);                      
  }
  for (pos = 110; pos <= 170; pos += 1) { 
    myservo2.write(pos);              
    delay(15);                       
  }
  
  for (pos = 10; pos <= 170; pos += 1) { //moves right arm up
    myservo3.write(pos);              
    delay(15);                     
  }
  //wave right hand 
  for (pos = 170; pos >= 110; pos -= 1) { 
    myservo4.write(pos);             
    delay(20);                      
  }
  for (pos = 110; pos <= 170; pos += 1) { 
    myservo4.write(pos);              
    delay(15);                       
  }
 
  for (pos = 10; pos <= 120; pos += 1) { //move left arm down
     // wierd angles because the arm was attached incorrectly to elbow servo
    myservo1.write(pos);              
    delay(15);                       
  }
  for (pos = 170; pos >= 10; pos -= 1) { //move right arn down
    myservo3.write(pos);              
    delay(15);                       
  }
  
}
