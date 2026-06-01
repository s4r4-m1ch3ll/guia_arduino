int led=10;
int dt=500;
void setup() {
  pinMode(led,OUTPUT);
}

void loop() {
  digitalWrite(led,HIGH);
  delay(dt);
  digitalWrite(led,LOW);
  delay(dt);
}
