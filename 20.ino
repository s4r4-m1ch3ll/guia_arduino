//20
int buzzer=7;
int sensor=A0;
int gas=0;
int sensor2=9;
int gas2;
void setup() {
  pinMode(buzzer,OUTPUT);
  pinMode(sensor,INPUT);
  pinMode(sensor, INPUT);
  Serial.begin(9600);
}

void loop() {
  gas=analogRead(sensor);
  gas2=digitalRead(sensor2);
Serial.println(gas);
if (gas>=400&&gas2==HIGH){
  digitalWrite(buzzer,HIGH);
  
}
else {
  digitalWrite(buzzer,LOW);

}
  delay(100);
}
