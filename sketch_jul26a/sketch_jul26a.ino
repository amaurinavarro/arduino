#define chave 22
#define led 23


void setup() 
{
  // configuraçao do picrocontrolador
  // sera executado uma unica vez

   //configuraçao dos pinos I/O digitais
   //pinMode(2,1);
   //pinMode(chave,1);
   pinMode(chave,INPUT);
   pinMode(led,OUTPUT);
   Serial.begin(9600);
   
}

//bool entrada;
//bool saida;
bool entrada,saida;
//variavel global

void loop() 
{
entrada = digitalRead(chave);
 //saida=entrada;
if(entrada==1)
{
  saida=1;
  Serial.println("entrada acionada");
}
else
{
  saida=0;
  Serial.println("entrada desacionada");
}  

digitalWrite(led,saida);
Serial.print("Estado do Led" );
Serial.println(saida);
  
}
