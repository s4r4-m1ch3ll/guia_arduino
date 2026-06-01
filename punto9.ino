int leds[] = {2, 3, 4, 5, 6, 7, 8};
int numLeds = 7;
int delayTime = 700;
int direction = 1;
int currentLed = 0;

void setup() { for (int i = 0; i < numLeds; i++) { 
  pinMode(leds[i], OUTPUT); } }

void loop() {
  digitalWrite(leds[currentLed], HIGH);
  delay(delayTime);
  digitalWrite(leds[currentLed], LOW);
  currentLed += direction;
  if (currentLed >= numLeds - 1 || currentLed <= 0) { direction *= -1; }
}
