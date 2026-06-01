//ultrasonido
int trig=12;
int echo=11;
int TravelTime;
int led=10;

void setup() {
serial.begin(9660)
pinMode(trig,OUTPUT);
pinMode(echo,INPUT);
Serial.begin(9600);
}

void loop() {
digitalWrite(trig,HIGH);
delayMicroseconds(10);
TravelTime=pulseIn(echo,HIGH);
delay(25);
digitalWrite(trig,LOW);
Serial.println(TravelTime);
if(TravelTime>=16000){
  digitalWrite(led,HIGH);
}
if(TravelTime<=16000){
  digitalWrite(led,LOW);
}
}
