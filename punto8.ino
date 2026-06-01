int potPin = A0;
int ledPin = 8;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int potValue = analogRead(potPin);

  if (potValue > (4 * 1023 / 5)) { 
    digitalWrite(ledPin, HIGH); 
  } else {
    digitalWrite(ledPin, LOW);  
  }

  delay(100);
}
