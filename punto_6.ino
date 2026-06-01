void setup() {
  Serial.begin(9600);
}

void loop() {
  int valor = analogRead(A0);
  float voltaje = valor * (5.0 / 1023.0);
  Serial.println(voltaje);
  delay(1000);
}
