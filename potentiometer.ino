float potentiometerValue = 0;
float delayValue = 0;

void setup()
{
  pinMode(A5, INPUT);
  pinMode(2, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  potentiometerValue = analogRead(A5);
  delayValue = 100 + (1000 * (potentiometerValue / 1023.0));

  // Turn on LED 1
  digitalWrite(2, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(9, LOW);
  delay(delayValue);
  
  // Turn on LED 2
  digitalWrite(2, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(9, LOW);
  delay(delayValue);

  // Turn on LED 3
  digitalWrite(2, LOW);
  digitalWrite(6, LOW);
  digitalWrite(9, HIGH);
  delay(delayValue);
}

