#define chave1 10
#define chave2 11
#define led 30
#define led2 31
#define led3 32
#define led4 33
void setup() 
{
    pinMode(chave1,INPUT);
   pinMode(chave2,INPUT);
   pinMode(led,OUTPUT);
   pinMode(led2,OUTPUT);
   pinMode(led3,OUTPUT);
   pinMode(led4,OUTPUT);
   
   Serial.begin(9600);
}
bool e(bool i1, bool i2); //cabeçaçho da função
bool ou(bool i1, bool i2); //cabeçaçho da função
bool ne(bool i1, bool i2); //cabeçaçho da função
bool nou(bool i1, bool i2); //cabeçaçho da função
void loop() 
{
 bool e1,e2,s1,s2,s3,s4; 
 e1=digitalRead(chave1);
 e2=digitalRead(chave2);

s1=e(e1,e2);
s2=ou(e1,e2);
s3=ne(e1,e2);
s4=nou(e1,e2);

 digitalWrite(led,s1);
 digitalWrite(led2,s2);
 digitalWrite(led3,s3);
 digitalWrite(led4,s4);
}
bool e(bool i1, bool i2)
{
bool o1;
// logica and
if(i1&&i2==1)
o1=1;
else
o1=0;
return o1;
}

bool ou(bool i1, bool i2)
{
bool o1;
// logica or
if(i1||i2==1)
o1=1;
else
o1=0;
return o1;
}

bool ne(bool i1, bool i2)
{
bool o1;
// logica Nand
if(!(i1&&i2)==1)
o1=1;
else
o1=0;
return o1;
}

bool nou(bool i1, bool i2)
{
bool o1;
// logica NOR
if(!(i1&&i2)==1)
o1=1;
else
o1=0;
return o1;
}
