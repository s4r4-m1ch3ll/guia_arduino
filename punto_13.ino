int enablePin = 9;
int in1 = 8;
int in2 = 7;

void setup() {
  pinMode(enablePin, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);

  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
}

void loop() {

  analogWrite(enablePin, 80);
  delay(2000);

  analogWrite(enablePin, 150);
  delay(2000);

  analogWrite(enablePin, 255);
  delay(2000);
}
