void setup() {
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  digitalWrite(8, HIGH);
  delay (200);
  digitalWrite(8, LOW);
  delay(100);
  digitalWrite(7, HIGH);
  delay(200);
  digitalWrite(7, LOW);
  delay(100);
}
