#include <Servo.h>

Servo miServo;

int ldr = A0;
int valorLuz;

void setup() {
  miServo.attach(9);
  Serial.begin(9600);
}

void loop() {

  valorLuz = analogRead(ldr);

  Serial.println(valorLuz);

  if (valorLuz < 300) {
    miServo.write(0);
  }

  else if (valorLuz >= 300 && valorLuz < 700) {
    miServo.write(90);
  }

  else {
    miServo.write(180);
  }

  delay(500);
}
