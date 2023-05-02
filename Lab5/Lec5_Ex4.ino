void setup() {
  Serial.begin(9600);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
//THIS MAKES 9
digitalWrite(6, LOW);
digitalWrite(7, LOW);
digitalWrite(8, HIGH);
digitalWrite(9, HIGH);
digitalWrite(10, LOW);
digitalWrite(11, LOW);
digitalWrite(12, LOW);
digitalWrite(13, LOW);
delay(1500);
// this is making 8
digitalWrite(6, LOW);
digitalWrite(7, LOW);
digitalWrite(8, LOW);
digitalWrite(9, LOW);
digitalWrite(10, LOW);
digitalWrite(11, LOW);
digitalWrite(12, LOW);
digitalWrite(13, LOW);
delay(1500);
// THIS MAKES 7
digitalWrite(8, HIGH);
digitalWrite(9, HIGH);
digitalWrite(12, HIGH);
digitalWrite(13, HIGH);
delay(1500);
// THIS MAKES 6
digitalWrite(6, LOW);
digitalWrite(7, LOW);
digitalWrite(8, LOW);
digitalWrite(9, LOW);
digitalWrite(10, HIGH);
digitalWrite(11, LOW);
digitalWrite(12, LOW);
digitalWrite(13, LOW);
delay(1500);
//THIS MAKES 5
digitalWrite(9, HIGH);
delay(1500);
// THIS MAKES 4
digitalWrite(10, LOW);
digitalWrite(8, HIGH);
digitalWrite(11, HIGH);
delay(1500);
//THIS MAKES 3
digitalWrite(6, LOW);
digitalWrite(7, LOW);
digitalWrite(8, LOW);
digitalWrite(9, HIGH);
digitalWrite(11, LOW);
digitalWrite(12, HIGH);
digitalWrite(13, LOW);
delay(1500);
//THIS MAKES 2
digitalWrite(7, HIGH);
digitalWrite(9, LOW);
delay(1500);
//THIS MAKES 1
digitalWrite(7, LOW);
digitalWrite(8, HIGH);
digitalWrite(9, HIGH);
digitalWrite(11, HIGH);
digitalWrite(12, HIGH);
digitalWrite(13, HIGH);
digitalWrite(10, LOW);
delay(1500);
//THIS MAKES ZERO
digitalWrite(6, LOW);
digitalWrite(7, LOW);
digitalWrite(8, LOW);
digitalWrite(9, LOW);
digitalWrite(10, LOW);
digitalWrite(11, LOW);
digitalWrite(12, LOW);
digitalWrite(13, HIGH);
delay(1500);
}
