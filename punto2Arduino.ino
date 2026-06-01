int a=13;
int b=12;
int c=11;
int y=1000;
void setup() {
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
}

void loop() {
  digitalWrite(a,HIGH),digitalWrite(b,HIGH),digitalWrite(c,HIGH);
  delay(y);
}
