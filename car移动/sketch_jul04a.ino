void setup()
{
  pinMode(5 ,OUTPUT);
  pinMode(6 ,OUTPUT);
  pinMode(9 ,OUTPUT);
  pinMode(10 ,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  Serial.begin(9600);
}
int income = 0;
void loop()
{
  if(Serial.available()>0)
  {
    income = Serial.read();
    switch(income)
    {
      case'f':
           forward();
           break;
      case'b':
           backward();
           break;
      case'l':
          left();
          ledl();
          break;
      case'r':
          right();
          ledr();
          break;
      case'S':
          stop();
          break;
      defaut:
          break;
    }
  }   
    
}
void forward()
{
   digitalWrite(5,HIGH);
   digitalWrite(6,LOW);
   digitalWrite(9,LOW);
   digitalWrite(10,HIGH);
} 
  void backward()
{
   digitalWrite(5,LOW);
   digitalWrite(6,HIGH);
   digitalWrite(9,LOW);
   digitalWrite(10,HIGH);
} 
  void left()
{
   digitalWrite(5,HIGH);
   digitalWrite(6,LOW);
   digitalWrite(9,HIGH);
   digitalWrite(10,LOW);
} 
  void right()
{
   digitalWrite(5,LOW);
   digitalWrite(6,HIGH);
   digitalWrite(9,HIGH);
   digitalWrite(10,LOW);
} 
void stop()
{
   digitalWrite(5,HIGH);
   digitalWrite(6,HIGH);
   digitalWrite(9,HIGH);
   digitalWrite(10,HIGH);
} 
void ledl()
{
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
}
void ledr()
{
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
}
