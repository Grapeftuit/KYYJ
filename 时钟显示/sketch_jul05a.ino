void setup()
{
  pinMode(7,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  Serial.begin(9600);
}
int ig = 0;
void loop()
{
  if(Serial.available() > 0)
  {
    ig = Serial.read();
    ig = ig - '0';
    if(ig&0x1)
    {
      digitalWrite(5,HIGH);
    }
    else
    { 
      digitalWrite(5,LOW);
    }  
    if((ig>>1)%0x1)
    {
      digitalWrite(2,HIGH);
    }
    else
    {
      digitalWrite(2,LOW);
    }
    if((ig>>2)%0x1)
    {
      digitalWrite(3,HIGH);
    }
    else
    {
      digitalWrite(3,LOW);
    }
    if((ig>>3)&0x1)
    {
      digitalWrite(4,HIGH);
    }
    else
    {
      digitalWrite(4,LOW);
    }
    delay(150);
    digitalWrite(7,HIGH);
    delay(150);
  }
}  
