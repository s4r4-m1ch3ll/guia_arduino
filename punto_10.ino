int greenPin=13;
int bluePin=12;
int redPin=11;
String ledColor;
String msg1="escribe un color de led";
void setup() {
  Serial.begin(115200);
  pinMode(greenPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
  pinMode(redPin,OUTPUT);


}

void loop() {
  ledColor=Serial.readString();
  if (ledColor=="verde"||ledColor=="VERDE"){
    digitalWrite(greenPin,HIGH);
   if (ledColor=="apagar"||ledColor=="apagar")
    digitalWrite(greenPin,LOW);
  }
  if (ledColor=="azul"||ledColor=="AZUL"){
    digitalWrite(bluePin,HIGH);
    digitalWrite(bluePin,LOW);
  }
  if (ledColor=="rojo"||ledColor=="ROJO"){
    digitalWrite(redPin,HIGH);
    digitalWrite(redPin,LOW);
  }
 

}
