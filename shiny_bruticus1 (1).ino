int buton=2;
int kir=3;
int sari=4;
int yesil=5;
int beyaz=6;
int sayac=0;
void setup()
{
  pinMode(2, INPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
}

void loop()
{
  if(digitalRead(buton)==1)
  {
    sayac=sayac+1;
  }
  
  if(sayac==1)
  {
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
  }
  
  else if(sayac==2)
  { 
    digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  }
  
   else if(sayac==3)
  { 
    digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  }
  
   else if(sayac==4)
  { 
    digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  }
  
  if(sayac==5)
  {
    sayac=0;
  }
  
  delay(200);
  
  }