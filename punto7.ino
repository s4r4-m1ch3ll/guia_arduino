int potPin = A0; 
void setup() {
  Serial.begin(9600);
  Serial.println("Lectura del Potenciómetro");
}

void loop() {
  int potValue = analogRead(potPin); 
  float voltage = (potValue * 5.0) / 1023.0; 

  Serial.print("Valor Analógico: ");
  Serial.print(potValue);
  Serial.print(" | Voltaje: ");
  Serial.print(voltage);
  Serial.println(" V");

  delay(100); 
}
