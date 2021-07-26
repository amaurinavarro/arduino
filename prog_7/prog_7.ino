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
bool e(bool i1, bool i2); //cabeçaçho da função
bool ou(bool i1, bool i2); //cabeçaçho da função
bool ne(bool i1, bool i2); //cabeçaçho da função
bool nou(bool i1, bool i2); //cabeçaçho da função
void loop() 
{
 bool e1,e2,s1; 
 e1=digitalRead(chave1);
 e2=digitalRead(chave2);
s1=e(e1,e2);

 digitalWrite(led,s1);
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
