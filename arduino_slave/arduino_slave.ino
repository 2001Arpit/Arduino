#include<Wire.h>
#define slave_add 8
//int val=0;
int led = 10;
int rd;
int br;
void setup()
{
  pinMode(led, OUTPUT);
  Serial.begin(9600);
  Serial.println("slave demo");
  Wire.begin(slave_add);
  Serial.println("wire begin");
  Wire.onReceive(reciveEvent);
}
void reciveEvent(int count)
{
  Serial.println("at recieve event");
  while(Wire.available())
  {
    char c = Wire.read();
    Serial.print(c);
  }
}

void loop() 
{
 delay(50);
 /*val=map(analogRead(0),0,1023,1,255);
 Wire.beginTransmission(slave_add);
 Wire.write(val);
 Wire.endTransmission(); 
 */
  /*br = map(rd,1,255,100,2000);
  br = rd;
  Serial.println(br);
  digitalWrite(led,HIGH);
  delay(br);
  digitalWrite(led,LOW);
  delay(br);*/
}
