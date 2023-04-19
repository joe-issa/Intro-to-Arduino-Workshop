float duration;
float distance;
int signalPin = 3;

void setup() {
  Serial.begin(9600);
}
void loop() {
  // Send a sound signal
  pinMode(signalPin, OUTPUT);
  digitalWrite(signalPin, LOW);
  delay(2);
  digitalWrite(signalPin, HIGH);
  delay(5);
  digitalWrite(signalPin, LOW);
  
  // Receive the sound signal
  pinMode(signalPin, INPUT);
  duration = pulseIn(signalPin, HIGH);

  // Calculate distance by multiplying duration and speed of sound
  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.println(distance);
  delay(100);
}


