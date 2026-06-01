int L1 = 10;
int L2 = 11;
int trig = 9;
int echo = 8;
int TT;
void setup() {
  pinMode(L1, OUTPUT);
  pinMode(L1, OUTPUT);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  TT = pulseIn(echo, HIGH);
  delay(25);
  digitalWrite(trig, LOW);
  Serial.println(TT);
  if (TT >= 10000) {
    digitalWrite(L1, HIGH);
    delay(1000);
    digitalWrite(L2, HIGH);
    delay(1000);
  }

  if (TT <= 5000) {
    digitalWrite(L1, HIGH);
    delay(1000);
    digitalWrite(L2, LOW);
    delay(1000);
  }
  if (TT >= 5000) {
    digitalWrite(L1, LOW);
    delay(1000);
    digitalWrite(L2, HIGH);
    delay(1000);
  }
  else {
    digitalWrite(L1, LOW);
    delay(1000);
    digitalWrite(L2, LOW);
    delay(1000);
  }
}
