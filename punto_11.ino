//enclavar
int led=7;
int push=A0;
int ledState=0;
int pushOld=1;
int pushNew;

void setup() {
pinMode(led,OUTPUT);
pinMode(push,INPUT);
Serial.begin(9600);
}

void loop() {
pushNew=analogRead(push);
delay(100);
if(pushNew==0&&pushOld==1){
if(ledState==0){
  digitalWrite(led,HIGH);
  ledState=1;
 
}
else{
  digitalWrite(led,LOW);
  ledState=0;
}
pushOld=pushNew;
}
}
