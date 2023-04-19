float lightIntensity = 0;

void setup()
{
  // Set pin modes
  pinMode(A5, INPUT);
  pinMode(3, OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  // Read from light sensor
  lightIntensity = analogRead(A5);
  Serial.println(lightIntensity);

  // Map light sensor value to LED output
  analogWrite(3, 255.0 - (255.0 * (lightIntensity / 310.0)));

  // Wait 100 milliseconds
  delay(100);
}


