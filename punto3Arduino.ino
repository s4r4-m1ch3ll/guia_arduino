int v=13;
int a=12;
int r=11;
int dt=5000;
int x=3000;
int y=6000;
void setup() {
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);

}

void loop() {
  digitalWrite(v,HIGH);
  delay(dt);
  digitalWrite(v,LOW);
  digitalWrite(a,HIGH);
  delay(x);
  digitalWrite(a,LOW);
  digitalWrite(r,HIGH);
  delay(y);
  digitalWrite(r,LOW);
}
