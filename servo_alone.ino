#include <Servo.h>

// Create servo object
Servo myservo; 

void setup() {
  // Attaches the servo on pin 9 to the servo object
  myservo.attach(9); 
}

void loop() {
  // Specify angle to rotate to
  myservo.write(0);
  delay(1500);
  myservo.write(180);
  delay(1500);
  myservo.write(90);
  delay(1500);
  myservo.write(180);
  delay(1500);
}

