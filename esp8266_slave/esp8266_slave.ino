#include<Wire.h>
#define slave_add 9
int led = 16;
int rd;
int br;
int val=0;

void setup() 
{
  //pinMode(led, OUTPUT);
  //Serial.begin(9600);
  //Serial.println("slave demo");
  Wire.begin();
  //Serial.println("wire begin");
  //Wire.onReceive(reciveEvent);
}

/*void reciveEvent()
{
  Serial.println("at recieve event");
  rd = Wire.read();
  Serial.println(rd);
}*/

void loop() 
{
  delay(50);
  val=map(analogRead(0),0,1023,1,255);
  Wire.beginTransmission(slave_add);
  Wire.write(val);
  Wire.endTransmission(); 

  /*br = map(rd,1,255,100,2000);
  Serial.println(br);
  digitalWrite(led,HIGH);
  delay(br);
  digitalWrite(led,LOW);
  delay(br);*/
}
