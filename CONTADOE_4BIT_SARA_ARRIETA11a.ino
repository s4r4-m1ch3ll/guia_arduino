int L1=13;
int L2=12;
int L3=11;
int L4=10;
void setup() {
 pinMode(L1,OUTPUT);//led 1
 pinMode(L2,OUTPUT);//led 2
 pinMode(L3,OUTPUT);//led 3
 pinMode(L4,OUTPUT);//led 4


}

void loop() {

  digitalWrite(L1,LOW),digitalWrite(L2,LOW),digitalWrite(L3,LOW),digitalWrite(L4,LOW);//0000
  delay(1000);
  digitalWrite(L1,LOW),digitalWrite(L2,LOW),digitalWrite(L3,LOW),digitalWrite(L4,HIGH);//0001
  delay(1000);
  digitalWrite(L1,LOW),digitalWrite(L2,LOW),digitalWrite(L4,LOW),digitalWrite(L3,HIGH);//0010
  delay(1000);
  digitalWrite(L1,LOW),digitalWrite(L2,LOW),digitalWrite(L3,LOW),digitalWrite(L4,HIGH);//0011
  delay(1000);
  digitalWrite(L1,LOW),digitalWrite(L3,LOW),digitalWrite(L4,LOW),digitalWrite(L2,HIGH);//0100
  delay(1000);
  digitalWrite(L1,LOW),digitalWrite(L3,LOW),digitalWrite(L2,HIGH),digitalWrite(L4,HIGH);//0101
  delay(1000);
  digitalWrite(L1,LOW),digitalWrite(L4,LOW),digitalWrite(L2,HIGH),digitalWrite(L3,HIGH);//0110
  delay(1000);
  digitalWrite(L1,LOW),digitalWrite(L2,HIGH),digitalWrite(L3,HIGH),digitalWrite(L4,HIGH);//0111
  delay(1000);
  digitalWrite(L2,LOW),digitalWrite(L3,LOW),digitalWrite(L1,LOW),digitalWrite(L1,HIGH);//1000
  delay(1000);
  digitalWrite(L2,LOW),digitalWrite(L3,LOW),digitalWrite(L1,HIGH),digitalWrite(L4,HIGH);//1001
  delay(1000);
  digitalWrite(L2,LOW),digitalWrite(L4,LOW),digitalWrite(L1,HIGH),digitalWrite(L3,HIGH);//1010
  delay(1000);
  digitalWrite(L2,LOW),digitalWrite(L1,HIGH),digitalWrite(L3,HIGH),digitalWrite(L4,HIGH);//1011
  delay(1000);
  digitalWrite(L3,LOW),digitalWrite(L4,LOW),digitalWrite(L1,HIGH),digitalWrite(L2,HIGH);//1100
  delay(1000);
  digitalWrite(L3,LOW),digitalWrite(L1,HIGH),digitalWrite(L2,HIGH),digitalWrite(L4,HIGH);//1101  
  delay(1000);
  digitalWrite(L4,LOW),digitalWrite(L1,HIGH),digitalWrite(L2,HIGH),digitalWrite(L3,HIGH);//1110
  delay(1000);
  digitalWrite(L1,HIGH),digitalWrite(L2,HIGH),digitalWrite(L3,HIGH),digitalWrite(L4,HIGH);//1111
  delay(1000);

}
