void setup() {
  pinMode(7, INPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(7) == HIGH)
  {
    Serial.println("Hello World!");
  }
  else
  {
    Serial.println("It's 2023.");
  }
}
