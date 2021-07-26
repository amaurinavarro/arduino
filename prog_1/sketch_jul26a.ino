#define chave 2
#define led 3


void setup() 
{
  // configuraçao do picrocontrolador
  // sera executado uma unica vez

   //configuraçao dos pinos I/O digitais
   //pinMode(2,1);
   //pinMode(chave,1);
   pinMode(chave,INPUT);
   pinMode(chave,OUTPUT);
   Serial.begin(9600);
   
}

void loop() {
  // put your main code here, to run repeatedly:

}
