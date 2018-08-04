int smokeA0 = A0;
// Your threshold value
int sensorThres = 100;

void setup() {
  pinMode(smokeA0, INPUT);
  Serial.begin(9600);
}

void loop() {
  int analogSensor = analogRead(smokeA0);

  Serial.print("Pin A0: ");
  Serial.print(analogSensor);
  // Checks if it has reached the threshold value
  if (analogSensor > sensorThres)
  {
    Serial.println("    Hazard! Gases detected.");
  }
  else
  {
    Serial.println("    It's all safe!");
  }
  delay(200);
}
