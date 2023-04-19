#include <Servo.h>

float duration;
float distance;
float servoAngle = 0;

int signalPin = 3;
int servoPin = 11;

Servo myservo; // Create servo object

void setup() {
  Serial.begin(9600);
  myservo.attach(servoPin); // Attaches the servo on pin 11 to the servo object
}

void loop() {
  pinMode(signalPin, OUTPUT);
  digitalWrite(signalPin, LOW);
  delay(2);
  digitalWrite(signalPin, HIGH);
  delay(5);
  digitalWrite(signalPin, LOW);
  
  pinMode(signalPin, INPUT);
  duration = pulseIn(signalPin, HIGH);
  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.println(distance);
  
  // Map the distance value to servo angles
  servoAngle = map(distance, 0, 300, 0, 180); 
  myservo.write(distance);
 
  delay(100);
}

