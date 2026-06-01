int ledPin =9;
int duration=3000;
int brightnessLevels[] = {0,128,225};

void setup(){
pinMode(ledPin,OUTPUT);
}

void loop(){
for(int i=0; i<3; i++){
int brightness=brightnessLevels[i];
analogWrite(ledPin,brightness);
delay(duration/3); 
}
analogWrite(ledPin,0);
delay(1000);
}
