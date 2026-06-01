int greenPin=10;
int bluePin=11;
int redPin=9;
void setup() {
  pinMode(greenPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
  pinMode(redPin,OUTPUT);


}
void loop() {
 //rosa 
 analogWrite(9,255);
 analogWrite(11,197);
 analogWrite(10,211);
 delay(1000);
 //azul
 analogWrite(9,199);
 analogWrite(11,158);
 analogWrite(10,203);
 delay(1000);
 //morado
 analogWrite(9,195);
 analogWrite(11,177);
 analogWrite(10,255);
 delay(1000);
 //verde
 analogWrite(9,176);
 analogWrite(11,242);
 analogWrite(10,194);
 delay(1000);
 //amarillo
 analogWrite(9,253);
 analogWrite(11,253);
 analogWrite(10,150);
 delay(1000);


}
