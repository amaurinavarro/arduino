#define chave1 10
#define chave2 11
#define led 30

void setup() 
{
    pinMode(chave1,INPUT);
   pinMode(chave2,INPUT);
   pinMode(led,OUTPUT);
   Serial.begin(9600);
}

void loop() 
{
 bool e1,e2,s1; 
 e1=digitalRead(chave1);
 s1=!e1;
  
  //if(e1==1)
 //s1=0;
 //else
 //s1=1;

 digitalWrite(led,s1);

}
